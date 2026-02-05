#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_68, _68_0000) {
    const struct CPU_State initial_cpu = {.pc=0x605d, .a=0xb9, .x=0x46, .y=0xbe, .sp=0xb8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x605d, .value=0x68}, {.addr=0x605e, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x605f, .a=0xb9, .x=0x46, .y=0xbe, .sp=0xb8, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x605d, .value=0x68}, {.addr=0x605e, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x605d, .value=0x68, .type=IO_READ},
        {.addr=0x605e, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0001) {
    const struct CPU_State initial_cpu = {.pc=0x071c, .a=0xdd, .x=0x76, .y=0xd3, .sp=0x4e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x071c, .value=0x68}, {.addr=0x071d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x071e, .a=0xdd, .x=0x76, .y=0xd3, .sp=0x4e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x071c, .value=0x68}, {.addr=0x071d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x071c, .value=0x68, .type=IO_READ},
        {.addr=0x071d, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0002) {
    const struct CPU_State initial_cpu = {.pc=0xc2c8, .a=0x3d, .x=0x6e, .y=0xe0, .sp=0x67, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xc2c8, .value=0x68}, {.addr=0xc2c9, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xc2ca, .a=0x3d, .x=0x6e, .y=0xe0, .sp=0x67, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xc2c8, .value=0x68}, {.addr=0xc2c9, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xc2c8, .value=0x68, .type=IO_READ},
        {.addr=0xc2c9, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0003) {
    const struct CPU_State initial_cpu = {.pc=0xc6f9, .a=0x50, .x=0xe7, .y=0x59, .sp=0x00, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xc6f9, .value=0x68}, {.addr=0xc6fa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc6fb, .a=0x50, .x=0xe7, .y=0x59, .sp=0x00, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc6f9, .value=0x68}, {.addr=0xc6fa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc6f9, .value=0x68, .type=IO_READ},
        {.addr=0xc6fa, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0004) {
    const struct CPU_State initial_cpu = {.pc=0x70ba, .a=0x48, .x=0xda, .y=0x72, .sp=0x46, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x70ba, .value=0x68}, {.addr=0x70bb, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x70bc, .a=0x48, .x=0xda, .y=0x72, .sp=0x46, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x70ba, .value=0x68}, {.addr=0x70bb, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x70ba, .value=0x68, .type=IO_READ},
        {.addr=0x70bb, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0005) {
    const struct CPU_State initial_cpu = {.pc=0xa627, .a=0x10, .x=0x63, .y=0x12, .sp=0x8a, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa627, .value=0x68}, {.addr=0xa628, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xa629, .a=0x10, .x=0x63, .y=0x12, .sp=0x8a, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa627, .value=0x68}, {.addr=0xa628, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xa627, .value=0x68, .type=IO_READ},
        {.addr=0xa628, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0006) {
    const struct CPU_State initial_cpu = {.pc=0x204c, .a=0x70, .x=0xdd, .y=0x72, .sp=0x1d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x204c, .value=0x68}, {.addr=0x204d, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x204e, .a=0x70, .x=0xdd, .y=0x72, .sp=0x1d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x204c, .value=0x68}, {.addr=0x204d, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x204c, .value=0x68, .type=IO_READ},
        {.addr=0x204d, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0007) {
    const struct CPU_State initial_cpu = {.pc=0x6f72, .a=0xfa, .x=0xe1, .y=0xb4, .sp=0xb1, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6f72, .value=0x68}, {.addr=0x6f73, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x6f74, .a=0xfa, .x=0xe1, .y=0xb4, .sp=0xb1, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6f72, .value=0x68}, {.addr=0x6f73, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x6f72, .value=0x68, .type=IO_READ},
        {.addr=0x6f73, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0008) {
    const struct CPU_State initial_cpu = {.pc=0xfc1e, .a=0xc1, .x=0x24, .y=0xe5, .sp=0x2c, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfc1e, .value=0x68}, {.addr=0xfc1f, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xfc20, .a=0xc1, .x=0x24, .y=0xe5, .sp=0x2c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xfc1e, .value=0x68}, {.addr=0xfc1f, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xfc1e, .value=0x68, .type=IO_READ},
        {.addr=0xfc1f, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0009) {
    const struct CPU_State initial_cpu = {.pc=0x3dde, .a=0xe5, .x=0xcf, .y=0xac, .sp=0x37, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x3dde, .value=0x68}, {.addr=0x3ddf, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3de0, .a=0xe5, .x=0xcf, .y=0xac, .sp=0x37, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3dde, .value=0x68}, {.addr=0x3ddf, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3dde, .value=0x68, .type=IO_READ},
        {.addr=0x3ddf, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_000A) {
    const struct CPU_State initial_cpu = {.pc=0x429b, .a=0x42, .x=0x28, .y=0xc6, .sp=0xee, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x429b, .value=0x68}, {.addr=0x429c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x429d, .a=0x42, .x=0x28, .y=0xc6, .sp=0xee, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x429b, .value=0x68}, {.addr=0x429c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x429b, .value=0x68, .type=IO_READ},
        {.addr=0x429c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_000B) {
    const struct CPU_State initial_cpu = {.pc=0xe4fc, .a=0x6b, .x=0x78, .y=0xc8, .sp=0xc5, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xe4fc, .value=0x68}, {.addr=0xe4fd, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xe4fe, .a=0x6b, .x=0x78, .y=0xc8, .sp=0xc5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe4fc, .value=0x68}, {.addr=0xe4fd, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xe4fc, .value=0x68, .type=IO_READ},
        {.addr=0xe4fd, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_000C) {
    const struct CPU_State initial_cpu = {.pc=0x966e, .a=0x7d, .x=0xe8, .y=0x0e, .sp=0x6d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x966e, .value=0x68}, {.addr=0x966f, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x9670, .a=0x7d, .x=0xe8, .y=0x0e, .sp=0x6d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x966e, .value=0x68}, {.addr=0x966f, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x966e, .value=0x68, .type=IO_READ},
        {.addr=0x966f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_000D) {
    const struct CPU_State initial_cpu = {.pc=0x45ce, .a=0xe9, .x=0x71, .y=0x8e, .sp=0x27, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x45ce, .value=0x68}, {.addr=0x45cf, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x45d0, .a=0xe9, .x=0x71, .y=0x8e, .sp=0x27, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x45ce, .value=0x68}, {.addr=0x45cf, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x45ce, .value=0x68, .type=IO_READ},
        {.addr=0x45cf, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_000E) {
    const struct CPU_State initial_cpu = {.pc=0x088a, .a=0x62, .x=0xd2, .y=0x12, .sp=0x0e, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x088a, .value=0x68}, {.addr=0x088b, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x088c, .a=0x62, .x=0xd2, .y=0x12, .sp=0x0e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x088a, .value=0x68}, {.addr=0x088b, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x088a, .value=0x68, .type=IO_READ},
        {.addr=0x088b, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_000F) {
    const struct CPU_State initial_cpu = {.pc=0x3f7b, .a=0x66, .x=0x3b, .y=0xa1, .sp=0xce, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x3f7b, .value=0x68}, {.addr=0x3f7c, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x3f7d, .a=0x66, .x=0x3b, .y=0xa1, .sp=0xce, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3f7b, .value=0x68}, {.addr=0x3f7c, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x3f7b, .value=0x68, .type=IO_READ},
        {.addr=0x3f7c, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0010) {
    const struct CPU_State initial_cpu = {.pc=0x9970, .a=0x6d, .x=0xab, .y=0xb8, .sp=0xa6, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x9970, .value=0x68}, {.addr=0x9971, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x9972, .a=0x6d, .x=0xab, .y=0xb8, .sp=0xa6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x9970, .value=0x68}, {.addr=0x9971, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x9970, .value=0x68, .type=IO_READ},
        {.addr=0x9971, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0011) {
    const struct CPU_State initial_cpu = {.pc=0x4f4d, .a=0x9c, .x=0x53, .y=0x67, .sp=0x75, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x4f4d, .value=0x68}, {.addr=0x4f4e, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x4f4f, .a=0x9c, .x=0x53, .y=0x67, .sp=0x75, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4f4d, .value=0x68}, {.addr=0x4f4e, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x4f4d, .value=0x68, .type=IO_READ},
        {.addr=0x4f4e, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0012) {
    const struct CPU_State initial_cpu = {.pc=0x9a1b, .a=0xba, .x=0xcb, .y=0x0d, .sp=0x33, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x9a1b, .value=0x68}, {.addr=0x9a1c, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x9a1d, .a=0xba, .x=0xcb, .y=0x0d, .sp=0x33, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9a1b, .value=0x68}, {.addr=0x9a1c, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x9a1b, .value=0x68, .type=IO_READ},
        {.addr=0x9a1c, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0013) {
    const struct CPU_State initial_cpu = {.pc=0xf6bb, .a=0xdc, .x=0xa6, .y=0x74, .sp=0xa6, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xf6bb, .value=0x68}, {.addr=0xf6bc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xf6bd, .a=0xdc, .x=0xa6, .y=0x74, .sp=0xa6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf6bb, .value=0x68}, {.addr=0xf6bc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xf6bb, .value=0x68, .type=IO_READ},
        {.addr=0xf6bc, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0014) {
    const struct CPU_State initial_cpu = {.pc=0xc4fa, .a=0x73, .x=0x96, .y=0x97, .sp=0x13, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xc4fa, .value=0x68}, {.addr=0xc4fb, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xc4fc, .a=0x73, .x=0x96, .y=0x97, .sp=0x13, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc4fa, .value=0x68}, {.addr=0xc4fb, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xc4fa, .value=0x68, .type=IO_READ},
        {.addr=0xc4fb, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0015) {
    const struct CPU_State initial_cpu = {.pc=0xd285, .a=0xdb, .x=0x72, .y=0x9e, .sp=0x64, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xd285, .value=0x68}, {.addr=0xd286, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xd287, .a=0xdb, .x=0x72, .y=0x9e, .sp=0x64, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd285, .value=0x68}, {.addr=0xd286, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xd285, .value=0x68, .type=IO_READ},
        {.addr=0xd286, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0016) {
    const struct CPU_State initial_cpu = {.pc=0x9343, .a=0x63, .x=0x60, .y=0x5c, .sp=0x13, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9343, .value=0x68}, {.addr=0x9344, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9345, .a=0x63, .x=0x60, .y=0x5c, .sp=0x13, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9343, .value=0x68}, {.addr=0x9344, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9343, .value=0x68, .type=IO_READ},
        {.addr=0x9344, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0017) {
    const struct CPU_State initial_cpu = {.pc=0x6529, .a=0xb3, .x=0x2b, .y=0xea, .sp=0x21, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x6529, .value=0x68}, {.addr=0x652a, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x652b, .a=0xb3, .x=0x2b, .y=0xea, .sp=0x21, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6529, .value=0x68}, {.addr=0x652a, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x6529, .value=0x68, .type=IO_READ},
        {.addr=0x652a, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0018) {
    const struct CPU_State initial_cpu = {.pc=0x6fa4, .a=0x88, .x=0x29, .y=0xda, .sp=0x47, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x6fa4, .value=0x68}, {.addr=0x6fa5, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x6fa6, .a=0x88, .x=0x29, .y=0xda, .sp=0x47, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6fa4, .value=0x68}, {.addr=0x6fa5, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x6fa4, .value=0x68, .type=IO_READ},
        {.addr=0x6fa5, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0019) {
    const struct CPU_State initial_cpu = {.pc=0xe538, .a=0xa2, .x=0x9f, .y=0x07, .sp=0xf7, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xe538, .value=0x68}, {.addr=0xe539, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xe53a, .a=0xa2, .x=0x9f, .y=0x07, .sp=0xf7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe538, .value=0x68}, {.addr=0xe539, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xe538, .value=0x68, .type=IO_READ},
        {.addr=0xe539, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_001A) {
    const struct CPU_State initial_cpu = {.pc=0x22bb, .a=0xd5, .x=0x4c, .y=0x6b, .sp=0xcb, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x22bb, .value=0x68}, {.addr=0x22bc, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x22bd, .a=0xd5, .x=0x4c, .y=0x6b, .sp=0xcb, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x22bb, .value=0x68}, {.addr=0x22bc, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x22bb, .value=0x68, .type=IO_READ},
        {.addr=0x22bc, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_001B) {
    const struct CPU_State initial_cpu = {.pc=0x3f21, .a=0x50, .x=0x54, .y=0xaa, .sp=0x48, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x3f21, .value=0x68}, {.addr=0x3f22, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x3f23, .a=0x50, .x=0x54, .y=0xaa, .sp=0x48, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3f21, .value=0x68}, {.addr=0x3f22, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x3f21, .value=0x68, .type=IO_READ},
        {.addr=0x3f22, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_001C) {
    const struct CPU_State initial_cpu = {.pc=0x3673, .a=0xaa, .x=0xb0, .y=0x16, .sp=0x81, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x3673, .value=0x68}, {.addr=0x3674, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x3675, .a=0xaa, .x=0xb0, .y=0x16, .sp=0x81, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3673, .value=0x68}, {.addr=0x3674, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x3673, .value=0x68, .type=IO_READ},
        {.addr=0x3674, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_001D) {
    const struct CPU_State initial_cpu = {.pc=0x3522, .a=0xc8, .x=0x35, .y=0xfd, .sp=0x59, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x3522, .value=0x68}, {.addr=0x3523, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3524, .a=0xc8, .x=0x35, .y=0xfd, .sp=0x59, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3522, .value=0x68}, {.addr=0x3523, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3522, .value=0x68, .type=IO_READ},
        {.addr=0x3523, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_001E) {
    const struct CPU_State initial_cpu = {.pc=0x8dd5, .a=0x3b, .x=0x5f, .y=0x3f, .sp=0x27, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd5, .value=0x68}, {.addr=0x8dd6, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x8dd7, .a=0x3b, .x=0x5f, .y=0x3f, .sp=0x27, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8dd5, .value=0x68}, {.addr=0x8dd6, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x8dd5, .value=0x68, .type=IO_READ},
        {.addr=0x8dd6, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_001F) {
    const struct CPU_State initial_cpu = {.pc=0xc4aa, .a=0x57, .x=0xf4, .y=0xdf, .sp=0xd7, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xc4aa, .value=0x68}, {.addr=0xc4ab, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xc4ac, .a=0x57, .x=0xf4, .y=0xdf, .sp=0xd7, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc4aa, .value=0x68}, {.addr=0xc4ab, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xc4aa, .value=0x68, .type=IO_READ},
        {.addr=0xc4ab, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0020) {
    const struct CPU_State initial_cpu = {.pc=0x5640, .a=0x55, .x=0xf6, .y=0x48, .sp=0x29, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x5640, .value=0x68}, {.addr=0x5641, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x5642, .a=0x55, .x=0xf6, .y=0x48, .sp=0x29, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5640, .value=0x68}, {.addr=0x5641, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x5640, .value=0x68, .type=IO_READ},
        {.addr=0x5641, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0021) {
    const struct CPU_State initial_cpu = {.pc=0x0725, .a=0x44, .x=0xe5, .y=0xb2, .sp=0xcb, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0725, .value=0x68}, {.addr=0x0726, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x0727, .a=0x44, .x=0xe5, .y=0xb2, .sp=0xcb, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0725, .value=0x68}, {.addr=0x0726, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x0725, .value=0x68, .type=IO_READ},
        {.addr=0x0726, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0022) {
    const struct CPU_State initial_cpu = {.pc=0xfce7, .a=0xb3, .x=0x9b, .y=0xc9, .sp=0x7e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xfce7, .value=0x68}, {.addr=0xfce8, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xfce9, .a=0xb3, .x=0x9b, .y=0xc9, .sp=0x7e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xfce7, .value=0x68}, {.addr=0xfce8, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xfce7, .value=0x68, .type=IO_READ},
        {.addr=0xfce8, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0023) {
    const struct CPU_State initial_cpu = {.pc=0x5c9c, .a=0xeb, .x=0xe0, .y=0xae, .sp=0xda, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x5c9c, .value=0x68}, {.addr=0x5c9d, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x5c9e, .a=0xeb, .x=0xe0, .y=0xae, .sp=0xda, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5c9c, .value=0x68}, {.addr=0x5c9d, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x5c9c, .value=0x68, .type=IO_READ},
        {.addr=0x5c9d, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0024) {
    const struct CPU_State initial_cpu = {.pc=0xa028, .a=0x75, .x=0x3a, .y=0xa1, .sp=0x87, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa028, .value=0x68}, {.addr=0xa029, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa02a, .a=0x75, .x=0x3a, .y=0xa1, .sp=0x87, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa028, .value=0x68}, {.addr=0xa029, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa028, .value=0x68, .type=IO_READ},
        {.addr=0xa029, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0025) {
    const struct CPU_State initial_cpu = {.pc=0x4727, .a=0xf4, .x=0xe5, .y=0xe4, .sp=0x69, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x4727, .value=0x68}, {.addr=0x4728, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x4729, .a=0xf4, .x=0xe5, .y=0xe4, .sp=0x69, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4727, .value=0x68}, {.addr=0x4728, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x4727, .value=0x68, .type=IO_READ},
        {.addr=0x4728, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0026) {
    const struct CPU_State initial_cpu = {.pc=0xea50, .a=0xe7, .x=0xe4, .y=0x06, .sp=0x7a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xea50, .value=0x68}, {.addr=0xea51, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xea52, .a=0xe7, .x=0xe4, .y=0x06, .sp=0x7a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xea50, .value=0x68}, {.addr=0xea51, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xea50, .value=0x68, .type=IO_READ},
        {.addr=0xea51, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0027) {
    const struct CPU_State initial_cpu = {.pc=0x918d, .a=0x85, .x=0x7c, .y=0x73, .sp=0xf6, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x918d, .value=0x68}, {.addr=0x918e, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x918f, .a=0x85, .x=0x7c, .y=0x73, .sp=0xf6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x918d, .value=0x68}, {.addr=0x918e, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x918d, .value=0x68, .type=IO_READ},
        {.addr=0x918e, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0028) {
    const struct CPU_State initial_cpu = {.pc=0xb4ed, .a=0xd7, .x=0xfd, .y=0x22, .sp=0x50, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ed, .value=0x68}, {.addr=0xb4ee, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xb4ef, .a=0xd7, .x=0xfd, .y=0x22, .sp=0x50, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb4ed, .value=0x68}, {.addr=0xb4ee, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xb4ed, .value=0x68, .type=IO_READ},
        {.addr=0xb4ee, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0029) {
    const struct CPU_State initial_cpu = {.pc=0xd22d, .a=0x34, .x=0x83, .y=0xca, .sp=0x79, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xd22d, .value=0x68}, {.addr=0xd22e, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xd22f, .a=0x34, .x=0x83, .y=0xca, .sp=0x79, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd22d, .value=0x68}, {.addr=0xd22e, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xd22d, .value=0x68, .type=IO_READ},
        {.addr=0xd22e, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_002A) {
    const struct CPU_State initial_cpu = {.pc=0x76d5, .a=0x03, .x=0x9a, .y=0xcd, .sp=0xbc, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x76d5, .value=0x68}, {.addr=0x76d6, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x76d7, .a=0x03, .x=0x9a, .y=0xcd, .sp=0xbc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x76d5, .value=0x68}, {.addr=0x76d6, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x76d5, .value=0x68, .type=IO_READ},
        {.addr=0x76d6, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_002B) {
    const struct CPU_State initial_cpu = {.pc=0x9e4f, .a=0x97, .x=0x64, .y=0x7a, .sp=0xaf, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x9e4f, .value=0x68}, {.addr=0x9e50, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x9e51, .a=0x97, .x=0x64, .y=0x7a, .sp=0xaf, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9e4f, .value=0x68}, {.addr=0x9e50, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x9e4f, .value=0x68, .type=IO_READ},
        {.addr=0x9e50, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_002C) {
    const struct CPU_State initial_cpu = {.pc=0x8eb7, .a=0x62, .x=0xf1, .y=0x11, .sp=0x4f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x8eb7, .value=0x68}, {.addr=0x8eb8, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x8eb9, .a=0x62, .x=0xf1, .y=0x11, .sp=0x4f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8eb7, .value=0x68}, {.addr=0x8eb8, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x8eb7, .value=0x68, .type=IO_READ},
        {.addr=0x8eb8, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_002D) {
    const struct CPU_State initial_cpu = {.pc=0xbf14, .a=0x0b, .x=0x37, .y=0x3a, .sp=0x90, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xbf14, .value=0x68}, {.addr=0xbf15, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xbf16, .a=0x0b, .x=0x37, .y=0x3a, .sp=0x90, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xbf14, .value=0x68}, {.addr=0xbf15, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xbf14, .value=0x68, .type=IO_READ},
        {.addr=0xbf15, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_002E) {
    const struct CPU_State initial_cpu = {.pc=0xbd44, .a=0x44, .x=0xa9, .y=0x81, .sp=0x50, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xbd44, .value=0x68}, {.addr=0xbd45, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xbd46, .a=0x44, .x=0xa9, .y=0x81, .sp=0x50, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbd44, .value=0x68}, {.addr=0xbd45, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xbd44, .value=0x68, .type=IO_READ},
        {.addr=0xbd45, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_002F) {
    const struct CPU_State initial_cpu = {.pc=0x0b05, .a=0x54, .x=0x22, .y=0x35, .sp=0xf4, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0b05, .value=0x68}, {.addr=0x0b06, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x0b07, .a=0x54, .x=0x22, .y=0x35, .sp=0xf4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0b05, .value=0x68}, {.addr=0x0b06, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x0b05, .value=0x68, .type=IO_READ},
        {.addr=0x0b06, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0030) {
    const struct CPU_State initial_cpu = {.pc=0x4320, .a=0x4c, .x=0x38, .y=0x03, .sp=0xf4, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4320, .value=0x68}, {.addr=0x4321, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x4322, .a=0x4c, .x=0x38, .y=0x03, .sp=0xf4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4320, .value=0x68}, {.addr=0x4321, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x4320, .value=0x68, .type=IO_READ},
        {.addr=0x4321, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0031) {
    const struct CPU_State initial_cpu = {.pc=0x4e4f, .a=0xb3, .x=0x57, .y=0x6d, .sp=0x44, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x4e4f, .value=0x68}, {.addr=0x4e50, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x4e51, .a=0xb3, .x=0x57, .y=0x6d, .sp=0x44, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4e4f, .value=0x68}, {.addr=0x4e50, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x4e4f, .value=0x68, .type=IO_READ},
        {.addr=0x4e50, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0032) {
    const struct CPU_State initial_cpu = {.pc=0x3177, .a=0xb1, .x=0x29, .y=0x33, .sp=0xc0, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x3177, .value=0x68}, {.addr=0x3178, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3179, .a=0xb1, .x=0x29, .y=0x33, .sp=0xc0, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3177, .value=0x68}, {.addr=0x3178, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3177, .value=0x68, .type=IO_READ},
        {.addr=0x3178, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0033) {
    const struct CPU_State initial_cpu = {.pc=0x40ab, .a=0x36, .x=0xb7, .y=0x3e, .sp=0xa5, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x40ab, .value=0x68}, {.addr=0x40ac, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x40ad, .a=0x36, .x=0xb7, .y=0x3e, .sp=0xa5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x40ab, .value=0x68}, {.addr=0x40ac, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x40ab, .value=0x68, .type=IO_READ},
        {.addr=0x40ac, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0034) {
    const struct CPU_State initial_cpu = {.pc=0xa861, .a=0x9c, .x=0x6e, .y=0x2f, .sp=0x7a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa861, .value=0x68}, {.addr=0xa862, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xa863, .a=0x9c, .x=0x6e, .y=0x2f, .sp=0x7a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa861, .value=0x68}, {.addr=0xa862, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xa861, .value=0x68, .type=IO_READ},
        {.addr=0xa862, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0035) {
    const struct CPU_State initial_cpu = {.pc=0x6e9c, .a=0xe9, .x=0xd4, .y=0xad, .sp=0x3f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x6e9c, .value=0x68}, {.addr=0x6e9d, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x6e9e, .a=0xe9, .x=0xd4, .y=0xad, .sp=0x3f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6e9c, .value=0x68}, {.addr=0x6e9d, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x6e9c, .value=0x68, .type=IO_READ},
        {.addr=0x6e9d, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0036) {
    const struct CPU_State initial_cpu = {.pc=0xa193, .a=0x93, .x=0x7c, .y=0xee, .sp=0x3c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xa193, .value=0x68}, {.addr=0xa194, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xa195, .a=0x93, .x=0x7c, .y=0xee, .sp=0x3c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa193, .value=0x68}, {.addr=0xa194, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xa193, .value=0x68, .type=IO_READ},
        {.addr=0xa194, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0037) {
    const struct CPU_State initial_cpu = {.pc=0xde6d, .a=0xdc, .x=0x47, .y=0x7e, .sp=0x52, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xde6d, .value=0x68}, {.addr=0xde6e, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xde6f, .a=0xdc, .x=0x47, .y=0x7e, .sp=0x52, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xde6d, .value=0x68}, {.addr=0xde6e, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xde6d, .value=0x68, .type=IO_READ},
        {.addr=0xde6e, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0038) {
    const struct CPU_State initial_cpu = {.pc=0x03fa, .a=0x02, .x=0x6a, .y=0x52, .sp=0x70, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x03fa, .value=0x68}, {.addr=0x03fb, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x03fc, .a=0x02, .x=0x6a, .y=0x52, .sp=0x70, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x03fa, .value=0x68}, {.addr=0x03fb, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x03fa, .value=0x68, .type=IO_READ},
        {.addr=0x03fb, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0039) {
    const struct CPU_State initial_cpu = {.pc=0xccf4, .a=0x44, .x=0xd2, .y=0xf8, .sp=0x16, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xccf4, .value=0x68}, {.addr=0xccf5, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xccf6, .a=0x44, .x=0xd2, .y=0xf8, .sp=0x16, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xccf4, .value=0x68}, {.addr=0xccf5, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xccf4, .value=0x68, .type=IO_READ},
        {.addr=0xccf5, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_003A) {
    const struct CPU_State initial_cpu = {.pc=0x2767, .a=0x83, .x=0x45, .y=0xbe, .sp=0x72, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x2767, .value=0x68}, {.addr=0x2768, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x2769, .a=0x83, .x=0x45, .y=0xbe, .sp=0x72, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2767, .value=0x68}, {.addr=0x2768, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x2767, .value=0x68, .type=IO_READ},
        {.addr=0x2768, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_003B) {
    const struct CPU_State initial_cpu = {.pc=0xa62d, .a=0x39, .x=0xfa, .y=0x5a, .sp=0x81, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xa62d, .value=0x68}, {.addr=0xa62e, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xa62f, .a=0x39, .x=0xfa, .y=0x5a, .sp=0x81, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa62d, .value=0x68}, {.addr=0xa62e, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xa62d, .value=0x68, .type=IO_READ},
        {.addr=0xa62e, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_003C) {
    const struct CPU_State initial_cpu = {.pc=0xe593, .a=0xb7, .x=0xb1, .y=0x97, .sp=0xc0, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xe593, .value=0x68}, {.addr=0xe594, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xe595, .a=0xb7, .x=0xb1, .y=0x97, .sp=0xc0, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe593, .value=0x68}, {.addr=0xe594, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xe593, .value=0x68, .type=IO_READ},
        {.addr=0xe594, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_003D) {
    const struct CPU_State initial_cpu = {.pc=0x691d, .a=0xfe, .x=0xad, .y=0xa8, .sp=0xdf, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x691d, .value=0x68}, {.addr=0x691e, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x691f, .a=0xfe, .x=0xad, .y=0xa8, .sp=0xdf, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x691d, .value=0x68}, {.addr=0x691e, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x691d, .value=0x68, .type=IO_READ},
        {.addr=0x691e, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_003E) {
    const struct CPU_State initial_cpu = {.pc=0xd158, .a=0x84, .x=0x0b, .y=0x21, .sp=0x1f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xd158, .value=0x68}, {.addr=0xd159, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xd15a, .a=0x84, .x=0x0b, .y=0x21, .sp=0x1f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd158, .value=0x68}, {.addr=0xd159, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xd158, .value=0x68, .type=IO_READ},
        {.addr=0xd159, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_003F) {
    const struct CPU_State initial_cpu = {.pc=0xa319, .a=0xa4, .x=0x6e, .y=0x5d, .sp=0x36, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa319, .value=0x68}, {.addr=0xa31a, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xa31b, .a=0xa4, .x=0x6e, .y=0x5d, .sp=0x36, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa319, .value=0x68}, {.addr=0xa31a, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xa319, .value=0x68, .type=IO_READ},
        {.addr=0xa31a, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0040) {
    const struct CPU_State initial_cpu = {.pc=0xf3bb, .a=0xd7, .x=0xda, .y=0x54, .sp=0x9b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xf3bb, .value=0x68}, {.addr=0xf3bc, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xf3bd, .a=0xd7, .x=0xda, .y=0x54, .sp=0x9b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf3bb, .value=0x68}, {.addr=0xf3bc, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xf3bb, .value=0x68, .type=IO_READ},
        {.addr=0xf3bc, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0041) {
    const struct CPU_State initial_cpu = {.pc=0x7c56, .a=0xe1, .x=0xfb, .y=0xd9, .sp=0xcd, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x7c56, .value=0x68}, {.addr=0x7c57, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7c58, .a=0xe1, .x=0xfb, .y=0xd9, .sp=0xcd, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7c56, .value=0x68}, {.addr=0x7c57, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7c56, .value=0x68, .type=IO_READ},
        {.addr=0x7c57, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0042) {
    const struct CPU_State initial_cpu = {.pc=0x7bfc, .a=0x08, .x=0x48, .y=0xc6, .sp=0x13, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x7bfc, .value=0x68}, {.addr=0x7bfd, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x7bfe, .a=0x08, .x=0x48, .y=0xc6, .sp=0x13, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x7bfc, .value=0x68}, {.addr=0x7bfd, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x7bfc, .value=0x68, .type=IO_READ},
        {.addr=0x7bfd, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0043) {
    const struct CPU_State initial_cpu = {.pc=0x54cd, .a=0x96, .x=0x8e, .y=0xb6, .sp=0xd4, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x54cd, .value=0x68}, {.addr=0x54ce, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x54cf, .a=0x96, .x=0x8e, .y=0xb6, .sp=0xd4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x54cd, .value=0x68}, {.addr=0x54ce, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x54cd, .value=0x68, .type=IO_READ},
        {.addr=0x54ce, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0044) {
    const struct CPU_State initial_cpu = {.pc=0x43ec, .a=0x0d, .x=0x40, .y=0x78, .sp=0x44, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x43ec, .value=0x68}, {.addr=0x43ed, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x43ee, .a=0x0d, .x=0x40, .y=0x78, .sp=0x44, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x43ec, .value=0x68}, {.addr=0x43ed, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x43ec, .value=0x68, .type=IO_READ},
        {.addr=0x43ed, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0045) {
    const struct CPU_State initial_cpu = {.pc=0x55f3, .a=0x1b, .x=0xd9, .y=0x91, .sp=0xd4, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x55f3, .value=0x68}, {.addr=0x55f4, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x55f5, .a=0x1b, .x=0xd9, .y=0x91, .sp=0xd4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x55f3, .value=0x68}, {.addr=0x55f4, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x55f3, .value=0x68, .type=IO_READ},
        {.addr=0x55f4, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0046) {
    const struct CPU_State initial_cpu = {.pc=0x6805, .a=0x54, .x=0x4d, .y=0x17, .sp=0x04, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x6805, .value=0x68}, {.addr=0x6806, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x6807, .a=0x54, .x=0x4d, .y=0x17, .sp=0x04, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6805, .value=0x68}, {.addr=0x6806, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x6805, .value=0x68, .type=IO_READ},
        {.addr=0x6806, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0047) {
    const struct CPU_State initial_cpu = {.pc=0xdcaf, .a=0xb0, .x=0xba, .y=0x23, .sp=0x19, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xdcaf, .value=0x68}, {.addr=0xdcb0, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xdcb1, .a=0xb0, .x=0xba, .y=0x23, .sp=0x19, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdcaf, .value=0x68}, {.addr=0xdcb0, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xdcaf, .value=0x68, .type=IO_READ},
        {.addr=0xdcb0, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0048) {
    const struct CPU_State initial_cpu = {.pc=0x251e, .a=0x11, .x=0xf9, .y=0x84, .sp=0x8e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x251e, .value=0x68}, {.addr=0x251f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2520, .a=0x11, .x=0xf9, .y=0x84, .sp=0x8e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x251e, .value=0x68}, {.addr=0x251f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x251e, .value=0x68, .type=IO_READ},
        {.addr=0x251f, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0049) {
    const struct CPU_State initial_cpu = {.pc=0xf8db, .a=0x76, .x=0x7c, .y=0xdc, .sp=0xe3, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xf8db, .value=0x68}, {.addr=0xf8dc, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xf8dd, .a=0x76, .x=0x7c, .y=0xdc, .sp=0xe3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf8db, .value=0x68}, {.addr=0xf8dc, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xf8db, .value=0x68, .type=IO_READ},
        {.addr=0xf8dc, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_004A) {
    const struct CPU_State initial_cpu = {.pc=0xb89f, .a=0x7b, .x=0x42, .y=0xf6, .sp=0xef, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb89f, .value=0x68}, {.addr=0xb8a0, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xb8a1, .a=0x7b, .x=0x42, .y=0xf6, .sp=0xef, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xb89f, .value=0x68}, {.addr=0xb8a0, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xb89f, .value=0x68, .type=IO_READ},
        {.addr=0xb8a0, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_004B) {
    const struct CPU_State initial_cpu = {.pc=0x6f63, .a=0x26, .x=0x85, .y=0x03, .sp=0x8a, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x6f63, .value=0x68}, {.addr=0x6f64, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x6f65, .a=0x26, .x=0x85, .y=0x03, .sp=0x8a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6f63, .value=0x68}, {.addr=0x6f64, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x6f63, .value=0x68, .type=IO_READ},
        {.addr=0x6f64, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_004C) {
    const struct CPU_State initial_cpu = {.pc=0xf1e8, .a=0xfd, .x=0xd8, .y=0x84, .sp=0xc4, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf1e8, .value=0x68}, {.addr=0xf1e9, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xf1ea, .a=0xfd, .x=0xd8, .y=0x84, .sp=0xc4, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf1e8, .value=0x68}, {.addr=0xf1e9, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xf1e8, .value=0x68, .type=IO_READ},
        {.addr=0xf1e9, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_004D) {
    const struct CPU_State initial_cpu = {.pc=0x1a77, .a=0xa7, .x=0xaf, .y=0xf3, .sp=0x3c, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x1a77, .value=0x68}, {.addr=0x1a78, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x1a79, .a=0xa7, .x=0xaf, .y=0xf3, .sp=0x3c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1a77, .value=0x68}, {.addr=0x1a78, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x1a77, .value=0x68, .type=IO_READ},
        {.addr=0x1a78, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_004E) {
    const struct CPU_State initial_cpu = {.pc=0xe519, .a=0x50, .x=0xd6, .y=0x8f, .sp=0x0f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xe519, .value=0x68}, {.addr=0xe51a, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xe51b, .a=0x50, .x=0xd6, .y=0x8f, .sp=0x0f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe519, .value=0x68}, {.addr=0xe51a, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xe519, .value=0x68, .type=IO_READ},
        {.addr=0xe51a, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_004F) {
    const struct CPU_State initial_cpu = {.pc=0x85ab, .a=0x61, .x=0x10, .y=0xa5, .sp=0x7b, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x85ab, .value=0x68}, {.addr=0x85ac, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x85ad, .a=0x61, .x=0x10, .y=0xa5, .sp=0x7b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x85ab, .value=0x68}, {.addr=0x85ac, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x85ab, .value=0x68, .type=IO_READ},
        {.addr=0x85ac, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0050) {
    const struct CPU_State initial_cpu = {.pc=0x5d6b, .a=0xa0, .x=0xbe, .y=0x84, .sp=0x09, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x5d6b, .value=0x68}, {.addr=0x5d6c, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x5d6d, .a=0xa0, .x=0xbe, .y=0x84, .sp=0x09, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5d6b, .value=0x68}, {.addr=0x5d6c, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x5d6b, .value=0x68, .type=IO_READ},
        {.addr=0x5d6c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0051) {
    const struct CPU_State initial_cpu = {.pc=0x4958, .a=0x54, .x=0xd7, .y=0xd7, .sp=0x2f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x4958, .value=0x68}, {.addr=0x4959, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x495a, .a=0x54, .x=0xd7, .y=0xd7, .sp=0x2f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4958, .value=0x68}, {.addr=0x4959, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x4958, .value=0x68, .type=IO_READ},
        {.addr=0x4959, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0052) {
    const struct CPU_State initial_cpu = {.pc=0xc9b0, .a=0x3b, .x=0x3f, .y=0x6c, .sp=0xb5, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xc9b0, .value=0x68}, {.addr=0xc9b1, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xc9b2, .a=0x3b, .x=0x3f, .y=0x6c, .sp=0xb5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc9b0, .value=0x68}, {.addr=0xc9b1, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xc9b0, .value=0x68, .type=IO_READ},
        {.addr=0xc9b1, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0053) {
    const struct CPU_State initial_cpu = {.pc=0x9cd2, .a=0x91, .x=0x67, .y=0x6f, .sp=0x8b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9cd2, .value=0x68}, {.addr=0x9cd3, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x9cd4, .a=0x91, .x=0x67, .y=0x6f, .sp=0x8b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9cd2, .value=0x68}, {.addr=0x9cd3, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x9cd2, .value=0x68, .type=IO_READ},
        {.addr=0x9cd3, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0054) {
    const struct CPU_State initial_cpu = {.pc=0x6d62, .a=0x55, .x=0x45, .y=0xd6, .sp=0xa7, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6d62, .value=0x68}, {.addr=0x6d63, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x6d64, .a=0x55, .x=0x45, .y=0xd6, .sp=0xa7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6d62, .value=0x68}, {.addr=0x6d63, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x6d62, .value=0x68, .type=IO_READ},
        {.addr=0x6d63, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0055) {
    const struct CPU_State initial_cpu = {.pc=0xc19e, .a=0x14, .x=0x7b, .y=0xa3, .sp=0xdd, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xc19e, .value=0x68}, {.addr=0xc19f, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xc1a0, .a=0x14, .x=0x7b, .y=0xa3, .sp=0xdd, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc19e, .value=0x68}, {.addr=0xc19f, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xc19e, .value=0x68, .type=IO_READ},
        {.addr=0xc19f, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0056) {
    const struct CPU_State initial_cpu = {.pc=0x1e0e, .a=0x20, .x=0x66, .y=0xdd, .sp=0xc0, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x1e0e, .value=0x68}, {.addr=0x1e0f, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x1e10, .a=0x20, .x=0x66, .y=0xdd, .sp=0xc0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1e0e, .value=0x68}, {.addr=0x1e0f, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x1e0e, .value=0x68, .type=IO_READ},
        {.addr=0x1e0f, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0057) {
    const struct CPU_State initial_cpu = {.pc=0x8664, .a=0xfd, .x=0xe5, .y=0xd1, .sp=0x59, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8664, .value=0x68}, {.addr=0x8665, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x8666, .a=0xfd, .x=0xe5, .y=0xd1, .sp=0x59, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8664, .value=0x68}, {.addr=0x8665, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x8664, .value=0x68, .type=IO_READ},
        {.addr=0x8665, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0058) {
    const struct CPU_State initial_cpu = {.pc=0xa21e, .a=0x47, .x=0x37, .y=0x77, .sp=0xb2, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xa21e, .value=0x68}, {.addr=0xa21f, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xa220, .a=0x47, .x=0x37, .y=0x77, .sp=0xb2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa21e, .value=0x68}, {.addr=0xa21f, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xa21e, .value=0x68, .type=IO_READ},
        {.addr=0xa21f, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0059) {
    const struct CPU_State initial_cpu = {.pc=0x2455, .a=0xe9, .x=0x97, .y=0xd8, .sp=0xb4, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x2455, .value=0x68}, {.addr=0x2456, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x2457, .a=0xe9, .x=0x97, .y=0xd8, .sp=0xb4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2455, .value=0x68}, {.addr=0x2456, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x2455, .value=0x68, .type=IO_READ},
        {.addr=0x2456, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_005A) {
    const struct CPU_State initial_cpu = {.pc=0xcb66, .a=0x5b, .x=0x73, .y=0x5a, .sp=0x11, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xcb66, .value=0x68}, {.addr=0xcb67, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xcb68, .a=0x5b, .x=0x73, .y=0x5a, .sp=0x11, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xcb66, .value=0x68}, {.addr=0xcb67, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xcb66, .value=0x68, .type=IO_READ},
        {.addr=0xcb67, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_005B) {
    const struct CPU_State initial_cpu = {.pc=0x345c, .a=0x7b, .x=0x1e, .y=0xd9, .sp=0x23, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x345c, .value=0x68}, {.addr=0x345d, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x345e, .a=0x7b, .x=0x1e, .y=0xd9, .sp=0x23, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x345c, .value=0x68}, {.addr=0x345d, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x345c, .value=0x68, .type=IO_READ},
        {.addr=0x345d, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_005C) {
    const struct CPU_State initial_cpu = {.pc=0x053a, .a=0xdb, .x=0x4a, .y=0x24, .sp=0xe4, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x053a, .value=0x68}, {.addr=0x053b, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x053c, .a=0xdb, .x=0x4a, .y=0x24, .sp=0xe4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x053a, .value=0x68}, {.addr=0x053b, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x053a, .value=0x68, .type=IO_READ},
        {.addr=0x053b, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_005D) {
    const struct CPU_State initial_cpu = {.pc=0x3ab3, .a=0x48, .x=0x2c, .y=0x40, .sp=0x7d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3ab3, .value=0x68}, {.addr=0x3ab4, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x3ab5, .a=0x48, .x=0x2c, .y=0x40, .sp=0x7d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x3ab3, .value=0x68}, {.addr=0x3ab4, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x3ab3, .value=0x68, .type=IO_READ},
        {.addr=0x3ab4, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_005E) {
    const struct CPU_State initial_cpu = {.pc=0x8bff, .a=0xeb, .x=0x60, .y=0xc6, .sp=0x74, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8bff, .value=0x68}, {.addr=0x8c00, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x8c01, .a=0xeb, .x=0x60, .y=0xc6, .sp=0x74, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8bff, .value=0x68}, {.addr=0x8c00, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x8bff, .value=0x68, .type=IO_READ},
        {.addr=0x8c00, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_005F) {
    const struct CPU_State initial_cpu = {.pc=0x09a3, .a=0x68, .x=0xd8, .y=0xa2, .sp=0xcf, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x09a3, .value=0x68}, {.addr=0x09a4, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x09a5, .a=0x68, .x=0xd8, .y=0xa2, .sp=0xcf, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x09a3, .value=0x68}, {.addr=0x09a4, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x09a3, .value=0x68, .type=IO_READ},
        {.addr=0x09a4, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0060) {
    const struct CPU_State initial_cpu = {.pc=0x7e89, .a=0x44, .x=0xea, .y=0x70, .sp=0x28, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7e89, .value=0x68}, {.addr=0x7e8a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7e8b, .a=0x44, .x=0xea, .y=0x70, .sp=0x28, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7e89, .value=0x68}, {.addr=0x7e8a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7e89, .value=0x68, .type=IO_READ},
        {.addr=0x7e8a, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0061) {
    const struct CPU_State initial_cpu = {.pc=0x976a, .a=0x4d, .x=0xe8, .y=0x3e, .sp=0xe2, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x976a, .value=0x68}, {.addr=0x976b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x976c, .a=0x4d, .x=0xe8, .y=0x3e, .sp=0xe2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x976a, .value=0x68}, {.addr=0x976b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x976a, .value=0x68, .type=IO_READ},
        {.addr=0x976b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0062) {
    const struct CPU_State initial_cpu = {.pc=0xefd9, .a=0x2c, .x=0xc7, .y=0xda, .sp=0x17, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xefd9, .value=0x68}, {.addr=0xefda, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xefdb, .a=0x2c, .x=0xc7, .y=0xda, .sp=0x17, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xefd9, .value=0x68}, {.addr=0xefda, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xefd9, .value=0x68, .type=IO_READ},
        {.addr=0xefda, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0063) {
    const struct CPU_State initial_cpu = {.pc=0xade0, .a=0xfd, .x=0xcc, .y=0x05, .sp=0x03, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xade0, .value=0x68}, {.addr=0xade1, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xade2, .a=0xfd, .x=0xcc, .y=0x05, .sp=0x03, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xade0, .value=0x68}, {.addr=0xade1, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xade0, .value=0x68, .type=IO_READ},
        {.addr=0xade1, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0064) {
    const struct CPU_State initial_cpu = {.pc=0xdd1c, .a=0x4f, .x=0xd3, .y=0xb3, .sp=0x39, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xdd1c, .value=0x68}, {.addr=0xdd1d, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xdd1e, .a=0x4f, .x=0xd3, .y=0xb3, .sp=0x39, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xdd1c, .value=0x68}, {.addr=0xdd1d, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xdd1c, .value=0x68, .type=IO_READ},
        {.addr=0xdd1d, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0065) {
    const struct CPU_State initial_cpu = {.pc=0xb59f, .a=0x42, .x=0x03, .y=0xcd, .sp=0xb7, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb59f, .value=0x68}, {.addr=0xb5a0, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xb5a1, .a=0x42, .x=0x03, .y=0xcd, .sp=0xb7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb59f, .value=0x68}, {.addr=0xb5a0, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xb59f, .value=0x68, .type=IO_READ},
        {.addr=0xb5a0, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0066) {
    const struct CPU_State initial_cpu = {.pc=0x3ea7, .a=0x65, .x=0x79, .y=0xeb, .sp=0xf5, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x3ea7, .value=0x68}, {.addr=0x3ea8, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x3ea9, .a=0x65, .x=0x79, .y=0xeb, .sp=0xf5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3ea7, .value=0x68}, {.addr=0x3ea8, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x3ea7, .value=0x68, .type=IO_READ},
        {.addr=0x3ea8, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0067) {
    const struct CPU_State initial_cpu = {.pc=0xe287, .a=0x6b, .x=0x1f, .y=0x81, .sp=0xbf, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xe287, .value=0x68}, {.addr=0xe288, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xe289, .a=0x6b, .x=0x1f, .y=0x81, .sp=0xbf, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe287, .value=0x68}, {.addr=0xe288, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xe287, .value=0x68, .type=IO_READ},
        {.addr=0xe288, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0068) {
    const struct CPU_State initial_cpu = {.pc=0x8368, .a=0xce, .x=0xa1, .y=0x7e, .sp=0xe5, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x8368, .value=0x68}, {.addr=0x8369, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x836a, .a=0xce, .x=0xa1, .y=0x7e, .sp=0xe5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8368, .value=0x68}, {.addr=0x8369, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x8368, .value=0x68, .type=IO_READ},
        {.addr=0x8369, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0069) {
    const struct CPU_State initial_cpu = {.pc=0x1731, .a=0x93, .x=0x75, .y=0x59, .sp=0x72, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1731, .value=0x68}, {.addr=0x1732, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x1733, .a=0x93, .x=0x75, .y=0x59, .sp=0x72, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1731, .value=0x68}, {.addr=0x1732, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x1731, .value=0x68, .type=IO_READ},
        {.addr=0x1732, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_006A) {
    const struct CPU_State initial_cpu = {.pc=0xef9c, .a=0xad, .x=0x1b, .y=0x14, .sp=0xa3, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xef9c, .value=0x68}, {.addr=0xef9d, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xef9e, .a=0xad, .x=0x1b, .y=0x14, .sp=0xa3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xef9c, .value=0x68}, {.addr=0xef9d, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xef9c, .value=0x68, .type=IO_READ},
        {.addr=0xef9d, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_006B) {
    const struct CPU_State initial_cpu = {.pc=0x29cd, .a=0x91, .x=0x93, .y=0x9f, .sp=0xab, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x29cd, .value=0x68}, {.addr=0x29ce, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x29cf, .a=0x91, .x=0x93, .y=0x9f, .sp=0xab, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x29cd, .value=0x68}, {.addr=0x29ce, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x29cd, .value=0x68, .type=IO_READ},
        {.addr=0x29ce, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_006C) {
    const struct CPU_State initial_cpu = {.pc=0xc17b, .a=0x4f, .x=0x94, .y=0x88, .sp=0x64, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xc17b, .value=0x68}, {.addr=0xc17c, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xc17d, .a=0x4f, .x=0x94, .y=0x88, .sp=0x64, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc17b, .value=0x68}, {.addr=0xc17c, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xc17b, .value=0x68, .type=IO_READ},
        {.addr=0xc17c, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_006D) {
    const struct CPU_State initial_cpu = {.pc=0xfe81, .a=0xa0, .x=0x97, .y=0xf0, .sp=0xbb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xfe81, .value=0x68}, {.addr=0xfe82, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xfe83, .a=0xa0, .x=0x97, .y=0xf0, .sp=0xbb, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xfe81, .value=0x68}, {.addr=0xfe82, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xfe81, .value=0x68, .type=IO_READ},
        {.addr=0xfe82, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_006E) {
    const struct CPU_State initial_cpu = {.pc=0xa67a, .a=0xf9, .x=0xda, .y=0xeb, .sp=0x75, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa67a, .value=0x68}, {.addr=0xa67b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa67c, .a=0xf9, .x=0xda, .y=0xeb, .sp=0x75, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa67a, .value=0x68}, {.addr=0xa67b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa67a, .value=0x68, .type=IO_READ},
        {.addr=0xa67b, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_006F) {
    const struct CPU_State initial_cpu = {.pc=0x782f, .a=0x46, .x=0xf1, .y=0xc1, .sp=0x2d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x782f, .value=0x68}, {.addr=0x7830, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x7831, .a=0x46, .x=0xf1, .y=0xc1, .sp=0x2d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x782f, .value=0x68}, {.addr=0x7830, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x782f, .value=0x68, .type=IO_READ},
        {.addr=0x7830, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0070) {
    const struct CPU_State initial_cpu = {.pc=0x96e0, .a=0x28, .x=0x39, .y=0xfe, .sp=0xcf, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x96e0, .value=0x68}, {.addr=0x96e1, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x96e2, .a=0x28, .x=0x39, .y=0xfe, .sp=0xcf, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x96e0, .value=0x68}, {.addr=0x96e1, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x96e0, .value=0x68, .type=IO_READ},
        {.addr=0x96e1, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0071) {
    const struct CPU_State initial_cpu = {.pc=0xf486, .a=0x6e, .x=0x0c, .y=0x74, .sp=0xff, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xf486, .value=0x68}, {.addr=0xf487, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xf488, .a=0x6e, .x=0x0c, .y=0x74, .sp=0xff, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf486, .value=0x68}, {.addr=0xf487, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xf486, .value=0x68, .type=IO_READ},
        {.addr=0xf487, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0072) {
    const struct CPU_State initial_cpu = {.pc=0x55c2, .a=0xa8, .x=0x34, .y=0xde, .sp=0x28, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x55c2, .value=0x68}, {.addr=0x55c3, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x55c4, .a=0xa8, .x=0x34, .y=0xde, .sp=0x28, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x55c2, .value=0x68}, {.addr=0x55c3, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x55c2, .value=0x68, .type=IO_READ},
        {.addr=0x55c3, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0073) {
    const struct CPU_State initial_cpu = {.pc=0x47b3, .a=0x84, .x=0xbb, .y=0xe9, .sp=0x4d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x47b3, .value=0x68}, {.addr=0x47b4, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x47b5, .a=0x84, .x=0xbb, .y=0xe9, .sp=0x4d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x47b3, .value=0x68}, {.addr=0x47b4, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x47b3, .value=0x68, .type=IO_READ},
        {.addr=0x47b4, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0074) {
    const struct CPU_State initial_cpu = {.pc=0x9ab8, .a=0xd8, .x=0x8b, .y=0xbb, .sp=0x74, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x9ab8, .value=0x68}, {.addr=0x9ab9, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x9aba, .a=0xd8, .x=0x8b, .y=0xbb, .sp=0x74, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9ab8, .value=0x68}, {.addr=0x9ab9, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x9ab8, .value=0x68, .type=IO_READ},
        {.addr=0x9ab9, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0075) {
    const struct CPU_State initial_cpu = {.pc=0x207e, .a=0xbd, .x=0xef, .y=0x1e, .sp=0x60, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x207e, .value=0x68}, {.addr=0x207f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2080, .a=0xbd, .x=0xef, .y=0x1e, .sp=0x60, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x207e, .value=0x68}, {.addr=0x207f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x207e, .value=0x68, .type=IO_READ},
        {.addr=0x207f, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0076) {
    const struct CPU_State initial_cpu = {.pc=0xa8b6, .a=0x0f, .x=0xa6, .y=0xcc, .sp=0xaf, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b6, .value=0x68}, {.addr=0xa8b7, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xa8b8, .a=0x0f, .x=0xa6, .y=0xcc, .sp=0xaf, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa8b6, .value=0x68}, {.addr=0xa8b7, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xa8b6, .value=0x68, .type=IO_READ},
        {.addr=0xa8b7, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0077) {
    const struct CPU_State initial_cpu = {.pc=0xd7f9, .a=0x01, .x=0x50, .y=0x69, .sp=0xd0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f9, .value=0x68}, {.addr=0xd7fa, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xd7fb, .a=0x01, .x=0x50, .y=0x69, .sp=0xd0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd7f9, .value=0x68}, {.addr=0xd7fa, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xd7f9, .value=0x68, .type=IO_READ},
        {.addr=0xd7fa, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0078) {
    const struct CPU_State initial_cpu = {.pc=0x8d66, .a=0xb1, .x=0x05, .y=0xf7, .sp=0x3f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x8d66, .value=0x68}, {.addr=0x8d67, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x8d68, .a=0xb1, .x=0x05, .y=0xf7, .sp=0x3f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8d66, .value=0x68}, {.addr=0x8d67, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x8d66, .value=0x68, .type=IO_READ},
        {.addr=0x8d67, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0079) {
    const struct CPU_State initial_cpu = {.pc=0x0c3a, .a=0x7b, .x=0x24, .y=0xbe, .sp=0x7c, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0c3a, .value=0x68}, {.addr=0x0c3b, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x0c3c, .a=0x7b, .x=0x24, .y=0xbe, .sp=0x7c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0c3a, .value=0x68}, {.addr=0x0c3b, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x0c3a, .value=0x68, .type=IO_READ},
        {.addr=0x0c3b, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_007A) {
    const struct CPU_State initial_cpu = {.pc=0x1d31, .a=0xb7, .x=0x84, .y=0xfc, .sp=0x6a, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x1d31, .value=0x68}, {.addr=0x1d32, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x1d33, .a=0xb7, .x=0x84, .y=0xfc, .sp=0x6a, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1d31, .value=0x68}, {.addr=0x1d32, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x1d31, .value=0x68, .type=IO_READ},
        {.addr=0x1d32, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_007B) {
    const struct CPU_State initial_cpu = {.pc=0x4165, .a=0xde, .x=0xe2, .y=0x9e, .sp=0xb2, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x4165, .value=0x68}, {.addr=0x4166, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x4167, .a=0xde, .x=0xe2, .y=0x9e, .sp=0xb2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4165, .value=0x68}, {.addr=0x4166, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x4165, .value=0x68, .type=IO_READ},
        {.addr=0x4166, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_007C) {
    const struct CPU_State initial_cpu = {.pc=0xed0d, .a=0x28, .x=0xbb, .y=0xfd, .sp=0x49, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xed0d, .value=0x68}, {.addr=0xed0e, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xed0f, .a=0x28, .x=0xbb, .y=0xfd, .sp=0x49, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xed0d, .value=0x68}, {.addr=0xed0e, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xed0d, .value=0x68, .type=IO_READ},
        {.addr=0xed0e, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_007D) {
    const struct CPU_State initial_cpu = {.pc=0xd67b, .a=0x1f, .x=0x9f, .y=0x1c, .sp=0x15, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd67b, .value=0x68}, {.addr=0xd67c, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xd67d, .a=0x1f, .x=0x9f, .y=0x1c, .sp=0x15, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd67b, .value=0x68}, {.addr=0xd67c, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xd67b, .value=0x68, .type=IO_READ},
        {.addr=0xd67c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_007E) {
    const struct CPU_State initial_cpu = {.pc=0x5cd2, .a=0x58, .x=0x9c, .y=0xa5, .sp=0x44, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x5cd2, .value=0x68}, {.addr=0x5cd3, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x5cd4, .a=0x58, .x=0x9c, .y=0xa5, .sp=0x44, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5cd2, .value=0x68}, {.addr=0x5cd3, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x5cd2, .value=0x68, .type=IO_READ},
        {.addr=0x5cd3, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_007F) {
    const struct CPU_State initial_cpu = {.pc=0x1441, .a=0xbd, .x=0xa9, .y=0x95, .sp=0x33, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x1441, .value=0x68}, {.addr=0x1442, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x1443, .a=0xbd, .x=0xa9, .y=0x95, .sp=0x33, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1441, .value=0x68}, {.addr=0x1442, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x1441, .value=0x68, .type=IO_READ},
        {.addr=0x1442, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0080) {
    const struct CPU_State initial_cpu = {.pc=0x5148, .a=0xe0, .x=0xce, .y=0x79, .sp=0xf9, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5148, .value=0x68}, {.addr=0x5149, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x514a, .a=0xe0, .x=0xce, .y=0x79, .sp=0xf9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5148, .value=0x68}, {.addr=0x5149, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x5148, .value=0x68, .type=IO_READ},
        {.addr=0x5149, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0081) {
    const struct CPU_State initial_cpu = {.pc=0x81c9, .a=0xd9, .x=0xf6, .y=0xe1, .sp=0xd4, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x81c9, .value=0x68}, {.addr=0x81ca, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x81cb, .a=0xd9, .x=0xf6, .y=0xe1, .sp=0xd4, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x81c9, .value=0x68}, {.addr=0x81ca, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x81c9, .value=0x68, .type=IO_READ},
        {.addr=0x81ca, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0082) {
    const struct CPU_State initial_cpu = {.pc=0xdaab, .a=0x22, .x=0x1c, .y=0xbd, .sp=0xf3, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xdaab, .value=0x68}, {.addr=0xdaac, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xdaad, .a=0x22, .x=0x1c, .y=0xbd, .sp=0xf3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xdaab, .value=0x68}, {.addr=0xdaac, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xdaab, .value=0x68, .type=IO_READ},
        {.addr=0xdaac, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0083) {
    const struct CPU_State initial_cpu = {.pc=0x5b99, .a=0xfc, .x=0xc1, .y=0x6b, .sp=0x0c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x5b99, .value=0x68}, {.addr=0x5b9a, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x5b9b, .a=0xfc, .x=0xc1, .y=0x6b, .sp=0x0c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5b99, .value=0x68}, {.addr=0x5b9a, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x5b99, .value=0x68, .type=IO_READ},
        {.addr=0x5b9a, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0084) {
    const struct CPU_State initial_cpu = {.pc=0x360a, .a=0xa9, .x=0xff, .y=0x4e, .sp=0x34, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x360a, .value=0x68}, {.addr=0x360b, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x360c, .a=0xa9, .x=0xff, .y=0x4e, .sp=0x34, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x360a, .value=0x68}, {.addr=0x360b, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x360a, .value=0x68, .type=IO_READ},
        {.addr=0x360b, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0085) {
    const struct CPU_State initial_cpu = {.pc=0x426a, .a=0x16, .x=0x11, .y=0xce, .sp=0x44, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x426a, .value=0x68}, {.addr=0x426b, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x426c, .a=0x16, .x=0x11, .y=0xce, .sp=0x44, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x426a, .value=0x68}, {.addr=0x426b, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x426a, .value=0x68, .type=IO_READ},
        {.addr=0x426b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0086) {
    const struct CPU_State initial_cpu = {.pc=0xab59, .a=0xf7, .x=0xb7, .y=0xda, .sp=0xf9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xab59, .value=0x68}, {.addr=0xab5a, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xab5b, .a=0xf7, .x=0xb7, .y=0xda, .sp=0xf9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xab59, .value=0x68}, {.addr=0xab5a, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xab59, .value=0x68, .type=IO_READ},
        {.addr=0xab5a, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0087) {
    const struct CPU_State initial_cpu = {.pc=0xd46b, .a=0xaa, .x=0x3c, .y=0x71, .sp=0x2f, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xd46b, .value=0x68}, {.addr=0xd46c, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xd46d, .a=0xaa, .x=0x3c, .y=0x71, .sp=0x2f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd46b, .value=0x68}, {.addr=0xd46c, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xd46b, .value=0x68, .type=IO_READ},
        {.addr=0xd46c, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0088) {
    const struct CPU_State initial_cpu = {.pc=0x3b46, .a=0xed, .x=0xd0, .y=0x38, .sp=0x72, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3b46, .value=0x68}, {.addr=0x3b47, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3b48, .a=0xed, .x=0xd0, .y=0x38, .sp=0x72, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3b46, .value=0x68}, {.addr=0x3b47, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3b46, .value=0x68, .type=IO_READ},
        {.addr=0x3b47, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0089) {
    const struct CPU_State initial_cpu = {.pc=0x71f0, .a=0x4c, .x=0xdc, .y=0xca, .sp=0xfd, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x71f0, .value=0x68}, {.addr=0x71f1, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x71f2, .a=0x4c, .x=0xdc, .y=0xca, .sp=0xfd, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x71f0, .value=0x68}, {.addr=0x71f1, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x71f0, .value=0x68, .type=IO_READ},
        {.addr=0x71f1, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_008A) {
    const struct CPU_State initial_cpu = {.pc=0xd1f4, .a=0xdd, .x=0xa1, .y=0x7f, .sp=0x4b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f4, .value=0x68}, {.addr=0xd1f5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd1f6, .a=0xdd, .x=0xa1, .y=0x7f, .sp=0x4b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd1f4, .value=0x68}, {.addr=0xd1f5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd1f4, .value=0x68, .type=IO_READ},
        {.addr=0xd1f5, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_008B) {
    const struct CPU_State initial_cpu = {.pc=0xfe9c, .a=0x41, .x=0xb4, .y=0x00, .sp=0x68, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xfe9c, .value=0x68}, {.addr=0xfe9d, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xfe9e, .a=0x41, .x=0xb4, .y=0x00, .sp=0x68, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfe9c, .value=0x68}, {.addr=0xfe9d, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xfe9c, .value=0x68, .type=IO_READ},
        {.addr=0xfe9d, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_008C) {
    const struct CPU_State initial_cpu = {.pc=0x1cc3, .a=0x9d, .x=0xfd, .y=0x97, .sp=0x4a, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc3, .value=0x68}, {.addr=0x1cc4, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x1cc5, .a=0x9d, .x=0xfd, .y=0x97, .sp=0x4a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1cc3, .value=0x68}, {.addr=0x1cc4, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x1cc3, .value=0x68, .type=IO_READ},
        {.addr=0x1cc4, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_008D) {
    const struct CPU_State initial_cpu = {.pc=0x0916, .a=0x50, .x=0xfe, .y=0x24, .sp=0xa8, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0916, .value=0x68}, {.addr=0x0917, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0918, .a=0x50, .x=0xfe, .y=0x24, .sp=0xa8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0916, .value=0x68}, {.addr=0x0917, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0916, .value=0x68, .type=IO_READ},
        {.addr=0x0917, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_008E) {
    const struct CPU_State initial_cpu = {.pc=0x175a, .a=0x14, .x=0x1e, .y=0x25, .sp=0x3b, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x175a, .value=0x68}, {.addr=0x175b, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x175c, .a=0x14, .x=0x1e, .y=0x25, .sp=0x3b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x175a, .value=0x68}, {.addr=0x175b, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x175a, .value=0x68, .type=IO_READ},
        {.addr=0x175b, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_008F) {
    const struct CPU_State initial_cpu = {.pc=0xdcdd, .a=0x40, .x=0x7b, .y=0x67, .sp=0x94, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xdcdd, .value=0x68}, {.addr=0xdcde, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xdcdf, .a=0x40, .x=0x7b, .y=0x67, .sp=0x94, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xdcdd, .value=0x68}, {.addr=0xdcde, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xdcdd, .value=0x68, .type=IO_READ},
        {.addr=0xdcde, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0090) {
    const struct CPU_State initial_cpu = {.pc=0xbedc, .a=0x5d, .x=0xfb, .y=0xbf, .sp=0x56, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xbedc, .value=0x68}, {.addr=0xbedd, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xbede, .a=0x5d, .x=0xfb, .y=0xbf, .sp=0x56, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xbedc, .value=0x68}, {.addr=0xbedd, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xbedc, .value=0x68, .type=IO_READ},
        {.addr=0xbedd, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0091) {
    const struct CPU_State initial_cpu = {.pc=0x62f5, .a=0x5f, .x=0x7b, .y=0x04, .sp=0x7d, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x62f5, .value=0x68}, {.addr=0x62f6, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x62f7, .a=0x5f, .x=0x7b, .y=0x04, .sp=0x7d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x62f5, .value=0x68}, {.addr=0x62f6, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x62f5, .value=0x68, .type=IO_READ},
        {.addr=0x62f6, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0092) {
    const struct CPU_State initial_cpu = {.pc=0xa40b, .a=0xf4, .x=0x48, .y=0x53, .sp=0x49, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xa40b, .value=0x68}, {.addr=0xa40c, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xa40d, .a=0xf4, .x=0x48, .y=0x53, .sp=0x49, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa40b, .value=0x68}, {.addr=0xa40c, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xa40b, .value=0x68, .type=IO_READ},
        {.addr=0xa40c, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0093) {
    const struct CPU_State initial_cpu = {.pc=0x6f6f, .a=0x72, .x=0x82, .y=0x82, .sp=0x01, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x6f6f, .value=0x68}, {.addr=0x6f70, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x6f71, .a=0x72, .x=0x82, .y=0x82, .sp=0x01, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x6f6f, .value=0x68}, {.addr=0x6f70, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x6f6f, .value=0x68, .type=IO_READ},
        {.addr=0x6f70, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0094) {
    const struct CPU_State initial_cpu = {.pc=0x84af, .a=0x33, .x=0xed, .y=0xc5, .sp=0xed, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x84af, .value=0x68}, {.addr=0x84b0, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x84b1, .a=0x33, .x=0xed, .y=0xc5, .sp=0xed, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x84af, .value=0x68}, {.addr=0x84b0, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x84af, .value=0x68, .type=IO_READ},
        {.addr=0x84b0, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0095) {
    const struct CPU_State initial_cpu = {.pc=0x904b, .a=0xa5, .x=0x06, .y=0x25, .sp=0x2f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x904b, .value=0x68}, {.addr=0x904c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x904d, .a=0xa5, .x=0x06, .y=0x25, .sp=0x2f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x904b, .value=0x68}, {.addr=0x904c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x904b, .value=0x68, .type=IO_READ},
        {.addr=0x904c, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0096) {
    const struct CPU_State initial_cpu = {.pc=0xfe0c, .a=0xdd, .x=0x39, .y=0x3e, .sp=0x8d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xfe0c, .value=0x68}, {.addr=0xfe0d, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xfe0e, .a=0xdd, .x=0x39, .y=0x3e, .sp=0x8d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xfe0c, .value=0x68}, {.addr=0xfe0d, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xfe0c, .value=0x68, .type=IO_READ},
        {.addr=0xfe0d, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0097) {
    const struct CPU_State initial_cpu = {.pc=0x8d30, .a=0xbd, .x=0x58, .y=0x16, .sp=0xd1, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8d30, .value=0x68}, {.addr=0x8d31, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x8d32, .a=0xbd, .x=0x58, .y=0x16, .sp=0xd1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8d30, .value=0x68}, {.addr=0x8d31, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x8d30, .value=0x68, .type=IO_READ},
        {.addr=0x8d31, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0098) {
    const struct CPU_State initial_cpu = {.pc=0x8250, .a=0x9d, .x=0x00, .y=0xef, .sp=0x5a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x8250, .value=0x68}, {.addr=0x8251, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x8252, .a=0x9d, .x=0x00, .y=0xef, .sp=0x5a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x8250, .value=0x68}, {.addr=0x8251, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x8250, .value=0x68, .type=IO_READ},
        {.addr=0x8251, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0099) {
    const struct CPU_State initial_cpu = {.pc=0x7350, .a=0x2f, .x=0x64, .y=0x48, .sp=0xdf, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7350, .value=0x68}, {.addr=0x7351, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x7352, .a=0x2f, .x=0x64, .y=0x48, .sp=0xdf, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7350, .value=0x68}, {.addr=0x7351, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x7350, .value=0x68, .type=IO_READ},
        {.addr=0x7351, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_009A) {
    const struct CPU_State initial_cpu = {.pc=0x0d20, .a=0x28, .x=0xf8, .y=0xb8, .sp=0x8e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0d20, .value=0x68}, {.addr=0x0d21, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0d22, .a=0x28, .x=0xf8, .y=0xb8, .sp=0x8e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0d20, .value=0x68}, {.addr=0x0d21, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0d20, .value=0x68, .type=IO_READ},
        {.addr=0x0d21, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_009B) {
    const struct CPU_State initial_cpu = {.pc=0x5464, .a=0x7a, .x=0xa8, .y=0x58, .sp=0x75, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x5464, .value=0x68}, {.addr=0x5465, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x5466, .a=0x7a, .x=0xa8, .y=0x58, .sp=0x75, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5464, .value=0x68}, {.addr=0x5465, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x5464, .value=0x68, .type=IO_READ},
        {.addr=0x5465, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_009C) {
    const struct CPU_State initial_cpu = {.pc=0xbdc8, .a=0xde, .x=0x17, .y=0x0f, .sp=0xaa, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xbdc8, .value=0x68}, {.addr=0xbdc9, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xbdca, .a=0xde, .x=0x17, .y=0x0f, .sp=0xaa, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xbdc8, .value=0x68}, {.addr=0xbdc9, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xbdc8, .value=0x68, .type=IO_READ},
        {.addr=0xbdc9, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_009D) {
    const struct CPU_State initial_cpu = {.pc=0x8785, .a=0x77, .x=0xea, .y=0x34, .sp=0x6f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x8785, .value=0x68}, {.addr=0x8786, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x8787, .a=0x77, .x=0xea, .y=0x34, .sp=0x6f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8785, .value=0x68}, {.addr=0x8786, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x8785, .value=0x68, .type=IO_READ},
        {.addr=0x8786, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_009E) {
    const struct CPU_State initial_cpu = {.pc=0x3327, .a=0x37, .x=0x5a, .y=0xc4, .sp=0xd4, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x3327, .value=0x68}, {.addr=0x3328, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x3329, .a=0x37, .x=0x5a, .y=0xc4, .sp=0xd4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3327, .value=0x68}, {.addr=0x3328, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x3327, .value=0x68, .type=IO_READ},
        {.addr=0x3328, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_009F) {
    const struct CPU_State initial_cpu = {.pc=0x60c8, .a=0xf8, .x=0x3b, .y=0x86, .sp=0xcb, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x60c8, .value=0x68}, {.addr=0x60c9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x60ca, .a=0xf8, .x=0x3b, .y=0x86, .sp=0xcb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x60c8, .value=0x68}, {.addr=0x60c9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x60c8, .value=0x68, .type=IO_READ},
        {.addr=0x60c9, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x1315, .a=0x68, .x=0xf5, .y=0x5d, .sp=0x32, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1315, .value=0x68}, {.addr=0x1316, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1317, .a=0x68, .x=0xf5, .y=0x5d, .sp=0x32, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1315, .value=0x68}, {.addr=0x1316, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1315, .value=0x68, .type=IO_READ},
        {.addr=0x1316, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x8df7, .a=0x11, .x=0xdc, .y=0xd5, .sp=0xb3, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x8df7, .value=0x68}, {.addr=0x8df8, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x8df9, .a=0x11, .x=0xdc, .y=0xd5, .sp=0xb3, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8df7, .value=0x68}, {.addr=0x8df8, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x8df7, .value=0x68, .type=IO_READ},
        {.addr=0x8df8, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xf8f8, .a=0x40, .x=0xdc, .y=0x15, .sp=0xa3, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf8f8, .value=0x68}, {.addr=0xf8f9, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xf8fa, .a=0x40, .x=0xdc, .y=0x15, .sp=0xa3, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf8f8, .value=0x68}, {.addr=0xf8f9, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xf8f8, .value=0x68, .type=IO_READ},
        {.addr=0xf8f9, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x2e53, .a=0x5f, .x=0x4d, .y=0xb0, .sp=0x38, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2e53, .value=0x68}, {.addr=0x2e54, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x2e55, .a=0x5f, .x=0x4d, .y=0xb0, .sp=0x38, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2e53, .value=0x68}, {.addr=0x2e54, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x2e53, .value=0x68, .type=IO_READ},
        {.addr=0x2e54, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xc362, .a=0x8b, .x=0x7e, .y=0x06, .sp=0x52, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xc362, .value=0x68}, {.addr=0xc363, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xc364, .a=0x8b, .x=0x7e, .y=0x06, .sp=0x52, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc362, .value=0x68}, {.addr=0xc363, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xc362, .value=0x68, .type=IO_READ},
        {.addr=0xc363, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x2665, .a=0x8f, .x=0x61, .y=0x03, .sp=0xaf, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2665, .value=0x68}, {.addr=0x2666, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x2667, .a=0x8f, .x=0x61, .y=0x03, .sp=0xaf, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2665, .value=0x68}, {.addr=0x2666, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x2665, .value=0x68, .type=IO_READ},
        {.addr=0x2666, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x4ddb, .a=0x6d, .x=0x45, .y=0x83, .sp=0x8d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x4ddb, .value=0x68}, {.addr=0x4ddc, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x4ddd, .a=0x6d, .x=0x45, .y=0x83, .sp=0x8d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4ddb, .value=0x68}, {.addr=0x4ddc, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x4ddb, .value=0x68, .type=IO_READ},
        {.addr=0x4ddc, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x6a06, .a=0xdb, .x=0x68, .y=0x68, .sp=0x8d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6a06, .value=0x68}, {.addr=0x6a07, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x6a08, .a=0xdb, .x=0x68, .y=0x68, .sp=0x8d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6a06, .value=0x68}, {.addr=0x6a07, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x6a06, .value=0x68, .type=IO_READ},
        {.addr=0x6a07, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xd9f5, .a=0xef, .x=0x08, .y=0xd0, .sp=0x01, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f5, .value=0x68}, {.addr=0xd9f6, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd9f7, .a=0xef, .x=0x08, .y=0xd0, .sp=0x01, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd9f5, .value=0x68}, {.addr=0xd9f6, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd9f5, .value=0x68, .type=IO_READ},
        {.addr=0xd9f6, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xf65b, .a=0xab, .x=0xab, .y=0xc2, .sp=0x9c, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf65b, .value=0x68}, {.addr=0xf65c, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xf65d, .a=0xab, .x=0xab, .y=0xc2, .sp=0x9c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf65b, .value=0x68}, {.addr=0xf65c, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xf65b, .value=0x68, .type=IO_READ},
        {.addr=0xf65c, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x9001, .a=0x7a, .x=0x9f, .y=0xaa, .sp=0xfc, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x9001, .value=0x68}, {.addr=0x9002, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x9003, .a=0x7a, .x=0x9f, .y=0xaa, .sp=0xfc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9001, .value=0x68}, {.addr=0x9002, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x9001, .value=0x68, .type=IO_READ},
        {.addr=0x9002, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x57da, .a=0x96, .x=0xb2, .y=0xf7, .sp=0xec, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x57da, .value=0x68}, {.addr=0x57db, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x57dc, .a=0x96, .x=0xb2, .y=0xf7, .sp=0xec, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x57da, .value=0x68}, {.addr=0x57db, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x57da, .value=0x68, .type=IO_READ},
        {.addr=0x57db, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x4de9, .a=0xcb, .x=0xd1, .y=0x55, .sp=0x07, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x4de9, .value=0x68}, {.addr=0x4dea, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x4deb, .a=0xcb, .x=0xd1, .y=0x55, .sp=0x07, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4de9, .value=0x68}, {.addr=0x4dea, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x4de9, .value=0x68, .type=IO_READ},
        {.addr=0x4dea, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xc56a, .a=0x24, .x=0x95, .y=0x2a, .sp=0x21, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xc56a, .value=0x68}, {.addr=0xc56b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc56c, .a=0x24, .x=0x95, .y=0x2a, .sp=0x21, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc56a, .value=0x68}, {.addr=0xc56b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc56a, .value=0x68, .type=IO_READ},
        {.addr=0xc56b, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xe091, .a=0xe4, .x=0xcd, .y=0x36, .sp=0xcd, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xe091, .value=0x68}, {.addr=0xe092, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xe093, .a=0xe4, .x=0xcd, .y=0x36, .sp=0xcd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe091, .value=0x68}, {.addr=0xe092, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xe091, .value=0x68, .type=IO_READ},
        {.addr=0xe092, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x66df, .a=0x16, .x=0x9e, .y=0x9d, .sp=0x2c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x66df, .value=0x68}, {.addr=0x66e0, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x66e1, .a=0x16, .x=0x9e, .y=0x9d, .sp=0x2c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x66df, .value=0x68}, {.addr=0x66e0, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x66df, .value=0x68, .type=IO_READ},
        {.addr=0x66e0, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x1c24, .a=0x71, .x=0x33, .y=0x65, .sp=0x34, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x1c24, .value=0x68}, {.addr=0x1c25, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x1c26, .a=0x71, .x=0x33, .y=0x65, .sp=0x34, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1c24, .value=0x68}, {.addr=0x1c25, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x1c24, .value=0x68, .type=IO_READ},
        {.addr=0x1c25, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xe97e, .a=0x98, .x=0xd4, .y=0xb0, .sp=0xb8, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xe97e, .value=0x68}, {.addr=0xe97f, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xe980, .a=0x98, .x=0xd4, .y=0xb0, .sp=0xb8, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe97e, .value=0x68}, {.addr=0xe97f, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xe97e, .value=0x68, .type=IO_READ},
        {.addr=0xe97f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xc44b, .a=0x46, .x=0x9d, .y=0xb4, .sp=0x80, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc44b, .value=0x68}, {.addr=0xc44c, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xc44d, .a=0x46, .x=0x9d, .y=0xb4, .sp=0x80, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc44b, .value=0x68}, {.addr=0xc44c, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xc44b, .value=0x68, .type=IO_READ},
        {.addr=0xc44c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x2a44, .a=0xff, .x=0xa0, .y=0x34, .sp=0xcc, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x2a44, .value=0x68}, {.addr=0x2a45, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x2a46, .a=0xff, .x=0xa0, .y=0x34, .sp=0xcc, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2a44, .value=0x68}, {.addr=0x2a45, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x2a44, .value=0x68, .type=IO_READ},
        {.addr=0x2a45, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x5258, .a=0x3e, .x=0x6d, .y=0xbd, .sp=0x8c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x5258, .value=0x68}, {.addr=0x5259, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x525a, .a=0x3e, .x=0x6d, .y=0xbd, .sp=0x8c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5258, .value=0x68}, {.addr=0x5259, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x5258, .value=0x68, .type=IO_READ},
        {.addr=0x5259, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xb3ba, .a=0xd3, .x=0x2f, .y=0xb8, .sp=0x20, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ba, .value=0x68}, {.addr=0xb3bb, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xb3bc, .a=0xd3, .x=0x2f, .y=0xb8, .sp=0x20, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb3ba, .value=0x68}, {.addr=0xb3bb, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xb3ba, .value=0x68, .type=IO_READ},
        {.addr=0xb3bb, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x9e55, .a=0x2e, .x=0x4d, .y=0x2a, .sp=0x29, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x9e55, .value=0x68}, {.addr=0x9e56, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x9e57, .a=0x2e, .x=0x4d, .y=0x2a, .sp=0x29, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x9e55, .value=0x68}, {.addr=0x9e56, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x9e55, .value=0x68, .type=IO_READ},
        {.addr=0x9e56, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xa3ea, .a=0x86, .x=0x95, .y=0xc9, .sp=0x23, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xa3ea, .value=0x68}, {.addr=0xa3eb, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xa3ec, .a=0x86, .x=0x95, .y=0xc9, .sp=0x23, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa3ea, .value=0x68}, {.addr=0xa3eb, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xa3ea, .value=0x68, .type=IO_READ},
        {.addr=0xa3eb, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x5f03, .a=0x7c, .x=0x96, .y=0x04, .sp=0xf2, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5f03, .value=0x68}, {.addr=0x5f04, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x5f05, .a=0x7c, .x=0x96, .y=0x04, .sp=0xf2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5f03, .value=0x68}, {.addr=0x5f04, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x5f03, .value=0x68, .type=IO_READ},
        {.addr=0x5f04, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x480f, .a=0x1d, .x=0x18, .y=0xa7, .sp=0x84, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x480f, .value=0x68}, {.addr=0x4810, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x4811, .a=0x1d, .x=0x18, .y=0xa7, .sp=0x84, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x480f, .value=0x68}, {.addr=0x4810, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x480f, .value=0x68, .type=IO_READ},
        {.addr=0x4810, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xee6a, .a=0xce, .x=0xdc, .y=0xd9, .sp=0x5d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xee6a, .value=0x68}, {.addr=0xee6b, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xee6c, .a=0xce, .x=0xdc, .y=0xd9, .sp=0x5d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xee6a, .value=0x68}, {.addr=0xee6b, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xee6a, .value=0x68, .type=IO_READ},
        {.addr=0xee6b, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x09b4, .a=0xa1, .x=0x3d, .y=0xa3, .sp=0xf0, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x09b4, .value=0x68}, {.addr=0x09b5, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x09b6, .a=0xa1, .x=0x3d, .y=0xa3, .sp=0xf0, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x09b4, .value=0x68}, {.addr=0x09b5, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x09b4, .value=0x68, .type=IO_READ},
        {.addr=0x09b5, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x3b19, .a=0xdb, .x=0x6d, .y=0x3a, .sp=0x29, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x3b19, .value=0x68}, {.addr=0x3b1a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3b1b, .a=0xdb, .x=0x6d, .y=0x3a, .sp=0x29, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3b19, .value=0x68}, {.addr=0x3b1a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3b19, .value=0x68, .type=IO_READ},
        {.addr=0x3b1a, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x55d4, .a=0x22, .x=0xe0, .y=0x47, .sp=0x37, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x55d4, .value=0x68}, {.addr=0x55d5, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x55d6, .a=0x22, .x=0xe0, .y=0x47, .sp=0x37, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x55d4, .value=0x68}, {.addr=0x55d5, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x55d4, .value=0x68, .type=IO_READ},
        {.addr=0x55d5, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xed56, .a=0x2b, .x=0x3a, .y=0xc3, .sp=0xa5, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xed56, .value=0x68}, {.addr=0xed57, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xed58, .a=0x2b, .x=0x3a, .y=0xc3, .sp=0xa5, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xed56, .value=0x68}, {.addr=0xed57, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xed56, .value=0x68, .type=IO_READ},
        {.addr=0xed57, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xdb15, .a=0xbb, .x=0xdf, .y=0xc9, .sp=0x93, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xdb15, .value=0x68}, {.addr=0xdb16, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xdb17, .a=0xbb, .x=0xdf, .y=0xc9, .sp=0x93, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xdb15, .value=0x68}, {.addr=0xdb16, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xdb15, .value=0x68, .type=IO_READ},
        {.addr=0xdb16, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x1234, .a=0xc0, .x=0x0c, .y=0x5c, .sp=0xd0, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x1234, .value=0x68}, {.addr=0x1235, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x1236, .a=0xc0, .x=0x0c, .y=0x5c, .sp=0xd0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x1234, .value=0x68}, {.addr=0x1235, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x1234, .value=0x68, .type=IO_READ},
        {.addr=0x1235, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x8fda, .a=0xea, .x=0x2f, .y=0x91, .sp=0x3b, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8fda, .value=0x68}, {.addr=0x8fdb, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x8fdc, .a=0xea, .x=0x2f, .y=0x91, .sp=0x3b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8fda, .value=0x68}, {.addr=0x8fdb, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x8fda, .value=0x68, .type=IO_READ},
        {.addr=0x8fdb, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x3412, .a=0x6f, .x=0xda, .y=0xad, .sp=0x53, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x3412, .value=0x68}, {.addr=0x3413, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x3414, .a=0x6f, .x=0xda, .y=0xad, .sp=0x53, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3412, .value=0x68}, {.addr=0x3413, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x3412, .value=0x68, .type=IO_READ},
        {.addr=0x3413, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x49db, .a=0xa5, .x=0xd3, .y=0x96, .sp=0x2b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x49db, .value=0x68}, {.addr=0x49dc, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x49dd, .a=0xa5, .x=0xd3, .y=0x96, .sp=0x2b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x49db, .value=0x68}, {.addr=0x49dc, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x49db, .value=0x68, .type=IO_READ},
        {.addr=0x49dc, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xaa07, .a=0x60, .x=0x9b, .y=0x1f, .sp=0xc8, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xaa07, .value=0x68}, {.addr=0xaa08, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xaa09, .a=0x60, .x=0x9b, .y=0x1f, .sp=0xc8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xaa07, .value=0x68}, {.addr=0xaa08, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xaa07, .value=0x68, .type=IO_READ},
        {.addr=0xaa08, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x0555, .a=0x7f, .x=0x52, .y=0x07, .sp=0x5d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0555, .value=0x68}, {.addr=0x0556, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x0557, .a=0x7f, .x=0x52, .y=0x07, .sp=0x5d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0555, .value=0x68}, {.addr=0x0556, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x0555, .value=0x68, .type=IO_READ},
        {.addr=0x0556, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x6fe4, .a=0xd5, .x=0xa8, .y=0x27, .sp=0x3e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x6fe4, .value=0x68}, {.addr=0x6fe5, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x6fe6, .a=0xd5, .x=0xa8, .y=0x27, .sp=0x3e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x6fe4, .value=0x68}, {.addr=0x6fe5, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x6fe4, .value=0x68, .type=IO_READ},
        {.addr=0x6fe5, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x0c2b, .a=0xfc, .x=0xfe, .y=0xab, .sp=0x23, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0c2b, .value=0x68}, {.addr=0x0c2c, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x0c2d, .a=0xfc, .x=0xfe, .y=0xab, .sp=0x23, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0c2b, .value=0x68}, {.addr=0x0c2c, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x0c2b, .value=0x68, .type=IO_READ},
        {.addr=0x0c2c, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x2ecf, .a=0xb3, .x=0xb2, .y=0x10, .sp=0x8b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2ecf, .value=0x68}, {.addr=0x2ed0, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x2ed1, .a=0xb3, .x=0xb2, .y=0x10, .sp=0x8b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2ecf, .value=0x68}, {.addr=0x2ed0, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x2ecf, .value=0x68, .type=IO_READ},
        {.addr=0x2ed0, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x25b3, .a=0x16, .x=0x27, .y=0x5b, .sp=0x33, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x25b3, .value=0x68}, {.addr=0x25b4, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x25b5, .a=0x16, .x=0x27, .y=0x5b, .sp=0x33, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x25b3, .value=0x68}, {.addr=0x25b4, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x25b3, .value=0x68, .type=IO_READ},
        {.addr=0x25b4, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x067b, .a=0xda, .x=0xbc, .y=0x0a, .sp=0x42, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x067b, .value=0x68}, {.addr=0x067c, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x067d, .a=0xda, .x=0xbc, .y=0x0a, .sp=0x42, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x067b, .value=0x68}, {.addr=0x067c, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x067b, .value=0x68, .type=IO_READ},
        {.addr=0x067c, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x1f29, .a=0xa6, .x=0xf4, .y=0x95, .sp=0xde, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x1f29, .value=0x68}, {.addr=0x1f2a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1f2b, .a=0xa6, .x=0xf4, .y=0x95, .sp=0xde, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1f29, .value=0x68}, {.addr=0x1f2a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x1f29, .value=0x68, .type=IO_READ},
        {.addr=0x1f2a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x7bc5, .a=0x60, .x=0xea, .y=0xfd, .sp=0xee, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x7bc5, .value=0x68}, {.addr=0x7bc6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7bc7, .a=0x60, .x=0xea, .y=0xfd, .sp=0xee, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7bc5, .value=0x68}, {.addr=0x7bc6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7bc5, .value=0x68, .type=IO_READ},
        {.addr=0x7bc6, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xf528, .a=0xbe, .x=0xbb, .y=0x17, .sp=0xf7, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xf528, .value=0x68}, {.addr=0xf529, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xf52a, .a=0xbe, .x=0xbb, .y=0x17, .sp=0xf7, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xf528, .value=0x68}, {.addr=0xf529, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xf528, .value=0x68, .type=IO_READ},
        {.addr=0xf529, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x4839, .a=0x45, .x=0x60, .y=0xed, .sp=0x99, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x4839, .value=0x68}, {.addr=0x483a, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x483b, .a=0x45, .x=0x60, .y=0xed, .sp=0x99, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4839, .value=0x68}, {.addr=0x483a, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x4839, .value=0x68, .type=IO_READ},
        {.addr=0x483a, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x4cc9, .a=0x2f, .x=0x34, .y=0xb2, .sp=0x79, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4cc9, .value=0x68}, {.addr=0x4cca, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x4ccb, .a=0x2f, .x=0x34, .y=0xb2, .sp=0x79, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4cc9, .value=0x68}, {.addr=0x4cca, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x4cc9, .value=0x68, .type=IO_READ},
        {.addr=0x4cca, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xd27a, .a=0xb0, .x=0x95, .y=0xfa, .sp=0x31, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xd27a, .value=0x68}, {.addr=0xd27b, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xd27c, .a=0xb0, .x=0x95, .y=0xfa, .sp=0x31, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xd27a, .value=0x68}, {.addr=0xd27b, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xd27a, .value=0x68, .type=IO_READ},
        {.addr=0xd27b, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x8711, .a=0xe9, .x=0x40, .y=0xb3, .sp=0x42, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8711, .value=0x68}, {.addr=0x8712, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x8713, .a=0xe9, .x=0x40, .y=0xb3, .sp=0x42, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8711, .value=0x68}, {.addr=0x8712, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x8711, .value=0x68, .type=IO_READ},
        {.addr=0x8712, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x35c6, .a=0xa1, .x=0xb6, .y=0xac, .sp=0x01, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x35c6, .value=0x68}, {.addr=0x35c7, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x35c8, .a=0xa1, .x=0xb6, .y=0xac, .sp=0x01, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x35c6, .value=0x68}, {.addr=0x35c7, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x35c6, .value=0x68, .type=IO_READ},
        {.addr=0x35c7, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x7786, .a=0xd9, .x=0x28, .y=0x79, .sp=0xd5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x7786, .value=0x68}, {.addr=0x7787, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x7788, .a=0xd9, .x=0x28, .y=0x79, .sp=0xd5, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7786, .value=0x68}, {.addr=0x7787, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x7786, .value=0x68, .type=IO_READ},
        {.addr=0x7787, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xb292, .a=0x97, .x=0x75, .y=0x10, .sp=0xdd, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb292, .value=0x68}, {.addr=0xb293, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xb294, .a=0x97, .x=0x75, .y=0x10, .sp=0xdd, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb292, .value=0x68}, {.addr=0xb293, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xb292, .value=0x68, .type=IO_READ},
        {.addr=0xb293, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x1dec, .a=0x62, .x=0x8e, .y=0xb7, .sp=0xc1, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x1dec, .value=0x68}, {.addr=0x1ded, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x1dee, .a=0x62, .x=0x8e, .y=0xb7, .sp=0xc1, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1dec, .value=0x68}, {.addr=0x1ded, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x1dec, .value=0x68, .type=IO_READ},
        {.addr=0x1ded, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x44e9, .a=0x1d, .x=0x63, .y=0x38, .sp=0x51, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x44e9, .value=0x68}, {.addr=0x44ea, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x44eb, .a=0x1d, .x=0x63, .y=0x38, .sp=0x51, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x44e9, .value=0x68}, {.addr=0x44ea, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x44e9, .value=0x68, .type=IO_READ},
        {.addr=0x44ea, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x8019, .a=0x66, .x=0xbd, .y=0x0b, .sp=0x0d, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8019, .value=0x68}, {.addr=0x801a, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x801b, .a=0x66, .x=0xbd, .y=0x0b, .sp=0x0d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8019, .value=0x68}, {.addr=0x801a, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x8019, .value=0x68, .type=IO_READ},
        {.addr=0x801a, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x893f, .a=0x9c, .x=0x20, .y=0x42, .sp=0xc5, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x893f, .value=0x68}, {.addr=0x8940, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x8941, .a=0x9c, .x=0x20, .y=0x42, .sp=0xc5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x893f, .value=0x68}, {.addr=0x8940, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x893f, .value=0x68, .type=IO_READ},
        {.addr=0x8940, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x747c, .a=0xe1, .x=0x77, .y=0xd8, .sp=0x92, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x747c, .value=0x68}, {.addr=0x747d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x747e, .a=0xe1, .x=0x77, .y=0xd8, .sp=0x92, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x747c, .value=0x68}, {.addr=0x747d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x747c, .value=0x68, .type=IO_READ},
        {.addr=0x747d, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xddae, .a=0xe6, .x=0x88, .y=0x60, .sp=0x26, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xddae, .value=0x68}, {.addr=0xddaf, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xddb0, .a=0xe6, .x=0x88, .y=0x60, .sp=0x26, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xddae, .value=0x68}, {.addr=0xddaf, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xddae, .value=0x68, .type=IO_READ},
        {.addr=0xddaf, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x4adf, .a=0x90, .x=0x68, .y=0xd8, .sp=0x61, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x4adf, .value=0x68}, {.addr=0x4ae0, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x4ae1, .a=0x90, .x=0x68, .y=0xd8, .sp=0x61, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4adf, .value=0x68}, {.addr=0x4ae0, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x4adf, .value=0x68, .type=IO_READ},
        {.addr=0x4ae0, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x0f3c, .a=0x6c, .x=0xeb, .y=0xdd, .sp=0x90, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0f3c, .value=0x68}, {.addr=0x0f3d, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x0f3e, .a=0x6c, .x=0xeb, .y=0xdd, .sp=0x90, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0f3c, .value=0x68}, {.addr=0x0f3d, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x0f3c, .value=0x68, .type=IO_READ},
        {.addr=0x0f3d, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x7534, .a=0x3d, .x=0xfa, .y=0x08, .sp=0x61, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x7534, .value=0x68}, {.addr=0x7535, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x7536, .a=0x3d, .x=0xfa, .y=0x08, .sp=0x61, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7534, .value=0x68}, {.addr=0x7535, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x7534, .value=0x68, .type=IO_READ},
        {.addr=0x7535, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x22bb, .a=0xbb, .x=0x92, .y=0x9d, .sp=0x0b, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x22bb, .value=0x68}, {.addr=0x22bc, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x22bd, .a=0xbb, .x=0x92, .y=0x9d, .sp=0x0b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x22bb, .value=0x68}, {.addr=0x22bc, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x22bb, .value=0x68, .type=IO_READ},
        {.addr=0x22bc, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xf512, .a=0xab, .x=0x8e, .y=0x9a, .sp=0x4f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xf512, .value=0x68}, {.addr=0xf513, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xf514, .a=0xab, .x=0x8e, .y=0x9a, .sp=0x4f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf512, .value=0x68}, {.addr=0xf513, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xf512, .value=0x68, .type=IO_READ},
        {.addr=0xf513, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x1552, .a=0xa8, .x=0x29, .y=0x4d, .sp=0x58, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x1552, .value=0x68}, {.addr=0x1553, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x1554, .a=0xa8, .x=0x29, .y=0x4d, .sp=0x58, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1552, .value=0x68}, {.addr=0x1553, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x1552, .value=0x68, .type=IO_READ},
        {.addr=0x1553, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xf808, .a=0xf8, .x=0x81, .y=0x72, .sp=0xeb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf808, .value=0x68}, {.addr=0xf809, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xf80a, .a=0xf8, .x=0x81, .y=0x72, .sp=0xeb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf808, .value=0x68}, {.addr=0xf809, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xf808, .value=0x68, .type=IO_READ},
        {.addr=0xf809, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xf8db, .a=0x82, .x=0xcb, .y=0x00, .sp=0xa2, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xf8db, .value=0x68}, {.addr=0xf8dc, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xf8dd, .a=0x82, .x=0xcb, .y=0x00, .sp=0xa2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf8db, .value=0x68}, {.addr=0xf8dc, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xf8db, .value=0x68, .type=IO_READ},
        {.addr=0xf8dc, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x5a97, .a=0xb1, .x=0x29, .y=0xdb, .sp=0x79, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5a97, .value=0x68}, {.addr=0x5a98, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x5a99, .a=0xb1, .x=0x29, .y=0xdb, .sp=0x79, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5a97, .value=0x68}, {.addr=0x5a98, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x5a97, .value=0x68, .type=IO_READ},
        {.addr=0x5a98, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x0abf, .a=0x89, .x=0x12, .y=0xca, .sp=0x2d, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0abf, .value=0x68}, {.addr=0x0ac0, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x0ac1, .a=0x89, .x=0x12, .y=0xca, .sp=0x2d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0abf, .value=0x68}, {.addr=0x0ac0, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x0abf, .value=0x68, .type=IO_READ},
        {.addr=0x0ac0, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x0fbc, .a=0xe7, .x=0x33, .y=0x3e, .sp=0x3c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0fbc, .value=0x68}, {.addr=0x0fbd, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x0fbe, .a=0xe7, .x=0x33, .y=0x3e, .sp=0x3c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0fbc, .value=0x68}, {.addr=0x0fbd, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x0fbc, .value=0x68, .type=IO_READ},
        {.addr=0x0fbd, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x850c, .a=0xd4, .x=0xb8, .y=0xbe, .sp=0xa7, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x850c, .value=0x68}, {.addr=0x850d, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x850e, .a=0xd4, .x=0xb8, .y=0xbe, .sp=0xa7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x850c, .value=0x68}, {.addr=0x850d, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x850c, .value=0x68, .type=IO_READ},
        {.addr=0x850d, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x90e3, .a=0x79, .x=0xb6, .y=0xa8, .sp=0xbe, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x90e3, .value=0x68}, {.addr=0x90e4, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x90e5, .a=0x79, .x=0xb6, .y=0xa8, .sp=0xbe, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x90e3, .value=0x68}, {.addr=0x90e4, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x90e3, .value=0x68, .type=IO_READ},
        {.addr=0x90e4, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xc35a, .a=0xc5, .x=0x4f, .y=0xf7, .sp=0x53, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xc35a, .value=0x68}, {.addr=0xc35b, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xc35c, .a=0xc5, .x=0x4f, .y=0xf7, .sp=0x53, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc35a, .value=0x68}, {.addr=0xc35b, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xc35a, .value=0x68, .type=IO_READ},
        {.addr=0xc35b, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x6697, .a=0xce, .x=0x5c, .y=0x4d, .sp=0x80, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x6697, .value=0x68}, {.addr=0x6698, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x6699, .a=0xce, .x=0x5c, .y=0x4d, .sp=0x80, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6697, .value=0x68}, {.addr=0x6698, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x6697, .value=0x68, .type=IO_READ},
        {.addr=0x6698, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xe386, .a=0x76, .x=0xd0, .y=0x71, .sp=0x15, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xe386, .value=0x68}, {.addr=0xe387, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe388, .a=0x76, .x=0xd0, .y=0x71, .sp=0x15, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe386, .value=0x68}, {.addr=0xe387, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe386, .value=0x68, .type=IO_READ},
        {.addr=0xe387, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xd510, .a=0x15, .x=0x30, .y=0x2e, .sp=0x37, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xd510, .value=0x68}, {.addr=0xd511, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xd512, .a=0x15, .x=0x30, .y=0x2e, .sp=0x37, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd510, .value=0x68}, {.addr=0xd511, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xd510, .value=0x68, .type=IO_READ},
        {.addr=0xd511, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xb924, .a=0x51, .x=0xee, .y=0x69, .sp=0x9f, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb924, .value=0x68}, {.addr=0xb925, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xb926, .a=0x51, .x=0xee, .y=0x69, .sp=0x9f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb924, .value=0x68}, {.addr=0xb925, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xb924, .value=0x68, .type=IO_READ},
        {.addr=0xb925, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x1e67, .a=0xa9, .x=0xbc, .y=0x82, .sp=0x58, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x1e67, .value=0x68}, {.addr=0x1e68, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x1e69, .a=0xa9, .x=0xbc, .y=0x82, .sp=0x58, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1e67, .value=0x68}, {.addr=0x1e68, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x1e67, .value=0x68, .type=IO_READ},
        {.addr=0x1e68, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xbeb9, .a=0xa9, .x=0xf0, .y=0xb3, .sp=0xe4, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xbeb9, .value=0x68}, {.addr=0xbeba, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xbebb, .a=0xa9, .x=0xf0, .y=0xb3, .sp=0xe4, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xbeb9, .value=0x68}, {.addr=0xbeba, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xbeb9, .value=0x68, .type=IO_READ},
        {.addr=0xbeba, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xad9d, .a=0xd2, .x=0x3a, .y=0x12, .sp=0x04, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xad9d, .value=0x68}, {.addr=0xad9e, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xad9f, .a=0xd2, .x=0x3a, .y=0x12, .sp=0x04, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xad9d, .value=0x68}, {.addr=0xad9e, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xad9d, .value=0x68, .type=IO_READ},
        {.addr=0xad9e, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x0cd9, .a=0xc8, .x=0x94, .y=0xc6, .sp=0x63, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0cd9, .value=0x68}, {.addr=0x0cda, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x0cdb, .a=0xc8, .x=0x94, .y=0xc6, .sp=0x63, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0cd9, .value=0x68}, {.addr=0x0cda, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x0cd9, .value=0x68, .type=IO_READ},
        {.addr=0x0cda, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x02b4, .a=0x88, .x=0x8f, .y=0xa4, .sp=0x5a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x02b4, .value=0x68}, {.addr=0x02b5, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x02b6, .a=0x88, .x=0x8f, .y=0xa4, .sp=0x5a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x02b4, .value=0x68}, {.addr=0x02b5, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x02b4, .value=0x68, .type=IO_READ},
        {.addr=0x02b5, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x6273, .a=0x50, .x=0xe7, .y=0x85, .sp=0x69, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x6273, .value=0x68}, {.addr=0x6274, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x6275, .a=0x50, .x=0xe7, .y=0x85, .sp=0x69, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6273, .value=0x68}, {.addr=0x6274, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x6273, .value=0x68, .type=IO_READ},
        {.addr=0x6274, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xb5a6, .a=0xb3, .x=0x1d, .y=0x13, .sp=0x16, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb5a6, .value=0x68}, {.addr=0xb5a7, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xb5a8, .a=0xb3, .x=0x1d, .y=0x13, .sp=0x16, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb5a6, .value=0x68}, {.addr=0xb5a7, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xb5a6, .value=0x68, .type=IO_READ},
        {.addr=0xb5a7, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x054c, .a=0xfe, .x=0xaf, .y=0x59, .sp=0x26, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x054c, .value=0x68}, {.addr=0x054d, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x054e, .a=0xfe, .x=0xaf, .y=0x59, .sp=0x26, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x054c, .value=0x68}, {.addr=0x054d, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x054c, .value=0x68, .type=IO_READ},
        {.addr=0x054d, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xdefa, .a=0xd5, .x=0x6f, .y=0x6b, .sp=0x7b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xdefa, .value=0x68}, {.addr=0xdefb, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xdefc, .a=0xd5, .x=0x6f, .y=0x6b, .sp=0x7b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xdefa, .value=0x68}, {.addr=0xdefb, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xdefa, .value=0x68, .type=IO_READ},
        {.addr=0xdefb, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xe72b, .a=0x0d, .x=0xd2, .y=0x87, .sp=0x9b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xe72b, .value=0x68}, {.addr=0xe72c, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xe72d, .a=0x0d, .x=0xd2, .y=0x87, .sp=0x9b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe72b, .value=0x68}, {.addr=0xe72c, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xe72b, .value=0x68, .type=IO_READ},
        {.addr=0xe72c, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x72c0, .a=0xbf, .x=0xef, .y=0x2d, .sp=0xda, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x72c0, .value=0x68}, {.addr=0x72c1, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x72c2, .a=0xbf, .x=0xef, .y=0x2d, .sp=0xda, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x72c0, .value=0x68}, {.addr=0x72c1, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x72c0, .value=0x68, .type=IO_READ},
        {.addr=0x72c1, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xc782, .a=0xbd, .x=0xb7, .y=0x47, .sp=0x27, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xc782, .value=0x68}, {.addr=0xc783, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc784, .a=0xbd, .x=0xb7, .y=0x47, .sp=0x27, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc782, .value=0x68}, {.addr=0xc783, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc782, .value=0x68, .type=IO_READ},
        {.addr=0xc783, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x7626, .a=0xf6, .x=0x13, .y=0x2d, .sp=0x28, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7626, .value=0x68}, {.addr=0x7627, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x7628, .a=0xf6, .x=0x13, .y=0x2d, .sp=0x28, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7626, .value=0x68}, {.addr=0x7627, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x7626, .value=0x68, .type=IO_READ},
        {.addr=0x7627, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xd399, .a=0x16, .x=0xf1, .y=0x6e, .sp=0xe6, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xd399, .value=0x68}, {.addr=0xd39a, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xd39b, .a=0x16, .x=0xf1, .y=0x6e, .sp=0xe6, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd399, .value=0x68}, {.addr=0xd39a, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xd399, .value=0x68, .type=IO_READ},
        {.addr=0xd39a, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x61c0, .a=0xed, .x=0x31, .y=0x5b, .sp=0xfe, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x61c0, .value=0x68}, {.addr=0x61c1, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x61c2, .a=0xed, .x=0x31, .y=0x5b, .sp=0xfe, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x61c0, .value=0x68}, {.addr=0x61c1, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x61c0, .value=0x68, .type=IO_READ},
        {.addr=0x61c1, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xf764, .a=0x8b, .x=0x72, .y=0xf4, .sp=0x74, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf764, .value=0x68}, {.addr=0xf765, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xf766, .a=0x8b, .x=0x72, .y=0xf4, .sp=0x74, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf764, .value=0x68}, {.addr=0xf765, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xf764, .value=0x68, .type=IO_READ},
        {.addr=0xf765, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xb783, .a=0x2a, .x=0xc6, .y=0x4c, .sp=0x0a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb783, .value=0x68}, {.addr=0xb784, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xb785, .a=0x2a, .x=0xc6, .y=0x4c, .sp=0x0a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb783, .value=0x68}, {.addr=0xb784, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xb783, .value=0x68, .type=IO_READ},
        {.addr=0xb784, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x33d3, .a=0x86, .x=0x02, .y=0xdb, .sp=0x66, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x33d3, .value=0x68}, {.addr=0x33d4, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x33d5, .a=0x86, .x=0x02, .y=0xdb, .sp=0x66, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x33d3, .value=0x68}, {.addr=0x33d4, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x33d3, .value=0x68, .type=IO_READ},
        {.addr=0x33d4, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xc288, .a=0x0f, .x=0x79, .y=0xe0, .sp=0x8a, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xc288, .value=0x68}, {.addr=0xc289, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xc28a, .a=0x0f, .x=0x79, .y=0xe0, .sp=0x8a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc288, .value=0x68}, {.addr=0xc289, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xc288, .value=0x68, .type=IO_READ},
        {.addr=0xc289, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0100) {
    const struct CPU_State initial_cpu = {.pc=0xb51b, .a=0x72, .x=0xc9, .y=0x92, .sp=0x4e, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xb51b, .value=0x68}, {.addr=0xb51c, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xb51d, .a=0x72, .x=0xc9, .y=0x92, .sp=0x4e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb51b, .value=0x68}, {.addr=0xb51c, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xb51b, .value=0x68, .type=IO_READ},
        {.addr=0xb51c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0101) {
    const struct CPU_State initial_cpu = {.pc=0x8a9c, .a=0xf6, .x=0xab, .y=0x77, .sp=0xc9, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x8a9c, .value=0x68}, {.addr=0x8a9d, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x8a9e, .a=0xf6, .x=0xab, .y=0x77, .sp=0xc9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8a9c, .value=0x68}, {.addr=0x8a9d, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x8a9c, .value=0x68, .type=IO_READ},
        {.addr=0x8a9d, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0102) {
    const struct CPU_State initial_cpu = {.pc=0x900f, .a=0xce, .x=0x71, .y=0x16, .sp=0x91, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x900f, .value=0x68}, {.addr=0x9010, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x9011, .a=0xce, .x=0x71, .y=0x16, .sp=0x91, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x900f, .value=0x68}, {.addr=0x9010, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x900f, .value=0x68, .type=IO_READ},
        {.addr=0x9010, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0103) {
    const struct CPU_State initial_cpu = {.pc=0xdcee, .a=0x0f, .x=0xd3, .y=0xfe, .sp=0x0e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xdcee, .value=0x68}, {.addr=0xdcef, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdcf0, .a=0x0f, .x=0xd3, .y=0xfe, .sp=0x0e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xdcee, .value=0x68}, {.addr=0xdcef, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdcee, .value=0x68, .type=IO_READ},
        {.addr=0xdcef, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0104) {
    const struct CPU_State initial_cpu = {.pc=0x9c21, .a=0x6c, .x=0x7f, .y=0x5c, .sp=0xad, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x9c21, .value=0x68}, {.addr=0x9c22, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x9c23, .a=0x6c, .x=0x7f, .y=0x5c, .sp=0xad, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9c21, .value=0x68}, {.addr=0x9c22, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x9c21, .value=0x68, .type=IO_READ},
        {.addr=0x9c22, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0105) {
    const struct CPU_State initial_cpu = {.pc=0xdc6d, .a=0x73, .x=0x75, .y=0x3b, .sp=0x15, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xdc6d, .value=0x68}, {.addr=0xdc6e, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xdc6f, .a=0x73, .x=0x75, .y=0x3b, .sp=0x15, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdc6d, .value=0x68}, {.addr=0xdc6e, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xdc6d, .value=0x68, .type=IO_READ},
        {.addr=0xdc6e, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0106) {
    const struct CPU_State initial_cpu = {.pc=0x35ed, .a=0xdc, .x=0xf9, .y=0x71, .sp=0x05, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x35ed, .value=0x68}, {.addr=0x35ee, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x35ef, .a=0xdc, .x=0xf9, .y=0x71, .sp=0x05, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x35ed, .value=0x68}, {.addr=0x35ee, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x35ed, .value=0x68, .type=IO_READ},
        {.addr=0x35ee, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0107) {
    const struct CPU_State initial_cpu = {.pc=0xb34c, .a=0xc8, .x=0x46, .y=0xd7, .sp=0x99, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xb34c, .value=0x68}, {.addr=0xb34d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xb34e, .a=0xc8, .x=0x46, .y=0xd7, .sp=0x99, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb34c, .value=0x68}, {.addr=0xb34d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xb34c, .value=0x68, .type=IO_READ},
        {.addr=0xb34d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0108) {
    const struct CPU_State initial_cpu = {.pc=0xc4d1, .a=0x85, .x=0x14, .y=0x20, .sp=0x46, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d1, .value=0x68}, {.addr=0xc4d2, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xc4d3, .a=0x85, .x=0x14, .y=0x20, .sp=0x46, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc4d1, .value=0x68}, {.addr=0xc4d2, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xc4d1, .value=0x68, .type=IO_READ},
        {.addr=0xc4d2, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0109) {
    const struct CPU_State initial_cpu = {.pc=0x3061, .a=0xf9, .x=0xc9, .y=0xee, .sp=0x9f, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3061, .value=0x68}, {.addr=0x3062, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x3063, .a=0xf9, .x=0xc9, .y=0xee, .sp=0x9f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3061, .value=0x68}, {.addr=0x3062, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x3061, .value=0x68, .type=IO_READ},
        {.addr=0x3062, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_010A) {
    const struct CPU_State initial_cpu = {.pc=0x758c, .a=0xf4, .x=0xb5, .y=0xa9, .sp=0xc1, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x758c, .value=0x68}, {.addr=0x758d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x758e, .a=0xf4, .x=0xb5, .y=0xa9, .sp=0xc1, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x758c, .value=0x68}, {.addr=0x758d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x758c, .value=0x68, .type=IO_READ},
        {.addr=0x758d, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_010B) {
    const struct CPU_State initial_cpu = {.pc=0x10f0, .a=0xde, .x=0x86, .y=0x4d, .sp=0xdd, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x10f0, .value=0x68}, {.addr=0x10f1, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x10f2, .a=0xde, .x=0x86, .y=0x4d, .sp=0xdd, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x10f0, .value=0x68}, {.addr=0x10f1, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x10f0, .value=0x68, .type=IO_READ},
        {.addr=0x10f1, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_010C) {
    const struct CPU_State initial_cpu = {.pc=0x6557, .a=0xc3, .x=0xa9, .y=0xb7, .sp=0xc7, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6557, .value=0x68}, {.addr=0x6558, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x6559, .a=0xc3, .x=0xa9, .y=0xb7, .sp=0xc7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6557, .value=0x68}, {.addr=0x6558, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x6557, .value=0x68, .type=IO_READ},
        {.addr=0x6558, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_010D) {
    const struct CPU_State initial_cpu = {.pc=0xc83c, .a=0x38, .x=0xf6, .y=0xc9, .sp=0x62, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc83c, .value=0x68}, {.addr=0xc83d, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xc83e, .a=0x38, .x=0xf6, .y=0xc9, .sp=0x62, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc83c, .value=0x68}, {.addr=0xc83d, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xc83c, .value=0x68, .type=IO_READ},
        {.addr=0xc83d, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_010E) {
    const struct CPU_State initial_cpu = {.pc=0x3484, .a=0x1a, .x=0x1e, .y=0xa5, .sp=0x5c, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x3484, .value=0x68}, {.addr=0x3485, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3486, .a=0x1a, .x=0x1e, .y=0xa5, .sp=0x5c, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3484, .value=0x68}, {.addr=0x3485, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3484, .value=0x68, .type=IO_READ},
        {.addr=0x3485, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_010F) {
    const struct CPU_State initial_cpu = {.pc=0x6a55, .a=0xfe, .x=0x1d, .y=0x6e, .sp=0xe7, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x6a55, .value=0x68}, {.addr=0x6a56, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x6a57, .a=0xfe, .x=0x1d, .y=0x6e, .sp=0xe7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6a55, .value=0x68}, {.addr=0x6a56, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x6a55, .value=0x68, .type=IO_READ},
        {.addr=0x6a56, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0110) {
    const struct CPU_State initial_cpu = {.pc=0xa99e, .a=0x33, .x=0x9f, .y=0xc4, .sp=0x8f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa99e, .value=0x68}, {.addr=0xa99f, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xa9a0, .a=0x33, .x=0x9f, .y=0xc4, .sp=0x8f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa99e, .value=0x68}, {.addr=0xa99f, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xa99e, .value=0x68, .type=IO_READ},
        {.addr=0xa99f, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0111) {
    const struct CPU_State initial_cpu = {.pc=0xb38b, .a=0x51, .x=0x5f, .y=0xf3, .sp=0x20, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb38b, .value=0x68}, {.addr=0xb38c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb38d, .a=0x51, .x=0x5f, .y=0xf3, .sp=0x20, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb38b, .value=0x68}, {.addr=0xb38c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb38b, .value=0x68, .type=IO_READ},
        {.addr=0xb38c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0112) {
    const struct CPU_State initial_cpu = {.pc=0xd1f9, .a=0xb5, .x=0xb8, .y=0xc0, .sp=0x0f, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f9, .value=0x68}, {.addr=0xd1fa, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xd1fb, .a=0xb5, .x=0xb8, .y=0xc0, .sp=0x0f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd1f9, .value=0x68}, {.addr=0xd1fa, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xd1f9, .value=0x68, .type=IO_READ},
        {.addr=0xd1fa, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0113) {
    const struct CPU_State initial_cpu = {.pc=0xa0b5, .a=0xf1, .x=0x94, .y=0x12, .sp=0xe9, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b5, .value=0x68}, {.addr=0xa0b6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa0b7, .a=0xf1, .x=0x94, .y=0x12, .sp=0xe9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa0b5, .value=0x68}, {.addr=0xa0b6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa0b5, .value=0x68, .type=IO_READ},
        {.addr=0xa0b6, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0114) {
    const struct CPU_State initial_cpu = {.pc=0x18d9, .a=0x28, .x=0x30, .y=0x38, .sp=0xec, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x18d9, .value=0x68}, {.addr=0x18da, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x18db, .a=0x28, .x=0x30, .y=0x38, .sp=0xec, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x18d9, .value=0x68}, {.addr=0x18da, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x18d9, .value=0x68, .type=IO_READ},
        {.addr=0x18da, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0115) {
    const struct CPU_State initial_cpu = {.pc=0xc679, .a=0x5b, .x=0x17, .y=0x96, .sp=0xfe, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xc679, .value=0x68}, {.addr=0xc67a, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xc67b, .a=0x5b, .x=0x17, .y=0x96, .sp=0xfe, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc679, .value=0x68}, {.addr=0xc67a, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xc679, .value=0x68, .type=IO_READ},
        {.addr=0xc67a, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0116) {
    const struct CPU_State initial_cpu = {.pc=0xa4f7, .a=0x79, .x=0x3c, .y=0x54, .sp=0xea, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xa4f7, .value=0x68}, {.addr=0xa4f8, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xa4f9, .a=0x79, .x=0x3c, .y=0x54, .sp=0xea, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa4f7, .value=0x68}, {.addr=0xa4f8, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xa4f7, .value=0x68, .type=IO_READ},
        {.addr=0xa4f8, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0117) {
    const struct CPU_State initial_cpu = {.pc=0x85e7, .a=0x43, .x=0x45, .y=0x2c, .sp=0x4a, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x85e7, .value=0x68}, {.addr=0x85e8, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x85e9, .a=0x43, .x=0x45, .y=0x2c, .sp=0x4a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x85e7, .value=0x68}, {.addr=0x85e8, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x85e7, .value=0x68, .type=IO_READ},
        {.addr=0x85e8, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0118) {
    const struct CPU_State initial_cpu = {.pc=0xbb0e, .a=0x86, .x=0xcd, .y=0x23, .sp=0x91, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xbb0e, .value=0x68}, {.addr=0xbb0f, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xbb10, .a=0x86, .x=0xcd, .y=0x23, .sp=0x91, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbb0e, .value=0x68}, {.addr=0xbb0f, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xbb0e, .value=0x68, .type=IO_READ},
        {.addr=0xbb0f, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0119) {
    const struct CPU_State initial_cpu = {.pc=0x7011, .a=0x19, .x=0x68, .y=0x16, .sp=0x13, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x7011, .value=0x68}, {.addr=0x7012, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x7013, .a=0x19, .x=0x68, .y=0x16, .sp=0x13, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7011, .value=0x68}, {.addr=0x7012, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x7011, .value=0x68, .type=IO_READ},
        {.addr=0x7012, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_011A) {
    const struct CPU_State initial_cpu = {.pc=0x3f40, .a=0xe3, .x=0x5c, .y=0xec, .sp=0x52, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x3f40, .value=0x68}, {.addr=0x3f41, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x3f42, .a=0xe3, .x=0x5c, .y=0xec, .sp=0x52, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3f40, .value=0x68}, {.addr=0x3f41, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x3f40, .value=0x68, .type=IO_READ},
        {.addr=0x3f41, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_011B) {
    const struct CPU_State initial_cpu = {.pc=0x9949, .a=0xd1, .x=0x18, .y=0x33, .sp=0xe2, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9949, .value=0x68}, {.addr=0x994a, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x994b, .a=0xd1, .x=0x18, .y=0x33, .sp=0xe2, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9949, .value=0x68}, {.addr=0x994a, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x9949, .value=0x68, .type=IO_READ},
        {.addr=0x994a, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_011C) {
    const struct CPU_State initial_cpu = {.pc=0xe4ff, .a=0x68, .x=0x09, .y=0x2f, .sp=0x61, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ff, .value=0x68}, {.addr=0xe500, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xe501, .a=0x68, .x=0x09, .y=0x2f, .sp=0x61, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe4ff, .value=0x68}, {.addr=0xe500, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xe4ff, .value=0x68, .type=IO_READ},
        {.addr=0xe500, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_011D) {
    const struct CPU_State initial_cpu = {.pc=0xab03, .a=0xcb, .x=0xc1, .y=0x09, .sp=0x58, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xab03, .value=0x68}, {.addr=0xab04, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xab05, .a=0xcb, .x=0xc1, .y=0x09, .sp=0x58, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xab03, .value=0x68}, {.addr=0xab04, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xab03, .value=0x68, .type=IO_READ},
        {.addr=0xab04, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_011E) {
    const struct CPU_State initial_cpu = {.pc=0x396d, .a=0x6a, .x=0x81, .y=0x31, .sp=0x47, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x396d, .value=0x68}, {.addr=0x396e, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x396f, .a=0x6a, .x=0x81, .y=0x31, .sp=0x47, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x396d, .value=0x68}, {.addr=0x396e, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x396d, .value=0x68, .type=IO_READ},
        {.addr=0x396e, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_011F) {
    const struct CPU_State initial_cpu = {.pc=0x8e4c, .a=0x91, .x=0x23, .y=0x58, .sp=0x57, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x8e4c, .value=0x68}, {.addr=0x8e4d, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x8e4e, .a=0x91, .x=0x23, .y=0x58, .sp=0x57, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8e4c, .value=0x68}, {.addr=0x8e4d, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x8e4c, .value=0x68, .type=IO_READ},
        {.addr=0x8e4d, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0120) {
    const struct CPU_State initial_cpu = {.pc=0x6e1a, .a=0x19, .x=0xc4, .y=0x43, .sp=0x82, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x6e1a, .value=0x68}, {.addr=0x6e1b, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x6e1c, .a=0x19, .x=0xc4, .y=0x43, .sp=0x82, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6e1a, .value=0x68}, {.addr=0x6e1b, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x6e1a, .value=0x68, .type=IO_READ},
        {.addr=0x6e1b, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0121) {
    const struct CPU_State initial_cpu = {.pc=0x4303, .a=0x69, .x=0xc2, .y=0x05, .sp=0x67, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4303, .value=0x68}, {.addr=0x4304, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x4305, .a=0x69, .x=0xc2, .y=0x05, .sp=0x67, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4303, .value=0x68}, {.addr=0x4304, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x4303, .value=0x68, .type=IO_READ},
        {.addr=0x4304, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0122) {
    const struct CPU_State initial_cpu = {.pc=0x75a9, .a=0x1f, .x=0xae, .y=0x58, .sp=0x4f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x75a9, .value=0x68}, {.addr=0x75aa, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x75ab, .a=0x1f, .x=0xae, .y=0x58, .sp=0x4f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x75a9, .value=0x68}, {.addr=0x75aa, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x75a9, .value=0x68, .type=IO_READ},
        {.addr=0x75aa, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0123) {
    const struct CPU_State initial_cpu = {.pc=0xfc0f, .a=0x96, .x=0xc2, .y=0x6c, .sp=0x36, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xfc0f, .value=0x68}, {.addr=0xfc10, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xfc11, .a=0x96, .x=0xc2, .y=0x6c, .sp=0x36, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xfc0f, .value=0x68}, {.addr=0xfc10, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xfc0f, .value=0x68, .type=IO_READ},
        {.addr=0xfc10, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0124) {
    const struct CPU_State initial_cpu = {.pc=0xabaf, .a=0x69, .x=0x92, .y=0xf8, .sp=0x0c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xabaf, .value=0x68}, {.addr=0xabb0, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xabb1, .a=0x69, .x=0x92, .y=0xf8, .sp=0x0c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xabaf, .value=0x68}, {.addr=0xabb0, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xabaf, .value=0x68, .type=IO_READ},
        {.addr=0xabb0, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0125) {
    const struct CPU_State initial_cpu = {.pc=0x9281, .a=0xfe, .x=0x3f, .y=0x22, .sp=0x2d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x9281, .value=0x68}, {.addr=0x9282, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x9283, .a=0xfe, .x=0x3f, .y=0x22, .sp=0x2d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9281, .value=0x68}, {.addr=0x9282, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x9281, .value=0x68, .type=IO_READ},
        {.addr=0x9282, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0126) {
    const struct CPU_State initial_cpu = {.pc=0x4387, .a=0x9a, .x=0xde, .y=0x04, .sp=0x11, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x4387, .value=0x68}, {.addr=0x4388, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4389, .a=0x9a, .x=0xde, .y=0x04, .sp=0x11, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4387, .value=0x68}, {.addr=0x4388, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4387, .value=0x68, .type=IO_READ},
        {.addr=0x4388, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0127) {
    const struct CPU_State initial_cpu = {.pc=0x6338, .a=0x63, .x=0x32, .y=0x65, .sp=0x64, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x6338, .value=0x68}, {.addr=0x6339, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x633a, .a=0x63, .x=0x32, .y=0x65, .sp=0x64, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6338, .value=0x68}, {.addr=0x6339, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x6338, .value=0x68, .type=IO_READ},
        {.addr=0x6339, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0128) {
    const struct CPU_State initial_cpu = {.pc=0xa078, .a=0x5f, .x=0x86, .y=0x97, .sp=0xcc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xa078, .value=0x68}, {.addr=0xa079, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xa07a, .a=0x5f, .x=0x86, .y=0x97, .sp=0xcc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa078, .value=0x68}, {.addr=0xa079, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xa078, .value=0x68, .type=IO_READ},
        {.addr=0xa079, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0129) {
    const struct CPU_State initial_cpu = {.pc=0x8be4, .a=0x19, .x=0xc5, .y=0x65, .sp=0x1c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8be4, .value=0x68}, {.addr=0x8be5, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x8be6, .a=0x19, .x=0xc5, .y=0x65, .sp=0x1c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8be4, .value=0x68}, {.addr=0x8be5, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x8be4, .value=0x68, .type=IO_READ},
        {.addr=0x8be5, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_012A) {
    const struct CPU_State initial_cpu = {.pc=0xf2dc, .a=0x91, .x=0xca, .y=0xb2, .sp=0x0d, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xf2dc, .value=0x68}, {.addr=0xf2dd, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xf2de, .a=0x91, .x=0xca, .y=0xb2, .sp=0x0d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xf2dc, .value=0x68}, {.addr=0xf2dd, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xf2dc, .value=0x68, .type=IO_READ},
        {.addr=0xf2dd, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_012B) {
    const struct CPU_State initial_cpu = {.pc=0x2ca9, .a=0x09, .x=0x79, .y=0xfb, .sp=0x17, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x2ca9, .value=0x68}, {.addr=0x2caa, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x2cab, .a=0x09, .x=0x79, .y=0xfb, .sp=0x17, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x2ca9, .value=0x68}, {.addr=0x2caa, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x2ca9, .value=0x68, .type=IO_READ},
        {.addr=0x2caa, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_012C) {
    const struct CPU_State initial_cpu = {.pc=0x1de9, .a=0x5c, .x=0x2f, .y=0x7b, .sp=0x2b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x1de9, .value=0x68}, {.addr=0x1dea, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x1deb, .a=0x5c, .x=0x2f, .y=0x7b, .sp=0x2b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1de9, .value=0x68}, {.addr=0x1dea, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x1de9, .value=0x68, .type=IO_READ},
        {.addr=0x1dea, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_012D) {
    const struct CPU_State initial_cpu = {.pc=0xde5d, .a=0x31, .x=0xa8, .y=0x81, .sp=0xf4, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xde5d, .value=0x68}, {.addr=0xde5e, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xde5f, .a=0x31, .x=0xa8, .y=0x81, .sp=0xf4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xde5d, .value=0x68}, {.addr=0xde5e, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xde5d, .value=0x68, .type=IO_READ},
        {.addr=0xde5e, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_012E) {
    const struct CPU_State initial_cpu = {.pc=0xf95e, .a=0xdc, .x=0x9d, .y=0x4d, .sp=0x70, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf95e, .value=0x68}, {.addr=0xf95f, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xf960, .a=0xdc, .x=0x9d, .y=0x4d, .sp=0x70, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf95e, .value=0x68}, {.addr=0xf95f, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xf95e, .value=0x68, .type=IO_READ},
        {.addr=0xf95f, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_012F) {
    const struct CPU_State initial_cpu = {.pc=0xcbb6, .a=0xf4, .x=0x6f, .y=0xa2, .sp=0x37, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xcbb6, .value=0x68}, {.addr=0xcbb7, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xcbb8, .a=0xf4, .x=0x6f, .y=0xa2, .sp=0x37, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xcbb6, .value=0x68}, {.addr=0xcbb7, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xcbb6, .value=0x68, .type=IO_READ},
        {.addr=0xcbb7, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0130) {
    const struct CPU_State initial_cpu = {.pc=0x3500, .a=0x2d, .x=0xf0, .y=0x95, .sp=0x15, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x3500, .value=0x68}, {.addr=0x3501, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x3502, .a=0x2d, .x=0xf0, .y=0x95, .sp=0x15, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x3500, .value=0x68}, {.addr=0x3501, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x3500, .value=0x68, .type=IO_READ},
        {.addr=0x3501, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0131) {
    const struct CPU_State initial_cpu = {.pc=0xdfba, .a=0x62, .x=0x7b, .y=0x83, .sp=0xb4, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xdfba, .value=0x68}, {.addr=0xdfbb, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xdfbc, .a=0x62, .x=0x7b, .y=0x83, .sp=0xb4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xdfba, .value=0x68}, {.addr=0xdfbb, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xdfba, .value=0x68, .type=IO_READ},
        {.addr=0xdfbb, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0132) {
    const struct CPU_State initial_cpu = {.pc=0x1222, .a=0x4b, .x=0x91, .y=0xd8, .sp=0x0c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x1222, .value=0x68}, {.addr=0x1223, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x1224, .a=0x4b, .x=0x91, .y=0xd8, .sp=0x0c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1222, .value=0x68}, {.addr=0x1223, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x1222, .value=0x68, .type=IO_READ},
        {.addr=0x1223, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0133) {
    const struct CPU_State initial_cpu = {.pc=0x6718, .a=0x6d, .x=0xf2, .y=0xd6, .sp=0x5b, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x6718, .value=0x68}, {.addr=0x6719, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x671a, .a=0x6d, .x=0xf2, .y=0xd6, .sp=0x5b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6718, .value=0x68}, {.addr=0x6719, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x6718, .value=0x68, .type=IO_READ},
        {.addr=0x6719, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0134) {
    const struct CPU_State initial_cpu = {.pc=0x8da8, .a=0x74, .x=0x53, .y=0xdb, .sp=0x7e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8da8, .value=0x68}, {.addr=0x8da9, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x8daa, .a=0x74, .x=0x53, .y=0xdb, .sp=0x7e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8da8, .value=0x68}, {.addr=0x8da9, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x8da8, .value=0x68, .type=IO_READ},
        {.addr=0x8da9, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0135) {
    const struct CPU_State initial_cpu = {.pc=0x5a29, .a=0x3a, .x=0x6d, .y=0x95, .sp=0xe5, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x5a29, .value=0x68}, {.addr=0x5a2a, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x5a2b, .a=0x3a, .x=0x6d, .y=0x95, .sp=0xe5, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x5a29, .value=0x68}, {.addr=0x5a2a, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x5a29, .value=0x68, .type=IO_READ},
        {.addr=0x5a2a, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0136) {
    const struct CPU_State initial_cpu = {.pc=0x765d, .a=0x45, .x=0x8c, .y=0xa4, .sp=0x4e, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x765d, .value=0x68}, {.addr=0x765e, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x765f, .a=0x45, .x=0x8c, .y=0xa4, .sp=0x4e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x765d, .value=0x68}, {.addr=0x765e, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x765d, .value=0x68, .type=IO_READ},
        {.addr=0x765e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0137) {
    const struct CPU_State initial_cpu = {.pc=0xc5a6, .a=0x3e, .x=0x64, .y=0xf8, .sp=0x5c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a6, .value=0x68}, {.addr=0xc5a7, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xc5a8, .a=0x3e, .x=0x64, .y=0xf8, .sp=0x5c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc5a6, .value=0x68}, {.addr=0xc5a7, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xc5a6, .value=0x68, .type=IO_READ},
        {.addr=0xc5a7, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0138) {
    const struct CPU_State initial_cpu = {.pc=0x0d28, .a=0xd2, .x=0x33, .y=0x1f, .sp=0x64, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0d28, .value=0x68}, {.addr=0x0d29, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x0d2a, .a=0xd2, .x=0x33, .y=0x1f, .sp=0x64, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0d28, .value=0x68}, {.addr=0x0d29, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x0d28, .value=0x68, .type=IO_READ},
        {.addr=0x0d29, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0139) {
    const struct CPU_State initial_cpu = {.pc=0xece1, .a=0xa2, .x=0x94, .y=0x10, .sp=0x1b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xece1, .value=0x68}, {.addr=0xece2, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xece3, .a=0xa2, .x=0x94, .y=0x10, .sp=0x1b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xece1, .value=0x68}, {.addr=0xece2, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xece1, .value=0x68, .type=IO_READ},
        {.addr=0xece2, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_013A) {
    const struct CPU_State initial_cpu = {.pc=0xc26c, .a=0x99, .x=0xe1, .y=0xa0, .sp=0x99, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xc26c, .value=0x68}, {.addr=0xc26d, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xc26e, .a=0x99, .x=0xe1, .y=0xa0, .sp=0x99, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc26c, .value=0x68}, {.addr=0xc26d, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xc26c, .value=0x68, .type=IO_READ},
        {.addr=0xc26d, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_013B) {
    const struct CPU_State initial_cpu = {.pc=0xe612, .a=0x0e, .x=0x4c, .y=0x67, .sp=0x12, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xe612, .value=0x68}, {.addr=0xe613, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xe614, .a=0x0e, .x=0x4c, .y=0x67, .sp=0x12, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe612, .value=0x68}, {.addr=0xe613, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xe612, .value=0x68, .type=IO_READ},
        {.addr=0xe613, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_013C) {
    const struct CPU_State initial_cpu = {.pc=0x6d2c, .a=0x4c, .x=0x05, .y=0x5d, .sp=0xd4, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x6d2c, .value=0x68}, {.addr=0x6d2d, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x6d2e, .a=0x4c, .x=0x05, .y=0x5d, .sp=0xd4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6d2c, .value=0x68}, {.addr=0x6d2d, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x6d2c, .value=0x68, .type=IO_READ},
        {.addr=0x6d2d, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_013D) {
    const struct CPU_State initial_cpu = {.pc=0xaffe, .a=0xe8, .x=0x54, .y=0xc0, .sp=0xf3, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xaffe, .value=0x68}, {.addr=0xafff, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xb000, .a=0xe8, .x=0x54, .y=0xc0, .sp=0xf3, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xaffe, .value=0x68}, {.addr=0xafff, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xaffe, .value=0x68, .type=IO_READ},
        {.addr=0xafff, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_013E) {
    const struct CPU_State initial_cpu = {.pc=0x651e, .a=0x8b, .x=0xe7, .y=0x85, .sp=0x97, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x651e, .value=0x68}, {.addr=0x651f, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x6520, .a=0x8b, .x=0xe7, .y=0x85, .sp=0x97, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x651e, .value=0x68}, {.addr=0x651f, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x651e, .value=0x68, .type=IO_READ},
        {.addr=0x651f, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_013F) {
    const struct CPU_State initial_cpu = {.pc=0x0a65, .a=0xe2, .x=0xb9, .y=0x5e, .sp=0xd8, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0a65, .value=0x68}, {.addr=0x0a66, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x0a67, .a=0xe2, .x=0xb9, .y=0x5e, .sp=0xd8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0a65, .value=0x68}, {.addr=0x0a66, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x0a65, .value=0x68, .type=IO_READ},
        {.addr=0x0a66, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0140) {
    const struct CPU_State initial_cpu = {.pc=0x2e55, .a=0x1f, .x=0x91, .y=0x45, .sp=0x64, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2e55, .value=0x68}, {.addr=0x2e56, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x2e57, .a=0x1f, .x=0x91, .y=0x45, .sp=0x64, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2e55, .value=0x68}, {.addr=0x2e56, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x2e55, .value=0x68, .type=IO_READ},
        {.addr=0x2e56, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0141) {
    const struct CPU_State initial_cpu = {.pc=0x3cce, .a=0xfd, .x=0x1c, .y=0xc3, .sp=0xa1, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x3cce, .value=0x68}, {.addr=0x3ccf, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x3cd0, .a=0xfd, .x=0x1c, .y=0xc3, .sp=0xa1, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3cce, .value=0x68}, {.addr=0x3ccf, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x3cce, .value=0x68, .type=IO_READ},
        {.addr=0x3ccf, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0142) {
    const struct CPU_State initial_cpu = {.pc=0xeed2, .a=0xa1, .x=0xc9, .y=0x7f, .sp=0xd7, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xeed2, .value=0x68}, {.addr=0xeed3, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xeed4, .a=0xa1, .x=0xc9, .y=0x7f, .sp=0xd7, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xeed2, .value=0x68}, {.addr=0xeed3, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xeed2, .value=0x68, .type=IO_READ},
        {.addr=0xeed3, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0143) {
    const struct CPU_State initial_cpu = {.pc=0x58be, .a=0xec, .x=0xaa, .y=0xbd, .sp=0xdb, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x58be, .value=0x68}, {.addr=0x58bf, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x58c0, .a=0xec, .x=0xaa, .y=0xbd, .sp=0xdb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x58be, .value=0x68}, {.addr=0x58bf, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x58be, .value=0x68, .type=IO_READ},
        {.addr=0x58bf, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0144) {
    const struct CPU_State initial_cpu = {.pc=0xf3a2, .a=0x53, .x=0xcd, .y=0xbe, .sp=0x7f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a2, .value=0x68}, {.addr=0xf3a3, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xf3a4, .a=0x53, .x=0xcd, .y=0xbe, .sp=0x7f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf3a2, .value=0x68}, {.addr=0xf3a3, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xf3a2, .value=0x68, .type=IO_READ},
        {.addr=0xf3a3, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0145) {
    const struct CPU_State initial_cpu = {.pc=0xb9f0, .a=0x13, .x=0x96, .y=0xae, .sp=0x0e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f0, .value=0x68}, {.addr=0xb9f1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb9f2, .a=0x13, .x=0x96, .y=0xae, .sp=0x0e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb9f0, .value=0x68}, {.addr=0xb9f1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb9f0, .value=0x68, .type=IO_READ},
        {.addr=0xb9f1, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0146) {
    const struct CPU_State initial_cpu = {.pc=0x0861, .a=0x52, .x=0x28, .y=0xfb, .sp=0x0e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0861, .value=0x68}, {.addr=0x0862, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x0863, .a=0x52, .x=0x28, .y=0xfb, .sp=0x0e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0861, .value=0x68}, {.addr=0x0862, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x0861, .value=0x68, .type=IO_READ},
        {.addr=0x0862, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0147) {
    const struct CPU_State initial_cpu = {.pc=0x759f, .a=0xc2, .x=0xe3, .y=0x1a, .sp=0x9e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x759f, .value=0x68}, {.addr=0x75a0, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x75a1, .a=0xc2, .x=0xe3, .y=0x1a, .sp=0x9e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x759f, .value=0x68}, {.addr=0x75a0, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x759f, .value=0x68, .type=IO_READ},
        {.addr=0x75a0, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0148) {
    const struct CPU_State initial_cpu = {.pc=0x3721, .a=0xd9, .x=0x9c, .y=0x98, .sp=0xd9, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x3721, .value=0x68}, {.addr=0x3722, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x3723, .a=0xd9, .x=0x9c, .y=0x98, .sp=0xd9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3721, .value=0x68}, {.addr=0x3722, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x3721, .value=0x68, .type=IO_READ},
        {.addr=0x3722, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0149) {
    const struct CPU_State initial_cpu = {.pc=0xcde4, .a=0x5e, .x=0xf0, .y=0x80, .sp=0x32, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xcde4, .value=0x68}, {.addr=0xcde5, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xcde6, .a=0x5e, .x=0xf0, .y=0x80, .sp=0x32, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xcde4, .value=0x68}, {.addr=0xcde5, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xcde4, .value=0x68, .type=IO_READ},
        {.addr=0xcde5, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_014A) {
    const struct CPU_State initial_cpu = {.pc=0x6997, .a=0x95, .x=0x65, .y=0x69, .sp=0x27, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6997, .value=0x68}, {.addr=0x6998, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x6999, .a=0x95, .x=0x65, .y=0x69, .sp=0x27, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6997, .value=0x68}, {.addr=0x6998, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x6997, .value=0x68, .type=IO_READ},
        {.addr=0x6998, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_014B) {
    const struct CPU_State initial_cpu = {.pc=0xc687, .a=0x6e, .x=0x58, .y=0xe6, .sp=0x9b, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xc687, .value=0x68}, {.addr=0xc688, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xc689, .a=0x6e, .x=0x58, .y=0xe6, .sp=0x9b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc687, .value=0x68}, {.addr=0xc688, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xc687, .value=0x68, .type=IO_READ},
        {.addr=0xc688, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_014C) {
    const struct CPU_State initial_cpu = {.pc=0xcefa, .a=0x53, .x=0x13, .y=0xf9, .sp=0x32, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xcefa, .value=0x68}, {.addr=0xcefb, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xcefc, .a=0x53, .x=0x13, .y=0xf9, .sp=0x32, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xcefa, .value=0x68}, {.addr=0xcefb, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xcefa, .value=0x68, .type=IO_READ},
        {.addr=0xcefb, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_014D) {
    const struct CPU_State initial_cpu = {.pc=0x889e, .a=0x1a, .x=0x22, .y=0x7d, .sp=0x09, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x889e, .value=0x68}, {.addr=0x889f, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x88a0, .a=0x1a, .x=0x22, .y=0x7d, .sp=0x09, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x889e, .value=0x68}, {.addr=0x889f, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x889e, .value=0x68, .type=IO_READ},
        {.addr=0x889f, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_014E) {
    const struct CPU_State initial_cpu = {.pc=0x887d, .a=0x3a, .x=0x13, .y=0x31, .sp=0x56, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x887d, .value=0x68}, {.addr=0x887e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x887f, .a=0x3a, .x=0x13, .y=0x31, .sp=0x56, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x887d, .value=0x68}, {.addr=0x887e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x887d, .value=0x68, .type=IO_READ},
        {.addr=0x887e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_014F) {
    const struct CPU_State initial_cpu = {.pc=0x940a, .a=0x5e, .x=0x1e, .y=0x8a, .sp=0x71, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x940a, .value=0x68}, {.addr=0x940b, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x940c, .a=0x5e, .x=0x1e, .y=0x8a, .sp=0x71, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x940a, .value=0x68}, {.addr=0x940b, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x940a, .value=0x68, .type=IO_READ},
        {.addr=0x940b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0150) {
    const struct CPU_State initial_cpu = {.pc=0xd0eb, .a=0xd1, .x=0x22, .y=0x24, .sp=0xa7, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xd0eb, .value=0x68}, {.addr=0xd0ec, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xd0ed, .a=0xd1, .x=0x22, .y=0x24, .sp=0xa7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd0eb, .value=0x68}, {.addr=0xd0ec, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xd0eb, .value=0x68, .type=IO_READ},
        {.addr=0xd0ec, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0151) {
    const struct CPU_State initial_cpu = {.pc=0xa4d2, .a=0x29, .x=0xdd, .y=0xa3, .sp=0x2f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa4d2, .value=0x68}, {.addr=0xa4d3, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa4d4, .a=0x29, .x=0xdd, .y=0xa3, .sp=0x2f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa4d2, .value=0x68}, {.addr=0xa4d3, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa4d2, .value=0x68, .type=IO_READ},
        {.addr=0xa4d3, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0153) {
    const struct CPU_State initial_cpu = {.pc=0x3829, .a=0x9d, .x=0xce, .y=0x67, .sp=0x9a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x3829, .value=0x68}, {.addr=0x382a, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x382b, .a=0x9d, .x=0xce, .y=0x67, .sp=0x9a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3829, .value=0x68}, {.addr=0x382a, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x3829, .value=0x68, .type=IO_READ},
        {.addr=0x382a, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0154) {
    const struct CPU_State initial_cpu = {.pc=0x1f2a, .a=0xe7, .x=0x0c, .y=0x5a, .sp=0xd4, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x1f2a, .value=0x68}, {.addr=0x1f2b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1f2c, .a=0xe7, .x=0x0c, .y=0x5a, .sp=0xd4, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1f2a, .value=0x68}, {.addr=0x1f2b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x1f2a, .value=0x68, .type=IO_READ},
        {.addr=0x1f2b, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0155) {
    const struct CPU_State initial_cpu = {.pc=0xc667, .a=0x30, .x=0xb4, .y=0x43, .sp=0x73, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xc667, .value=0x68}, {.addr=0xc668, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xc669, .a=0x30, .x=0xb4, .y=0x43, .sp=0x73, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc667, .value=0x68}, {.addr=0xc668, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xc667, .value=0x68, .type=IO_READ},
        {.addr=0xc668, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0156) {
    const struct CPU_State initial_cpu = {.pc=0x4b79, .a=0xef, .x=0x6e, .y=0xab, .sp=0x9f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x4b79, .value=0x68}, {.addr=0x4b7a, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x4b7b, .a=0xef, .x=0x6e, .y=0xab, .sp=0x9f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x4b79, .value=0x68}, {.addr=0x4b7a, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x4b79, .value=0x68, .type=IO_READ},
        {.addr=0x4b7a, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0157) {
    const struct CPU_State initial_cpu = {.pc=0x1c19, .a=0x23, .x=0x92, .y=0xd0, .sp=0x92, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x1c19, .value=0x68}, {.addr=0x1c1a, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x1c1b, .a=0x23, .x=0x92, .y=0xd0, .sp=0x92, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1c19, .value=0x68}, {.addr=0x1c1a, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x1c19, .value=0x68, .type=IO_READ},
        {.addr=0x1c1a, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0158) {
    const struct CPU_State initial_cpu = {.pc=0xc001, .a=0x28, .x=0x7e, .y=0x9e, .sp=0x69, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc001, .value=0x68}, {.addr=0xc002, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xc003, .a=0x28, .x=0x7e, .y=0x9e, .sp=0x69, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc001, .value=0x68}, {.addr=0xc002, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xc001, .value=0x68, .type=IO_READ},
        {.addr=0xc002, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0159) {
    const struct CPU_State initial_cpu = {.pc=0x426d, .a=0x18, .x=0x4c, .y=0xb8, .sp=0x44, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x426d, .value=0x68}, {.addr=0x426e, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x426f, .a=0x18, .x=0x4c, .y=0xb8, .sp=0x44, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x426d, .value=0x68}, {.addr=0x426e, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x426d, .value=0x68, .type=IO_READ},
        {.addr=0x426e, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_015A) {
    const struct CPU_State initial_cpu = {.pc=0x77b3, .a=0xf8, .x=0x3a, .y=0x79, .sp=0x00, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x77b3, .value=0x68}, {.addr=0x77b4, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x77b5, .a=0xf8, .x=0x3a, .y=0x79, .sp=0x00, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x77b3, .value=0x68}, {.addr=0x77b4, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x77b3, .value=0x68, .type=IO_READ},
        {.addr=0x77b4, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_015B) {
    const struct CPU_State initial_cpu = {.pc=0x97f5, .a=0xd3, .x=0xd0, .y=0x7e, .sp=0x8a, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x97f5, .value=0x68}, {.addr=0x97f6, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x97f7, .a=0xd3, .x=0xd0, .y=0x7e, .sp=0x8a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x97f5, .value=0x68}, {.addr=0x97f6, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x97f5, .value=0x68, .type=IO_READ},
        {.addr=0x97f6, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_015C) {
    const struct CPU_State initial_cpu = {.pc=0x1369, .a=0x4e, .x=0x2e, .y=0xc0, .sp=0x1e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x1369, .value=0x68}, {.addr=0x136a, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x136b, .a=0x4e, .x=0x2e, .y=0xc0, .sp=0x1e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1369, .value=0x68}, {.addr=0x136a, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x1369, .value=0x68, .type=IO_READ},
        {.addr=0x136a, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_015D) {
    const struct CPU_State initial_cpu = {.pc=0x63bc, .a=0x7a, .x=0x20, .y=0xa2, .sp=0x0e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x63bc, .value=0x68}, {.addr=0x63bd, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x63be, .a=0x7a, .x=0x20, .y=0xa2, .sp=0x0e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x63bc, .value=0x68}, {.addr=0x63bd, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x63bc, .value=0x68, .type=IO_READ},
        {.addr=0x63bd, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_015E) {
    const struct CPU_State initial_cpu = {.pc=0x22a4, .a=0x0f, .x=0x61, .y=0xfd, .sp=0xb1, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x22a4, .value=0x68}, {.addr=0x22a5, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x22a6, .a=0x0f, .x=0x61, .y=0xfd, .sp=0xb1, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x22a4, .value=0x68}, {.addr=0x22a5, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x22a4, .value=0x68, .type=IO_READ},
        {.addr=0x22a5, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_015F) {
    const struct CPU_State initial_cpu = {.pc=0xafb3, .a=0x3f, .x=0xbf, .y=0x4e, .sp=0x6c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xafb3, .value=0x68}, {.addr=0xafb4, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xafb5, .a=0x3f, .x=0xbf, .y=0x4e, .sp=0x6c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xafb3, .value=0x68}, {.addr=0xafb4, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xafb3, .value=0x68, .type=IO_READ},
        {.addr=0xafb4, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0160) {
    const struct CPU_State initial_cpu = {.pc=0x36b2, .a=0x15, .x=0x28, .y=0xca, .sp=0xa9, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x36b2, .value=0x68}, {.addr=0x36b3, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x36b4, .a=0x15, .x=0x28, .y=0xca, .sp=0xa9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x36b2, .value=0x68}, {.addr=0x36b3, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x36b2, .value=0x68, .type=IO_READ},
        {.addr=0x36b3, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0161) {
    const struct CPU_State initial_cpu = {.pc=0xbd34, .a=0x7f, .x=0xe7, .y=0x91, .sp=0x76, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xbd34, .value=0x68}, {.addr=0xbd35, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xbd36, .a=0x7f, .x=0xe7, .y=0x91, .sp=0x76, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xbd34, .value=0x68}, {.addr=0xbd35, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xbd34, .value=0x68, .type=IO_READ},
        {.addr=0xbd35, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0162) {
    const struct CPU_State initial_cpu = {.pc=0x7ce6, .a=0x12, .x=0x9b, .y=0xb9, .sp=0xa9, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x7ce6, .value=0x68}, {.addr=0x7ce7, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x7ce8, .a=0x12, .x=0x9b, .y=0xb9, .sp=0xa9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7ce6, .value=0x68}, {.addr=0x7ce7, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x7ce6, .value=0x68, .type=IO_READ},
        {.addr=0x7ce7, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0163) {
    const struct CPU_State initial_cpu = {.pc=0x3a26, .a=0x24, .x=0xf6, .y=0xdd, .sp=0x94, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x3a26, .value=0x68}, {.addr=0x3a27, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x3a28, .a=0x24, .x=0xf6, .y=0xdd, .sp=0x94, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3a26, .value=0x68}, {.addr=0x3a27, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x3a26, .value=0x68, .type=IO_READ},
        {.addr=0x3a27, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0164) {
    const struct CPU_State initial_cpu = {.pc=0x0c80, .a=0x7d, .x=0x9e, .y=0xc1, .sp=0xff, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0c80, .value=0x68}, {.addr=0x0c81, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x0c82, .a=0x7d, .x=0x9e, .y=0xc1, .sp=0xff, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0c80, .value=0x68}, {.addr=0x0c81, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x0c80, .value=0x68, .type=IO_READ},
        {.addr=0x0c81, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0165) {
    const struct CPU_State initial_cpu = {.pc=0xe94c, .a=0xcd, .x=0x7d, .y=0x72, .sp=0x3f, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe94c, .value=0x68}, {.addr=0xe94d, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xe94e, .a=0xcd, .x=0x7d, .y=0x72, .sp=0x3f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe94c, .value=0x68}, {.addr=0xe94d, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xe94c, .value=0x68, .type=IO_READ},
        {.addr=0xe94d, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0166) {
    const struct CPU_State initial_cpu = {.pc=0xe04f, .a=0xc5, .x=0x0c, .y=0xe0, .sp=0xa1, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe04f, .value=0x68}, {.addr=0xe050, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xe051, .a=0xc5, .x=0x0c, .y=0xe0, .sp=0xa1, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xe04f, .value=0x68}, {.addr=0xe050, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xe04f, .value=0x68, .type=IO_READ},
        {.addr=0xe050, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0167) {
    const struct CPU_State initial_cpu = {.pc=0x516b, .a=0x31, .x=0x3b, .y=0x03, .sp=0xfe, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x516b, .value=0x68}, {.addr=0x516c, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x516d, .a=0x31, .x=0x3b, .y=0x03, .sp=0xfe, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x516b, .value=0x68}, {.addr=0x516c, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x516b, .value=0x68, .type=IO_READ},
        {.addr=0x516c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0168) {
    const struct CPU_State initial_cpu = {.pc=0x0630, .a=0xcc, .x=0x8e, .y=0xcc, .sp=0xe1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0630, .value=0x68}, {.addr=0x0631, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x0632, .a=0xcc, .x=0x8e, .y=0xcc, .sp=0xe1, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0630, .value=0x68}, {.addr=0x0631, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x0630, .value=0x68, .type=IO_READ},
        {.addr=0x0631, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0169) {
    const struct CPU_State initial_cpu = {.pc=0x1c03, .a=0x2d, .x=0x20, .y=0xbb, .sp=0x3f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1c03, .value=0x68}, {.addr=0x1c04, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x1c05, .a=0x2d, .x=0x20, .y=0xbb, .sp=0x3f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1c03, .value=0x68}, {.addr=0x1c04, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x1c03, .value=0x68, .type=IO_READ},
        {.addr=0x1c04, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_016A) {
    const struct CPU_State initial_cpu = {.pc=0x0a64, .a=0x6e, .x=0x48, .y=0x0e, .sp=0x4a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0a64, .value=0x68}, {.addr=0x0a65, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x0a66, .a=0x6e, .x=0x48, .y=0x0e, .sp=0x4a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0a64, .value=0x68}, {.addr=0x0a65, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x0a64, .value=0x68, .type=IO_READ},
        {.addr=0x0a65, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_016B) {
    const struct CPU_State initial_cpu = {.pc=0xdb65, .a=0x61, .x=0xef, .y=0x42, .sp=0x81, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xdb65, .value=0x68}, {.addr=0xdb66, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xdb67, .a=0x61, .x=0xef, .y=0x42, .sp=0x81, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xdb65, .value=0x68}, {.addr=0xdb66, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xdb65, .value=0x68, .type=IO_READ},
        {.addr=0xdb66, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_016C) {
    const struct CPU_State initial_cpu = {.pc=0x86f9, .a=0xc6, .x=0x87, .y=0x73, .sp=0x38, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x86f9, .value=0x68}, {.addr=0x86fa, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x86fb, .a=0xc6, .x=0x87, .y=0x73, .sp=0x38, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x86f9, .value=0x68}, {.addr=0x86fa, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x86f9, .value=0x68, .type=IO_READ},
        {.addr=0x86fa, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_016D) {
    const struct CPU_State initial_cpu = {.pc=0x77cd, .a=0xb0, .x=0x49, .y=0xdf, .sp=0x43, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x77cd, .value=0x68}, {.addr=0x77ce, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x77cf, .a=0xb0, .x=0x49, .y=0xdf, .sp=0x43, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x77cd, .value=0x68}, {.addr=0x77ce, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x77cd, .value=0x68, .type=IO_READ},
        {.addr=0x77ce, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_016E) {
    const struct CPU_State initial_cpu = {.pc=0xf692, .a=0x3d, .x=0x25, .y=0xb5, .sp=0x40, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf692, .value=0x68}, {.addr=0xf693, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xf694, .a=0x3d, .x=0x25, .y=0xb5, .sp=0x40, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf692, .value=0x68}, {.addr=0xf693, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xf692, .value=0x68, .type=IO_READ},
        {.addr=0xf693, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_016F) {
    const struct CPU_State initial_cpu = {.pc=0xc4f6, .a=0xb4, .x=0x7a, .y=0xe5, .sp=0x7c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xc4f6, .value=0x68}, {.addr=0xc4f7, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xc4f8, .a=0xb4, .x=0x7a, .y=0xe5, .sp=0x7c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xc4f6, .value=0x68}, {.addr=0xc4f7, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xc4f6, .value=0x68, .type=IO_READ},
        {.addr=0xc4f7, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0170) {
    const struct CPU_State initial_cpu = {.pc=0x2b39, .a=0x5d, .x=0x52, .y=0x7b, .sp=0x27, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x2b39, .value=0x68}, {.addr=0x2b3a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x2b3b, .a=0x5d, .x=0x52, .y=0x7b, .sp=0x27, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x2b39, .value=0x68}, {.addr=0x2b3a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x2b39, .value=0x68, .type=IO_READ},
        {.addr=0x2b3a, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0171) {
    const struct CPU_State initial_cpu = {.pc=0x40be, .a=0x37, .x=0x33, .y=0xd4, .sp=0x44, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x40be, .value=0x68}, {.addr=0x40bf, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x40c0, .a=0x37, .x=0x33, .y=0xd4, .sp=0x44, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x40be, .value=0x68}, {.addr=0x40bf, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x40be, .value=0x68, .type=IO_READ},
        {.addr=0x40bf, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0172) {
    const struct CPU_State initial_cpu = {.pc=0x0d2b, .a=0xb5, .x=0xba, .y=0x17, .sp=0x9b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0d2b, .value=0x68}, {.addr=0x0d2c, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x0d2d, .a=0xb5, .x=0xba, .y=0x17, .sp=0x9b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0d2b, .value=0x68}, {.addr=0x0d2c, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x0d2b, .value=0x68, .type=IO_READ},
        {.addr=0x0d2c, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0173) {
    const struct CPU_State initial_cpu = {.pc=0x8cfa, .a=0x76, .x=0xf4, .y=0x69, .sp=0x45, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x8cfa, .value=0x68}, {.addr=0x8cfb, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x8cfc, .a=0x76, .x=0xf4, .y=0x69, .sp=0x45, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8cfa, .value=0x68}, {.addr=0x8cfb, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x8cfa, .value=0x68, .type=IO_READ},
        {.addr=0x8cfb, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0174) {
    const struct CPU_State initial_cpu = {.pc=0x0f6e, .a=0x88, .x=0xb0, .y=0x27, .sp=0x9a, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0f6e, .value=0x68}, {.addr=0x0f6f, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x0f70, .a=0x88, .x=0xb0, .y=0x27, .sp=0x9a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0f6e, .value=0x68}, {.addr=0x0f6f, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x0f6e, .value=0x68, .type=IO_READ},
        {.addr=0x0f6f, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0175) {
    const struct CPU_State initial_cpu = {.pc=0x8fc6, .a=0x89, .x=0x5e, .y=0xa4, .sp=0xe5, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x8fc6, .value=0x68}, {.addr=0x8fc7, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x8fc8, .a=0x89, .x=0x5e, .y=0xa4, .sp=0xe5, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8fc6, .value=0x68}, {.addr=0x8fc7, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x8fc6, .value=0x68, .type=IO_READ},
        {.addr=0x8fc7, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0176) {
    const struct CPU_State initial_cpu = {.pc=0xd722, .a=0xcb, .x=0xcf, .y=0x58, .sp=0x85, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xd722, .value=0x68}, {.addr=0xd723, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xd724, .a=0xcb, .x=0xcf, .y=0x58, .sp=0x85, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xd722, .value=0x68}, {.addr=0xd723, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xd722, .value=0x68, .type=IO_READ},
        {.addr=0xd723, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0177) {
    const struct CPU_State initial_cpu = {.pc=0x1fc9, .a=0x6e, .x=0xde, .y=0x67, .sp=0x24, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc9, .value=0x68}, {.addr=0x1fca, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x1fcb, .a=0x6e, .x=0xde, .y=0x67, .sp=0x24, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1fc9, .value=0x68}, {.addr=0x1fca, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x1fc9, .value=0x68, .type=IO_READ},
        {.addr=0x1fca, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0178) {
    const struct CPU_State initial_cpu = {.pc=0x9fe5, .a=0xe1, .x=0x4c, .y=0xce, .sp=0xeb, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe5, .value=0x68}, {.addr=0x9fe6, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x9fe7, .a=0xe1, .x=0x4c, .y=0xce, .sp=0xeb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9fe5, .value=0x68}, {.addr=0x9fe6, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x9fe5, .value=0x68, .type=IO_READ},
        {.addr=0x9fe6, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0179) {
    const struct CPU_State initial_cpu = {.pc=0xe52b, .a=0xab, .x=0x4d, .y=0x9c, .sp=0x34, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xe52b, .value=0x68}, {.addr=0xe52c, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xe52d, .a=0xab, .x=0x4d, .y=0x9c, .sp=0x34, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe52b, .value=0x68}, {.addr=0xe52c, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xe52b, .value=0x68, .type=IO_READ},
        {.addr=0xe52c, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_017A) {
    const struct CPU_State initial_cpu = {.pc=0xf8ee, .a=0x39, .x=0x67, .y=0x11, .sp=0xab, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf8ee, .value=0x68}, {.addr=0xf8ef, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xf8f0, .a=0x39, .x=0x67, .y=0x11, .sp=0xab, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf8ee, .value=0x68}, {.addr=0xf8ef, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xf8ee, .value=0x68, .type=IO_READ},
        {.addr=0xf8ef, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_017B) {
    const struct CPU_State initial_cpu = {.pc=0xd66f, .a=0xa7, .x=0x9e, .y=0x83, .sp=0xd2, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xd66f, .value=0x68}, {.addr=0xd670, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd671, .a=0xa7, .x=0x9e, .y=0x83, .sp=0xd2, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xd66f, .value=0x68}, {.addr=0xd670, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd66f, .value=0x68, .type=IO_READ},
        {.addr=0xd670, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_017C) {
    const struct CPU_State initial_cpu = {.pc=0x8257, .a=0xd7, .x=0x56, .y=0x4b, .sp=0x7b, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x8257, .value=0x68}, {.addr=0x8258, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x8259, .a=0xd7, .x=0x56, .y=0x4b, .sp=0x7b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x8257, .value=0x68}, {.addr=0x8258, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x8257, .value=0x68, .type=IO_READ},
        {.addr=0x8258, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_017D) {
    const struct CPU_State initial_cpu = {.pc=0x92b6, .a=0x98, .x=0x37, .y=0xa5, .sp=0x30, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x92b6, .value=0x68}, {.addr=0x92b7, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x92b8, .a=0x98, .x=0x37, .y=0xa5, .sp=0x30, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x92b6, .value=0x68}, {.addr=0x92b7, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x92b6, .value=0x68, .type=IO_READ},
        {.addr=0x92b7, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_017E) {
    const struct CPU_State initial_cpu = {.pc=0xfeb8, .a=0x4c, .x=0x63, .y=0x81, .sp=0x5c, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfeb8, .value=0x68}, {.addr=0xfeb9, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xfeba, .a=0x4c, .x=0x63, .y=0x81, .sp=0x5c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfeb8, .value=0x68}, {.addr=0xfeb9, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xfeb8, .value=0x68, .type=IO_READ},
        {.addr=0xfeb9, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_017F) {
    const struct CPU_State initial_cpu = {.pc=0x2831, .a=0xe2, .x=0x37, .y=0x6c, .sp=0x50, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x2831, .value=0x68}, {.addr=0x2832, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x2833, .a=0xe2, .x=0x37, .y=0x6c, .sp=0x50, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2831, .value=0x68}, {.addr=0x2832, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x2831, .value=0x68, .type=IO_READ},
        {.addr=0x2832, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0180) {
    const struct CPU_State initial_cpu = {.pc=0x8248, .a=0xdf, .x=0x1c, .y=0x40, .sp=0xec, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8248, .value=0x68}, {.addr=0x8249, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x824a, .a=0xdf, .x=0x1c, .y=0x40, .sp=0xec, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8248, .value=0x68}, {.addr=0x8249, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x8248, .value=0x68, .type=IO_READ},
        {.addr=0x8249, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0181) {
    const struct CPU_State initial_cpu = {.pc=0xd3f2, .a=0x93, .x=0xb2, .y=0xfb, .sp=0xdc, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f2, .value=0x68}, {.addr=0xd3f3, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xd3f4, .a=0x93, .x=0xb2, .y=0xfb, .sp=0xdc, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd3f2, .value=0x68}, {.addr=0xd3f3, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xd3f2, .value=0x68, .type=IO_READ},
        {.addr=0xd3f3, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0182) {
    const struct CPU_State initial_cpu = {.pc=0x592f, .a=0xf5, .x=0xaf, .y=0x4b, .sp=0xdd, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x592f, .value=0x68}, {.addr=0x5930, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x5931, .a=0xf5, .x=0xaf, .y=0x4b, .sp=0xdd, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x592f, .value=0x68}, {.addr=0x5930, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x592f, .value=0x68, .type=IO_READ},
        {.addr=0x5930, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0183) {
    const struct CPU_State initial_cpu = {.pc=0x3ff2, .a=0xd5, .x=0xd0, .y=0xa6, .sp=0x83, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x3ff2, .value=0x68}, {.addr=0x3ff3, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x3ff4, .a=0xd5, .x=0xd0, .y=0xa6, .sp=0x83, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x3ff2, .value=0x68}, {.addr=0x3ff3, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x3ff2, .value=0x68, .type=IO_READ},
        {.addr=0x3ff3, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0184) {
    const struct CPU_State initial_cpu = {.pc=0x4f79, .a=0x49, .x=0x30, .y=0xb6, .sp=0x68, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4f79, .value=0x68}, {.addr=0x4f7a, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x4f7b, .a=0x49, .x=0x30, .y=0xb6, .sp=0x68, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4f79, .value=0x68}, {.addr=0x4f7a, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x4f79, .value=0x68, .type=IO_READ},
        {.addr=0x4f7a, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0185) {
    const struct CPU_State initial_cpu = {.pc=0xb543, .a=0x8c, .x=0x8f, .y=0x14, .sp=0x58, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xb543, .value=0x68}, {.addr=0xb544, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xb545, .a=0x8c, .x=0x8f, .y=0x14, .sp=0x58, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb543, .value=0x68}, {.addr=0xb544, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xb543, .value=0x68, .type=IO_READ},
        {.addr=0xb544, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0186) {
    const struct CPU_State initial_cpu = {.pc=0x5d71, .a=0x5e, .x=0x0a, .y=0x09, .sp=0x2b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5d71, .value=0x68}, {.addr=0x5d72, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x5d73, .a=0x5e, .x=0x0a, .y=0x09, .sp=0x2b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x5d71, .value=0x68}, {.addr=0x5d72, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x5d71, .value=0x68, .type=IO_READ},
        {.addr=0x5d72, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0187) {
    const struct CPU_State initial_cpu = {.pc=0xeb65, .a=0x53, .x=0x73, .y=0xc5, .sp=0xc9, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xeb65, .value=0x68}, {.addr=0xeb66, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xeb67, .a=0x53, .x=0x73, .y=0xc5, .sp=0xc9, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xeb65, .value=0x68}, {.addr=0xeb66, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xeb65, .value=0x68, .type=IO_READ},
        {.addr=0xeb66, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0188) {
    const struct CPU_State initial_cpu = {.pc=0x729f, .a=0x4f, .x=0x7f, .y=0x64, .sp=0x4b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x729f, .value=0x68}, {.addr=0x72a0, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x72a1, .a=0x4f, .x=0x7f, .y=0x64, .sp=0x4b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x729f, .value=0x68}, {.addr=0x72a0, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x729f, .value=0x68, .type=IO_READ},
        {.addr=0x72a0, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0189) {
    const struct CPU_State initial_cpu = {.pc=0xc8e7, .a=0x0d, .x=0x80, .y=0xb3, .sp=0x26, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e7, .value=0x68}, {.addr=0xc8e8, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xc8e9, .a=0x0d, .x=0x80, .y=0xb3, .sp=0x26, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc8e7, .value=0x68}, {.addr=0xc8e8, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xc8e7, .value=0x68, .type=IO_READ},
        {.addr=0xc8e8, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_018A) {
    const struct CPU_State initial_cpu = {.pc=0xb9bc, .a=0x41, .x=0xc6, .y=0x93, .sp=0xe9, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xb9bc, .value=0x68}, {.addr=0xb9bd, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xb9be, .a=0x41, .x=0xc6, .y=0x93, .sp=0xe9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb9bc, .value=0x68}, {.addr=0xb9bd, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xb9bc, .value=0x68, .type=IO_READ},
        {.addr=0xb9bd, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_018B) {
    const struct CPU_State initial_cpu = {.pc=0xe6f4, .a=0xc7, .x=0xb9, .y=0x70, .sp=0xdc, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f4, .value=0x68}, {.addr=0xe6f5, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xe6f6, .a=0xc7, .x=0xb9, .y=0x70, .sp=0xdc, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe6f4, .value=0x68}, {.addr=0xe6f5, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xe6f4, .value=0x68, .type=IO_READ},
        {.addr=0xe6f5, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_018C) {
    const struct CPU_State initial_cpu = {.pc=0x5188, .a=0x9a, .x=0x05, .y=0xde, .sp=0x58, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5188, .value=0x68}, {.addr=0x5189, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x518a, .a=0x9a, .x=0x05, .y=0xde, .sp=0x58, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5188, .value=0x68}, {.addr=0x5189, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5188, .value=0x68, .type=IO_READ},
        {.addr=0x5189, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_018D) {
    const struct CPU_State initial_cpu = {.pc=0xb9a9, .a=0x37, .x=0x29, .y=0xb1, .sp=0x7e, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a9, .value=0x68}, {.addr=0xb9aa, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xb9ab, .a=0x37, .x=0x29, .y=0xb1, .sp=0x7e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xb9a9, .value=0x68}, {.addr=0xb9aa, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xb9a9, .value=0x68, .type=IO_READ},
        {.addr=0xb9aa, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_018E) {
    const struct CPU_State initial_cpu = {.pc=0x0eb6, .a=0xbd, .x=0xda, .y=0x73, .sp=0x8b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0eb6, .value=0x68}, {.addr=0x0eb7, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x0eb8, .a=0xbd, .x=0xda, .y=0x73, .sp=0x8b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0eb6, .value=0x68}, {.addr=0x0eb7, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x0eb6, .value=0x68, .type=IO_READ},
        {.addr=0x0eb7, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_018F) {
    const struct CPU_State initial_cpu = {.pc=0x0c92, .a=0x05, .x=0x1d, .y=0x41, .sp=0x9e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0c92, .value=0x68}, {.addr=0x0c93, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x0c94, .a=0x05, .x=0x1d, .y=0x41, .sp=0x9e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0c92, .value=0x68}, {.addr=0x0c93, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x0c92, .value=0x68, .type=IO_READ},
        {.addr=0x0c93, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0190) {
    const struct CPU_State initial_cpu = {.pc=0x319c, .a=0xed, .x=0xd6, .y=0xf2, .sp=0x01, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x319c, .value=0x68}, {.addr=0x319d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x319e, .a=0xed, .x=0xd6, .y=0xf2, .sp=0x01, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x319c, .value=0x68}, {.addr=0x319d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x319c, .value=0x68, .type=IO_READ},
        {.addr=0x319d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0191) {
    const struct CPU_State initial_cpu = {.pc=0x5232, .a=0x9e, .x=0x5e, .y=0x75, .sp=0x17, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x5232, .value=0x68}, {.addr=0x5233, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x5234, .a=0x9e, .x=0x5e, .y=0x75, .sp=0x17, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5232, .value=0x68}, {.addr=0x5233, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x5232, .value=0x68, .type=IO_READ},
        {.addr=0x5233, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0192) {
    const struct CPU_State initial_cpu = {.pc=0xcf77, .a=0xac, .x=0x7b, .y=0x37, .sp=0x86, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xcf77, .value=0x68}, {.addr=0xcf78, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xcf79, .a=0xac, .x=0x7b, .y=0x37, .sp=0x86, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xcf77, .value=0x68}, {.addr=0xcf78, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xcf77, .value=0x68, .type=IO_READ},
        {.addr=0xcf78, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0193) {
    const struct CPU_State initial_cpu = {.pc=0xa0fd, .a=0xf1, .x=0x99, .y=0x9d, .sp=0x5e, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xa0fd, .value=0x68}, {.addr=0xa0fe, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xa0ff, .a=0xf1, .x=0x99, .y=0x9d, .sp=0x5e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa0fd, .value=0x68}, {.addr=0xa0fe, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xa0fd, .value=0x68, .type=IO_READ},
        {.addr=0xa0fe, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0194) {
    const struct CPU_State initial_cpu = {.pc=0xf6ab, .a=0xe7, .x=0x25, .y=0x0f, .sp=0xd4, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ab, .value=0x68}, {.addr=0xf6ac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf6ad, .a=0xe7, .x=0x25, .y=0x0f, .sp=0xd4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf6ab, .value=0x68}, {.addr=0xf6ac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf6ab, .value=0x68, .type=IO_READ},
        {.addr=0xf6ac, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0195) {
    const struct CPU_State initial_cpu = {.pc=0x8e6d, .a=0x52, .x=0xc1, .y=0x05, .sp=0x27, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x8e6d, .value=0x68}, {.addr=0x8e6e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8e6f, .a=0x52, .x=0xc1, .y=0x05, .sp=0x27, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8e6d, .value=0x68}, {.addr=0x8e6e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8e6d, .value=0x68, .type=IO_READ},
        {.addr=0x8e6e, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0196) {
    const struct CPU_State initial_cpu = {.pc=0x5e7b, .a=0xb1, .x=0xf2, .y=0x35, .sp=0x1a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x5e7b, .value=0x68}, {.addr=0x5e7c, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x5e7d, .a=0xb1, .x=0xf2, .y=0x35, .sp=0x1a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x5e7b, .value=0x68}, {.addr=0x5e7c, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x5e7b, .value=0x68, .type=IO_READ},
        {.addr=0x5e7c, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0197) {
    const struct CPU_State initial_cpu = {.pc=0x80c9, .a=0x72, .x=0x66, .y=0x01, .sp=0xe2, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x80c9, .value=0x68}, {.addr=0x80ca, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x80cb, .a=0x72, .x=0x66, .y=0x01, .sp=0xe2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x80c9, .value=0x68}, {.addr=0x80ca, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x80c9, .value=0x68, .type=IO_READ},
        {.addr=0x80ca, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0198) {
    const struct CPU_State initial_cpu = {.pc=0xc468, .a=0xf3, .x=0x70, .y=0x8e, .sp=0x41, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xc468, .value=0x68}, {.addr=0xc469, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xc46a, .a=0xf3, .x=0x70, .y=0x8e, .sp=0x41, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc468, .value=0x68}, {.addr=0xc469, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xc468, .value=0x68, .type=IO_READ},
        {.addr=0xc469, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0199) {
    const struct CPU_State initial_cpu = {.pc=0xc93c, .a=0x3a, .x=0x7c, .y=0xae, .sp=0xf3, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xc93c, .value=0x68}, {.addr=0xc93d, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xc93e, .a=0x3a, .x=0x7c, .y=0xae, .sp=0xf3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc93c, .value=0x68}, {.addr=0xc93d, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xc93c, .value=0x68, .type=IO_READ},
        {.addr=0xc93d, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_019A) {
    const struct CPU_State initial_cpu = {.pc=0x12eb, .a=0x1d, .x=0xe3, .y=0x6b, .sp=0x7e, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x12eb, .value=0x68}, {.addr=0x12ec, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x12ed, .a=0x1d, .x=0xe3, .y=0x6b, .sp=0x7e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x12eb, .value=0x68}, {.addr=0x12ec, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x12eb, .value=0x68, .type=IO_READ},
        {.addr=0x12ec, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_019B) {
    const struct CPU_State initial_cpu = {.pc=0xc8d8, .a=0xd0, .x=0x98, .y=0xa0, .sp=0xc3, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xc8d8, .value=0x68}, {.addr=0xc8d9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc8da, .a=0xd0, .x=0x98, .y=0xa0, .sp=0xc3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc8d8, .value=0x68}, {.addr=0xc8d9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc8d8, .value=0x68, .type=IO_READ},
        {.addr=0xc8d9, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_019C) {
    const struct CPU_State initial_cpu = {.pc=0xf87f, .a=0xa6, .x=0xbb, .y=0xe5, .sp=0x46, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xf87f, .value=0x68}, {.addr=0xf880, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xf881, .a=0xa6, .x=0xbb, .y=0xe5, .sp=0x46, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf87f, .value=0x68}, {.addr=0xf880, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xf87f, .value=0x68, .type=IO_READ},
        {.addr=0xf880, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_019D) {
    const struct CPU_State initial_cpu = {.pc=0xf1e9, .a=0x08, .x=0x2f, .y=0xa3, .sp=0x3d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf1e9, .value=0x68}, {.addr=0xf1ea, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf1eb, .a=0x08, .x=0x2f, .y=0xa3, .sp=0x3d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf1e9, .value=0x68}, {.addr=0xf1ea, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf1e9, .value=0x68, .type=IO_READ},
        {.addr=0xf1ea, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_019E) {
    const struct CPU_State initial_cpu = {.pc=0x1f82, .a=0xdf, .x=0x2b, .y=0x8e, .sp=0x3b, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x1f82, .value=0x68}, {.addr=0x1f83, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x1f84, .a=0xdf, .x=0x2b, .y=0x8e, .sp=0x3b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1f82, .value=0x68}, {.addr=0x1f83, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x1f82, .value=0x68, .type=IO_READ},
        {.addr=0x1f83, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_019F) {
    const struct CPU_State initial_cpu = {.pc=0xaea6, .a=0xc1, .x=0x80, .y=0xc9, .sp=0x30, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xaea6, .value=0x68}, {.addr=0xaea7, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xaea8, .a=0xc1, .x=0x80, .y=0xc9, .sp=0x30, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xaea6, .value=0x68}, {.addr=0xaea7, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xaea6, .value=0x68, .type=IO_READ},
        {.addr=0xaea7, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xff04, .a=0xcb, .x=0x3b, .y=0x8f, .sp=0xe1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xff04, .value=0x68}, {.addr=0xff05, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xff06, .a=0xcb, .x=0x3b, .y=0x8f, .sp=0xe1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xff04, .value=0x68}, {.addr=0xff05, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xff04, .value=0x68, .type=IO_READ},
        {.addr=0xff05, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x8454, .a=0x14, .x=0x04, .y=0x75, .sp=0x83, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x8454, .value=0x68}, {.addr=0x8455, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x8456, .a=0x14, .x=0x04, .y=0x75, .sp=0x83, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8454, .value=0x68}, {.addr=0x8455, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x8454, .value=0x68, .type=IO_READ},
        {.addr=0x8455, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x383b, .a=0xcf, .x=0xcd, .y=0x47, .sp=0xf9, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x383b, .value=0x68}, {.addr=0x383c, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x383d, .a=0xcf, .x=0xcd, .y=0x47, .sp=0xf9, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x383b, .value=0x68}, {.addr=0x383c, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x383b, .value=0x68, .type=IO_READ},
        {.addr=0x383c, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x9994, .a=0xb6, .x=0x21, .y=0xc2, .sp=0x96, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x9994, .value=0x68}, {.addr=0x9995, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x9996, .a=0xb6, .x=0x21, .y=0xc2, .sp=0x96, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x9994, .value=0x68}, {.addr=0x9995, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x9994, .value=0x68, .type=IO_READ},
        {.addr=0x9995, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x1a49, .a=0x90, .x=0xa5, .y=0x97, .sp=0x4b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x1a49, .value=0x68}, {.addr=0x1a4a, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x1a4b, .a=0x90, .x=0xa5, .y=0x97, .sp=0x4b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1a49, .value=0x68}, {.addr=0x1a4a, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x1a49, .value=0x68, .type=IO_READ},
        {.addr=0x1a4a, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x2df5, .a=0xab, .x=0x14, .y=0xbe, .sp=0x97, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2df5, .value=0x68}, {.addr=0x2df6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x2df7, .a=0xab, .x=0x14, .y=0xbe, .sp=0x97, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2df5, .value=0x68}, {.addr=0x2df6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x2df5, .value=0x68, .type=IO_READ},
        {.addr=0x2df6, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xa070, .a=0x0c, .x=0xc1, .y=0x81, .sp=0x55, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xa070, .value=0x68}, {.addr=0xa071, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xa072, .a=0x0c, .x=0xc1, .y=0x81, .sp=0x55, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa070, .value=0x68}, {.addr=0xa071, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xa070, .value=0x68, .type=IO_READ},
        {.addr=0xa071, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xf255, .a=0xf4, .x=0x36, .y=0xf9, .sp=0xe6, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xf255, .value=0x68}, {.addr=0xf256, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf257, .a=0xf4, .x=0x36, .y=0xf9, .sp=0xe6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf255, .value=0x68}, {.addr=0xf256, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf255, .value=0x68, .type=IO_READ},
        {.addr=0xf256, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xe2a0, .a=0x5e, .x=0x87, .y=0xdf, .sp=0x65, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a0, .value=0x68}, {.addr=0xe2a1, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xe2a2, .a=0x5e, .x=0x87, .y=0xdf, .sp=0x65, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe2a0, .value=0x68}, {.addr=0xe2a1, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xe2a0, .value=0x68, .type=IO_READ},
        {.addr=0xe2a1, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x5327, .a=0x15, .x=0x41, .y=0x90, .sp=0xa8, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x5327, .value=0x68}, {.addr=0x5328, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x5329, .a=0x15, .x=0x41, .y=0x90, .sp=0xa8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5327, .value=0x68}, {.addr=0x5328, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x5327, .value=0x68, .type=IO_READ},
        {.addr=0x5328, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x1886, .a=0x56, .x=0x7b, .y=0xf1, .sp=0xa9, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1886, .value=0x68}, {.addr=0x1887, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x1888, .a=0x56, .x=0x7b, .y=0xf1, .sp=0xa9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1886, .value=0x68}, {.addr=0x1887, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x1886, .value=0x68, .type=IO_READ},
        {.addr=0x1887, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x6817, .a=0x59, .x=0xd9, .y=0x9f, .sp=0x8d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x6817, .value=0x68}, {.addr=0x6818, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x6819, .a=0x59, .x=0xd9, .y=0x9f, .sp=0x8d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6817, .value=0x68}, {.addr=0x6818, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x6817, .value=0x68, .type=IO_READ},
        {.addr=0x6818, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x2631, .a=0xf1, .x=0x82, .y=0xce, .sp=0x06, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x2631, .value=0x68}, {.addr=0x2632, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x2633, .a=0xf1, .x=0x82, .y=0xce, .sp=0x06, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2631, .value=0x68}, {.addr=0x2632, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x2631, .value=0x68, .type=IO_READ},
        {.addr=0x2632, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x8913, .a=0x1e, .x=0xb4, .y=0x2d, .sp=0xd7, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x8913, .value=0x68}, {.addr=0x8914, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x8915, .a=0x1e, .x=0xb4, .y=0x2d, .sp=0xd7, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x8913, .value=0x68}, {.addr=0x8914, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x8913, .value=0x68, .type=IO_READ},
        {.addr=0x8914, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xd01a, .a=0xf5, .x=0xee, .y=0x4d, .sp=0x16, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd01a, .value=0x68}, {.addr=0xd01b, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xd01c, .a=0xf5, .x=0xee, .y=0x4d, .sp=0x16, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd01a, .value=0x68}, {.addr=0xd01b, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xd01a, .value=0x68, .type=IO_READ},
        {.addr=0xd01b, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x59c6, .a=0x52, .x=0xa9, .y=0x13, .sp=0xa9, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x59c6, .value=0x68}, {.addr=0x59c7, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x59c8, .a=0x52, .x=0xa9, .y=0x13, .sp=0xa9, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x59c6, .value=0x68}, {.addr=0x59c7, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x59c6, .value=0x68, .type=IO_READ},
        {.addr=0x59c7, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x0182, .a=0x4c, .x=0xbc, .y=0xfe, .sp=0x8d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x68}, {.addr=0x0183, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x0184, .a=0x4c, .x=0xbc, .y=0xfe, .sp=0x8d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x68}, {.addr=0x0183, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x0182, .value=0x68, .type=IO_READ},
        {.addr=0x0183, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xfe0e, .a=0xfd, .x=0x5a, .y=0x1a, .sp=0x38, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xfe0e, .value=0x68}, {.addr=0xfe0f, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfe10, .a=0xfd, .x=0x5a, .y=0x1a, .sp=0x38, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xfe0e, .value=0x68}, {.addr=0xfe0f, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfe0e, .value=0x68, .type=IO_READ},
        {.addr=0xfe0f, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x2723, .a=0x8f, .x=0x05, .y=0x58, .sp=0x2a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2723, .value=0x68}, {.addr=0x2724, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x2725, .a=0x8f, .x=0x05, .y=0x58, .sp=0x2a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2723, .value=0x68}, {.addr=0x2724, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x2723, .value=0x68, .type=IO_READ},
        {.addr=0x2724, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xf806, .a=0xdf, .x=0x38, .y=0xdb, .sp=0x53, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xf806, .value=0x68}, {.addr=0xf807, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xf808, .a=0xdf, .x=0x38, .y=0xdb, .sp=0x53, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf806, .value=0x68}, {.addr=0xf807, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xf806, .value=0x68, .type=IO_READ},
        {.addr=0xf807, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x6f41, .a=0x02, .x=0x6c, .y=0x67, .sp=0xcf, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x6f41, .value=0x68}, {.addr=0x6f42, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6f43, .a=0x02, .x=0x6c, .y=0x67, .sp=0xcf, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6f41, .value=0x68}, {.addr=0x6f42, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6f41, .value=0x68, .type=IO_READ},
        {.addr=0x6f42, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x9893, .a=0x78, .x=0x0e, .y=0x3c, .sp=0xc2, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x9893, .value=0x68}, {.addr=0x9894, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x9895, .a=0x78, .x=0x0e, .y=0x3c, .sp=0xc2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9893, .value=0x68}, {.addr=0x9894, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x9893, .value=0x68, .type=IO_READ},
        {.addr=0x9894, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xda45, .a=0xe5, .x=0x0d, .y=0xa8, .sp=0x1f, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xda45, .value=0x68}, {.addr=0xda46, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xda47, .a=0xe5, .x=0x0d, .y=0xa8, .sp=0x1f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xda45, .value=0x68}, {.addr=0xda46, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xda45, .value=0x68, .type=IO_READ},
        {.addr=0xda46, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x51ed, .a=0x5b, .x=0x1e, .y=0x65, .sp=0x5c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x51ed, .value=0x68}, {.addr=0x51ee, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x51ef, .a=0x5b, .x=0x1e, .y=0x65, .sp=0x5c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x51ed, .value=0x68}, {.addr=0x51ee, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x51ed, .value=0x68, .type=IO_READ},
        {.addr=0x51ee, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xb5c3, .a=0xba, .x=0x14, .y=0x84, .sp=0xf2, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb5c3, .value=0x68}, {.addr=0xb5c4, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xb5c5, .a=0xba, .x=0x14, .y=0x84, .sp=0xf2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xb5c3, .value=0x68}, {.addr=0xb5c4, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xb5c3, .value=0x68, .type=IO_READ},
        {.addr=0xb5c4, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x3ac0, .a=0x8d, .x=0x21, .y=0x72, .sp=0xfd, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x3ac0, .value=0x68}, {.addr=0x3ac1, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3ac2, .a=0x8d, .x=0x21, .y=0x72, .sp=0xfd, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3ac0, .value=0x68}, {.addr=0x3ac1, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3ac0, .value=0x68, .type=IO_READ},
        {.addr=0x3ac1, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xa45e, .a=0x20, .x=0x1e, .y=0x8a, .sp=0xbb, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xa45e, .value=0x68}, {.addr=0xa45f, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xa460, .a=0x20, .x=0x1e, .y=0x8a, .sp=0xbb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa45e, .value=0x68}, {.addr=0xa45f, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xa45e, .value=0x68, .type=IO_READ},
        {.addr=0xa45f, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x15f0, .a=0xf0, .x=0x8a, .y=0x31, .sp=0xb8, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x15f0, .value=0x68}, {.addr=0x15f1, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x15f2, .a=0xf0, .x=0x8a, .y=0x31, .sp=0xb8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x15f0, .value=0x68}, {.addr=0x15f1, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x15f0, .value=0x68, .type=IO_READ},
        {.addr=0x15f1, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xb45b, .a=0x6f, .x=0xfb, .y=0x34, .sp=0x1d, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xb45b, .value=0x68}, {.addr=0xb45c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb45d, .a=0x6f, .x=0xfb, .y=0x34, .sp=0x1d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb45b, .value=0x68}, {.addr=0xb45c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb45b, .value=0x68, .type=IO_READ},
        {.addr=0xb45c, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x1a2b, .a=0xee, .x=0x16, .y=0x6d, .sp=0x54, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x1a2b, .value=0x68}, {.addr=0x1a2c, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x1a2d, .a=0xee, .x=0x16, .y=0x6d, .sp=0x54, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x1a2b, .value=0x68}, {.addr=0x1a2c, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x1a2b, .value=0x68, .type=IO_READ},
        {.addr=0x1a2c, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x3ed8, .a=0x13, .x=0x3f, .y=0x30, .sp=0x43, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3ed8, .value=0x68}, {.addr=0x3ed9, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x3eda, .a=0x13, .x=0x3f, .y=0x30, .sp=0x43, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3ed8, .value=0x68}, {.addr=0x3ed9, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x3ed8, .value=0x68, .type=IO_READ},
        {.addr=0x3ed9, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xea9a, .a=0x82, .x=0x69, .y=0xc3, .sp=0x2f, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xea9a, .value=0x68}, {.addr=0xea9b, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xea9c, .a=0x82, .x=0x69, .y=0xc3, .sp=0x2f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xea9a, .value=0x68}, {.addr=0xea9b, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xea9a, .value=0x68, .type=IO_READ},
        {.addr=0xea9b, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x1cf1, .a=0xca, .x=0xb9, .y=0x0f, .sp=0x01, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x1cf1, .value=0x68}, {.addr=0x1cf2, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x1cf3, .a=0xca, .x=0xb9, .y=0x0f, .sp=0x01, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1cf1, .value=0x68}, {.addr=0x1cf2, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x1cf1, .value=0x68, .type=IO_READ},
        {.addr=0x1cf2, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x986a, .a=0xe4, .x=0x16, .y=0xb6, .sp=0x8b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x986a, .value=0x68}, {.addr=0x986b, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x986c, .a=0xe4, .x=0x16, .y=0xb6, .sp=0x8b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x986a, .value=0x68}, {.addr=0x986b, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x986a, .value=0x68, .type=IO_READ},
        {.addr=0x986b, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x8a7b, .a=0xfd, .x=0xb7, .y=0x88, .sp=0xa6, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x8a7b, .value=0x68}, {.addr=0x8a7c, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x8a7d, .a=0xfd, .x=0xb7, .y=0x88, .sp=0xa6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8a7b, .value=0x68}, {.addr=0x8a7c, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x8a7b, .value=0x68, .type=IO_READ},
        {.addr=0x8a7c, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xda89, .a=0x2b, .x=0xf8, .y=0x70, .sp=0x51, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xda89, .value=0x68}, {.addr=0xda8a, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xda8b, .a=0x2b, .x=0xf8, .y=0x70, .sp=0x51, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xda89, .value=0x68}, {.addr=0xda8a, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xda89, .value=0x68, .type=IO_READ},
        {.addr=0xda8a, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xaa5a, .a=0x84, .x=0xc1, .y=0xc5, .sp=0xac, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xaa5a, .value=0x68}, {.addr=0xaa5b, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xaa5c, .a=0x84, .x=0xc1, .y=0xc5, .sp=0xac, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xaa5a, .value=0x68}, {.addr=0xaa5b, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xaa5a, .value=0x68, .type=IO_READ},
        {.addr=0xaa5b, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x7177, .a=0x19, .x=0x1c, .y=0x52, .sp=0x51, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x7177, .value=0x68}, {.addr=0x7178, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x7179, .a=0x19, .x=0x1c, .y=0x52, .sp=0x51, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7177, .value=0x68}, {.addr=0x7178, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x7177, .value=0x68, .type=IO_READ},
        {.addr=0x7178, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x8903, .a=0xe9, .x=0x11, .y=0x22, .sp=0x43, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x8903, .value=0x68}, {.addr=0x8904, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x8905, .a=0xe9, .x=0x11, .y=0x22, .sp=0x43, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8903, .value=0x68}, {.addr=0x8904, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x8903, .value=0x68, .type=IO_READ},
        {.addr=0x8904, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xbd8a, .a=0x19, .x=0xae, .y=0xcd, .sp=0x65, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xbd8a, .value=0x68}, {.addr=0xbd8b, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xbd8c, .a=0x19, .x=0xae, .y=0xcd, .sp=0x65, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xbd8a, .value=0x68}, {.addr=0xbd8b, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xbd8a, .value=0x68, .type=IO_READ},
        {.addr=0xbd8b, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x4d04, .a=0x92, .x=0x7e, .y=0x9d, .sp=0x13, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x4d04, .value=0x68}, {.addr=0x4d05, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4d06, .a=0x92, .x=0x7e, .y=0x9d, .sp=0x13, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4d04, .value=0x68}, {.addr=0x4d05, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4d04, .value=0x68, .type=IO_READ},
        {.addr=0x4d05, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x48ac, .a=0x66, .x=0x38, .y=0x20, .sp=0xd2, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x48ac, .value=0x68}, {.addr=0x48ad, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x48ae, .a=0x66, .x=0x38, .y=0x20, .sp=0xd2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x48ac, .value=0x68}, {.addr=0x48ad, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x48ac, .value=0x68, .type=IO_READ},
        {.addr=0x48ad, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x8ee3, .a=0x2b, .x=0x23, .y=0x23, .sp=0x53, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ee3, .value=0x68}, {.addr=0x8ee4, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x8ee5, .a=0x2b, .x=0x23, .y=0x23, .sp=0x53, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x8ee3, .value=0x68}, {.addr=0x8ee4, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x8ee3, .value=0x68, .type=IO_READ},
        {.addr=0x8ee4, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xebcc, .a=0x36, .x=0x15, .y=0x00, .sp=0xdd, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xebcc, .value=0x68}, {.addr=0xebcd, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xebce, .a=0x36, .x=0x15, .y=0x00, .sp=0xdd, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xebcc, .value=0x68}, {.addr=0xebcd, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xebcc, .value=0x68, .type=IO_READ},
        {.addr=0xebcd, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xe349, .a=0x0e, .x=0x0f, .y=0x63, .sp=0x41, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xe349, .value=0x68}, {.addr=0xe34a, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xe34b, .a=0x0e, .x=0x0f, .y=0x63, .sp=0x41, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe349, .value=0x68}, {.addr=0xe34a, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xe349, .value=0x68, .type=IO_READ},
        {.addr=0xe34a, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x63a4, .a=0x05, .x=0xbe, .y=0xf1, .sp=0x8b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x63a4, .value=0x68}, {.addr=0x63a5, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x63a6, .a=0x05, .x=0xbe, .y=0xf1, .sp=0x8b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x63a4, .value=0x68}, {.addr=0x63a5, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x63a4, .value=0x68, .type=IO_READ},
        {.addr=0x63a5, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x6b05, .a=0x4a, .x=0x69, .y=0xae, .sp=0x4c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x6b05, .value=0x68}, {.addr=0x6b06, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x6b07, .a=0x4a, .x=0x69, .y=0xae, .sp=0x4c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6b05, .value=0x68}, {.addr=0x6b06, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x6b05, .value=0x68, .type=IO_READ},
        {.addr=0x6b06, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x43fb, .a=0x33, .x=0x24, .y=0x48, .sp=0x04, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x43fb, .value=0x68}, {.addr=0x43fc, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x43fd, .a=0x33, .x=0x24, .y=0x48, .sp=0x04, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x43fb, .value=0x68}, {.addr=0x43fc, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x43fb, .value=0x68, .type=IO_READ},
        {.addr=0x43fc, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x82af, .a=0xac, .x=0x32, .y=0x01, .sp=0x43, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x82af, .value=0x68}, {.addr=0x82b0, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x82b1, .a=0xac, .x=0x32, .y=0x01, .sp=0x43, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x82af, .value=0x68}, {.addr=0x82b0, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x82af, .value=0x68, .type=IO_READ},
        {.addr=0x82b0, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x6670, .a=0x69, .x=0x3f, .y=0xe2, .sp=0x8f, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x6670, .value=0x68}, {.addr=0x6671, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x6672, .a=0x69, .x=0x3f, .y=0xe2, .sp=0x8f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6670, .value=0x68}, {.addr=0x6671, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x6670, .value=0x68, .type=IO_READ},
        {.addr=0x6671, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xf92b, .a=0xd7, .x=0x4a, .y=0x81, .sp=0x18, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf92b, .value=0x68}, {.addr=0xf92c, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xf92d, .a=0xd7, .x=0x4a, .y=0x81, .sp=0x18, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf92b, .value=0x68}, {.addr=0xf92c, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xf92b, .value=0x68, .type=IO_READ},
        {.addr=0xf92c, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x9506, .a=0x34, .x=0xfe, .y=0x99, .sp=0xac, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x9506, .value=0x68}, {.addr=0x9507, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x9508, .a=0x34, .x=0xfe, .y=0x99, .sp=0xac, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9506, .value=0x68}, {.addr=0x9507, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x9506, .value=0x68, .type=IO_READ},
        {.addr=0x9507, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x590c, .a=0xfc, .x=0xe2, .y=0x41, .sp=0x66, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x590c, .value=0x68}, {.addr=0x590d, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x590e, .a=0xfc, .x=0xe2, .y=0x41, .sp=0x66, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x590c, .value=0x68}, {.addr=0x590d, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x590c, .value=0x68, .type=IO_READ},
        {.addr=0x590d, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x2964, .a=0x0a, .x=0xe0, .y=0x87, .sp=0x26, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x2964, .value=0x68}, {.addr=0x2965, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x2966, .a=0x0a, .x=0xe0, .y=0x87, .sp=0x26, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2964, .value=0x68}, {.addr=0x2965, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x2964, .value=0x68, .type=IO_READ},
        {.addr=0x2965, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x0f44, .a=0xd1, .x=0x5a, .y=0x52, .sp=0x12, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0f44, .value=0x68}, {.addr=0x0f45, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x0f46, .a=0xd1, .x=0x5a, .y=0x52, .sp=0x12, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0f44, .value=0x68}, {.addr=0x0f45, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x0f44, .value=0x68, .type=IO_READ},
        {.addr=0x0f45, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xab5c, .a=0x3f, .x=0x7b, .y=0x80, .sp=0x7d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xab5c, .value=0x68}, {.addr=0xab5d, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xab5e, .a=0x3f, .x=0x7b, .y=0x80, .sp=0x7d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xab5c, .value=0x68}, {.addr=0xab5d, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xab5c, .value=0x68, .type=IO_READ},
        {.addr=0xab5d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xf47b, .a=0x14, .x=0x16, .y=0x41, .sp=0xb4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xf47b, .value=0x68}, {.addr=0xf47c, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf47d, .a=0x14, .x=0x16, .y=0x41, .sp=0xb4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf47b, .value=0x68}, {.addr=0xf47c, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf47b, .value=0x68, .type=IO_READ},
        {.addr=0xf47c, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x5893, .a=0x4b, .x=0x3f, .y=0xf8, .sp=0xaa, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x5893, .value=0x68}, {.addr=0x5894, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x5895, .a=0x4b, .x=0x3f, .y=0xf8, .sp=0xaa, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5893, .value=0x68}, {.addr=0x5894, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x5893, .value=0x68, .type=IO_READ},
        {.addr=0x5894, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x81bb, .a=0x9b, .x=0x48, .y=0xb2, .sp=0xba, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x81bb, .value=0x68}, {.addr=0x81bc, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x81bd, .a=0x9b, .x=0x48, .y=0xb2, .sp=0xba, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x81bb, .value=0x68}, {.addr=0x81bc, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x81bb, .value=0x68, .type=IO_READ},
        {.addr=0x81bc, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x08e3, .a=0x37, .x=0x64, .y=0x37, .sp=0x12, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x08e3, .value=0x68}, {.addr=0x08e4, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x08e5, .a=0x37, .x=0x64, .y=0x37, .sp=0x12, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x08e3, .value=0x68}, {.addr=0x08e4, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x08e3, .value=0x68, .type=IO_READ},
        {.addr=0x08e4, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x23d6, .a=0x72, .x=0xd7, .y=0x54, .sp=0x60, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x23d6, .value=0x68}, {.addr=0x23d7, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x23d8, .a=0x72, .x=0xd7, .y=0x54, .sp=0x60, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x23d6, .value=0x68}, {.addr=0x23d7, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x23d6, .value=0x68, .type=IO_READ},
        {.addr=0x23d7, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x47fc, .a=0xd1, .x=0x78, .y=0x26, .sp=0x92, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x47fc, .value=0x68}, {.addr=0x47fd, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x47fe, .a=0xd1, .x=0x78, .y=0x26, .sp=0x92, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x47fc, .value=0x68}, {.addr=0x47fd, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x47fc, .value=0x68, .type=IO_READ},
        {.addr=0x47fd, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xa90b, .a=0xcf, .x=0x2e, .y=0xff, .sp=0x52, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xa90b, .value=0x68}, {.addr=0xa90c, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xa90d, .a=0xcf, .x=0x2e, .y=0xff, .sp=0x52, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa90b, .value=0x68}, {.addr=0xa90c, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xa90b, .value=0x68, .type=IO_READ},
        {.addr=0xa90c, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x350b, .a=0x37, .x=0x2b, .y=0x07, .sp=0x37, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x350b, .value=0x68}, {.addr=0x350c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x350d, .a=0x37, .x=0x2b, .y=0x07, .sp=0x37, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x350b, .value=0x68}, {.addr=0x350c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x350b, .value=0x68, .type=IO_READ},
        {.addr=0x350c, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x5962, .a=0x21, .x=0x78, .y=0x0b, .sp=0x00, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5962, .value=0x68}, {.addr=0x5963, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x5964, .a=0x21, .x=0x78, .y=0x0b, .sp=0x00, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x5962, .value=0x68}, {.addr=0x5963, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x5962, .value=0x68, .type=IO_READ},
        {.addr=0x5963, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x2d50, .a=0x74, .x=0x69, .y=0x6c, .sp=0xa4, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d50, .value=0x68}, {.addr=0x2d51, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x2d52, .a=0x74, .x=0x69, .y=0x6c, .sp=0xa4, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2d50, .value=0x68}, {.addr=0x2d51, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x2d50, .value=0x68, .type=IO_READ},
        {.addr=0x2d51, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xb15d, .a=0x08, .x=0x9f, .y=0x9f, .sp=0x8c, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xb15d, .value=0x68}, {.addr=0xb15e, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xb15f, .a=0x08, .x=0x9f, .y=0x9f, .sp=0x8c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb15d, .value=0x68}, {.addr=0xb15e, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xb15d, .value=0x68, .type=IO_READ},
        {.addr=0xb15e, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x9f78, .a=0x3e, .x=0x82, .y=0xc3, .sp=0x30, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x9f78, .value=0x68}, {.addr=0x9f79, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x9f7a, .a=0x3e, .x=0x82, .y=0xc3, .sp=0x30, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9f78, .value=0x68}, {.addr=0x9f79, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x9f78, .value=0x68, .type=IO_READ},
        {.addr=0x9f79, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x82a5, .a=0x3e, .x=0x4f, .y=0x7e, .sp=0x34, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x82a5, .value=0x68}, {.addr=0x82a6, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x82a7, .a=0x3e, .x=0x4f, .y=0x7e, .sp=0x34, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x82a5, .value=0x68}, {.addr=0x82a6, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x82a5, .value=0x68, .type=IO_READ},
        {.addr=0x82a6, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x3086, .a=0x12, .x=0xd1, .y=0x9a, .sp=0xfb, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x3086, .value=0x68}, {.addr=0x3087, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x3088, .a=0x12, .x=0xd1, .y=0x9a, .sp=0xfb, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3086, .value=0x68}, {.addr=0x3087, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x3086, .value=0x68, .type=IO_READ},
        {.addr=0x3087, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xe38f, .a=0x2e, .x=0xae, .y=0x5a, .sp=0x08, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe38f, .value=0x68}, {.addr=0xe390, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xe391, .a=0x2e, .x=0xae, .y=0x5a, .sp=0x08, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe38f, .value=0x68}, {.addr=0xe390, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xe38f, .value=0x68, .type=IO_READ},
        {.addr=0xe390, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x9443, .a=0xaa, .x=0xbb, .y=0x11, .sp=0x3e, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9443, .value=0x68}, {.addr=0x9444, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x9445, .a=0xaa, .x=0xbb, .y=0x11, .sp=0x3e, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x9443, .value=0x68}, {.addr=0x9444, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x9443, .value=0x68, .type=IO_READ},
        {.addr=0x9444, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x7f85, .a=0xde, .x=0xef, .y=0x6d, .sp=0xa8, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x7f85, .value=0x68}, {.addr=0x7f86, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x7f87, .a=0xde, .x=0xef, .y=0x6d, .sp=0xa8, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7f85, .value=0x68}, {.addr=0x7f86, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x7f85, .value=0x68, .type=IO_READ},
        {.addr=0x7f86, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x68c0, .a=0x91, .x=0x25, .y=0x99, .sp=0xd7, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x68c0, .value=0x68}, {.addr=0x68c1, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x68c2, .a=0x91, .x=0x25, .y=0x99, .sp=0xd7, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x68c0, .value=0x68}, {.addr=0x68c1, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x68c0, .value=0x68, .type=IO_READ},
        {.addr=0x68c1, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xc735, .a=0xef, .x=0xe7, .y=0x40, .sp=0x5b, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc735, .value=0x68}, {.addr=0xc736, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xc737, .a=0xef, .x=0xe7, .y=0x40, .sp=0x5b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc735, .value=0x68}, {.addr=0xc736, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xc735, .value=0x68, .type=IO_READ},
        {.addr=0xc736, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x0a42, .a=0x84, .x=0x7b, .y=0xcc, .sp=0x7a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0a42, .value=0x68}, {.addr=0x0a43, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x0a44, .a=0x84, .x=0x7b, .y=0xcc, .sp=0x7a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0a42, .value=0x68}, {.addr=0x0a43, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x0a42, .value=0x68, .type=IO_READ},
        {.addr=0x0a43, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xb435, .a=0xfb, .x=0xd0, .y=0x28, .sp=0x0a, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xb435, .value=0x68}, {.addr=0xb436, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xb437, .a=0xfb, .x=0xd0, .y=0x28, .sp=0x0a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb435, .value=0x68}, {.addr=0xb436, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xb435, .value=0x68, .type=IO_READ},
        {.addr=0xb436, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x5ade, .a=0x78, .x=0xea, .y=0x96, .sp=0xf3, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x5ade, .value=0x68}, {.addr=0x5adf, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x5ae0, .a=0x78, .x=0xea, .y=0x96, .sp=0xf3, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5ade, .value=0x68}, {.addr=0x5adf, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x5ade, .value=0x68, .type=IO_READ},
        {.addr=0x5adf, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x77ea, .a=0x5f, .x=0x86, .y=0x75, .sp=0xa1, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x77ea, .value=0x68}, {.addr=0x77eb, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x77ec, .a=0x5f, .x=0x86, .y=0x75, .sp=0xa1, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x77ea, .value=0x68}, {.addr=0x77eb, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x77ea, .value=0x68, .type=IO_READ},
        {.addr=0x77eb, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x0527, .a=0x16, .x=0x3c, .y=0x5c, .sp=0x08, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0527, .value=0x68}, {.addr=0x0528, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x0529, .a=0x16, .x=0x3c, .y=0x5c, .sp=0x08, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0527, .value=0x68}, {.addr=0x0528, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x0527, .value=0x68, .type=IO_READ},
        {.addr=0x0528, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x8224, .a=0xd9, .x=0xfc, .y=0x17, .sp=0x92, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8224, .value=0x68}, {.addr=0x8225, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x8226, .a=0xd9, .x=0xfc, .y=0x17, .sp=0x92, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x8224, .value=0x68}, {.addr=0x8225, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x8224, .value=0x68, .type=IO_READ},
        {.addr=0x8225, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xeed0, .a=0x8f, .x=0x57, .y=0xf3, .sp=0x1c, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xeed0, .value=0x68}, {.addr=0xeed1, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xeed2, .a=0x8f, .x=0x57, .y=0xf3, .sp=0x1c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xeed0, .value=0x68}, {.addr=0xeed1, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xeed0, .value=0x68, .type=IO_READ},
        {.addr=0xeed1, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xe5d2, .a=0xc3, .x=0x0f, .y=0xef, .sp=0xca, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xe5d2, .value=0x68}, {.addr=0xe5d3, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe5d4, .a=0xc3, .x=0x0f, .y=0xef, .sp=0xca, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe5d2, .value=0x68}, {.addr=0xe5d3, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe5d2, .value=0x68, .type=IO_READ},
        {.addr=0xe5d3, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x6237, .a=0xea, .x=0x6d, .y=0x1b, .sp=0x8f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x6237, .value=0x68}, {.addr=0x6238, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x6239, .a=0xea, .x=0x6d, .y=0x1b, .sp=0x8f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6237, .value=0x68}, {.addr=0x6238, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x6237, .value=0x68, .type=IO_READ},
        {.addr=0x6238, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xe5ac, .a=0xdf, .x=0x26, .y=0xbc, .sp=0x89, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xe5ac, .value=0x68}, {.addr=0xe5ad, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe5ae, .a=0xdf, .x=0x26, .y=0xbc, .sp=0x89, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe5ac, .value=0x68}, {.addr=0xe5ad, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe5ac, .value=0x68, .type=IO_READ},
        {.addr=0xe5ad, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xfb6a, .a=0xbd, .x=0x40, .y=0xce, .sp=0x5e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6a, .value=0x68}, {.addr=0xfb6b, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xfb6c, .a=0xbd, .x=0x40, .y=0xce, .sp=0x5e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xfb6a, .value=0x68}, {.addr=0xfb6b, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xfb6a, .value=0x68, .type=IO_READ},
        {.addr=0xfb6b, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x1be7, .a=0x3c, .x=0x71, .y=0xf9, .sp=0x65, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x1be7, .value=0x68}, {.addr=0x1be8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1be9, .a=0x3c, .x=0x71, .y=0xf9, .sp=0x65, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1be7, .value=0x68}, {.addr=0x1be8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1be7, .value=0x68, .type=IO_READ},
        {.addr=0x1be8, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xcc0b, .a=0x61, .x=0xb7, .y=0x34, .sp=0xea, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xcc0b, .value=0x68}, {.addr=0xcc0c, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xcc0d, .a=0x61, .x=0xb7, .y=0x34, .sp=0xea, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xcc0b, .value=0x68}, {.addr=0xcc0c, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xcc0b, .value=0x68, .type=IO_READ},
        {.addr=0xcc0c, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x1762, .a=0xaa, .x=0x83, .y=0x53, .sp=0x23, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1762, .value=0x68}, {.addr=0x1763, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x1764, .a=0xaa, .x=0x83, .y=0x53, .sp=0x23, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x1762, .value=0x68}, {.addr=0x1763, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x1762, .value=0x68, .type=IO_READ},
        {.addr=0x1763, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6af2, .a=0x9d, .x=0x63, .y=0x3e, .sp=0x74, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x6af2, .value=0x68}, {.addr=0x6af3, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x6af4, .a=0x9d, .x=0x63, .y=0x3e, .sp=0x74, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6af2, .value=0x68}, {.addr=0x6af3, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x6af2, .value=0x68, .type=IO_READ},
        {.addr=0x6af3, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x2625, .a=0xa6, .x=0x39, .y=0x8a, .sp=0x6d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x2625, .value=0x68}, {.addr=0x2626, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x2627, .a=0xa6, .x=0x39, .y=0x8a, .sp=0x6d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2625, .value=0x68}, {.addr=0x2626, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x2625, .value=0x68, .type=IO_READ},
        {.addr=0x2626, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x607d, .a=0x05, .x=0xc9, .y=0x59, .sp=0xf2, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x607d, .value=0x68}, {.addr=0x607e, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x607f, .a=0x05, .x=0xc9, .y=0x59, .sp=0xf2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x607d, .value=0x68}, {.addr=0x607e, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x607d, .value=0x68, .type=IO_READ},
        {.addr=0x607e, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xccc3, .a=0xed, .x=0x70, .y=0x1b, .sp=0x0a, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xccc3, .value=0x68}, {.addr=0xccc4, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xccc5, .a=0xed, .x=0x70, .y=0x1b, .sp=0x0a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xccc3, .value=0x68}, {.addr=0xccc4, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xccc3, .value=0x68, .type=IO_READ},
        {.addr=0xccc4, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xa3d9, .a=0x0b, .x=0x89, .y=0xcd, .sp=0xc3, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d9, .value=0x68}, {.addr=0xa3da, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xa3db, .a=0x0b, .x=0x89, .y=0xcd, .sp=0xc3, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa3d9, .value=0x68}, {.addr=0xa3da, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xa3d9, .value=0x68, .type=IO_READ},
        {.addr=0xa3da, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xfce1, .a=0x94, .x=0xa4, .y=0x1e, .sp=0x37, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xfce1, .value=0x68}, {.addr=0xfce2, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xfce3, .a=0x94, .x=0xa4, .y=0x1e, .sp=0x37, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xfce1, .value=0x68}, {.addr=0xfce2, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xfce1, .value=0x68, .type=IO_READ},
        {.addr=0xfce2, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x0626, .a=0x28, .x=0x33, .y=0xff, .sp=0x90, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0626, .value=0x68}, {.addr=0x0627, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x0628, .a=0x28, .x=0x33, .y=0xff, .sp=0x90, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0626, .value=0x68}, {.addr=0x0627, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x0626, .value=0x68, .type=IO_READ},
        {.addr=0x0627, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0200) {
    const struct CPU_State initial_cpu = {.pc=0x1646, .a=0x6e, .x=0x08, .y=0x7b, .sp=0x0d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x1646, .value=0x68}, {.addr=0x1647, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x1648, .a=0x6e, .x=0x08, .y=0x7b, .sp=0x0d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1646, .value=0x68}, {.addr=0x1647, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x1646, .value=0x68, .type=IO_READ},
        {.addr=0x1647, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0201) {
    const struct CPU_State initial_cpu = {.pc=0x2147, .a=0xf1, .x=0x11, .y=0xa3, .sp=0x9a, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x2147, .value=0x68}, {.addr=0x2148, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x2149, .a=0xf1, .x=0x11, .y=0xa3, .sp=0x9a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2147, .value=0x68}, {.addr=0x2148, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x2147, .value=0x68, .type=IO_READ},
        {.addr=0x2148, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0202) {
    const struct CPU_State initial_cpu = {.pc=0x7429, .a=0x1a, .x=0x80, .y=0xd8, .sp=0xad, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x7429, .value=0x68}, {.addr=0x742a, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x742b, .a=0x1a, .x=0x80, .y=0xd8, .sp=0xad, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7429, .value=0x68}, {.addr=0x742a, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x7429, .value=0x68, .type=IO_READ},
        {.addr=0x742a, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0203) {
    const struct CPU_State initial_cpu = {.pc=0x1b3c, .a=0xfb, .x=0x20, .y=0x7e, .sp=0xaa, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x1b3c, .value=0x68}, {.addr=0x1b3d, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1b3e, .a=0xfb, .x=0x20, .y=0x7e, .sp=0xaa, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1b3c, .value=0x68}, {.addr=0x1b3d, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1b3c, .value=0x68, .type=IO_READ},
        {.addr=0x1b3d, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0204) {
    const struct CPU_State initial_cpu = {.pc=0x7d69, .a=0xb7, .x=0xd7, .y=0x96, .sp=0xdf, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x7d69, .value=0x68}, {.addr=0x7d6a, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x7d6b, .a=0xb7, .x=0xd7, .y=0x96, .sp=0xdf, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7d69, .value=0x68}, {.addr=0x7d6a, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x7d69, .value=0x68, .type=IO_READ},
        {.addr=0x7d6a, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0205) {
    const struct CPU_State initial_cpu = {.pc=0xca4f, .a=0x2d, .x=0x46, .y=0xde, .sp=0x32, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xca4f, .value=0x68}, {.addr=0xca50, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xca51, .a=0x2d, .x=0x46, .y=0xde, .sp=0x32, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xca4f, .value=0x68}, {.addr=0xca50, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xca4f, .value=0x68, .type=IO_READ},
        {.addr=0xca50, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0206) {
    const struct CPU_State initial_cpu = {.pc=0x1389, .a=0x44, .x=0x77, .y=0xc3, .sp=0x49, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x1389, .value=0x68}, {.addr=0x138a, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x138b, .a=0x44, .x=0x77, .y=0xc3, .sp=0x49, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1389, .value=0x68}, {.addr=0x138a, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x1389, .value=0x68, .type=IO_READ},
        {.addr=0x138a, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0207) {
    const struct CPU_State initial_cpu = {.pc=0x4b27, .a=0xdb, .x=0xbd, .y=0x08, .sp=0x97, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4b27, .value=0x68}, {.addr=0x4b28, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x4b29, .a=0xdb, .x=0xbd, .y=0x08, .sp=0x97, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4b27, .value=0x68}, {.addr=0x4b28, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x4b27, .value=0x68, .type=IO_READ},
        {.addr=0x4b28, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0208) {
    const struct CPU_State initial_cpu = {.pc=0x5a3d, .a=0xba, .x=0xcb, .y=0xaa, .sp=0x5e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x5a3d, .value=0x68}, {.addr=0x5a3e, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x5a3f, .a=0xba, .x=0xcb, .y=0xaa, .sp=0x5e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5a3d, .value=0x68}, {.addr=0x5a3e, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x5a3d, .value=0x68, .type=IO_READ},
        {.addr=0x5a3e, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0209) {
    const struct CPU_State initial_cpu = {.pc=0x7812, .a=0x30, .x=0x90, .y=0xfa, .sp=0x45, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x7812, .value=0x68}, {.addr=0x7813, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x7814, .a=0x30, .x=0x90, .y=0xfa, .sp=0x45, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x7812, .value=0x68}, {.addr=0x7813, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x7812, .value=0x68, .type=IO_READ},
        {.addr=0x7813, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_020A) {
    const struct CPU_State initial_cpu = {.pc=0x3b72, .a=0x6d, .x=0x32, .y=0xe9, .sp=0xfe, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x3b72, .value=0x68}, {.addr=0x3b73, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3b74, .a=0x6d, .x=0x32, .y=0xe9, .sp=0xfe, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3b72, .value=0x68}, {.addr=0x3b73, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3b72, .value=0x68, .type=IO_READ},
        {.addr=0x3b73, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_020B) {
    const struct CPU_State initial_cpu = {.pc=0x2f80, .a=0x10, .x=0x29, .y=0x7f, .sp=0x28, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x2f80, .value=0x68}, {.addr=0x2f81, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2f82, .a=0x10, .x=0x29, .y=0x7f, .sp=0x28, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2f80, .value=0x68}, {.addr=0x2f81, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2f80, .value=0x68, .type=IO_READ},
        {.addr=0x2f81, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_020C) {
    const struct CPU_State initial_cpu = {.pc=0x6bb4, .a=0x03, .x=0x71, .y=0x9c, .sp=0x02, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x6bb4, .value=0x68}, {.addr=0x6bb5, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x6bb6, .a=0x03, .x=0x71, .y=0x9c, .sp=0x02, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6bb4, .value=0x68}, {.addr=0x6bb5, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x6bb4, .value=0x68, .type=IO_READ},
        {.addr=0x6bb5, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_020D) {
    const struct CPU_State initial_cpu = {.pc=0x9b80, .a=0x3d, .x=0x84, .y=0xcc, .sp=0x57, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x9b80, .value=0x68}, {.addr=0x9b81, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x9b82, .a=0x3d, .x=0x84, .y=0xcc, .sp=0x57, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9b80, .value=0x68}, {.addr=0x9b81, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x9b80, .value=0x68, .type=IO_READ},
        {.addr=0x9b81, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_020E) {
    const struct CPU_State initial_cpu = {.pc=0x955b, .a=0xa5, .x=0xa7, .y=0xae, .sp=0xa6, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x955b, .value=0x68}, {.addr=0x955c, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x955d, .a=0xa5, .x=0xa7, .y=0xae, .sp=0xa6, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x955b, .value=0x68}, {.addr=0x955c, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x955b, .value=0x68, .type=IO_READ},
        {.addr=0x955c, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_020F) {
    const struct CPU_State initial_cpu = {.pc=0xb58c, .a=0x20, .x=0x94, .y=0xc2, .sp=0xef, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb58c, .value=0x68}, {.addr=0xb58d, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xb58e, .a=0x20, .x=0x94, .y=0xc2, .sp=0xef, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb58c, .value=0x68}, {.addr=0xb58d, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xb58c, .value=0x68, .type=IO_READ},
        {.addr=0xb58d, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0210) {
    const struct CPU_State initial_cpu = {.pc=0xd6d5, .a=0xd1, .x=0x11, .y=0x21, .sp=0x2f, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d5, .value=0x68}, {.addr=0xd6d6, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xd6d7, .a=0xd1, .x=0x11, .y=0x21, .sp=0x2f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd6d5, .value=0x68}, {.addr=0xd6d6, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xd6d5, .value=0x68, .type=IO_READ},
        {.addr=0xd6d6, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0211) {
    const struct CPU_State initial_cpu = {.pc=0xffcc, .a=0xaf, .x=0x3d, .y=0x2e, .sp=0x82, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xffcc, .value=0x68}, {.addr=0xffcd, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xffce, .a=0xaf, .x=0x3d, .y=0x2e, .sp=0x82, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xffcc, .value=0x68}, {.addr=0xffcd, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xffcc, .value=0x68, .type=IO_READ},
        {.addr=0xffcd, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0212) {
    const struct CPU_State initial_cpu = {.pc=0xace2, .a=0x98, .x=0xc2, .y=0x1a, .sp=0x5b, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xace2, .value=0x68}, {.addr=0xace3, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xace4, .a=0x98, .x=0xc2, .y=0x1a, .sp=0x5b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xace2, .value=0x68}, {.addr=0xace3, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xace2, .value=0x68, .type=IO_READ},
        {.addr=0xace3, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0213) {
    const struct CPU_State initial_cpu = {.pc=0xb853, .a=0x57, .x=0xab, .y=0xb7, .sp=0x9c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb853, .value=0x68}, {.addr=0xb854, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xb855, .a=0x57, .x=0xab, .y=0xb7, .sp=0x9c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xb853, .value=0x68}, {.addr=0xb854, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xb853, .value=0x68, .type=IO_READ},
        {.addr=0xb854, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0214) {
    const struct CPU_State initial_cpu = {.pc=0x75ef, .a=0x58, .x=0xca, .y=0x1a, .sp=0xf4, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x75ef, .value=0x68}, {.addr=0x75f0, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x75f1, .a=0x58, .x=0xca, .y=0x1a, .sp=0xf4, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x75ef, .value=0x68}, {.addr=0x75f0, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x75ef, .value=0x68, .type=IO_READ},
        {.addr=0x75f0, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0215) {
    const struct CPU_State initial_cpu = {.pc=0xc9db, .a=0x86, .x=0x90, .y=0xf4, .sp=0xc9, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc9db, .value=0x68}, {.addr=0xc9dc, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xc9dd, .a=0x86, .x=0x90, .y=0xf4, .sp=0xc9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc9db, .value=0x68}, {.addr=0xc9dc, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xc9db, .value=0x68, .type=IO_READ},
        {.addr=0xc9dc, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0216) {
    const struct CPU_State initial_cpu = {.pc=0x9cbf, .a=0xf2, .x=0xea, .y=0x4c, .sp=0xaa, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x9cbf, .value=0x68}, {.addr=0x9cc0, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x9cc1, .a=0xf2, .x=0xea, .y=0x4c, .sp=0xaa, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9cbf, .value=0x68}, {.addr=0x9cc0, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x9cbf, .value=0x68, .type=IO_READ},
        {.addr=0x9cc0, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0217) {
    const struct CPU_State initial_cpu = {.pc=0x29a6, .a=0xda, .x=0x92, .y=0x56, .sp=0xed, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x29a6, .value=0x68}, {.addr=0x29a7, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x29a8, .a=0xda, .x=0x92, .y=0x56, .sp=0xed, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x29a6, .value=0x68}, {.addr=0x29a7, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x29a6, .value=0x68, .type=IO_READ},
        {.addr=0x29a7, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0218) {
    const struct CPU_State initial_cpu = {.pc=0x92a9, .a=0xbb, .x=0x8f, .y=0xb5, .sp=0x95, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x92a9, .value=0x68}, {.addr=0x92aa, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x92ab, .a=0xbb, .x=0x8f, .y=0xb5, .sp=0x95, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x92a9, .value=0x68}, {.addr=0x92aa, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x92a9, .value=0x68, .type=IO_READ},
        {.addr=0x92aa, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0219) {
    const struct CPU_State initial_cpu = {.pc=0x9fe5, .a=0x58, .x=0x24, .y=0x44, .sp=0x5d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe5, .value=0x68}, {.addr=0x9fe6, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x9fe7, .a=0x58, .x=0x24, .y=0x44, .sp=0x5d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9fe5, .value=0x68}, {.addr=0x9fe6, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9fe5, .value=0x68, .type=IO_READ},
        {.addr=0x9fe6, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_021A) {
    const struct CPU_State initial_cpu = {.pc=0x40a4, .a=0x4c, .x=0x94, .y=0x24, .sp=0xd4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x40a4, .value=0x68}, {.addr=0x40a5, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x40a6, .a=0x4c, .x=0x94, .y=0x24, .sp=0xd4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x40a4, .value=0x68}, {.addr=0x40a5, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x40a4, .value=0x68, .type=IO_READ},
        {.addr=0x40a5, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_021B) {
    const struct CPU_State initial_cpu = {.pc=0x85b0, .a=0x41, .x=0xdb, .y=0xe6, .sp=0x3a, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x85b0, .value=0x68}, {.addr=0x85b1, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x85b2, .a=0x41, .x=0xdb, .y=0xe6, .sp=0x3a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x85b0, .value=0x68}, {.addr=0x85b1, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x85b0, .value=0x68, .type=IO_READ},
        {.addr=0x85b1, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_021C) {
    const struct CPU_State initial_cpu = {.pc=0xd956, .a=0x78, .x=0x19, .y=0xf0, .sp=0xc6, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xd956, .value=0x68}, {.addr=0xd957, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xd958, .a=0x78, .x=0x19, .y=0xf0, .sp=0xc6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd956, .value=0x68}, {.addr=0xd957, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xd956, .value=0x68, .type=IO_READ},
        {.addr=0xd957, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_021D) {
    const struct CPU_State initial_cpu = {.pc=0x46a6, .a=0x03, .x=0x22, .y=0x88, .sp=0x99, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x46a6, .value=0x68}, {.addr=0x46a7, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x46a8, .a=0x03, .x=0x22, .y=0x88, .sp=0x99, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x46a6, .value=0x68}, {.addr=0x46a7, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x46a6, .value=0x68, .type=IO_READ},
        {.addr=0x46a7, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_021E) {
    const struct CPU_State initial_cpu = {.pc=0xb1ad, .a=0x8c, .x=0x74, .y=0x74, .sp=0xe4, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xb1ad, .value=0x68}, {.addr=0xb1ae, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xb1af, .a=0x8c, .x=0x74, .y=0x74, .sp=0xe4, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb1ad, .value=0x68}, {.addr=0xb1ae, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xb1ad, .value=0x68, .type=IO_READ},
        {.addr=0xb1ae, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_021F) {
    const struct CPU_State initial_cpu = {.pc=0xf99c, .a=0xd6, .x=0x49, .y=0x3b, .sp=0xc0, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xf99c, .value=0x68}, {.addr=0xf99d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf99e, .a=0xd6, .x=0x49, .y=0x3b, .sp=0xc0, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf99c, .value=0x68}, {.addr=0xf99d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf99c, .value=0x68, .type=IO_READ},
        {.addr=0xf99d, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0220) {
    const struct CPU_State initial_cpu = {.pc=0x3744, .a=0xdb, .x=0x5a, .y=0x6e, .sp=0x48, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x3744, .value=0x68}, {.addr=0x3745, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x3746, .a=0xdb, .x=0x5a, .y=0x6e, .sp=0x48, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3744, .value=0x68}, {.addr=0x3745, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x3744, .value=0x68, .type=IO_READ},
        {.addr=0x3745, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0221) {
    const struct CPU_State initial_cpu = {.pc=0xc286, .a=0x83, .x=0xe8, .y=0xce, .sp=0x0c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xc286, .value=0x68}, {.addr=0xc287, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xc288, .a=0x83, .x=0xe8, .y=0xce, .sp=0x0c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc286, .value=0x68}, {.addr=0xc287, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xc286, .value=0x68, .type=IO_READ},
        {.addr=0xc287, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0222) {
    const struct CPU_State initial_cpu = {.pc=0x7eed, .a=0xf6, .x=0xa5, .y=0x54, .sp=0xf6, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7eed, .value=0x68}, {.addr=0x7eee, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x7eef, .a=0xf6, .x=0xa5, .y=0x54, .sp=0xf6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7eed, .value=0x68}, {.addr=0x7eee, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x7eed, .value=0x68, .type=IO_READ},
        {.addr=0x7eee, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0223) {
    const struct CPU_State initial_cpu = {.pc=0x359e, .a=0x95, .x=0x5a, .y=0x20, .sp=0x88, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x359e, .value=0x68}, {.addr=0x359f, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x35a0, .a=0x95, .x=0x5a, .y=0x20, .sp=0x88, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x359e, .value=0x68}, {.addr=0x359f, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x359e, .value=0x68, .type=IO_READ},
        {.addr=0x359f, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0224) {
    const struct CPU_State initial_cpu = {.pc=0x98e6, .a=0xad, .x=0x31, .y=0x05, .sp=0x06, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x98e6, .value=0x68}, {.addr=0x98e7, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x98e8, .a=0xad, .x=0x31, .y=0x05, .sp=0x06, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x98e6, .value=0x68}, {.addr=0x98e7, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x98e6, .value=0x68, .type=IO_READ},
        {.addr=0x98e7, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0225) {
    const struct CPU_State initial_cpu = {.pc=0x545d, .a=0x61, .x=0x01, .y=0x93, .sp=0x8f, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x545d, .value=0x68}, {.addr=0x545e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x545f, .a=0x61, .x=0x01, .y=0x93, .sp=0x8f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x545d, .value=0x68}, {.addr=0x545e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x545d, .value=0x68, .type=IO_READ},
        {.addr=0x545e, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0226) {
    const struct CPU_State initial_cpu = {.pc=0xd0b7, .a=0x04, .x=0xd6, .y=0xe4, .sp=0xa2, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xd0b7, .value=0x68}, {.addr=0xd0b8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd0b9, .a=0x04, .x=0xd6, .y=0xe4, .sp=0xa2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd0b7, .value=0x68}, {.addr=0xd0b8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd0b7, .value=0x68, .type=IO_READ},
        {.addr=0xd0b8, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0227) {
    const struct CPU_State initial_cpu = {.pc=0x5d7d, .a=0x8a, .x=0x0c, .y=0x32, .sp=0x2f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x5d7d, .value=0x68}, {.addr=0x5d7e, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x5d7f, .a=0x8a, .x=0x0c, .y=0x32, .sp=0x2f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5d7d, .value=0x68}, {.addr=0x5d7e, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x5d7d, .value=0x68, .type=IO_READ},
        {.addr=0x5d7e, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0228) {
    const struct CPU_State initial_cpu = {.pc=0x0fad, .a=0xe7, .x=0xdc, .y=0xac, .sp=0x89, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0fad, .value=0x68}, {.addr=0x0fae, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x0faf, .a=0xe7, .x=0xdc, .y=0xac, .sp=0x89, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0fad, .value=0x68}, {.addr=0x0fae, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x0fad, .value=0x68, .type=IO_READ},
        {.addr=0x0fae, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0229) {
    const struct CPU_State initial_cpu = {.pc=0x8719, .a=0x24, .x=0x19, .y=0x79, .sp=0x11, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x8719, .value=0x68}, {.addr=0x871a, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x871b, .a=0x24, .x=0x19, .y=0x79, .sp=0x11, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x8719, .value=0x68}, {.addr=0x871a, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x8719, .value=0x68, .type=IO_READ},
        {.addr=0x871a, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_022A) {
    const struct CPU_State initial_cpu = {.pc=0x5872, .a=0x1f, .x=0x8d, .y=0xd5, .sp=0x83, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x5872, .value=0x68}, {.addr=0x5873, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x5874, .a=0x1f, .x=0x8d, .y=0xd5, .sp=0x83, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5872, .value=0x68}, {.addr=0x5873, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x5872, .value=0x68, .type=IO_READ},
        {.addr=0x5873, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_022B) {
    const struct CPU_State initial_cpu = {.pc=0xaced, .a=0x3b, .x=0x55, .y=0xb3, .sp=0xa3, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xaced, .value=0x68}, {.addr=0xacee, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xacef, .a=0x3b, .x=0x55, .y=0xb3, .sp=0xa3, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xaced, .value=0x68}, {.addr=0xacee, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xaced, .value=0x68, .type=IO_READ},
        {.addr=0xacee, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_022C) {
    const struct CPU_State initial_cpu = {.pc=0xb4d1, .a=0xcd, .x=0xdd, .y=0xd4, .sp=0x16, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d1, .value=0x68}, {.addr=0xb4d2, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xb4d3, .a=0xcd, .x=0xdd, .y=0xd4, .sp=0x16, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb4d1, .value=0x68}, {.addr=0xb4d2, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xb4d1, .value=0x68, .type=IO_READ},
        {.addr=0xb4d2, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_022D) {
    const struct CPU_State initial_cpu = {.pc=0x2243, .a=0x61, .x=0xcf, .y=0x0e, .sp=0x6c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2243, .value=0x68}, {.addr=0x2244, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2245, .a=0x61, .x=0xcf, .y=0x0e, .sp=0x6c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2243, .value=0x68}, {.addr=0x2244, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2243, .value=0x68, .type=IO_READ},
        {.addr=0x2244, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_022E) {
    const struct CPU_State initial_cpu = {.pc=0xb675, .a=0xce, .x=0x11, .y=0x75, .sp=0xf5, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xb675, .value=0x68}, {.addr=0xb676, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xb677, .a=0xce, .x=0x11, .y=0x75, .sp=0xf5, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb675, .value=0x68}, {.addr=0xb676, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xb675, .value=0x68, .type=IO_READ},
        {.addr=0xb676, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_022F) {
    const struct CPU_State initial_cpu = {.pc=0x2098, .a=0x9b, .x=0x07, .y=0x61, .sp=0x44, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x2098, .value=0x68}, {.addr=0x2099, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x209a, .a=0x9b, .x=0x07, .y=0x61, .sp=0x44, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2098, .value=0x68}, {.addr=0x2099, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x2098, .value=0x68, .type=IO_READ},
        {.addr=0x2099, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0230) {
    const struct CPU_State initial_cpu = {.pc=0x24e0, .a=0xaa, .x=0x8f, .y=0x1c, .sp=0xe9, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x24e0, .value=0x68}, {.addr=0x24e1, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x24e2, .a=0xaa, .x=0x8f, .y=0x1c, .sp=0xe9, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x24e0, .value=0x68}, {.addr=0x24e1, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x24e0, .value=0x68, .type=IO_READ},
        {.addr=0x24e1, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0231) {
    const struct CPU_State initial_cpu = {.pc=0x3da0, .a=0xb4, .x=0xf7, .y=0xeb, .sp=0xbb, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x3da0, .value=0x68}, {.addr=0x3da1, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x3da2, .a=0xb4, .x=0xf7, .y=0xeb, .sp=0xbb, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3da0, .value=0x68}, {.addr=0x3da1, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x3da0, .value=0x68, .type=IO_READ},
        {.addr=0x3da1, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0232) {
    const struct CPU_State initial_cpu = {.pc=0x32e5, .a=0xe5, .x=0x3c, .y=0xd6, .sp=0x23, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x32e5, .value=0x68}, {.addr=0x32e6, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x32e7, .a=0xe5, .x=0x3c, .y=0xd6, .sp=0x23, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x32e5, .value=0x68}, {.addr=0x32e6, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x32e5, .value=0x68, .type=IO_READ},
        {.addr=0x32e6, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0233) {
    const struct CPU_State initial_cpu = {.pc=0xa196, .a=0xd3, .x=0xff, .y=0x54, .sp=0x3d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xa196, .value=0x68}, {.addr=0xa197, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xa198, .a=0xd3, .x=0xff, .y=0x54, .sp=0x3d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa196, .value=0x68}, {.addr=0xa197, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xa196, .value=0x68, .type=IO_READ},
        {.addr=0xa197, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0234) {
    const struct CPU_State initial_cpu = {.pc=0x045d, .a=0x84, .x=0xb7, .y=0xd6, .sp=0xbd, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x045d, .value=0x68}, {.addr=0x045e, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x045f, .a=0x84, .x=0xb7, .y=0xd6, .sp=0xbd, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x045d, .value=0x68}, {.addr=0x045e, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x045d, .value=0x68, .type=IO_READ},
        {.addr=0x045e, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0235) {
    const struct CPU_State initial_cpu = {.pc=0x930b, .a=0x86, .x=0xf8, .y=0x85, .sp=0xaa, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x930b, .value=0x68}, {.addr=0x930c, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x930d, .a=0x86, .x=0xf8, .y=0x85, .sp=0xaa, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x930b, .value=0x68}, {.addr=0x930c, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x930b, .value=0x68, .type=IO_READ},
        {.addr=0x930c, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0236) {
    const struct CPU_State initial_cpu = {.pc=0xc6ea, .a=0x5a, .x=0xba, .y=0xee, .sp=0xcf, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ea, .value=0x68}, {.addr=0xc6eb, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xc6ec, .a=0x5a, .x=0xba, .y=0xee, .sp=0xcf, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc6ea, .value=0x68}, {.addr=0xc6eb, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xc6ea, .value=0x68, .type=IO_READ},
        {.addr=0xc6eb, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0237) {
    const struct CPU_State initial_cpu = {.pc=0x65c1, .a=0xd7, .x=0xd2, .y=0x63, .sp=0xca, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x65c1, .value=0x68}, {.addr=0x65c2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x65c3, .a=0xd7, .x=0xd2, .y=0x63, .sp=0xca, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x65c1, .value=0x68}, {.addr=0x65c2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x65c1, .value=0x68, .type=IO_READ},
        {.addr=0x65c2, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0238) {
    const struct CPU_State initial_cpu = {.pc=0x2514, .a=0x14, .x=0x54, .y=0x71, .sp=0x49, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x2514, .value=0x68}, {.addr=0x2515, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x2516, .a=0x14, .x=0x54, .y=0x71, .sp=0x49, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2514, .value=0x68}, {.addr=0x2515, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x2514, .value=0x68, .type=IO_READ},
        {.addr=0x2515, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0239) {
    const struct CPU_State initial_cpu = {.pc=0xdaa9, .a=0x32, .x=0xa4, .y=0xaf, .sp=0x14, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa9, .value=0x68}, {.addr=0xdaaa, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xdaab, .a=0x32, .x=0xa4, .y=0xaf, .sp=0x14, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xdaa9, .value=0x68}, {.addr=0xdaaa, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xdaa9, .value=0x68, .type=IO_READ},
        {.addr=0xdaaa, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_023A) {
    const struct CPU_State initial_cpu = {.pc=0xb06a, .a=0x12, .x=0xd5, .y=0x2e, .sp=0x80, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xb06a, .value=0x68}, {.addr=0xb06b, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xb06c, .a=0x12, .x=0xd5, .y=0x2e, .sp=0x80, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb06a, .value=0x68}, {.addr=0xb06b, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xb06a, .value=0x68, .type=IO_READ},
        {.addr=0xb06b, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_023B) {
    const struct CPU_State initial_cpu = {.pc=0x4c2b, .a=0x3e, .x=0x17, .y=0x34, .sp=0x45, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4c2b, .value=0x68}, {.addr=0x4c2c, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x4c2d, .a=0x3e, .x=0x17, .y=0x34, .sp=0x45, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4c2b, .value=0x68}, {.addr=0x4c2c, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x4c2b, .value=0x68, .type=IO_READ},
        {.addr=0x4c2c, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_023C) {
    const struct CPU_State initial_cpu = {.pc=0xfbe4, .a=0x7b, .x=0x4b, .y=0xb0, .sp=0x55, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe4, .value=0x68}, {.addr=0xfbe5, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xfbe6, .a=0x7b, .x=0x4b, .y=0xb0, .sp=0x55, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfbe4, .value=0x68}, {.addr=0xfbe5, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xfbe4, .value=0x68, .type=IO_READ},
        {.addr=0xfbe5, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_023D) {
    const struct CPU_State initial_cpu = {.pc=0x0ac0, .a=0x4a, .x=0xc4, .y=0xd1, .sp=0x57, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0ac0, .value=0x68}, {.addr=0x0ac1, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x0ac2, .a=0x4a, .x=0xc4, .y=0xd1, .sp=0x57, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0ac0, .value=0x68}, {.addr=0x0ac1, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x0ac0, .value=0x68, .type=IO_READ},
        {.addr=0x0ac1, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_023E) {
    const struct CPU_State initial_cpu = {.pc=0xa047, .a=0x0c, .x=0x57, .y=0x5c, .sp=0xd3, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa047, .value=0x68}, {.addr=0xa048, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xa049, .a=0x0c, .x=0x57, .y=0x5c, .sp=0xd3, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xa047, .value=0x68}, {.addr=0xa048, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xa047, .value=0x68, .type=IO_READ},
        {.addr=0xa048, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_023F) {
    const struct CPU_State initial_cpu = {.pc=0x7f93, .a=0x16, .x=0x74, .y=0x0d, .sp=0xed, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x7f93, .value=0x68}, {.addr=0x7f94, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x7f95, .a=0x16, .x=0x74, .y=0x0d, .sp=0xed, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7f93, .value=0x68}, {.addr=0x7f94, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x7f93, .value=0x68, .type=IO_READ},
        {.addr=0x7f94, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0240) {
    const struct CPU_State initial_cpu = {.pc=0x059b, .a=0xf8, .x=0x7e, .y=0x5c, .sp=0xa7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x059b, .value=0x68}, {.addr=0x059c, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x059d, .a=0xf8, .x=0x7e, .y=0x5c, .sp=0xa7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x059b, .value=0x68}, {.addr=0x059c, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x059b, .value=0x68, .type=IO_READ},
        {.addr=0x059c, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0241) {
    const struct CPU_State initial_cpu = {.pc=0xc69b, .a=0x61, .x=0xf1, .y=0xf5, .sp=0x24, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xc69b, .value=0x68}, {.addr=0xc69c, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xc69d, .a=0x61, .x=0xf1, .y=0xf5, .sp=0x24, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc69b, .value=0x68}, {.addr=0xc69c, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xc69b, .value=0x68, .type=IO_READ},
        {.addr=0xc69c, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0242) {
    const struct CPU_State initial_cpu = {.pc=0x4194, .a=0x09, .x=0x18, .y=0xcb, .sp=0xe7, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4194, .value=0x68}, {.addr=0x4195, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x4196, .a=0x09, .x=0x18, .y=0xcb, .sp=0xe7, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x4194, .value=0x68}, {.addr=0x4195, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x4194, .value=0x68, .type=IO_READ},
        {.addr=0x4195, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0243) {
    const struct CPU_State initial_cpu = {.pc=0x7489, .a=0x15, .x=0x84, .y=0x1a, .sp=0x20, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x7489, .value=0x68}, {.addr=0x748a, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x748b, .a=0x15, .x=0x84, .y=0x1a, .sp=0x20, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7489, .value=0x68}, {.addr=0x748a, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x7489, .value=0x68, .type=IO_READ},
        {.addr=0x748a, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0244) {
    const struct CPU_State initial_cpu = {.pc=0x7fde, .a=0x37, .x=0xa3, .y=0xfe, .sp=0x02, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x7fde, .value=0x68}, {.addr=0x7fdf, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x7fe0, .a=0x37, .x=0xa3, .y=0xfe, .sp=0x02, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7fde, .value=0x68}, {.addr=0x7fdf, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x7fde, .value=0x68, .type=IO_READ},
        {.addr=0x7fdf, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0245) {
    const struct CPU_State initial_cpu = {.pc=0xf6e5, .a=0x80, .x=0x35, .y=0xa1, .sp=0x96, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf6e5, .value=0x68}, {.addr=0xf6e6, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xf6e7, .a=0x80, .x=0x35, .y=0xa1, .sp=0x96, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf6e5, .value=0x68}, {.addr=0xf6e6, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xf6e5, .value=0x68, .type=IO_READ},
        {.addr=0xf6e6, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0246) {
    const struct CPU_State initial_cpu = {.pc=0xad6f, .a=0x0c, .x=0xeb, .y=0x67, .sp=0xb3, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xad6f, .value=0x68}, {.addr=0xad70, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xad71, .a=0x0c, .x=0xeb, .y=0x67, .sp=0xb3, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xad6f, .value=0x68}, {.addr=0xad70, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xad6f, .value=0x68, .type=IO_READ},
        {.addr=0xad70, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8a71, .a=0x82, .x=0xa0, .y=0xc5, .sp=0xa2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x8a71, .value=0x68}, {.addr=0x8a72, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x8a73, .a=0x82, .x=0xa0, .y=0xc5, .sp=0xa2, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8a71, .value=0x68}, {.addr=0x8a72, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x8a71, .value=0x68, .type=IO_READ},
        {.addr=0x8a72, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0248) {
    const struct CPU_State initial_cpu = {.pc=0xb5a3, .a=0x5f, .x=0xf4, .y=0x7e, .sp=0xac, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb5a3, .value=0x68}, {.addr=0xb5a4, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xb5a5, .a=0x5f, .x=0xf4, .y=0x7e, .sp=0xac, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb5a3, .value=0x68}, {.addr=0xb5a4, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xb5a3, .value=0x68, .type=IO_READ},
        {.addr=0xb5a4, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0249) {
    const struct CPU_State initial_cpu = {.pc=0x93b9, .a=0x66, .x=0xe7, .y=0x4b, .sp=0x52, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x93b9, .value=0x68}, {.addr=0x93ba, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x93bb, .a=0x66, .x=0xe7, .y=0x4b, .sp=0x52, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x93b9, .value=0x68}, {.addr=0x93ba, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x93b9, .value=0x68, .type=IO_READ},
        {.addr=0x93ba, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_024A) {
    const struct CPU_State initial_cpu = {.pc=0xc5da, .a=0xfc, .x=0x44, .y=0xa0, .sp=0xf4, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc5da, .value=0x68}, {.addr=0xc5db, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc5dc, .a=0xfc, .x=0x44, .y=0xa0, .sp=0xf4, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc5da, .value=0x68}, {.addr=0xc5db, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc5da, .value=0x68, .type=IO_READ},
        {.addr=0xc5db, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_024B) {
    const struct CPU_State initial_cpu = {.pc=0xc350, .a=0x37, .x=0xfd, .y=0x41, .sp=0xc0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xc350, .value=0x68}, {.addr=0xc351, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xc352, .a=0x37, .x=0xfd, .y=0x41, .sp=0xc0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc350, .value=0x68}, {.addr=0xc351, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xc350, .value=0x68, .type=IO_READ},
        {.addr=0xc351, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_024C) {
    const struct CPU_State initial_cpu = {.pc=0x1d35, .a=0x60, .x=0x84, .y=0x6e, .sp=0x97, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1d35, .value=0x68}, {.addr=0x1d36, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x1d37, .a=0x60, .x=0x84, .y=0x6e, .sp=0x97, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1d35, .value=0x68}, {.addr=0x1d36, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x1d35, .value=0x68, .type=IO_READ},
        {.addr=0x1d36, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_024D) {
    const struct CPU_State initial_cpu = {.pc=0x68fd, .a=0xfd, .x=0xc5, .y=0xa2, .sp=0x7f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x68fd, .value=0x68}, {.addr=0x68fe, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x68ff, .a=0xfd, .x=0xc5, .y=0xa2, .sp=0x7f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x68fd, .value=0x68}, {.addr=0x68fe, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x68fd, .value=0x68, .type=IO_READ},
        {.addr=0x68fe, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_024E) {
    const struct CPU_State initial_cpu = {.pc=0x0658, .a=0x01, .x=0x6f, .y=0x2d, .sp=0x03, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0658, .value=0x68}, {.addr=0x0659, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x065a, .a=0x01, .x=0x6f, .y=0x2d, .sp=0x03, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0658, .value=0x68}, {.addr=0x0659, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x0658, .value=0x68, .type=IO_READ},
        {.addr=0x0659, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_024F) {
    const struct CPU_State initial_cpu = {.pc=0x1c2c, .a=0x08, .x=0xb1, .y=0x23, .sp=0xf2, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x1c2c, .value=0x68}, {.addr=0x1c2d, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x1c2e, .a=0x08, .x=0xb1, .y=0x23, .sp=0xf2, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1c2c, .value=0x68}, {.addr=0x1c2d, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x1c2c, .value=0x68, .type=IO_READ},
        {.addr=0x1c2d, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0250) {
    const struct CPU_State initial_cpu = {.pc=0x12df, .a=0xb8, .x=0xcd, .y=0xfa, .sp=0x6f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x12df, .value=0x68}, {.addr=0x12e0, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x12e1, .a=0xb8, .x=0xcd, .y=0xfa, .sp=0x6f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x12df, .value=0x68}, {.addr=0x12e0, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x12df, .value=0x68, .type=IO_READ},
        {.addr=0x12e0, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0251) {
    const struct CPU_State initial_cpu = {.pc=0xf535, .a=0x9b, .x=0xd4, .y=0xa5, .sp=0xfd, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xf535, .value=0x68}, {.addr=0xf536, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xf537, .a=0x9b, .x=0xd4, .y=0xa5, .sp=0xfd, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf535, .value=0x68}, {.addr=0xf536, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xf535, .value=0x68, .type=IO_READ},
        {.addr=0xf536, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0252) {
    const struct CPU_State initial_cpu = {.pc=0x9446, .a=0xea, .x=0x06, .y=0x85, .sp=0xde, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x9446, .value=0x68}, {.addr=0x9447, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x9448, .a=0xea, .x=0x06, .y=0x85, .sp=0xde, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9446, .value=0x68}, {.addr=0x9447, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x9446, .value=0x68, .type=IO_READ},
        {.addr=0x9447, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0253) {
    const struct CPU_State initial_cpu = {.pc=0x6ffa, .a=0xb6, .x=0x17, .y=0xd1, .sp=0x63, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6ffa, .value=0x68}, {.addr=0x6ffb, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x6ffc, .a=0xb6, .x=0x17, .y=0xd1, .sp=0x63, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6ffa, .value=0x68}, {.addr=0x6ffb, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x6ffa, .value=0x68, .type=IO_READ},
        {.addr=0x6ffb, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0254) {
    const struct CPU_State initial_cpu = {.pc=0x6fa6, .a=0x6c, .x=0xee, .y=0x82, .sp=0xb4, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x6fa6, .value=0x68}, {.addr=0x6fa7, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x6fa8, .a=0x6c, .x=0xee, .y=0x82, .sp=0xb4, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6fa6, .value=0x68}, {.addr=0x6fa7, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x6fa6, .value=0x68, .type=IO_READ},
        {.addr=0x6fa7, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0255) {
    const struct CPU_State initial_cpu = {.pc=0x042c, .a=0x38, .x=0xa8, .y=0x5a, .sp=0x6f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x042c, .value=0x68}, {.addr=0x042d, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x042e, .a=0x38, .x=0xa8, .y=0x5a, .sp=0x6f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x042c, .value=0x68}, {.addr=0x042d, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x042c, .value=0x68, .type=IO_READ},
        {.addr=0x042d, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0256) {
    const struct CPU_State initial_cpu = {.pc=0x4a2a, .a=0x57, .x=0xb7, .y=0xca, .sp=0xe2, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x4a2a, .value=0x68}, {.addr=0x4a2b, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x4a2c, .a=0x57, .x=0xb7, .y=0xca, .sp=0xe2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4a2a, .value=0x68}, {.addr=0x4a2b, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x4a2a, .value=0x68, .type=IO_READ},
        {.addr=0x4a2b, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0257) {
    const struct CPU_State initial_cpu = {.pc=0x9e89, .a=0xc5, .x=0xb1, .y=0xfe, .sp=0x70, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x9e89, .value=0x68}, {.addr=0x9e8a, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x9e8b, .a=0xc5, .x=0xb1, .y=0xfe, .sp=0x70, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9e89, .value=0x68}, {.addr=0x9e8a, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x9e89, .value=0x68, .type=IO_READ},
        {.addr=0x9e8a, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0258) {
    const struct CPU_State initial_cpu = {.pc=0x37ce, .a=0x1d, .x=0xa8, .y=0x2f, .sp=0x77, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x37ce, .value=0x68}, {.addr=0x37cf, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x37d0, .a=0x1d, .x=0xa8, .y=0x2f, .sp=0x77, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x37ce, .value=0x68}, {.addr=0x37cf, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x37ce, .value=0x68, .type=IO_READ},
        {.addr=0x37cf, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0259) {
    const struct CPU_State initial_cpu = {.pc=0xa8fc, .a=0x1b, .x=0x44, .y=0xeb, .sp=0x29, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xa8fc, .value=0x68}, {.addr=0xa8fd, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xa8fe, .a=0x1b, .x=0x44, .y=0xeb, .sp=0x29, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa8fc, .value=0x68}, {.addr=0xa8fd, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xa8fc, .value=0x68, .type=IO_READ},
        {.addr=0xa8fd, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_025A) {
    const struct CPU_State initial_cpu = {.pc=0xc26f, .a=0x90, .x=0x9b, .y=0x2a, .sp=0x7c, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc26f, .value=0x68}, {.addr=0xc270, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xc271, .a=0x90, .x=0x9b, .y=0x2a, .sp=0x7c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc26f, .value=0x68}, {.addr=0xc270, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xc26f, .value=0x68, .type=IO_READ},
        {.addr=0xc270, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_025B) {
    const struct CPU_State initial_cpu = {.pc=0x22d0, .a=0xd1, .x=0x5b, .y=0x5c, .sp=0x58, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x22d0, .value=0x68}, {.addr=0x22d1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x22d2, .a=0xd1, .x=0x5b, .y=0x5c, .sp=0x58, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x22d0, .value=0x68}, {.addr=0x22d1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x22d0, .value=0x68, .type=IO_READ},
        {.addr=0x22d1, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_025C) {
    const struct CPU_State initial_cpu = {.pc=0x2773, .a=0xc6, .x=0xcb, .y=0xdb, .sp=0x75, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x2773, .value=0x68}, {.addr=0x2774, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x2775, .a=0xc6, .x=0xcb, .y=0xdb, .sp=0x75, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x2773, .value=0x68}, {.addr=0x2774, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x2773, .value=0x68, .type=IO_READ},
        {.addr=0x2774, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_025D) {
    const struct CPU_State initial_cpu = {.pc=0x9d6d, .a=0x71, .x=0x0e, .y=0x03, .sp=0xe6, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x9d6d, .value=0x68}, {.addr=0x9d6e, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x9d6f, .a=0x71, .x=0x0e, .y=0x03, .sp=0xe6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9d6d, .value=0x68}, {.addr=0x9d6e, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x9d6d, .value=0x68, .type=IO_READ},
        {.addr=0x9d6e, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_025E) {
    const struct CPU_State initial_cpu = {.pc=0x1cde, .a=0xc7, .x=0x40, .y=0x3e, .sp=0x0c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x1cde, .value=0x68}, {.addr=0x1cdf, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x1ce0, .a=0xc7, .x=0x40, .y=0x3e, .sp=0x0c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1cde, .value=0x68}, {.addr=0x1cdf, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x1cde, .value=0x68, .type=IO_READ},
        {.addr=0x1cdf, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_025F) {
    const struct CPU_State initial_cpu = {.pc=0x5684, .a=0x48, .x=0x7e, .y=0x3c, .sp=0x73, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x5684, .value=0x68}, {.addr=0x5685, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x5686, .a=0x48, .x=0x7e, .y=0x3c, .sp=0x73, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5684, .value=0x68}, {.addr=0x5685, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x5684, .value=0x68, .type=IO_READ},
        {.addr=0x5685, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0260) {
    const struct CPU_State initial_cpu = {.pc=0x02ad, .a=0xe4, .x=0x0f, .y=0x86, .sp=0xd6, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x02ad, .value=0x68}, {.addr=0x02ae, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x02af, .a=0xe4, .x=0x0f, .y=0x86, .sp=0xd6, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x02ad, .value=0x68}, {.addr=0x02ae, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x02ad, .value=0x68, .type=IO_READ},
        {.addr=0x02ae, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0261) {
    const struct CPU_State initial_cpu = {.pc=0x23cc, .a=0x63, .x=0x93, .y=0x5a, .sp=0x48, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x23cc, .value=0x68}, {.addr=0x23cd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x23ce, .a=0x63, .x=0x93, .y=0x5a, .sp=0x48, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x23cc, .value=0x68}, {.addr=0x23cd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x23cc, .value=0x68, .type=IO_READ},
        {.addr=0x23cd, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0262) {
    const struct CPU_State initial_cpu = {.pc=0xb6ea, .a=0x74, .x=0x95, .y=0x51, .sp=0xa8, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ea, .value=0x68}, {.addr=0xb6eb, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xb6ec, .a=0x74, .x=0x95, .y=0x51, .sp=0xa8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb6ea, .value=0x68}, {.addr=0xb6eb, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xb6ea, .value=0x68, .type=IO_READ},
        {.addr=0xb6eb, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0263) {
    const struct CPU_State initial_cpu = {.pc=0x1451, .a=0xd8, .x=0x57, .y=0x7e, .sp=0x46, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x1451, .value=0x68}, {.addr=0x1452, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x1453, .a=0xd8, .x=0x57, .y=0x7e, .sp=0x46, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1451, .value=0x68}, {.addr=0x1452, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x1451, .value=0x68, .type=IO_READ},
        {.addr=0x1452, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0264) {
    const struct CPU_State initial_cpu = {.pc=0x8f49, .a=0xa6, .x=0x4f, .y=0xf0, .sp=0x17, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8f49, .value=0x68}, {.addr=0x8f4a, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x8f4b, .a=0xa6, .x=0x4f, .y=0xf0, .sp=0x17, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8f49, .value=0x68}, {.addr=0x8f4a, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x8f49, .value=0x68, .type=IO_READ},
        {.addr=0x8f4a, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0265) {
    const struct CPU_State initial_cpu = {.pc=0xa794, .a=0x38, .x=0xd3, .y=0xc7, .sp=0x8d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xa794, .value=0x68}, {.addr=0xa795, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa796, .a=0x38, .x=0xd3, .y=0xc7, .sp=0x8d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xa794, .value=0x68}, {.addr=0xa795, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa794, .value=0x68, .type=IO_READ},
        {.addr=0xa795, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0266) {
    const struct CPU_State initial_cpu = {.pc=0xa16f, .a=0xd7, .x=0x14, .y=0xcc, .sp=0x01, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xa16f, .value=0x68}, {.addr=0xa170, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xa171, .a=0xd7, .x=0x14, .y=0xcc, .sp=0x01, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa16f, .value=0x68}, {.addr=0xa170, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xa16f, .value=0x68, .type=IO_READ},
        {.addr=0xa170, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0267) {
    const struct CPU_State initial_cpu = {.pc=0x32bd, .a=0x6d, .x=0xc4, .y=0x52, .sp=0xfb, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x32bd, .value=0x68}, {.addr=0x32be, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x32bf, .a=0x6d, .x=0xc4, .y=0x52, .sp=0xfb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x32bd, .value=0x68}, {.addr=0x32be, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x32bd, .value=0x68, .type=IO_READ},
        {.addr=0x32be, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0268) {
    const struct CPU_State initial_cpu = {.pc=0x4094, .a=0xec, .x=0xef, .y=0x3c, .sp=0x7e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x4094, .value=0x68}, {.addr=0x4095, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x4096, .a=0xec, .x=0xef, .y=0x3c, .sp=0x7e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4094, .value=0x68}, {.addr=0x4095, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x4094, .value=0x68, .type=IO_READ},
        {.addr=0x4095, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0269) {
    const struct CPU_State initial_cpu = {.pc=0x0a5a, .a=0x41, .x=0x50, .y=0xb6, .sp=0xe5, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0a5a, .value=0x68}, {.addr=0x0a5b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0a5c, .a=0x41, .x=0x50, .y=0xb6, .sp=0xe5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0a5a, .value=0x68}, {.addr=0x0a5b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0a5a, .value=0x68, .type=IO_READ},
        {.addr=0x0a5b, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_026A) {
    const struct CPU_State initial_cpu = {.pc=0xe06f, .a=0xf0, .x=0x52, .y=0x7a, .sp=0x91, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xe06f, .value=0x68}, {.addr=0xe070, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xe071, .a=0xf0, .x=0x52, .y=0x7a, .sp=0x91, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe06f, .value=0x68}, {.addr=0xe070, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xe06f, .value=0x68, .type=IO_READ},
        {.addr=0xe070, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_026B) {
    const struct CPU_State initial_cpu = {.pc=0x95a3, .a=0x7e, .x=0x62, .y=0x4f, .sp=0x8d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x95a3, .value=0x68}, {.addr=0x95a4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x95a5, .a=0x7e, .x=0x62, .y=0x4f, .sp=0x8d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x95a3, .value=0x68}, {.addr=0x95a4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x95a3, .value=0x68, .type=IO_READ},
        {.addr=0x95a4, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_026C) {
    const struct CPU_State initial_cpu = {.pc=0x5750, .a=0x29, .x=0xab, .y=0x1e, .sp=0xf0, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x5750, .value=0x68}, {.addr=0x5751, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x5752, .a=0x29, .x=0xab, .y=0x1e, .sp=0xf0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5750, .value=0x68}, {.addr=0x5751, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x5750, .value=0x68, .type=IO_READ},
        {.addr=0x5751, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_026D) {
    const struct CPU_State initial_cpu = {.pc=0x78d6, .a=0xb5, .x=0xc8, .y=0x61, .sp=0x4c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x78d6, .value=0x68}, {.addr=0x78d7, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x78d8, .a=0xb5, .x=0xc8, .y=0x61, .sp=0x4c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x78d6, .value=0x68}, {.addr=0x78d7, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x78d6, .value=0x68, .type=IO_READ},
        {.addr=0x78d7, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_026E) {
    const struct CPU_State initial_cpu = {.pc=0xa546, .a=0x4d, .x=0xb1, .y=0x3d, .sp=0x2c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa546, .value=0x68}, {.addr=0xa547, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xa548, .a=0x4d, .x=0xb1, .y=0x3d, .sp=0x2c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa546, .value=0x68}, {.addr=0xa547, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xa546, .value=0x68, .type=IO_READ},
        {.addr=0xa547, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_026F) {
    const struct CPU_State initial_cpu = {.pc=0xa8db, .a=0xff, .x=0xdc, .y=0xb5, .sp=0xea, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xa8db, .value=0x68}, {.addr=0xa8dc, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xa8dd, .a=0xff, .x=0xdc, .y=0xb5, .sp=0xea, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xa8db, .value=0x68}, {.addr=0xa8dc, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xa8db, .value=0x68, .type=IO_READ},
        {.addr=0xa8dc, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0270) {
    const struct CPU_State initial_cpu = {.pc=0xa8ce, .a=0xcb, .x=0x32, .y=0x06, .sp=0xee, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xa8ce, .value=0x68}, {.addr=0xa8cf, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xa8d0, .a=0xcb, .x=0x32, .y=0x06, .sp=0xee, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa8ce, .value=0x68}, {.addr=0xa8cf, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xa8ce, .value=0x68, .type=IO_READ},
        {.addr=0xa8cf, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0271) {
    const struct CPU_State initial_cpu = {.pc=0x5fdb, .a=0xa4, .x=0x1d, .y=0xdc, .sp=0x88, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x5fdb, .value=0x68}, {.addr=0x5fdc, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x5fdd, .a=0xa4, .x=0x1d, .y=0xdc, .sp=0x88, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5fdb, .value=0x68}, {.addr=0x5fdc, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x5fdb, .value=0x68, .type=IO_READ},
        {.addr=0x5fdc, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0272) {
    const struct CPU_State initial_cpu = {.pc=0x59e8, .a=0x3e, .x=0xfe, .y=0xad, .sp=0x31, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x59e8, .value=0x68}, {.addr=0x59e9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x59ea, .a=0x3e, .x=0xfe, .y=0xad, .sp=0x31, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x59e8, .value=0x68}, {.addr=0x59e9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x59e8, .value=0x68, .type=IO_READ},
        {.addr=0x59e9, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0273) {
    const struct CPU_State initial_cpu = {.pc=0xc66c, .a=0x2a, .x=0x7c, .y=0x89, .sp=0x1d, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xc66c, .value=0x68}, {.addr=0xc66d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc66e, .a=0x2a, .x=0x7c, .y=0x89, .sp=0x1d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc66c, .value=0x68}, {.addr=0xc66d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc66c, .value=0x68, .type=IO_READ},
        {.addr=0xc66d, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0274) {
    const struct CPU_State initial_cpu = {.pc=0xa249, .a=0xbd, .x=0xd9, .y=0x0d, .sp=0xbd, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa249, .value=0x68}, {.addr=0xa24a, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xa24b, .a=0xbd, .x=0xd9, .y=0x0d, .sp=0xbd, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa249, .value=0x68}, {.addr=0xa24a, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xa249, .value=0x68, .type=IO_READ},
        {.addr=0xa24a, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0275) {
    const struct CPU_State initial_cpu = {.pc=0x7f86, .a=0x0b, .x=0x2d, .y=0x6b, .sp=0x75, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x7f86, .value=0x68}, {.addr=0x7f87, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x7f88, .a=0x0b, .x=0x2d, .y=0x6b, .sp=0x75, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7f86, .value=0x68}, {.addr=0x7f87, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x7f86, .value=0x68, .type=IO_READ},
        {.addr=0x7f87, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0276) {
    const struct CPU_State initial_cpu = {.pc=0xec7f, .a=0xdb, .x=0xf0, .y=0xa3, .sp=0xfb, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xec7f, .value=0x68}, {.addr=0xec80, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xec81, .a=0xdb, .x=0xf0, .y=0xa3, .sp=0xfb, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xec7f, .value=0x68}, {.addr=0xec80, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xec7f, .value=0x68, .type=IO_READ},
        {.addr=0xec80, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0277) {
    const struct CPU_State initial_cpu = {.pc=0x243d, .a=0x30, .x=0x8b, .y=0xdb, .sp=0x48, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x243d, .value=0x68}, {.addr=0x243e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x243f, .a=0x30, .x=0x8b, .y=0xdb, .sp=0x48, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x243d, .value=0x68}, {.addr=0x243e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x243d, .value=0x68, .type=IO_READ},
        {.addr=0x243e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0278) {
    const struct CPU_State initial_cpu = {.pc=0x1ccf, .a=0x81, .x=0x55, .y=0x7e, .sp=0x4a, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1ccf, .value=0x68}, {.addr=0x1cd0, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x1cd1, .a=0x81, .x=0x55, .y=0x7e, .sp=0x4a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1ccf, .value=0x68}, {.addr=0x1cd0, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x1ccf, .value=0x68, .type=IO_READ},
        {.addr=0x1cd0, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0279) {
    const struct CPU_State initial_cpu = {.pc=0xbb3f, .a=0x0e, .x=0xe2, .y=0xbb, .sp=0xb7, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xbb3f, .value=0x68}, {.addr=0xbb40, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xbb41, .a=0x0e, .x=0xe2, .y=0xbb, .sp=0xb7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xbb3f, .value=0x68}, {.addr=0xbb40, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xbb3f, .value=0x68, .type=IO_READ},
        {.addr=0xbb40, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_027A) {
    const struct CPU_State initial_cpu = {.pc=0x1b1f, .a=0x6f, .x=0x5c, .y=0xf2, .sp=0x3a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x1b1f, .value=0x68}, {.addr=0x1b20, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x1b21, .a=0x6f, .x=0x5c, .y=0xf2, .sp=0x3a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1b1f, .value=0x68}, {.addr=0x1b20, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x1b1f, .value=0x68, .type=IO_READ},
        {.addr=0x1b20, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_027B) {
    const struct CPU_State initial_cpu = {.pc=0xe378, .a=0xed, .x=0xba, .y=0x74, .sp=0xa6, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xe378, .value=0x68}, {.addr=0xe379, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xe37a, .a=0xed, .x=0xba, .y=0x74, .sp=0xa6, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe378, .value=0x68}, {.addr=0xe379, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xe378, .value=0x68, .type=IO_READ},
        {.addr=0xe379, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_027C) {
    const struct CPU_State initial_cpu = {.pc=0xd5b7, .a=0x6c, .x=0xde, .y=0xa7, .sp=0x74, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b7, .value=0x68}, {.addr=0xd5b8, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xd5b9, .a=0x6c, .x=0xde, .y=0xa7, .sp=0x74, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd5b7, .value=0x68}, {.addr=0xd5b8, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xd5b7, .value=0x68, .type=IO_READ},
        {.addr=0xd5b8, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_027D) {
    const struct CPU_State initial_cpu = {.pc=0xd364, .a=0x4d, .x=0x05, .y=0xf1, .sp=0xa0, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xd364, .value=0x68}, {.addr=0xd365, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xd366, .a=0x4d, .x=0x05, .y=0xf1, .sp=0xa0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xd364, .value=0x68}, {.addr=0xd365, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xd364, .value=0x68, .type=IO_READ},
        {.addr=0xd365, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_027E) {
    const struct CPU_State initial_cpu = {.pc=0xbe57, .a=0x16, .x=0xd1, .y=0xda, .sp=0x87, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xbe57, .value=0x68}, {.addr=0xbe58, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xbe59, .a=0x16, .x=0xd1, .y=0xda, .sp=0x87, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xbe57, .value=0x68}, {.addr=0xbe58, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xbe57, .value=0x68, .type=IO_READ},
        {.addr=0xbe58, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_027F) {
    const struct CPU_State initial_cpu = {.pc=0x3003, .a=0x9d, .x=0xbf, .y=0xe4, .sp=0x8b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x3003, .value=0x68}, {.addr=0x3004, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x3005, .a=0x9d, .x=0xbf, .y=0xe4, .sp=0x8b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3003, .value=0x68}, {.addr=0x3004, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x3003, .value=0x68, .type=IO_READ},
        {.addr=0x3004, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0280) {
    const struct CPU_State initial_cpu = {.pc=0xde69, .a=0xbd, .x=0xbb, .y=0x9c, .sp=0xfd, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xde69, .value=0x68}, {.addr=0xde6a, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xde6b, .a=0xbd, .x=0xbb, .y=0x9c, .sp=0xfd, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xde69, .value=0x68}, {.addr=0xde6a, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xde69, .value=0x68, .type=IO_READ},
        {.addr=0xde6a, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0281) {
    const struct CPU_State initial_cpu = {.pc=0x08d4, .a=0x45, .x=0x88, .y=0xcf, .sp=0x12, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x08d4, .value=0x68}, {.addr=0x08d5, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x08d6, .a=0x45, .x=0x88, .y=0xcf, .sp=0x12, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x08d4, .value=0x68}, {.addr=0x08d5, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x08d4, .value=0x68, .type=IO_READ},
        {.addr=0x08d5, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0282) {
    const struct CPU_State initial_cpu = {.pc=0x92b8, .a=0xfc, .x=0x7c, .y=0x77, .sp=0x1e, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x92b8, .value=0x68}, {.addr=0x92b9, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x92ba, .a=0xfc, .x=0x7c, .y=0x77, .sp=0x1e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x92b8, .value=0x68}, {.addr=0x92b9, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x92b8, .value=0x68, .type=IO_READ},
        {.addr=0x92b9, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0283) {
    const struct CPU_State initial_cpu = {.pc=0x1e9e, .a=0x69, .x=0x0b, .y=0x24, .sp=0x63, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x1e9e, .value=0x68}, {.addr=0x1e9f, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x1ea0, .a=0x69, .x=0x0b, .y=0x24, .sp=0x63, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1e9e, .value=0x68}, {.addr=0x1e9f, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x1e9e, .value=0x68, .type=IO_READ},
        {.addr=0x1e9f, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0284) {
    const struct CPU_State initial_cpu = {.pc=0x4c1b, .a=0x61, .x=0xfe, .y=0xda, .sp=0x45, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x4c1b, .value=0x68}, {.addr=0x4c1c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4c1d, .a=0x61, .x=0xfe, .y=0xda, .sp=0x45, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4c1b, .value=0x68}, {.addr=0x4c1c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4c1b, .value=0x68, .type=IO_READ},
        {.addr=0x4c1c, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0285) {
    const struct CPU_State initial_cpu = {.pc=0x2987, .a=0x89, .x=0x2a, .y=0xf4, .sp=0xc6, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x2987, .value=0x68}, {.addr=0x2988, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x2989, .a=0x89, .x=0x2a, .y=0xf4, .sp=0xc6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2987, .value=0x68}, {.addr=0x2988, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x2987, .value=0x68, .type=IO_READ},
        {.addr=0x2988, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0286) {
    const struct CPU_State initial_cpu = {.pc=0xb92e, .a=0x59, .x=0x29, .y=0x28, .sp=0x16, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xb92e, .value=0x68}, {.addr=0xb92f, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xb930, .a=0x59, .x=0x29, .y=0x28, .sp=0x16, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb92e, .value=0x68}, {.addr=0xb92f, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xb92e, .value=0x68, .type=IO_READ},
        {.addr=0xb92f, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0287) {
    const struct CPU_State initial_cpu = {.pc=0x1758, .a=0x66, .x=0x41, .y=0xce, .sp=0xaf, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1758, .value=0x68}, {.addr=0x1759, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x175a, .a=0x66, .x=0x41, .y=0xce, .sp=0xaf, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1758, .value=0x68}, {.addr=0x1759, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x1758, .value=0x68, .type=IO_READ},
        {.addr=0x1759, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0288) {
    const struct CPU_State initial_cpu = {.pc=0x1634, .a=0xbb, .x=0xea, .y=0x60, .sp=0x9f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x1634, .value=0x68}, {.addr=0x1635, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x1636, .a=0xbb, .x=0xea, .y=0x60, .sp=0x9f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x1634, .value=0x68}, {.addr=0x1635, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x1634, .value=0x68, .type=IO_READ},
        {.addr=0x1635, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0289) {
    const struct CPU_State initial_cpu = {.pc=0xb13b, .a=0xe9, .x=0xf2, .y=0xa5, .sp=0x13, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xb13b, .value=0x68}, {.addr=0xb13c, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xb13d, .a=0xe9, .x=0xf2, .y=0xa5, .sp=0x13, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb13b, .value=0x68}, {.addr=0xb13c, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xb13b, .value=0x68, .type=IO_READ},
        {.addr=0xb13c, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe8f6, .a=0xf5, .x=0xf1, .y=0x35, .sp=0x4e, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f6, .value=0x68}, {.addr=0xe8f7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe8f8, .a=0xf5, .x=0xf1, .y=0x35, .sp=0x4e, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe8f6, .value=0x68}, {.addr=0xe8f7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe8f6, .value=0x68, .type=IO_READ},
        {.addr=0xe8f7, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_028B) {
    const struct CPU_State initial_cpu = {.pc=0x02c5, .a=0x14, .x=0x43, .y=0x64, .sp=0xc5, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x02c5, .value=0x68}, {.addr=0x02c6, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x02c7, .a=0x14, .x=0x43, .y=0x64, .sp=0xc5, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x02c5, .value=0x68}, {.addr=0x02c6, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x02c5, .value=0x68, .type=IO_READ},
        {.addr=0x02c6, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_028C) {
    const struct CPU_State initial_cpu = {.pc=0x7272, .a=0x45, .x=0x33, .y=0x0d, .sp=0xf8, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x7272, .value=0x68}, {.addr=0x7273, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x7274, .a=0x45, .x=0x33, .y=0x0d, .sp=0xf8, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7272, .value=0x68}, {.addr=0x7273, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x7272, .value=0x68, .type=IO_READ},
        {.addr=0x7273, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_028D) {
    const struct CPU_State initial_cpu = {.pc=0xab35, .a=0x27, .x=0x14, .y=0x57, .sp=0x14, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xab35, .value=0x68}, {.addr=0xab36, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xab37, .a=0x27, .x=0x14, .y=0x57, .sp=0x14, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xab35, .value=0x68}, {.addr=0xab36, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xab35, .value=0x68, .type=IO_READ},
        {.addr=0xab36, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_028E) {
    const struct CPU_State initial_cpu = {.pc=0x7a7d, .a=0xe0, .x=0x40, .y=0x95, .sp=0x8a, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x7a7d, .value=0x68}, {.addr=0x7a7e, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x7a7f, .a=0xe0, .x=0x40, .y=0x95, .sp=0x8a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7a7d, .value=0x68}, {.addr=0x7a7e, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7a7d, .value=0x68, .type=IO_READ},
        {.addr=0x7a7e, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_028F) {
    const struct CPU_State initial_cpu = {.pc=0x6781, .a=0x93, .x=0x81, .y=0x9e, .sp=0xc8, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6781, .value=0x68}, {.addr=0x6782, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x6783, .a=0x93, .x=0x81, .y=0x9e, .sp=0xc8, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6781, .value=0x68}, {.addr=0x6782, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x6781, .value=0x68, .type=IO_READ},
        {.addr=0x6782, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0290) {
    const struct CPU_State initial_cpu = {.pc=0xb73b, .a=0xb5, .x=0x65, .y=0x60, .sp=0xe2, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb73b, .value=0x68}, {.addr=0xb73c, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xb73d, .a=0xb5, .x=0x65, .y=0x60, .sp=0xe2, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb73b, .value=0x68}, {.addr=0xb73c, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xb73b, .value=0x68, .type=IO_READ},
        {.addr=0xb73c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0291) {
    const struct CPU_State initial_cpu = {.pc=0x9cb3, .a=0x0f, .x=0x22, .y=0xb8, .sp=0xb2, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb3, .value=0x68}, {.addr=0x9cb4, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x9cb5, .a=0x0f, .x=0x22, .y=0xb8, .sp=0xb2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9cb3, .value=0x68}, {.addr=0x9cb4, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x9cb3, .value=0x68, .type=IO_READ},
        {.addr=0x9cb4, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0292) {
    const struct CPU_State initial_cpu = {.pc=0x72b4, .a=0x73, .x=0x74, .y=0xd6, .sp=0x24, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x72b4, .value=0x68}, {.addr=0x72b5, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x72b6, .a=0x73, .x=0x74, .y=0xd6, .sp=0x24, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x72b4, .value=0x68}, {.addr=0x72b5, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x72b4, .value=0x68, .type=IO_READ},
        {.addr=0x72b5, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0293) {
    const struct CPU_State initial_cpu = {.pc=0x1da4, .a=0xf1, .x=0xab, .y=0x68, .sp=0xd8, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x1da4, .value=0x68}, {.addr=0x1da5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1da6, .a=0xf1, .x=0xab, .y=0x68, .sp=0xd8, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1da4, .value=0x68}, {.addr=0x1da5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1da4, .value=0x68, .type=IO_READ},
        {.addr=0x1da5, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0294) {
    const struct CPU_State initial_cpu = {.pc=0x2556, .a=0x0c, .x=0xd0, .y=0x11, .sp=0x80, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x2556, .value=0x68}, {.addr=0x2557, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x2558, .a=0x0c, .x=0xd0, .y=0x11, .sp=0x80, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2556, .value=0x68}, {.addr=0x2557, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x2556, .value=0x68, .type=IO_READ},
        {.addr=0x2557, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0295) {
    const struct CPU_State initial_cpu = {.pc=0x48e4, .a=0xb3, .x=0x59, .y=0x72, .sp=0x2a, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x48e4, .value=0x68}, {.addr=0x48e5, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x48e6, .a=0xb3, .x=0x59, .y=0x72, .sp=0x2a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x48e4, .value=0x68}, {.addr=0x48e5, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x48e4, .value=0x68, .type=IO_READ},
        {.addr=0x48e5, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0296) {
    const struct CPU_State initial_cpu = {.pc=0x1175, .a=0x8d, .x=0xdf, .y=0xb5, .sp=0x82, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x1175, .value=0x68}, {.addr=0x1176, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x1177, .a=0x8d, .x=0xdf, .y=0xb5, .sp=0x82, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1175, .value=0x68}, {.addr=0x1176, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x1175, .value=0x68, .type=IO_READ},
        {.addr=0x1176, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0297) {
    const struct CPU_State initial_cpu = {.pc=0xade8, .a=0x2a, .x=0x15, .y=0xe8, .sp=0x82, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xade8, .value=0x68}, {.addr=0xade9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xadea, .a=0x2a, .x=0x15, .y=0xe8, .sp=0x82, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xade8, .value=0x68}, {.addr=0xade9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xade8, .value=0x68, .type=IO_READ},
        {.addr=0xade9, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0298) {
    const struct CPU_State initial_cpu = {.pc=0xfcce, .a=0xa1, .x=0x97, .y=0xf3, .sp=0xc0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xfcce, .value=0x68}, {.addr=0xfccf, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xfcd0, .a=0xa1, .x=0x97, .y=0xf3, .sp=0xc0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xfcce, .value=0x68}, {.addr=0xfccf, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xfcce, .value=0x68, .type=IO_READ},
        {.addr=0xfccf, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0299) {
    const struct CPU_State initial_cpu = {.pc=0xedda, .a=0xfd, .x=0x2e, .y=0xcd, .sp=0x84, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xedda, .value=0x68}, {.addr=0xeddb, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xeddc, .a=0xfd, .x=0x2e, .y=0xcd, .sp=0x84, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xedda, .value=0x68}, {.addr=0xeddb, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xedda, .value=0x68, .type=IO_READ},
        {.addr=0xeddb, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_029A) {
    const struct CPU_State initial_cpu = {.pc=0xcae3, .a=0x35, .x=0x34, .y=0x3d, .sp=0x41, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xcae3, .value=0x68}, {.addr=0xcae4, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xcae5, .a=0x35, .x=0x34, .y=0x3d, .sp=0x41, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xcae3, .value=0x68}, {.addr=0xcae4, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xcae3, .value=0x68, .type=IO_READ},
        {.addr=0xcae4, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_029B) {
    const struct CPU_State initial_cpu = {.pc=0xfe0a, .a=0x3b, .x=0x94, .y=0xc5, .sp=0x0f, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xfe0a, .value=0x68}, {.addr=0xfe0b, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xfe0c, .a=0x3b, .x=0x94, .y=0xc5, .sp=0x0f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfe0a, .value=0x68}, {.addr=0xfe0b, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xfe0a, .value=0x68, .type=IO_READ},
        {.addr=0xfe0b, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_029C) {
    const struct CPU_State initial_cpu = {.pc=0xae65, .a=0x25, .x=0xa1, .y=0x49, .sp=0xb7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xae65, .value=0x68}, {.addr=0xae66, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xae67, .a=0x25, .x=0xa1, .y=0x49, .sp=0xb7, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xae65, .value=0x68}, {.addr=0xae66, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xae65, .value=0x68, .type=IO_READ},
        {.addr=0xae66, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_029D) {
    const struct CPU_State initial_cpu = {.pc=0x2e6e, .a=0x97, .x=0x91, .y=0x34, .sp=0xa1, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x2e6e, .value=0x68}, {.addr=0x2e6f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2e70, .a=0x97, .x=0x91, .y=0x34, .sp=0xa1, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2e6e, .value=0x68}, {.addr=0x2e6f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2e6e, .value=0x68, .type=IO_READ},
        {.addr=0x2e6f, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_029E) {
    const struct CPU_State initial_cpu = {.pc=0xc7a3, .a=0xc7, .x=0x94, .y=0x8d, .sp=0x7f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xc7a3, .value=0x68}, {.addr=0xc7a4, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xc7a5, .a=0xc7, .x=0x94, .y=0x8d, .sp=0x7f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc7a3, .value=0x68}, {.addr=0xc7a4, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xc7a3, .value=0x68, .type=IO_READ},
        {.addr=0xc7a4, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_029F) {
    const struct CPU_State initial_cpu = {.pc=0xa5d0, .a=0x2c, .x=0x1d, .y=0x4e, .sp=0x64, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xa5d0, .value=0x68}, {.addr=0xa5d1, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xa5d2, .a=0x2c, .x=0x1d, .y=0x4e, .sp=0x64, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa5d0, .value=0x68}, {.addr=0xa5d1, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xa5d0, .value=0x68, .type=IO_READ},
        {.addr=0xa5d1, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xf99a, .a=0x68, .x=0x78, .y=0x65, .sp=0xb4, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xf99a, .value=0x68}, {.addr=0xf99b, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xf99c, .a=0x68, .x=0x78, .y=0x65, .sp=0xb4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xf99a, .value=0x68}, {.addr=0xf99b, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xf99a, .value=0x68, .type=IO_READ},
        {.addr=0xf99b, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xd39e, .a=0x01, .x=0xc4, .y=0x17, .sp=0x7d, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd39e, .value=0x68}, {.addr=0xd39f, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xd3a0, .a=0x01, .x=0xc4, .y=0x17, .sp=0x7d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd39e, .value=0x68}, {.addr=0xd39f, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xd39e, .value=0x68, .type=IO_READ},
        {.addr=0xd39f, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xb7be, .a=0x8a, .x=0x05, .y=0x77, .sp=0x2c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xb7be, .value=0x68}, {.addr=0xb7bf, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xb7c0, .a=0x8a, .x=0x05, .y=0x77, .sp=0x2c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb7be, .value=0x68}, {.addr=0xb7bf, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xb7be, .value=0x68, .type=IO_READ},
        {.addr=0xb7bf, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x98fe, .a=0x1b, .x=0x51, .y=0xd0, .sp=0x59, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x98fe, .value=0x68}, {.addr=0x98ff, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x9900, .a=0x1b, .x=0x51, .y=0xd0, .sp=0x59, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x98fe, .value=0x68}, {.addr=0x98ff, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x98fe, .value=0x68, .type=IO_READ},
        {.addr=0x98ff, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x87f5, .a=0x42, .x=0x01, .y=0x73, .sp=0xeb, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x87f5, .value=0x68}, {.addr=0x87f6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x87f7, .a=0x42, .x=0x01, .y=0x73, .sp=0xeb, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x87f5, .value=0x68}, {.addr=0x87f6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x87f5, .value=0x68, .type=IO_READ},
        {.addr=0x87f6, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x7c6d, .a=0x32, .x=0x93, .y=0x44, .sp=0x5a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6d, .value=0x68}, {.addr=0x7c6e, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x7c6f, .a=0x32, .x=0x93, .y=0x44, .sp=0x5a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7c6d, .value=0x68}, {.addr=0x7c6e, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x7c6d, .value=0x68, .type=IO_READ},
        {.addr=0x7c6e, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xb539, .a=0x7b, .x=0x9b, .y=0x7b, .sp=0x28, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xb539, .value=0x68}, {.addr=0xb53a, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xb53b, .a=0x7b, .x=0x9b, .y=0x7b, .sp=0x28, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb539, .value=0x68}, {.addr=0xb53a, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xb539, .value=0x68, .type=IO_READ},
        {.addr=0xb53a, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x926a, .a=0xf6, .x=0x96, .y=0x83, .sp=0x27, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x926a, .value=0x68}, {.addr=0x926b, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x926c, .a=0xf6, .x=0x96, .y=0x83, .sp=0x27, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x926a, .value=0x68}, {.addr=0x926b, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x926a, .value=0x68, .type=IO_READ},
        {.addr=0x926b, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x9332, .a=0x79, .x=0xda, .y=0x8a, .sp=0xc3, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x9332, .value=0x68}, {.addr=0x9333, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9334, .a=0x79, .x=0xda, .y=0x8a, .sp=0xc3, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9332, .value=0x68}, {.addr=0x9333, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9332, .value=0x68, .type=IO_READ},
        {.addr=0x9333, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x6d8c, .a=0x49, .x=0x35, .y=0x12, .sp=0x3a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6d8c, .value=0x68}, {.addr=0x6d8d, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x6d8e, .a=0x49, .x=0x35, .y=0x12, .sp=0x3a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6d8c, .value=0x68}, {.addr=0x6d8d, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x6d8c, .value=0x68, .type=IO_READ},
        {.addr=0x6d8d, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x719c, .a=0x43, .x=0xce, .y=0x35, .sp=0xc6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x719c, .value=0x68}, {.addr=0x719d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x719e, .a=0x43, .x=0xce, .y=0x35, .sp=0xc6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x719c, .value=0x68}, {.addr=0x719d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x719c, .value=0x68, .type=IO_READ},
        {.addr=0x719d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x7595, .a=0x88, .x=0x93, .y=0x51, .sp=0x28, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x7595, .value=0x68}, {.addr=0x7596, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x7597, .a=0x88, .x=0x93, .y=0x51, .sp=0x28, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7595, .value=0x68}, {.addr=0x7596, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x7595, .value=0x68, .type=IO_READ},
        {.addr=0x7596, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x0720, .a=0x54, .x=0x97, .y=0x08, .sp=0x98, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0720, .value=0x68}, {.addr=0x0721, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0722, .a=0x54, .x=0x97, .y=0x08, .sp=0x98, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0720, .value=0x68}, {.addr=0x0721, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0720, .value=0x68, .type=IO_READ},
        {.addr=0x0721, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x84ac, .a=0xc4, .x=0xa4, .y=0x86, .sp=0x43, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x84ac, .value=0x68}, {.addr=0x84ad, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x84ae, .a=0xc4, .x=0xa4, .y=0x86, .sp=0x43, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x84ac, .value=0x68}, {.addr=0x84ad, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x84ac, .value=0x68, .type=IO_READ},
        {.addr=0x84ad, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xbff5, .a=0xa3, .x=0x3c, .y=0xe1, .sp=0x81, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xbff5, .value=0x68}, {.addr=0xbff6, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xbff7, .a=0xa3, .x=0x3c, .y=0xe1, .sp=0x81, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xbff5, .value=0x68}, {.addr=0xbff6, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xbff5, .value=0x68, .type=IO_READ},
        {.addr=0xbff6, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x97be, .a=0xc2, .x=0xda, .y=0xe3, .sp=0xe9, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x97be, .value=0x68}, {.addr=0x97bf, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x97c0, .a=0xc2, .x=0xda, .y=0xe3, .sp=0xe9, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x97be, .value=0x68}, {.addr=0x97bf, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x97be, .value=0x68, .type=IO_READ},
        {.addr=0x97bf, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xb92e, .a=0x29, .x=0xc6, .y=0x49, .sp=0xd2, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xb92e, .value=0x68}, {.addr=0xb92f, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xb930, .a=0x29, .x=0xc6, .y=0x49, .sp=0xd2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb92e, .value=0x68}, {.addr=0xb92f, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xb92e, .value=0x68, .type=IO_READ},
        {.addr=0xb92f, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xc316, .a=0xd0, .x=0x3e, .y=0x3d, .sp=0x9e, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc316, .value=0x68}, {.addr=0xc317, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xc318, .a=0xd0, .x=0x3e, .y=0x3d, .sp=0x9e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc316, .value=0x68}, {.addr=0xc317, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xc316, .value=0x68, .type=IO_READ},
        {.addr=0xc317, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xe562, .a=0x57, .x=0xad, .y=0x7e, .sp=0xc6, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xe562, .value=0x68}, {.addr=0xe563, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xe564, .a=0x57, .x=0xad, .y=0x7e, .sp=0xc6, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xe562, .value=0x68}, {.addr=0xe563, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xe562, .value=0x68, .type=IO_READ},
        {.addr=0xe563, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x0bbb, .a=0xf3, .x=0x58, .y=0x6d, .sp=0xae, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0bbb, .value=0x68}, {.addr=0x0bbc, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0bbd, .a=0xf3, .x=0x58, .y=0x6d, .sp=0xae, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0bbb, .value=0x68}, {.addr=0x0bbc, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0bbb, .value=0x68, .type=IO_READ},
        {.addr=0x0bbc, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xbcd7, .a=0xf0, .x=0x1b, .y=0xc9, .sp=0x7f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xbcd7, .value=0x68}, {.addr=0xbcd8, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xbcd9, .a=0xf0, .x=0x1b, .y=0xc9, .sp=0x7f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xbcd7, .value=0x68}, {.addr=0xbcd8, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xbcd7, .value=0x68, .type=IO_READ},
        {.addr=0xbcd8, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x775f, .a=0xe3, .x=0x56, .y=0x27, .sp=0x73, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x775f, .value=0x68}, {.addr=0x7760, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x7761, .a=0xe3, .x=0x56, .y=0x27, .sp=0x73, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x775f, .value=0x68}, {.addr=0x7760, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x775f, .value=0x68, .type=IO_READ},
        {.addr=0x7760, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x7fd6, .a=0xfe, .x=0x57, .y=0x92, .sp=0xaf, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x7fd6, .value=0x68}, {.addr=0x7fd7, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x7fd8, .a=0xfe, .x=0x57, .y=0x92, .sp=0xaf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7fd6, .value=0x68}, {.addr=0x7fd7, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x7fd6, .value=0x68, .type=IO_READ},
        {.addr=0x7fd7, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x3cd3, .a=0x94, .x=0x37, .y=0xdf, .sp=0x31, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd3, .value=0x68}, {.addr=0x3cd4, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x3cd5, .a=0x94, .x=0x37, .y=0xdf, .sp=0x31, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3cd3, .value=0x68}, {.addr=0x3cd4, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x3cd3, .value=0x68, .type=IO_READ},
        {.addr=0x3cd4, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x0dfb, .a=0xa3, .x=0x89, .y=0x52, .sp=0x23, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0dfb, .value=0x68}, {.addr=0x0dfc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0dfd, .a=0xa3, .x=0x89, .y=0x52, .sp=0x23, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0dfb, .value=0x68}, {.addr=0x0dfc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0dfb, .value=0x68, .type=IO_READ},
        {.addr=0x0dfc, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xbd0d, .a=0x82, .x=0x5c, .y=0xa9, .sp=0x45, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xbd0d, .value=0x68}, {.addr=0xbd0e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xbd0f, .a=0x82, .x=0x5c, .y=0xa9, .sp=0x45, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xbd0d, .value=0x68}, {.addr=0xbd0e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xbd0d, .value=0x68, .type=IO_READ},
        {.addr=0xbd0e, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x7467, .a=0x0b, .x=0x96, .y=0xe1, .sp=0xd9, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x7467, .value=0x68}, {.addr=0x7468, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x7469, .a=0x0b, .x=0x96, .y=0xe1, .sp=0xd9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7467, .value=0x68}, {.addr=0x7468, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x7467, .value=0x68, .type=IO_READ},
        {.addr=0x7468, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xf69b, .a=0x81, .x=0xe0, .y=0x64, .sp=0x34, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf69b, .value=0x68}, {.addr=0xf69c, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xf69d, .a=0x81, .x=0xe0, .y=0x64, .sp=0x34, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xf69b, .value=0x68}, {.addr=0xf69c, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xf69b, .value=0x68, .type=IO_READ},
        {.addr=0xf69c, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x4f7d, .a=0xbb, .x=0x58, .y=0xf7, .sp=0x41, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4f7d, .value=0x68}, {.addr=0x4f7e, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x4f7f, .a=0xbb, .x=0x58, .y=0xf7, .sp=0x41, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4f7d, .value=0x68}, {.addr=0x4f7e, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4f7d, .value=0x68, .type=IO_READ},
        {.addr=0x4f7e, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x432d, .a=0x19, .x=0x9c, .y=0xe6, .sp=0x12, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x432d, .value=0x68}, {.addr=0x432e, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x432f, .a=0x19, .x=0x9c, .y=0xe6, .sp=0x12, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x432d, .value=0x68}, {.addr=0x432e, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x432d, .value=0x68, .type=IO_READ},
        {.addr=0x432e, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xedac, .a=0x0a, .x=0x7e, .y=0x24, .sp=0xbe, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xedac, .value=0x68}, {.addr=0xedad, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xedae, .a=0x0a, .x=0x7e, .y=0x24, .sp=0xbe, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xedac, .value=0x68}, {.addr=0xedad, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xedac, .value=0x68, .type=IO_READ},
        {.addr=0xedad, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xbef7, .a=0xad, .x=0x05, .y=0x62, .sp=0xb9, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xbef7, .value=0x68}, {.addr=0xbef8, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xbef9, .a=0xad, .x=0x05, .y=0x62, .sp=0xb9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xbef7, .value=0x68}, {.addr=0xbef8, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xbef7, .value=0x68, .type=IO_READ},
        {.addr=0xbef8, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xb556, .a=0xda, .x=0xfa, .y=0x41, .sp=0xef, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb556, .value=0x68}, {.addr=0xb557, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb558, .a=0xda, .x=0xfa, .y=0x41, .sp=0xef, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xb556, .value=0x68}, {.addr=0xb557, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb556, .value=0x68, .type=IO_READ},
        {.addr=0xb557, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x23d9, .a=0x50, .x=0x43, .y=0xec, .sp=0x7f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x23d9, .value=0x68}, {.addr=0x23da, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x23db, .a=0x50, .x=0x43, .y=0xec, .sp=0x7f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x23d9, .value=0x68}, {.addr=0x23da, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x23d9, .value=0x68, .type=IO_READ},
        {.addr=0x23da, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xa0bd, .a=0xbc, .x=0xf6, .y=0x91, .sp=0xf5, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xa0bd, .value=0x68}, {.addr=0xa0be, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xa0bf, .a=0xbc, .x=0xf6, .y=0x91, .sp=0xf5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa0bd, .value=0x68}, {.addr=0xa0be, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xa0bd, .value=0x68, .type=IO_READ},
        {.addr=0xa0be, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xe659, .a=0x31, .x=0xb7, .y=0xff, .sp=0xca, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe659, .value=0x68}, {.addr=0xe65a, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xe65b, .a=0x31, .x=0xb7, .y=0xff, .sp=0xca, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe659, .value=0x68}, {.addr=0xe65a, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xe659, .value=0x68, .type=IO_READ},
        {.addr=0xe65a, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xd9a1, .a=0xaa, .x=0x8a, .y=0x16, .sp=0x72, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd9a1, .value=0x68}, {.addr=0xd9a2, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xd9a3, .a=0xaa, .x=0x8a, .y=0x16, .sp=0x72, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd9a1, .value=0x68}, {.addr=0xd9a2, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xd9a1, .value=0x68, .type=IO_READ},
        {.addr=0xd9a2, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x802c, .a=0x99, .x=0x42, .y=0xdf, .sp=0x97, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x802c, .value=0x68}, {.addr=0x802d, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x802e, .a=0x99, .x=0x42, .y=0xdf, .sp=0x97, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x802c, .value=0x68}, {.addr=0x802d, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x802c, .value=0x68, .type=IO_READ},
        {.addr=0x802d, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x6d55, .a=0xaf, .x=0xe2, .y=0x5d, .sp=0xe7, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x6d55, .value=0x68}, {.addr=0x6d56, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x6d57, .a=0xaf, .x=0xe2, .y=0x5d, .sp=0xe7, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6d55, .value=0x68}, {.addr=0x6d56, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x6d55, .value=0x68, .type=IO_READ},
        {.addr=0x6d56, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x05b0, .a=0x8d, .x=0x09, .y=0xee, .sp=0x8d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x05b0, .value=0x68}, {.addr=0x05b1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x05b2, .a=0x8d, .x=0x09, .y=0xee, .sp=0x8d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x05b0, .value=0x68}, {.addr=0x05b1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x05b0, .value=0x68, .type=IO_READ},
        {.addr=0x05b1, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xc6b2, .a=0xfe, .x=0x3c, .y=0x19, .sp=0x82, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xc6b2, .value=0x68}, {.addr=0xc6b3, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xc6b4, .a=0xfe, .x=0x3c, .y=0x19, .sp=0x82, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc6b2, .value=0x68}, {.addr=0xc6b3, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xc6b2, .value=0x68, .type=IO_READ},
        {.addr=0xc6b3, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x6b29, .a=0x84, .x=0x19, .y=0x9c, .sp=0xf7, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x6b29, .value=0x68}, {.addr=0x6b2a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6b2b, .a=0x84, .x=0x19, .y=0x9c, .sp=0xf7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6b29, .value=0x68}, {.addr=0x6b2a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6b29, .value=0x68, .type=IO_READ},
        {.addr=0x6b2a, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x4ed2, .a=0x3e, .x=0x28, .y=0x9f, .sp=0xfa, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed2, .value=0x68}, {.addr=0x4ed3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4ed4, .a=0x3e, .x=0x28, .y=0x9f, .sp=0xfa, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4ed2, .value=0x68}, {.addr=0x4ed3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x4ed2, .value=0x68, .type=IO_READ},
        {.addr=0x4ed3, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x2bc7, .a=0x2f, .x=0x85, .y=0x74, .sp=0xcd, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x2bc7, .value=0x68}, {.addr=0x2bc8, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x2bc9, .a=0x2f, .x=0x85, .y=0x74, .sp=0xcd, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2bc7, .value=0x68}, {.addr=0x2bc8, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x2bc7, .value=0x68, .type=IO_READ},
        {.addr=0x2bc8, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xdcc5, .a=0xe3, .x=0x7e, .y=0x32, .sp=0x0d, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc5, .value=0x68}, {.addr=0xdcc6, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xdcc7, .a=0xe3, .x=0x7e, .y=0x32, .sp=0x0d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xdcc5, .value=0x68}, {.addr=0xdcc6, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xdcc5, .value=0x68, .type=IO_READ},
        {.addr=0xdcc6, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x30a5, .a=0x23, .x=0xcd, .y=0x86, .sp=0xdd, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x30a5, .value=0x68}, {.addr=0x30a6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x30a7, .a=0x23, .x=0xcd, .y=0x86, .sp=0xdd, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x30a5, .value=0x68}, {.addr=0x30a6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x30a5, .value=0x68, .type=IO_READ},
        {.addr=0x30a6, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x54a6, .a=0x5e, .x=0x5d, .y=0x8e, .sp=0x6d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x54a6, .value=0x68}, {.addr=0x54a7, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x54a8, .a=0x5e, .x=0x5d, .y=0x8e, .sp=0x6d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x54a6, .value=0x68}, {.addr=0x54a7, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x54a6, .value=0x68, .type=IO_READ},
        {.addr=0x54a7, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x2408, .a=0x5c, .x=0x70, .y=0xee, .sp=0x29, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2408, .value=0x68}, {.addr=0x2409, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x240a, .a=0x5c, .x=0x70, .y=0xee, .sp=0x29, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2408, .value=0x68}, {.addr=0x2409, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x2408, .value=0x68, .type=IO_READ},
        {.addr=0x2409, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x011b, .a=0x09, .x=0xd3, .y=0x2b, .sp=0x58, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x68}, {.addr=0x011c, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x011d, .a=0x09, .x=0xd3, .y=0x2b, .sp=0x58, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x68}, {.addr=0x011c, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x011b, .value=0x68, .type=IO_READ},
        {.addr=0x011c, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x63d4, .a=0x71, .x=0x69, .y=0xa1, .sp=0x42, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x63d4, .value=0x68}, {.addr=0x63d5, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x63d6, .a=0x71, .x=0x69, .y=0xa1, .sp=0x42, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x63d4, .value=0x68}, {.addr=0x63d5, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x63d4, .value=0x68, .type=IO_READ},
        {.addr=0x63d5, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x8f1d, .a=0xdb, .x=0x84, .y=0x2b, .sp=0x1a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x8f1d, .value=0x68}, {.addr=0x8f1e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x8f1f, .a=0xdb, .x=0x84, .y=0x2b, .sp=0x1a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8f1d, .value=0x68}, {.addr=0x8f1e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x8f1d, .value=0x68, .type=IO_READ},
        {.addr=0x8f1e, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xed41, .a=0x65, .x=0x66, .y=0x5f, .sp=0x4e, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xed41, .value=0x68}, {.addr=0xed42, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xed43, .a=0x65, .x=0x66, .y=0x5f, .sp=0x4e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xed41, .value=0x68}, {.addr=0xed42, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xed41, .value=0x68, .type=IO_READ},
        {.addr=0xed42, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x8fb7, .a=0x88, .x=0x9c, .y=0x96, .sp=0x5e, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x8fb7, .value=0x68}, {.addr=0x8fb8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8fb9, .a=0x88, .x=0x9c, .y=0x96, .sp=0x5e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8fb7, .value=0x68}, {.addr=0x8fb8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8fb7, .value=0x68, .type=IO_READ},
        {.addr=0x8fb8, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xb4b2, .a=0xb6, .x=0xb3, .y=0x0d, .sp=0x17, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xb4b2, .value=0x68}, {.addr=0xb4b3, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xb4b4, .a=0xb6, .x=0xb3, .y=0x0d, .sp=0x17, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb4b2, .value=0x68}, {.addr=0xb4b3, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xb4b2, .value=0x68, .type=IO_READ},
        {.addr=0xb4b3, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x7686, .a=0x81, .x=0x95, .y=0xeb, .sp=0x13, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7686, .value=0x68}, {.addr=0x7687, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7688, .a=0x81, .x=0x95, .y=0xeb, .sp=0x13, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7686, .value=0x68}, {.addr=0x7687, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7686, .value=0x68, .type=IO_READ},
        {.addr=0x7687, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x03da, .a=0x4a, .x=0x5f, .y=0x7b, .sp=0xea, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x03da, .value=0x68}, {.addr=0x03db, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x03dc, .a=0x4a, .x=0x5f, .y=0x7b, .sp=0xea, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x03da, .value=0x68}, {.addr=0x03db, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x03da, .value=0x68, .type=IO_READ},
        {.addr=0x03db, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x0b9c, .a=0xdb, .x=0x88, .y=0x5b, .sp=0x50, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0b9c, .value=0x68}, {.addr=0x0b9d, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x0b9e, .a=0xdb, .x=0x88, .y=0x5b, .sp=0x50, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0b9c, .value=0x68}, {.addr=0x0b9d, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x0b9c, .value=0x68, .type=IO_READ},
        {.addr=0x0b9d, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x871c, .a=0x5f, .x=0x76, .y=0x64, .sp=0x7f, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x871c, .value=0x68}, {.addr=0x871d, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x871e, .a=0x5f, .x=0x76, .y=0x64, .sp=0x7f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x871c, .value=0x68}, {.addr=0x871d, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x871c, .value=0x68, .type=IO_READ},
        {.addr=0x871d, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xe687, .a=0x24, .x=0x30, .y=0x0c, .sp=0x80, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xe687, .value=0x68}, {.addr=0xe688, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xe689, .a=0x24, .x=0x30, .y=0x0c, .sp=0x80, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe687, .value=0x68}, {.addr=0xe688, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xe687, .value=0x68, .type=IO_READ},
        {.addr=0xe688, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x4b83, .a=0x2a, .x=0x11, .y=0xf5, .sp=0xd3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x4b83, .value=0x68}, {.addr=0x4b84, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x4b85, .a=0x2a, .x=0x11, .y=0xf5, .sp=0xd3, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4b83, .value=0x68}, {.addr=0x4b84, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x4b83, .value=0x68, .type=IO_READ},
        {.addr=0x4b84, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x0850, .a=0xf3, .x=0xcb, .y=0xa0, .sp=0x62, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0850, .value=0x68}, {.addr=0x0851, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x0852, .a=0xf3, .x=0xcb, .y=0xa0, .sp=0x62, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0850, .value=0x68}, {.addr=0x0851, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x0850, .value=0x68, .type=IO_READ},
        {.addr=0x0851, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x80bd, .a=0x80, .x=0x38, .y=0xc2, .sp=0x08, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x80bd, .value=0x68}, {.addr=0x80be, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x80bf, .a=0x80, .x=0x38, .y=0xc2, .sp=0x08, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x80bd, .value=0x68}, {.addr=0x80be, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x80bd, .value=0x68, .type=IO_READ},
        {.addr=0x80be, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x4c9f, .a=0x3d, .x=0x2f, .y=0xf1, .sp=0x11, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4c9f, .value=0x68}, {.addr=0x4ca0, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x4ca1, .a=0x3d, .x=0x2f, .y=0xf1, .sp=0x11, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4c9f, .value=0x68}, {.addr=0x4ca0, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x4c9f, .value=0x68, .type=IO_READ},
        {.addr=0x4ca0, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xdbbd, .a=0x7b, .x=0x67, .y=0x2b, .sp=0x23, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xdbbd, .value=0x68}, {.addr=0xdbbe, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xdbbf, .a=0x7b, .x=0x67, .y=0x2b, .sp=0x23, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdbbd, .value=0x68}, {.addr=0xdbbe, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xdbbd, .value=0x68, .type=IO_READ},
        {.addr=0xdbbe, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xc9a0, .a=0x4b, .x=0x52, .y=0x19, .sp=0x58, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xc9a0, .value=0x68}, {.addr=0xc9a1, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xc9a2, .a=0x4b, .x=0x52, .y=0x19, .sp=0x58, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc9a0, .value=0x68}, {.addr=0xc9a1, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xc9a0, .value=0x68, .type=IO_READ},
        {.addr=0xc9a1, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xd329, .a=0x77, .x=0xc4, .y=0xa0, .sp=0x39, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xd329, .value=0x68}, {.addr=0xd32a, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xd32b, .a=0x77, .x=0xc4, .y=0xa0, .sp=0x39, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd329, .value=0x68}, {.addr=0xd32a, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xd329, .value=0x68, .type=IO_READ},
        {.addr=0xd32a, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xeac2, .a=0xd4, .x=0x02, .y=0xdd, .sp=0x73, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xeac2, .value=0x68}, {.addr=0xeac3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeac4, .a=0xd4, .x=0x02, .y=0xdd, .sp=0x73, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xeac2, .value=0x68}, {.addr=0xeac3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeac2, .value=0x68, .type=IO_READ},
        {.addr=0xeac3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x4009, .a=0x70, .x=0x54, .y=0xdc, .sp=0x26, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x4009, .value=0x68}, {.addr=0x400a, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x400b, .a=0x70, .x=0x54, .y=0xdc, .sp=0x26, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4009, .value=0x68}, {.addr=0x400a, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x4009, .value=0x68, .type=IO_READ},
        {.addr=0x400a, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x2795, .a=0x4c, .x=0x2e, .y=0xf9, .sp=0x09, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2795, .value=0x68}, {.addr=0x2796, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2797, .a=0x4c, .x=0x2e, .y=0xf9, .sp=0x09, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2795, .value=0x68}, {.addr=0x2796, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2795, .value=0x68, .type=IO_READ},
        {.addr=0x2796, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x4d0b, .a=0x77, .x=0x29, .y=0x0d, .sp=0xc4, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4d0b, .value=0x68}, {.addr=0x4d0c, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x4d0d, .a=0x77, .x=0x29, .y=0x0d, .sp=0xc4, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4d0b, .value=0x68}, {.addr=0x4d0c, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x4d0b, .value=0x68, .type=IO_READ},
        {.addr=0x4d0c, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x2add, .a=0x3c, .x=0xb7, .y=0x51, .sp=0xb4, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2add, .value=0x68}, {.addr=0x2ade, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x2adf, .a=0x3c, .x=0xb7, .y=0x51, .sp=0xb4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2add, .value=0x68}, {.addr=0x2ade, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x2add, .value=0x68, .type=IO_READ},
        {.addr=0x2ade, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x4def, .a=0xfc, .x=0x84, .y=0x2a, .sp=0x14, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4def, .value=0x68}, {.addr=0x4df0, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x4df1, .a=0xfc, .x=0x84, .y=0x2a, .sp=0x14, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x4def, .value=0x68}, {.addr=0x4df0, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x4def, .value=0x68, .type=IO_READ},
        {.addr=0x4df0, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xc75a, .a=0x27, .x=0x01, .y=0x64, .sp=0x5e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xc75a, .value=0x68}, {.addr=0xc75b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xc75c, .a=0x27, .x=0x01, .y=0x64, .sp=0x5e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc75a, .value=0x68}, {.addr=0xc75b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xc75a, .value=0x68, .type=IO_READ},
        {.addr=0xc75b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x88ff, .a=0x54, .x=0xed, .y=0x4b, .sp=0x0f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x88ff, .value=0x68}, {.addr=0x8900, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x8901, .a=0x54, .x=0xed, .y=0x4b, .sp=0x0f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x88ff, .value=0x68}, {.addr=0x8900, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x88ff, .value=0x68, .type=IO_READ},
        {.addr=0x8900, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x8682, .a=0x3f, .x=0x66, .y=0xa2, .sp=0x95, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x8682, .value=0x68}, {.addr=0x8683, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x8684, .a=0x3f, .x=0x66, .y=0xa2, .sp=0x95, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8682, .value=0x68}, {.addr=0x8683, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x8682, .value=0x68, .type=IO_READ},
        {.addr=0x8683, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x747a, .a=0xe7, .x=0x95, .y=0x5a, .sp=0x19, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x747a, .value=0x68}, {.addr=0x747b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x747c, .a=0xe7, .x=0x95, .y=0x5a, .sp=0x19, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x747a, .value=0x68}, {.addr=0x747b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x747a, .value=0x68, .type=IO_READ},
        {.addr=0x747b, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x6823, .a=0xac, .x=0x00, .y=0x5d, .sp=0x90, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x6823, .value=0x68}, {.addr=0x6824, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x6825, .a=0xac, .x=0x00, .y=0x5d, .sp=0x90, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x6823, .value=0x68}, {.addr=0x6824, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x6823, .value=0x68, .type=IO_READ},
        {.addr=0x6824, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x5fa2, .a=0xbe, .x=0x8b, .y=0xac, .sp=0x1d, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa2, .value=0x68}, {.addr=0x5fa3, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5fa4, .a=0xbe, .x=0x8b, .y=0xac, .sp=0x1d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5fa2, .value=0x68}, {.addr=0x5fa3, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5fa2, .value=0x68, .type=IO_READ},
        {.addr=0x5fa3, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xc23e, .a=0x3e, .x=0xa8, .y=0xd1, .sp=0xc5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xc23e, .value=0x68}, {.addr=0xc23f, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc240, .a=0x3e, .x=0xa8, .y=0xd1, .sp=0xc5, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc23e, .value=0x68}, {.addr=0xc23f, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc23e, .value=0x68, .type=IO_READ},
        {.addr=0xc23f, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x6b62, .a=0xda, .x=0x22, .y=0x5e, .sp=0x75, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x6b62, .value=0x68}, {.addr=0x6b63, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x6b64, .a=0xda, .x=0x22, .y=0x5e, .sp=0x75, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x6b62, .value=0x68}, {.addr=0x6b63, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x6b62, .value=0x68, .type=IO_READ},
        {.addr=0x6b63, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x11e6, .a=0x6a, .x=0x71, .y=0xa6, .sp=0x8e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x11e6, .value=0x68}, {.addr=0x11e7, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x11e8, .a=0x6a, .x=0x71, .y=0xa6, .sp=0x8e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x11e6, .value=0x68}, {.addr=0x11e7, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x11e6, .value=0x68, .type=IO_READ},
        {.addr=0x11e7, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x5ce2, .a=0x82, .x=0x1e, .y=0xfa, .sp=0x2c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x5ce2, .value=0x68}, {.addr=0x5ce3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5ce4, .a=0x82, .x=0x1e, .y=0xfa, .sp=0x2c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5ce2, .value=0x68}, {.addr=0x5ce3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5ce2, .value=0x68, .type=IO_READ},
        {.addr=0x5ce3, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x4d01, .a=0x4b, .x=0x19, .y=0xa2, .sp=0xc8, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4d01, .value=0x68}, {.addr=0x4d02, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x4d03, .a=0x4b, .x=0x19, .y=0xa2, .sp=0xc8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4d01, .value=0x68}, {.addr=0x4d02, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x4d01, .value=0x68, .type=IO_READ},
        {.addr=0x4d02, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x0f8d, .a=0xb0, .x=0x9f, .y=0x37, .sp=0xde, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0f8d, .value=0x68}, {.addr=0x0f8e, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x0f8f, .a=0xb0, .x=0x9f, .y=0x37, .sp=0xde, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0f8d, .value=0x68}, {.addr=0x0f8e, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x0f8d, .value=0x68, .type=IO_READ},
        {.addr=0x0f8e, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x557a, .a=0xad, .x=0x25, .y=0xca, .sp=0xa1, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x557a, .value=0x68}, {.addr=0x557b, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x557c, .a=0xad, .x=0x25, .y=0xca, .sp=0xa1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x557a, .value=0x68}, {.addr=0x557b, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x557a, .value=0x68, .type=IO_READ},
        {.addr=0x557b, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x46bb, .a=0xf6, .x=0x6e, .y=0xfc, .sp=0xd8, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x46bb, .value=0x68}, {.addr=0x46bc, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x46bd, .a=0xf6, .x=0x6e, .y=0xfc, .sp=0xd8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x46bb, .value=0x68}, {.addr=0x46bc, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x46bb, .value=0x68, .type=IO_READ},
        {.addr=0x46bc, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xeb24, .a=0xd8, .x=0xac, .y=0xce, .sp=0x3c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xeb24, .value=0x68}, {.addr=0xeb25, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xeb26, .a=0xd8, .x=0xac, .y=0xce, .sp=0x3c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xeb24, .value=0x68}, {.addr=0xeb25, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xeb24, .value=0x68, .type=IO_READ},
        {.addr=0xeb25, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xbf9d, .a=0xbd, .x=0x93, .y=0x46, .sp=0x4f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xbf9d, .value=0x68}, {.addr=0xbf9e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbf9f, .a=0xbd, .x=0x93, .y=0x46, .sp=0x4f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xbf9d, .value=0x68}, {.addr=0xbf9e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbf9d, .value=0x68, .type=IO_READ},
        {.addr=0xbf9e, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xbec7, .a=0x8d, .x=0xe6, .y=0x13, .sp=0xad, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xbec7, .value=0x68}, {.addr=0xbec8, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xbec9, .a=0x8d, .x=0xe6, .y=0x13, .sp=0xad, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xbec7, .value=0x68}, {.addr=0xbec8, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xbec7, .value=0x68, .type=IO_READ},
        {.addr=0xbec8, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xdac9, .a=0x25, .x=0xc5, .y=0x79, .sp=0xf4, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xdac9, .value=0x68}, {.addr=0xdaca, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xdacb, .a=0x25, .x=0xc5, .y=0x79, .sp=0xf4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xdac9, .value=0x68}, {.addr=0xdaca, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xdac9, .value=0x68, .type=IO_READ},
        {.addr=0xdaca, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xa73b, .a=0x97, .x=0x27, .y=0xb7, .sp=0x67, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xa73b, .value=0x68}, {.addr=0xa73c, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xa73d, .a=0x97, .x=0x27, .y=0xb7, .sp=0x67, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa73b, .value=0x68}, {.addr=0xa73c, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xa73b, .value=0x68, .type=IO_READ},
        {.addr=0xa73c, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x883c, .a=0x01, .x=0x16, .y=0x1d, .sp=0xce, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x883c, .value=0x68}, {.addr=0x883d, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x883e, .a=0x01, .x=0x16, .y=0x1d, .sp=0xce, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x883c, .value=0x68}, {.addr=0x883d, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x883c, .value=0x68, .type=IO_READ},
        {.addr=0x883d, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x3a59, .a=0x00, .x=0x42, .y=0x55, .sp=0x2f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x3a59, .value=0x68}, {.addr=0x3a5a, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x3a5b, .a=0x00, .x=0x42, .y=0x55, .sp=0x2f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x3a59, .value=0x68}, {.addr=0x3a5a, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x3a59, .value=0x68, .type=IO_READ},
        {.addr=0x3a5a, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x2e49, .a=0x26, .x=0x38, .y=0x7e, .sp=0x36, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x2e49, .value=0x68}, {.addr=0x2e4a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2e4b, .a=0x26, .x=0x38, .y=0x7e, .sp=0x36, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2e49, .value=0x68}, {.addr=0x2e4a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2e49, .value=0x68, .type=IO_READ},
        {.addr=0x2e4a, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xb022, .a=0xae, .x=0x83, .y=0x79, .sp=0x85, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb022, .value=0x68}, {.addr=0xb023, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xb024, .a=0xae, .x=0x83, .y=0x79, .sp=0x85, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb022, .value=0x68}, {.addr=0xb023, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xb022, .value=0x68, .type=IO_READ},
        {.addr=0xb023, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xd362, .a=0x12, .x=0x11, .y=0x98, .sp=0x10, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xd362, .value=0x68}, {.addr=0xd363, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xd364, .a=0x12, .x=0x11, .y=0x98, .sp=0x10, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xd362, .value=0x68}, {.addr=0xd363, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xd362, .value=0x68, .type=IO_READ},
        {.addr=0xd363, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0300) {
    const struct CPU_State initial_cpu = {.pc=0xd03e, .a=0xd2, .x=0x39, .y=0x1c, .sp=0x74, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd03e, .value=0x68}, {.addr=0xd03f, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xd040, .a=0xd2, .x=0x39, .y=0x1c, .sp=0x74, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd03e, .value=0x68}, {.addr=0xd03f, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xd03e, .value=0x68, .type=IO_READ},
        {.addr=0xd03f, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0301) {
    const struct CPU_State initial_cpu = {.pc=0x2797, .a=0x30, .x=0x81, .y=0x8e, .sp=0x4b, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x2797, .value=0x68}, {.addr=0x2798, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2799, .a=0x30, .x=0x81, .y=0x8e, .sp=0x4b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2797, .value=0x68}, {.addr=0x2798, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2797, .value=0x68, .type=IO_READ},
        {.addr=0x2798, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0302) {
    const struct CPU_State initial_cpu = {.pc=0xf02c, .a=0x24, .x=0x96, .y=0x9c, .sp=0x31, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xf02c, .value=0x68}, {.addr=0xf02d, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xf02e, .a=0x24, .x=0x96, .y=0x9c, .sp=0x31, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xf02c, .value=0x68}, {.addr=0xf02d, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xf02c, .value=0x68, .type=IO_READ},
        {.addr=0xf02d, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0303) {
    const struct CPU_State initial_cpu = {.pc=0x6312, .a=0xcd, .x=0xba, .y=0x88, .sp=0x12, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x6312, .value=0x68}, {.addr=0x6313, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6314, .a=0xcd, .x=0xba, .y=0x88, .sp=0x12, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6312, .value=0x68}, {.addr=0x6313, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6312, .value=0x68, .type=IO_READ},
        {.addr=0x6313, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0304) {
    const struct CPU_State initial_cpu = {.pc=0xd05a, .a=0x63, .x=0x63, .y=0xbc, .sp=0x79, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xd05a, .value=0x68}, {.addr=0xd05b, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xd05c, .a=0x63, .x=0x63, .y=0xbc, .sp=0x79, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd05a, .value=0x68}, {.addr=0xd05b, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xd05a, .value=0x68, .type=IO_READ},
        {.addr=0xd05b, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0305) {
    const struct CPU_State initial_cpu = {.pc=0xbba8, .a=0xf9, .x=0x70, .y=0x9d, .sp=0x54, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xbba8, .value=0x68}, {.addr=0xbba9, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xbbaa, .a=0xf9, .x=0x70, .y=0x9d, .sp=0x54, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbba8, .value=0x68}, {.addr=0xbba9, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xbba8, .value=0x68, .type=IO_READ},
        {.addr=0xbba9, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0306) {
    const struct CPU_State initial_cpu = {.pc=0xdbb1, .a=0x7a, .x=0x57, .y=0xb2, .sp=0x4e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xdbb1, .value=0x68}, {.addr=0xdbb2, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xdbb3, .a=0x7a, .x=0x57, .y=0xb2, .sp=0x4e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xdbb1, .value=0x68}, {.addr=0xdbb2, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xdbb1, .value=0x68, .type=IO_READ},
        {.addr=0xdbb2, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0307) {
    const struct CPU_State initial_cpu = {.pc=0x4b0e, .a=0x37, .x=0xdd, .y=0x3b, .sp=0xb1, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4b0e, .value=0x68}, {.addr=0x4b0f, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x4b10, .a=0x37, .x=0xdd, .y=0x3b, .sp=0xb1, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4b0e, .value=0x68}, {.addr=0x4b0f, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x4b0e, .value=0x68, .type=IO_READ},
        {.addr=0x4b0f, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0308) {
    const struct CPU_State initial_cpu = {.pc=0x9f34, .a=0xf0, .x=0x56, .y=0x69, .sp=0x54, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x9f34, .value=0x68}, {.addr=0x9f35, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x9f36, .a=0xf0, .x=0x56, .y=0x69, .sp=0x54, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9f34, .value=0x68}, {.addr=0x9f35, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x9f34, .value=0x68, .type=IO_READ},
        {.addr=0x9f35, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0309) {
    const struct CPU_State initial_cpu = {.pc=0x5146, .a=0xae, .x=0x05, .y=0x64, .sp=0xdb, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5146, .value=0x68}, {.addr=0x5147, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5148, .a=0xae, .x=0x05, .y=0x64, .sp=0xdb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5146, .value=0x68}, {.addr=0x5147, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5146, .value=0x68, .type=IO_READ},
        {.addr=0x5147, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_030A) {
    const struct CPU_State initial_cpu = {.pc=0xbda3, .a=0x34, .x=0x2a, .y=0x51, .sp=0x01, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xbda3, .value=0x68}, {.addr=0xbda4, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xbda5, .a=0x34, .x=0x2a, .y=0x51, .sp=0x01, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xbda3, .value=0x68}, {.addr=0xbda4, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xbda3, .value=0x68, .type=IO_READ},
        {.addr=0xbda4, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_030B) {
    const struct CPU_State initial_cpu = {.pc=0xefab, .a=0x62, .x=0x34, .y=0x51, .sp=0x14, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xefab, .value=0x68}, {.addr=0xefac, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xefad, .a=0x62, .x=0x34, .y=0x51, .sp=0x14, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xefab, .value=0x68}, {.addr=0xefac, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xefab, .value=0x68, .type=IO_READ},
        {.addr=0xefac, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_030C) {
    const struct CPU_State initial_cpu = {.pc=0xc2fa, .a=0xb0, .x=0xc4, .y=0x4e, .sp=0xf5, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xc2fa, .value=0x68}, {.addr=0xc2fb, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xc2fc, .a=0xb0, .x=0xc4, .y=0x4e, .sp=0xf5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc2fa, .value=0x68}, {.addr=0xc2fb, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xc2fa, .value=0x68, .type=IO_READ},
        {.addr=0xc2fb, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_030D) {
    const struct CPU_State initial_cpu = {.pc=0x2ab4, .a=0x8d, .x=0x8b, .y=0x3f, .sp=0x04, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab4, .value=0x68}, {.addr=0x2ab5, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x2ab6, .a=0x8d, .x=0x8b, .y=0x3f, .sp=0x04, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2ab4, .value=0x68}, {.addr=0x2ab5, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x2ab4, .value=0x68, .type=IO_READ},
        {.addr=0x2ab5, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_030E) {
    const struct CPU_State initial_cpu = {.pc=0x86fa, .a=0x7e, .x=0x87, .y=0x68, .sp=0x4f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x86fa, .value=0x68}, {.addr=0x86fb, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x86fc, .a=0x7e, .x=0x87, .y=0x68, .sp=0x4f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x86fa, .value=0x68}, {.addr=0x86fb, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x86fa, .value=0x68, .type=IO_READ},
        {.addr=0x86fb, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_030F) {
    const struct CPU_State initial_cpu = {.pc=0xb5de, .a=0x72, .x=0x66, .y=0x8d, .sp=0xb5, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xb5de, .value=0x68}, {.addr=0xb5df, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xb5e0, .a=0x72, .x=0x66, .y=0x8d, .sp=0xb5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb5de, .value=0x68}, {.addr=0xb5df, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xb5de, .value=0x68, .type=IO_READ},
        {.addr=0xb5df, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0310) {
    const struct CPU_State initial_cpu = {.pc=0xc0b9, .a=0xbf, .x=0x23, .y=0x1f, .sp=0xf0, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xc0b9, .value=0x68}, {.addr=0xc0ba, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xc0bb, .a=0xbf, .x=0x23, .y=0x1f, .sp=0xf0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xc0b9, .value=0x68}, {.addr=0xc0ba, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xc0b9, .value=0x68, .type=IO_READ},
        {.addr=0xc0ba, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0311) {
    const struct CPU_State initial_cpu = {.pc=0xf9ff, .a=0xc0, .x=0xda, .y=0x80, .sp=0x88, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ff, .value=0x68}, {.addr=0xfa00, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xfa01, .a=0xc0, .x=0xda, .y=0x80, .sp=0x88, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf9ff, .value=0x68}, {.addr=0xfa00, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xf9ff, .value=0x68, .type=IO_READ},
        {.addr=0xfa00, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0312) {
    const struct CPU_State initial_cpu = {.pc=0x9df7, .a=0xc5, .x=0x01, .y=0x09, .sp=0x5c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x9df7, .value=0x68}, {.addr=0x9df8, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x9df9, .a=0xc5, .x=0x01, .y=0x09, .sp=0x5c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9df7, .value=0x68}, {.addr=0x9df8, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x9df7, .value=0x68, .type=IO_READ},
        {.addr=0x9df8, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0313) {
    const struct CPU_State initial_cpu = {.pc=0xe83f, .a=0x01, .x=0xa4, .y=0x82, .sp=0x6c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xe83f, .value=0x68}, {.addr=0xe840, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xe841, .a=0x01, .x=0xa4, .y=0x82, .sp=0x6c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe83f, .value=0x68}, {.addr=0xe840, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xe83f, .value=0x68, .type=IO_READ},
        {.addr=0xe840, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0314) {
    const struct CPU_State initial_cpu = {.pc=0x2aaf, .a=0x3d, .x=0x2e, .y=0xa2, .sp=0x84, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2aaf, .value=0x68}, {.addr=0x2ab0, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x2ab1, .a=0x3d, .x=0x2e, .y=0xa2, .sp=0x84, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2aaf, .value=0x68}, {.addr=0x2ab0, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x2aaf, .value=0x68, .type=IO_READ},
        {.addr=0x2ab0, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0315) {
    const struct CPU_State initial_cpu = {.pc=0xbc66, .a=0xc7, .x=0xb6, .y=0x3f, .sp=0xf1, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xbc66, .value=0x68}, {.addr=0xbc67, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xbc68, .a=0xc7, .x=0xb6, .y=0x3f, .sp=0xf1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xbc66, .value=0x68}, {.addr=0xbc67, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xbc66, .value=0x68, .type=IO_READ},
        {.addr=0xbc67, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0316) {
    const struct CPU_State initial_cpu = {.pc=0x9c35, .a=0xd8, .x=0x18, .y=0x97, .sp=0x33, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x9c35, .value=0x68}, {.addr=0x9c36, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x9c37, .a=0xd8, .x=0x18, .y=0x97, .sp=0x33, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x9c35, .value=0x68}, {.addr=0x9c36, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x9c35, .value=0x68, .type=IO_READ},
        {.addr=0x9c36, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0317) {
    const struct CPU_State initial_cpu = {.pc=0x1471, .a=0x66, .x=0xb9, .y=0x16, .sp=0x7f, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x1471, .value=0x68}, {.addr=0x1472, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x1473, .a=0x66, .x=0xb9, .y=0x16, .sp=0x7f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x1471, .value=0x68}, {.addr=0x1472, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x1471, .value=0x68, .type=IO_READ},
        {.addr=0x1472, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0318) {
    const struct CPU_State initial_cpu = {.pc=0x563f, .a=0xf8, .x=0x7c, .y=0x25, .sp=0xf7, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x563f, .value=0x68}, {.addr=0x5640, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x5641, .a=0xf8, .x=0x7c, .y=0x25, .sp=0xf7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x563f, .value=0x68}, {.addr=0x5640, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x563f, .value=0x68, .type=IO_READ},
        {.addr=0x5640, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0319) {
    const struct CPU_State initial_cpu = {.pc=0x3be3, .a=0x3a, .x=0xf8, .y=0x03, .sp=0x76, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x3be3, .value=0x68}, {.addr=0x3be4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3be5, .a=0x3a, .x=0xf8, .y=0x03, .sp=0x76, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3be3, .value=0x68}, {.addr=0x3be4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3be3, .value=0x68, .type=IO_READ},
        {.addr=0x3be4, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_031A) {
    const struct CPU_State initial_cpu = {.pc=0xcff4, .a=0xd3, .x=0xcc, .y=0xac, .sp=0x5f, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xcff4, .value=0x68}, {.addr=0xcff5, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xcff6, .a=0xd3, .x=0xcc, .y=0xac, .sp=0x5f, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xcff4, .value=0x68}, {.addr=0xcff5, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xcff4, .value=0x68, .type=IO_READ},
        {.addr=0xcff5, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_031B) {
    const struct CPU_State initial_cpu = {.pc=0xd62a, .a=0x99, .x=0x8b, .y=0x86, .sp=0xcb, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xd62a, .value=0x68}, {.addr=0xd62b, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xd62c, .a=0x99, .x=0x8b, .y=0x86, .sp=0xcb, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd62a, .value=0x68}, {.addr=0xd62b, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xd62a, .value=0x68, .type=IO_READ},
        {.addr=0xd62b, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_031C) {
    const struct CPU_State initial_cpu = {.pc=0x7b6a, .a=0xba, .x=0x16, .y=0x54, .sp=0xb5, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x7b6a, .value=0x68}, {.addr=0x7b6b, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x7b6c, .a=0xba, .x=0x16, .y=0x54, .sp=0xb5, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7b6a, .value=0x68}, {.addr=0x7b6b, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x7b6a, .value=0x68, .type=IO_READ},
        {.addr=0x7b6b, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_031D) {
    const struct CPU_State initial_cpu = {.pc=0x1274, .a=0xeb, .x=0xb5, .y=0x83, .sp=0xb1, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1274, .value=0x68}, {.addr=0x1275, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x1276, .a=0xeb, .x=0xb5, .y=0x83, .sp=0xb1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1274, .value=0x68}, {.addr=0x1275, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x1274, .value=0x68, .type=IO_READ},
        {.addr=0x1275, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_031E) {
    const struct CPU_State initial_cpu = {.pc=0x42ac, .a=0xde, .x=0x5f, .y=0x63, .sp=0x0d, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x42ac, .value=0x68}, {.addr=0x42ad, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x42ae, .a=0xde, .x=0x5f, .y=0x63, .sp=0x0d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x42ac, .value=0x68}, {.addr=0x42ad, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x42ac, .value=0x68, .type=IO_READ},
        {.addr=0x42ad, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_031F) {
    const struct CPU_State initial_cpu = {.pc=0x283e, .a=0x75, .x=0xca, .y=0x62, .sp=0x7f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x283e, .value=0x68}, {.addr=0x283f, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x2840, .a=0x75, .x=0xca, .y=0x62, .sp=0x7f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x283e, .value=0x68}, {.addr=0x283f, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x283e, .value=0x68, .type=IO_READ},
        {.addr=0x283f, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0320) {
    const struct CPU_State initial_cpu = {.pc=0x2aca, .a=0x00, .x=0xbd, .y=0xc4, .sp=0x91, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x2aca, .value=0x68}, {.addr=0x2acb, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x2acc, .a=0x00, .x=0xbd, .y=0xc4, .sp=0x91, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2aca, .value=0x68}, {.addr=0x2acb, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x2aca, .value=0x68, .type=IO_READ},
        {.addr=0x2acb, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0321) {
    const struct CPU_State initial_cpu = {.pc=0x5c84, .a=0xea, .x=0xa5, .y=0x34, .sp=0x3d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x5c84, .value=0x68}, {.addr=0x5c85, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x5c86, .a=0xea, .x=0xa5, .y=0x34, .sp=0x3d, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5c84, .value=0x68}, {.addr=0x5c85, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x5c84, .value=0x68, .type=IO_READ},
        {.addr=0x5c85, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0322) {
    const struct CPU_State initial_cpu = {.pc=0xcf56, .a=0xe7, .x=0x47, .y=0xd0, .sp=0xf7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xcf56, .value=0x68}, {.addr=0xcf57, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xcf58, .a=0xe7, .x=0x47, .y=0xd0, .sp=0xf7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xcf56, .value=0x68}, {.addr=0xcf57, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xcf56, .value=0x68, .type=IO_READ},
        {.addr=0xcf57, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0323) {
    const struct CPU_State initial_cpu = {.pc=0xc911, .a=0x70, .x=0xed, .y=0x01, .sp=0xed, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc911, .value=0x68}, {.addr=0xc912, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xc913, .a=0x70, .x=0xed, .y=0x01, .sp=0xed, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc911, .value=0x68}, {.addr=0xc912, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xc911, .value=0x68, .type=IO_READ},
        {.addr=0xc912, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0324) {
    const struct CPU_State initial_cpu = {.pc=0x09c7, .a=0xc7, .x=0x5c, .y=0xbb, .sp=0x99, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x09c7, .value=0x68}, {.addr=0x09c8, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x09c9, .a=0xc7, .x=0x5c, .y=0xbb, .sp=0x99, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x09c7, .value=0x68}, {.addr=0x09c8, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x09c7, .value=0x68, .type=IO_READ},
        {.addr=0x09c8, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0325) {
    const struct CPU_State initial_cpu = {.pc=0xcb8d, .a=0xeb, .x=0x28, .y=0x17, .sp=0xee, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xcb8d, .value=0x68}, {.addr=0xcb8e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcb8f, .a=0xeb, .x=0x28, .y=0x17, .sp=0xee, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xcb8d, .value=0x68}, {.addr=0xcb8e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcb8d, .value=0x68, .type=IO_READ},
        {.addr=0xcb8e, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0326) {
    const struct CPU_State initial_cpu = {.pc=0x5464, .a=0x22, .x=0x60, .y=0x19, .sp=0x59, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5464, .value=0x68}, {.addr=0x5465, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5466, .a=0x22, .x=0x60, .y=0x19, .sp=0x59, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5464, .value=0x68}, {.addr=0x5465, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5464, .value=0x68, .type=IO_READ},
        {.addr=0x5465, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0327) {
    const struct CPU_State initial_cpu = {.pc=0x3fe9, .a=0xb4, .x=0xb2, .y=0xaa, .sp=0x82, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe9, .value=0x68}, {.addr=0x3fea, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x3feb, .a=0xb4, .x=0xb2, .y=0xaa, .sp=0x82, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3fe9, .value=0x68}, {.addr=0x3fea, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x3fe9, .value=0x68, .type=IO_READ},
        {.addr=0x3fea, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0328) {
    const struct CPU_State initial_cpu = {.pc=0xc8ac, .a=0x86, .x=0x31, .y=0x7b, .sp=0x7d, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xc8ac, .value=0x68}, {.addr=0xc8ad, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc8ae, .a=0x86, .x=0x31, .y=0x7b, .sp=0x7d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc8ac, .value=0x68}, {.addr=0xc8ad, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc8ac, .value=0x68, .type=IO_READ},
        {.addr=0xc8ad, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0329) {
    const struct CPU_State initial_cpu = {.pc=0x893c, .a=0x79, .x=0xf9, .y=0x42, .sp=0xc8, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x893c, .value=0x68}, {.addr=0x893d, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x893e, .a=0x79, .x=0xf9, .y=0x42, .sp=0xc8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x893c, .value=0x68}, {.addr=0x893d, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x893c, .value=0x68, .type=IO_READ},
        {.addr=0x893d, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_032A) {
    const struct CPU_State initial_cpu = {.pc=0x118c, .a=0x6f, .x=0x35, .y=0x18, .sp=0x03, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x118c, .value=0x68}, {.addr=0x118d, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x118e, .a=0x6f, .x=0x35, .y=0x18, .sp=0x03, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x118c, .value=0x68}, {.addr=0x118d, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x118c, .value=0x68, .type=IO_READ},
        {.addr=0x118d, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_032B) {
    const struct CPU_State initial_cpu = {.pc=0x35e0, .a=0xbf, .x=0x7f, .y=0x69, .sp=0xe1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x35e0, .value=0x68}, {.addr=0x35e1, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x35e2, .a=0xbf, .x=0x7f, .y=0x69, .sp=0xe1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x35e0, .value=0x68}, {.addr=0x35e1, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x35e0, .value=0x68, .type=IO_READ},
        {.addr=0x35e1, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_032C) {
    const struct CPU_State initial_cpu = {.pc=0xe8ae, .a=0x70, .x=0x45, .y=0x02, .sp=0xe3, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ae, .value=0x68}, {.addr=0xe8af, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xe8b0, .a=0x70, .x=0x45, .y=0x02, .sp=0xe3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xe8ae, .value=0x68}, {.addr=0xe8af, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xe8ae, .value=0x68, .type=IO_READ},
        {.addr=0xe8af, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_032D) {
    const struct CPU_State initial_cpu = {.pc=0xe66d, .a=0x73, .x=0x58, .y=0x1f, .sp=0x2f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe66d, .value=0x68}, {.addr=0xe66e, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xe66f, .a=0x73, .x=0x58, .y=0x1f, .sp=0x2f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe66d, .value=0x68}, {.addr=0xe66e, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xe66d, .value=0x68, .type=IO_READ},
        {.addr=0xe66e, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_032E) {
    const struct CPU_State initial_cpu = {.pc=0x0924, .a=0x03, .x=0xbc, .y=0xcf, .sp=0xbf, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0924, .value=0x68}, {.addr=0x0925, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0926, .a=0x03, .x=0xbc, .y=0xcf, .sp=0xbf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0924, .value=0x68}, {.addr=0x0925, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0924, .value=0x68, .type=IO_READ},
        {.addr=0x0925, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_032F) {
    const struct CPU_State initial_cpu = {.pc=0xa4b9, .a=0x1a, .x=0x5d, .y=0x00, .sp=0xbc, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b9, .value=0x68}, {.addr=0xa4ba, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xa4bb, .a=0x1a, .x=0x5d, .y=0x00, .sp=0xbc, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa4b9, .value=0x68}, {.addr=0xa4ba, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xa4b9, .value=0x68, .type=IO_READ},
        {.addr=0xa4ba, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0330) {
    const struct CPU_State initial_cpu = {.pc=0x8455, .a=0xc5, .x=0x99, .y=0x1c, .sp=0xfd, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8455, .value=0x68}, {.addr=0x8456, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x8457, .a=0xc5, .x=0x99, .y=0x1c, .sp=0xfd, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8455, .value=0x68}, {.addr=0x8456, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x8455, .value=0x68, .type=IO_READ},
        {.addr=0x8456, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0331) {
    const struct CPU_State initial_cpu = {.pc=0x1548, .a=0xb6, .x=0x54, .y=0xe6, .sp=0x02, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x1548, .value=0x68}, {.addr=0x1549, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x154a, .a=0xb6, .x=0x54, .y=0xe6, .sp=0x02, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1548, .value=0x68}, {.addr=0x1549, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x1548, .value=0x68, .type=IO_READ},
        {.addr=0x1549, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0332) {
    const struct CPU_State initial_cpu = {.pc=0xc9f6, .a=0x5a, .x=0xb7, .y=0x4b, .sp=0x93, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f6, .value=0x68}, {.addr=0xc9f7, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xc9f8, .a=0x5a, .x=0xb7, .y=0x4b, .sp=0x93, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc9f6, .value=0x68}, {.addr=0xc9f7, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xc9f6, .value=0x68, .type=IO_READ},
        {.addr=0xc9f7, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0333) {
    const struct CPU_State initial_cpu = {.pc=0x4eb4, .a=0xb7, .x=0x40, .y=0xcd, .sp=0xbc, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x4eb4, .value=0x68}, {.addr=0x4eb5, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x4eb6, .a=0xb7, .x=0x40, .y=0xcd, .sp=0xbc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4eb4, .value=0x68}, {.addr=0x4eb5, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x4eb4, .value=0x68, .type=IO_READ},
        {.addr=0x4eb5, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0334) {
    const struct CPU_State initial_cpu = {.pc=0xecef, .a=0x22, .x=0x1c, .y=0x21, .sp=0xf8, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xecef, .value=0x68}, {.addr=0xecf0, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xecf1, .a=0x22, .x=0x1c, .y=0x21, .sp=0xf8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xecef, .value=0x68}, {.addr=0xecf0, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xecef, .value=0x68, .type=IO_READ},
        {.addr=0xecf0, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0335) {
    const struct CPU_State initial_cpu = {.pc=0xc453, .a=0x97, .x=0x77, .y=0xce, .sp=0xf2, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xc453, .value=0x68}, {.addr=0xc454, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xc455, .a=0x97, .x=0x77, .y=0xce, .sp=0xf2, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc453, .value=0x68}, {.addr=0xc454, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xc453, .value=0x68, .type=IO_READ},
        {.addr=0xc454, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0336) {
    const struct CPU_State initial_cpu = {.pc=0x4c6c, .a=0x78, .x=0x3d, .y=0xc4, .sp=0xc8, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4c6c, .value=0x68}, {.addr=0x4c6d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x4c6e, .a=0x78, .x=0x3d, .y=0xc4, .sp=0xc8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4c6c, .value=0x68}, {.addr=0x4c6d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x4c6c, .value=0x68, .type=IO_READ},
        {.addr=0x4c6d, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0337) {
    const struct CPU_State initial_cpu = {.pc=0x1ff4, .a=0x93, .x=0x4a, .y=0x52, .sp=0x5c, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1ff4, .value=0x68}, {.addr=0x1ff5, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x1ff6, .a=0x93, .x=0x4a, .y=0x52, .sp=0x5c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1ff4, .value=0x68}, {.addr=0x1ff5, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x1ff4, .value=0x68, .type=IO_READ},
        {.addr=0x1ff5, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0338) {
    const struct CPU_State initial_cpu = {.pc=0xd5a1, .a=0x46, .x=0x9e, .y=0x27, .sp=0x34, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd5a1, .value=0x68}, {.addr=0xd5a2, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xd5a3, .a=0x46, .x=0x9e, .y=0x27, .sp=0x34, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xd5a1, .value=0x68}, {.addr=0xd5a2, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xd5a1, .value=0x68, .type=IO_READ},
        {.addr=0xd5a2, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0339) {
    const struct CPU_State initial_cpu = {.pc=0x9633, .a=0x9d, .x=0x27, .y=0x59, .sp=0xeb, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x9633, .value=0x68}, {.addr=0x9634, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x9635, .a=0x9d, .x=0x27, .y=0x59, .sp=0xeb, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9633, .value=0x68}, {.addr=0x9634, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x9633, .value=0x68, .type=IO_READ},
        {.addr=0x9634, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_033A) {
    const struct CPU_State initial_cpu = {.pc=0x80d6, .a=0x93, .x=0x74, .y=0x89, .sp=0x5d, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x80d6, .value=0x68}, {.addr=0x80d7, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x80d8, .a=0x93, .x=0x74, .y=0x89, .sp=0x5d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x80d6, .value=0x68}, {.addr=0x80d7, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x80d6, .value=0x68, .type=IO_READ},
        {.addr=0x80d7, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_033B) {
    const struct CPU_State initial_cpu = {.pc=0x977d, .a=0xee, .x=0x33, .y=0xf1, .sp=0x55, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x977d, .value=0x68}, {.addr=0x977e, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x977f, .a=0xee, .x=0x33, .y=0xf1, .sp=0x55, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x977d, .value=0x68}, {.addr=0x977e, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x977d, .value=0x68, .type=IO_READ},
        {.addr=0x977e, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_033C) {
    const struct CPU_State initial_cpu = {.pc=0x7227, .a=0x48, .x=0x75, .y=0xea, .sp=0x26, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7227, .value=0x68}, {.addr=0x7228, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x7229, .a=0x48, .x=0x75, .y=0xea, .sp=0x26, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7227, .value=0x68}, {.addr=0x7228, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x7227, .value=0x68, .type=IO_READ},
        {.addr=0x7228, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_033D) {
    const struct CPU_State initial_cpu = {.pc=0x12bc, .a=0x08, .x=0xb2, .y=0x99, .sp=0x98, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x12bc, .value=0x68}, {.addr=0x12bd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x12be, .a=0x08, .x=0xb2, .y=0x99, .sp=0x98, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x12bc, .value=0x68}, {.addr=0x12bd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x12bc, .value=0x68, .type=IO_READ},
        {.addr=0x12bd, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_033E) {
    const struct CPU_State initial_cpu = {.pc=0x053a, .a=0xba, .x=0x8a, .y=0x6d, .sp=0xd9, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x053a, .value=0x68}, {.addr=0x053b, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x053c, .a=0xba, .x=0x8a, .y=0x6d, .sp=0xd9, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x053a, .value=0x68}, {.addr=0x053b, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x053a, .value=0x68, .type=IO_READ},
        {.addr=0x053b, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_033F) {
    const struct CPU_State initial_cpu = {.pc=0x4c3b, .a=0xb0, .x=0x18, .y=0x3c, .sp=0xe1, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x4c3b, .value=0x68}, {.addr=0x4c3c, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x4c3d, .a=0xb0, .x=0x18, .y=0x3c, .sp=0xe1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4c3b, .value=0x68}, {.addr=0x4c3c, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x4c3b, .value=0x68, .type=IO_READ},
        {.addr=0x4c3c, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0340) {
    const struct CPU_State initial_cpu = {.pc=0x6419, .a=0xa3, .x=0x94, .y=0x0d, .sp=0x60, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x6419, .value=0x68}, {.addr=0x641a, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x641b, .a=0xa3, .x=0x94, .y=0x0d, .sp=0x60, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x6419, .value=0x68}, {.addr=0x641a, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x6419, .value=0x68, .type=IO_READ},
        {.addr=0x641a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0341) {
    const struct CPU_State initial_cpu = {.pc=0x7368, .a=0xae, .x=0x40, .y=0xeb, .sp=0x71, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x7368, .value=0x68}, {.addr=0x7369, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x736a, .a=0xae, .x=0x40, .y=0xeb, .sp=0x71, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7368, .value=0x68}, {.addr=0x7369, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x7368, .value=0x68, .type=IO_READ},
        {.addr=0x7369, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0342) {
    const struct CPU_State initial_cpu = {.pc=0x19cf, .a=0x5a, .x=0x96, .y=0xa0, .sp=0x90, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x19cf, .value=0x68}, {.addr=0x19d0, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x19d1, .a=0x5a, .x=0x96, .y=0xa0, .sp=0x90, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x19cf, .value=0x68}, {.addr=0x19d0, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x19cf, .value=0x68, .type=IO_READ},
        {.addr=0x19d0, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0343) {
    const struct CPU_State initial_cpu = {.pc=0x2f89, .a=0x77, .x=0xa0, .y=0x39, .sp=0xa3, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x2f89, .value=0x68}, {.addr=0x2f8a, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x2f8b, .a=0x77, .x=0xa0, .y=0x39, .sp=0xa3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2f89, .value=0x68}, {.addr=0x2f8a, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x2f89, .value=0x68, .type=IO_READ},
        {.addr=0x2f8a, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0344) {
    const struct CPU_State initial_cpu = {.pc=0x58a5, .a=0x7b, .x=0xaf, .y=0x77, .sp=0x32, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x58a5, .value=0x68}, {.addr=0x58a6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x58a7, .a=0x7b, .x=0xaf, .y=0x77, .sp=0x32, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x58a5, .value=0x68}, {.addr=0x58a6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x58a5, .value=0x68, .type=IO_READ},
        {.addr=0x58a6, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0345) {
    const struct CPU_State initial_cpu = {.pc=0x1d20, .a=0x3b, .x=0xb6, .y=0x09, .sp=0x67, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x1d20, .value=0x68}, {.addr=0x1d21, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x1d22, .a=0x3b, .x=0xb6, .y=0x09, .sp=0x67, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1d20, .value=0x68}, {.addr=0x1d21, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x1d20, .value=0x68, .type=IO_READ},
        {.addr=0x1d21, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0346) {
    const struct CPU_State initial_cpu = {.pc=0x5c8e, .a=0x99, .x=0x26, .y=0xe4, .sp=0x3d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5c8e, .value=0x68}, {.addr=0x5c8f, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x5c90, .a=0x99, .x=0x26, .y=0xe4, .sp=0x3d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5c8e, .value=0x68}, {.addr=0x5c8f, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x5c8e, .value=0x68, .type=IO_READ},
        {.addr=0x5c8f, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0347) {
    const struct CPU_State initial_cpu = {.pc=0x2ea7, .a=0xad, .x=0x56, .y=0x7f, .sp=0xdc, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2ea7, .value=0x68}, {.addr=0x2ea8, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x2ea9, .a=0xad, .x=0x56, .y=0x7f, .sp=0xdc, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2ea7, .value=0x68}, {.addr=0x2ea8, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x2ea7, .value=0x68, .type=IO_READ},
        {.addr=0x2ea8, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0348) {
    const struct CPU_State initial_cpu = {.pc=0xead9, .a=0xb1, .x=0x04, .y=0x3e, .sp=0xb1, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xead9, .value=0x68}, {.addr=0xeada, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xeadb, .a=0xb1, .x=0x04, .y=0x3e, .sp=0xb1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xead9, .value=0x68}, {.addr=0xeada, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xead9, .value=0x68, .type=IO_READ},
        {.addr=0xeada, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0349) {
    const struct CPU_State initial_cpu = {.pc=0xb347, .a=0x40, .x=0xd2, .y=0x3a, .sp=0xd7, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xb347, .value=0x68}, {.addr=0xb348, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xb349, .a=0x40, .x=0xd2, .y=0x3a, .sp=0xd7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb347, .value=0x68}, {.addr=0xb348, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xb347, .value=0x68, .type=IO_READ},
        {.addr=0xb348, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_034A) {
    const struct CPU_State initial_cpu = {.pc=0x621a, .a=0x1b, .x=0x19, .y=0x88, .sp=0xb0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x621a, .value=0x68}, {.addr=0x621b, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x621c, .a=0x1b, .x=0x19, .y=0x88, .sp=0xb0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x621a, .value=0x68}, {.addr=0x621b, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x621a, .value=0x68, .type=IO_READ},
        {.addr=0x621b, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_034B) {
    const struct CPU_State initial_cpu = {.pc=0x34f6, .a=0x8d, .x=0x16, .y=0xae, .sp=0x38, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x34f6, .value=0x68}, {.addr=0x34f7, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x34f8, .a=0x8d, .x=0x16, .y=0xae, .sp=0x38, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x34f6, .value=0x68}, {.addr=0x34f7, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x34f6, .value=0x68, .type=IO_READ},
        {.addr=0x34f7, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_034C) {
    const struct CPU_State initial_cpu = {.pc=0x7388, .a=0x9e, .x=0x8a, .y=0x28, .sp=0x1b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x7388, .value=0x68}, {.addr=0x7389, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x738a, .a=0x9e, .x=0x8a, .y=0x28, .sp=0x1b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7388, .value=0x68}, {.addr=0x7389, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7388, .value=0x68, .type=IO_READ},
        {.addr=0x7389, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_034D) {
    const struct CPU_State initial_cpu = {.pc=0x4cf2, .a=0x49, .x=0xe7, .y=0xa7, .sp=0x85, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf2, .value=0x68}, {.addr=0x4cf3, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x4cf4, .a=0x49, .x=0xe7, .y=0xa7, .sp=0x85, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4cf2, .value=0x68}, {.addr=0x4cf3, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x4cf2, .value=0x68, .type=IO_READ},
        {.addr=0x4cf3, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_034E) {
    const struct CPU_State initial_cpu = {.pc=0xc69e, .a=0x70, .x=0x43, .y=0xf3, .sp=0x36, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xc69e, .value=0x68}, {.addr=0xc69f, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xc6a0, .a=0x70, .x=0x43, .y=0xf3, .sp=0x36, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc69e, .value=0x68}, {.addr=0xc69f, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xc69e, .value=0x68, .type=IO_READ},
        {.addr=0xc69f, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_034F) {
    const struct CPU_State initial_cpu = {.pc=0xe5a9, .a=0x7d, .x=0x5b, .y=0x83, .sp=0x3a, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xe5a9, .value=0x68}, {.addr=0xe5aa, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xe5ab, .a=0x7d, .x=0x5b, .y=0x83, .sp=0x3a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe5a9, .value=0x68}, {.addr=0xe5aa, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xe5a9, .value=0x68, .type=IO_READ},
        {.addr=0xe5aa, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0350) {
    const struct CPU_State initial_cpu = {.pc=0x361b, .a=0xc1, .x=0x7b, .y=0xe7, .sp=0x2e, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x361b, .value=0x68}, {.addr=0x361c, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x361d, .a=0xc1, .x=0x7b, .y=0xe7, .sp=0x2e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x361b, .value=0x68}, {.addr=0x361c, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x361b, .value=0x68, .type=IO_READ},
        {.addr=0x361c, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0351) {
    const struct CPU_State initial_cpu = {.pc=0xc8e9, .a=0x1c, .x=0xe5, .y=0xb9, .sp=0x76, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e9, .value=0x68}, {.addr=0xc8ea, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xc8eb, .a=0x1c, .x=0xe5, .y=0xb9, .sp=0x76, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc8e9, .value=0x68}, {.addr=0xc8ea, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xc8e9, .value=0x68, .type=IO_READ},
        {.addr=0xc8ea, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0352) {
    const struct CPU_State initial_cpu = {.pc=0xb014, .a=0xaf, .x=0x4f, .y=0x40, .sp=0x9b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xb014, .value=0x68}, {.addr=0xb015, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xb016, .a=0xaf, .x=0x4f, .y=0x40, .sp=0x9b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb014, .value=0x68}, {.addr=0xb015, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xb014, .value=0x68, .type=IO_READ},
        {.addr=0xb015, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0353) {
    const struct CPU_State initial_cpu = {.pc=0x2f9f, .a=0x04, .x=0xc7, .y=0xe2, .sp=0x87, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2f9f, .value=0x68}, {.addr=0x2fa0, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x2fa1, .a=0x04, .x=0xc7, .y=0xe2, .sp=0x87, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2f9f, .value=0x68}, {.addr=0x2fa0, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x2f9f, .value=0x68, .type=IO_READ},
        {.addr=0x2fa0, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0354) {
    const struct CPU_State initial_cpu = {.pc=0x4b35, .a=0xe0, .x=0xd9, .y=0xa0, .sp=0x14, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4b35, .value=0x68}, {.addr=0x4b36, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x4b37, .a=0xe0, .x=0xd9, .y=0xa0, .sp=0x14, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4b35, .value=0x68}, {.addr=0x4b36, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x4b35, .value=0x68, .type=IO_READ},
        {.addr=0x4b36, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0355) {
    const struct CPU_State initial_cpu = {.pc=0xf0bb, .a=0x59, .x=0x7b, .y=0x26, .sp=0x77, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf0bb, .value=0x68}, {.addr=0xf0bc, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xf0bd, .a=0x59, .x=0x7b, .y=0x26, .sp=0x77, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf0bb, .value=0x68}, {.addr=0xf0bc, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xf0bb, .value=0x68, .type=IO_READ},
        {.addr=0xf0bc, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0356) {
    const struct CPU_State initial_cpu = {.pc=0x56d9, .a=0x28, .x=0x53, .y=0x04, .sp=0xff, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x56d9, .value=0x68}, {.addr=0x56da, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x56db, .a=0x28, .x=0x53, .y=0x04, .sp=0xff, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x56d9, .value=0x68}, {.addr=0x56da, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x56d9, .value=0x68, .type=IO_READ},
        {.addr=0x56da, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0357) {
    const struct CPU_State initial_cpu = {.pc=0x3934, .a=0x42, .x=0x20, .y=0x10, .sp=0x52, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x3934, .value=0x68}, {.addr=0x3935, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x3936, .a=0x42, .x=0x20, .y=0x10, .sp=0x52, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3934, .value=0x68}, {.addr=0x3935, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x3934, .value=0x68, .type=IO_READ},
        {.addr=0x3935, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0358) {
    const struct CPU_State initial_cpu = {.pc=0xd4de, .a=0xdc, .x=0x80, .y=0xa0, .sp=0xf8, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd4de, .value=0x68}, {.addr=0xd4df, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xd4e0, .a=0xdc, .x=0x80, .y=0xa0, .sp=0xf8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd4de, .value=0x68}, {.addr=0xd4df, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xd4de, .value=0x68, .type=IO_READ},
        {.addr=0xd4df, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0359) {
    const struct CPU_State initial_cpu = {.pc=0x722c, .a=0x8e, .x=0x3c, .y=0x33, .sp=0xc9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x722c, .value=0x68}, {.addr=0x722d, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x722e, .a=0x8e, .x=0x3c, .y=0x33, .sp=0xc9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x722c, .value=0x68}, {.addr=0x722d, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x722c, .value=0x68, .type=IO_READ},
        {.addr=0x722d, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_035A) {
    const struct CPU_State initial_cpu = {.pc=0x85b0, .a=0xd2, .x=0xfe, .y=0xb5, .sp=0x18, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x85b0, .value=0x68}, {.addr=0x85b1, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x85b2, .a=0xd2, .x=0xfe, .y=0xb5, .sp=0x18, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x85b0, .value=0x68}, {.addr=0x85b1, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x85b0, .value=0x68, .type=IO_READ},
        {.addr=0x85b1, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_035B) {
    const struct CPU_State initial_cpu = {.pc=0x8590, .a=0x2d, .x=0xf5, .y=0x61, .sp=0xbd, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x8590, .value=0x68}, {.addr=0x8591, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x8592, .a=0x2d, .x=0xf5, .y=0x61, .sp=0xbd, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8590, .value=0x68}, {.addr=0x8591, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x8590, .value=0x68, .type=IO_READ},
        {.addr=0x8591, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_035C) {
    const struct CPU_State initial_cpu = {.pc=0xed4a, .a=0xc0, .x=0x4f, .y=0x59, .sp=0xbb, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xed4a, .value=0x68}, {.addr=0xed4b, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xed4c, .a=0xc0, .x=0x4f, .y=0x59, .sp=0xbb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xed4a, .value=0x68}, {.addr=0xed4b, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xed4a, .value=0x68, .type=IO_READ},
        {.addr=0xed4b, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_035D) {
    const struct CPU_State initial_cpu = {.pc=0x1a85, .a=0x79, .x=0xb2, .y=0x90, .sp=0x66, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x1a85, .value=0x68}, {.addr=0x1a86, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x1a87, .a=0x79, .x=0xb2, .y=0x90, .sp=0x66, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1a85, .value=0x68}, {.addr=0x1a86, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x1a85, .value=0x68, .type=IO_READ},
        {.addr=0x1a86, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_035E) {
    const struct CPU_State initial_cpu = {.pc=0xec2f, .a=0x7b, .x=0x6c, .y=0x24, .sp=0xa0, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xec2f, .value=0x68}, {.addr=0xec30, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xec31, .a=0x7b, .x=0x6c, .y=0x24, .sp=0xa0, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xec2f, .value=0x68}, {.addr=0xec30, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xec2f, .value=0x68, .type=IO_READ},
        {.addr=0xec30, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_035F) {
    const struct CPU_State initial_cpu = {.pc=0xa713, .a=0x28, .x=0x3e, .y=0x70, .sp=0xd5, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xa713, .value=0x68}, {.addr=0xa714, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xa715, .a=0x28, .x=0x3e, .y=0x70, .sp=0xd5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa713, .value=0x68}, {.addr=0xa714, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xa713, .value=0x68, .type=IO_READ},
        {.addr=0xa714, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0360) {
    const struct CPU_State initial_cpu = {.pc=0xcef4, .a=0x01, .x=0x2d, .y=0x5e, .sp=0xf1, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xcef4, .value=0x68}, {.addr=0xcef5, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xcef6, .a=0x01, .x=0x2d, .y=0x5e, .sp=0xf1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xcef4, .value=0x68}, {.addr=0xcef5, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xcef4, .value=0x68, .type=IO_READ},
        {.addr=0xcef5, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0361) {
    const struct CPU_State initial_cpu = {.pc=0xaf51, .a=0x9d, .x=0x99, .y=0x95, .sp=0xcf, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xaf51, .value=0x68}, {.addr=0xaf52, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xaf53, .a=0x9d, .x=0x99, .y=0x95, .sp=0xcf, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xaf51, .value=0x68}, {.addr=0xaf52, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xaf51, .value=0x68, .type=IO_READ},
        {.addr=0xaf52, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0362) {
    const struct CPU_State initial_cpu = {.pc=0xb914, .a=0x0a, .x=0x80, .y=0x58, .sp=0x7e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xb914, .value=0x68}, {.addr=0xb915, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xb916, .a=0x0a, .x=0x80, .y=0x58, .sp=0x7e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb914, .value=0x68}, {.addr=0xb915, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xb914, .value=0x68, .type=IO_READ},
        {.addr=0xb915, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0363) {
    const struct CPU_State initial_cpu = {.pc=0x9663, .a=0xe6, .x=0x58, .y=0x8d, .sp=0xe5, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x9663, .value=0x68}, {.addr=0x9664, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x9665, .a=0xe6, .x=0x58, .y=0x8d, .sp=0xe5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9663, .value=0x68}, {.addr=0x9664, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x9663, .value=0x68, .type=IO_READ},
        {.addr=0x9664, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0364) {
    const struct CPU_State initial_cpu = {.pc=0xfd6b, .a=0x53, .x=0xb3, .y=0x78, .sp=0x1a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xfd6b, .value=0x68}, {.addr=0xfd6c, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xfd6d, .a=0x53, .x=0xb3, .y=0x78, .sp=0x1a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xfd6b, .value=0x68}, {.addr=0xfd6c, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xfd6b, .value=0x68, .type=IO_READ},
        {.addr=0xfd6c, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0365) {
    const struct CPU_State initial_cpu = {.pc=0x511d, .a=0x7d, .x=0xa6, .y=0x36, .sp=0xbd, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x511d, .value=0x68}, {.addr=0x511e, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x511f, .a=0x7d, .x=0xa6, .y=0x36, .sp=0xbd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x511d, .value=0x68}, {.addr=0x511e, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x511d, .value=0x68, .type=IO_READ},
        {.addr=0x511e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0366) {
    const struct CPU_State initial_cpu = {.pc=0xd9da, .a=0xb6, .x=0x3f, .y=0x84, .sp=0xa2, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xd9da, .value=0x68}, {.addr=0xd9db, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xd9dc, .a=0xb6, .x=0x3f, .y=0x84, .sp=0xa2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd9da, .value=0x68}, {.addr=0xd9db, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xd9da, .value=0x68, .type=IO_READ},
        {.addr=0xd9db, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0367) {
    const struct CPU_State initial_cpu = {.pc=0xc442, .a=0xb2, .x=0x72, .y=0xd7, .sp=0x62, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xc442, .value=0x68}, {.addr=0xc443, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xc444, .a=0xb2, .x=0x72, .y=0xd7, .sp=0x62, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc442, .value=0x68}, {.addr=0xc443, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xc442, .value=0x68, .type=IO_READ},
        {.addr=0xc443, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0368) {
    const struct CPU_State initial_cpu = {.pc=0xd8ba, .a=0x49, .x=0x21, .y=0x67, .sp=0x4f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xd8ba, .value=0x68}, {.addr=0xd8bb, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xd8bc, .a=0x49, .x=0x21, .y=0x67, .sp=0x4f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd8ba, .value=0x68}, {.addr=0xd8bb, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xd8ba, .value=0x68, .type=IO_READ},
        {.addr=0xd8bb, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0369) {
    const struct CPU_State initial_cpu = {.pc=0xa248, .a=0x07, .x=0x9d, .y=0x77, .sp=0xc2, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa248, .value=0x68}, {.addr=0xa249, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa24a, .a=0x07, .x=0x9d, .y=0x77, .sp=0xc2, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa248, .value=0x68}, {.addr=0xa249, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa248, .value=0x68, .type=IO_READ},
        {.addr=0xa249, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_036A) {
    const struct CPU_State initial_cpu = {.pc=0x79b2, .a=0x45, .x=0x8c, .y=0xb1, .sp=0x8f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x79b2, .value=0x68}, {.addr=0x79b3, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x79b4, .a=0x45, .x=0x8c, .y=0xb1, .sp=0x8f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x79b2, .value=0x68}, {.addr=0x79b3, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x79b2, .value=0x68, .type=IO_READ},
        {.addr=0x79b3, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_036B) {
    const struct CPU_State initial_cpu = {.pc=0xb036, .a=0xff, .x=0xec, .y=0x91, .sp=0xd0, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xb036, .value=0x68}, {.addr=0xb037, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xb038, .a=0xff, .x=0xec, .y=0x91, .sp=0xd0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb036, .value=0x68}, {.addr=0xb037, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xb036, .value=0x68, .type=IO_READ},
        {.addr=0xb037, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_036C) {
    const struct CPU_State initial_cpu = {.pc=0x710b, .a=0x70, .x=0xe3, .y=0x42, .sp=0x04, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x710b, .value=0x68}, {.addr=0x710c, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x710d, .a=0x70, .x=0xe3, .y=0x42, .sp=0x04, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x710b, .value=0x68}, {.addr=0x710c, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x710b, .value=0x68, .type=IO_READ},
        {.addr=0x710c, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_036D) {
    const struct CPU_State initial_cpu = {.pc=0x685d, .a=0x94, .x=0x59, .y=0xe5, .sp=0xbf, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x685d, .value=0x68}, {.addr=0x685e, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x685f, .a=0x94, .x=0x59, .y=0xe5, .sp=0xbf, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x685d, .value=0x68}, {.addr=0x685e, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x685d, .value=0x68, .type=IO_READ},
        {.addr=0x685e, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_036E) {
    const struct CPU_State initial_cpu = {.pc=0x5b1b, .a=0x54, .x=0xb5, .y=0x3f, .sp=0xf8, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x5b1b, .value=0x68}, {.addr=0x5b1c, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x5b1d, .a=0x54, .x=0xb5, .y=0x3f, .sp=0xf8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5b1b, .value=0x68}, {.addr=0x5b1c, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x5b1b, .value=0x68, .type=IO_READ},
        {.addr=0x5b1c, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_036F) {
    const struct CPU_State initial_cpu = {.pc=0x2f4a, .a=0xa2, .x=0xf6, .y=0xea, .sp=0xbd, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4a, .value=0x68}, {.addr=0x2f4b, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x2f4c, .a=0xa2, .x=0xf6, .y=0xea, .sp=0xbd, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2f4a, .value=0x68}, {.addr=0x2f4b, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x2f4a, .value=0x68, .type=IO_READ},
        {.addr=0x2f4b, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0370) {
    const struct CPU_State initial_cpu = {.pc=0x9956, .a=0x70, .x=0x57, .y=0xbc, .sp=0xec, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x9956, .value=0x68}, {.addr=0x9957, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x9958, .a=0x70, .x=0x57, .y=0xbc, .sp=0xec, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9956, .value=0x68}, {.addr=0x9957, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x9956, .value=0x68, .type=IO_READ},
        {.addr=0x9957, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0371) {
    const struct CPU_State initial_cpu = {.pc=0x2907, .a=0xed, .x=0x6a, .y=0xb3, .sp=0x21, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x2907, .value=0x68}, {.addr=0x2908, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x2909, .a=0xed, .x=0x6a, .y=0xb3, .sp=0x21, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2907, .value=0x68}, {.addr=0x2908, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x2907, .value=0x68, .type=IO_READ},
        {.addr=0x2908, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0372) {
    const struct CPU_State initial_cpu = {.pc=0x0a63, .a=0xa6, .x=0xf2, .y=0x13, .sp=0xd1, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0a63, .value=0x68}, {.addr=0x0a64, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x0a65, .a=0xa6, .x=0xf2, .y=0x13, .sp=0xd1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0a63, .value=0x68}, {.addr=0x0a64, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x0a63, .value=0x68, .type=IO_READ},
        {.addr=0x0a64, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0373) {
    const struct CPU_State initial_cpu = {.pc=0x0349, .a=0x14, .x=0xf8, .y=0xb1, .sp=0x27, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0349, .value=0x68}, {.addr=0x034a, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x034b, .a=0x14, .x=0xf8, .y=0xb1, .sp=0x27, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0349, .value=0x68}, {.addr=0x034a, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x0349, .value=0x68, .type=IO_READ},
        {.addr=0x034a, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0374) {
    const struct CPU_State initial_cpu = {.pc=0x939d, .a=0x51, .x=0x41, .y=0x64, .sp=0xf0, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x939d, .value=0x68}, {.addr=0x939e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x939f, .a=0x51, .x=0x41, .y=0x64, .sp=0xf0, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x939d, .value=0x68}, {.addr=0x939e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x939d, .value=0x68, .type=IO_READ},
        {.addr=0x939e, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0375) {
    const struct CPU_State initial_cpu = {.pc=0xde53, .a=0x6d, .x=0xf2, .y=0x98, .sp=0xb5, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xde53, .value=0x68}, {.addr=0xde54, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xde55, .a=0x6d, .x=0xf2, .y=0x98, .sp=0xb5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xde53, .value=0x68}, {.addr=0xde54, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xde53, .value=0x68, .type=IO_READ},
        {.addr=0xde54, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0376) {
    const struct CPU_State initial_cpu = {.pc=0x4281, .a=0x5d, .x=0x9f, .y=0x23, .sp=0x94, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x4281, .value=0x68}, {.addr=0x4282, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x4283, .a=0x5d, .x=0x9f, .y=0x23, .sp=0x94, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4281, .value=0x68}, {.addr=0x4282, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x4281, .value=0x68, .type=IO_READ},
        {.addr=0x4282, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0377) {
    const struct CPU_State initial_cpu = {.pc=0x76fd, .a=0x01, .x=0xdb, .y=0x13, .sp=0x57, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x76fd, .value=0x68}, {.addr=0x76fe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x76ff, .a=0x01, .x=0xdb, .y=0x13, .sp=0x57, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x76fd, .value=0x68}, {.addr=0x76fe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x76fd, .value=0x68, .type=IO_READ},
        {.addr=0x76fe, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0378) {
    const struct CPU_State initial_cpu = {.pc=0x0180, .a=0x54, .x=0x4b, .y=0x5e, .sp=0x7a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x68}, {.addr=0x0181, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x0182, .a=0x54, .x=0x4b, .y=0x5e, .sp=0x7a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x68}, {.addr=0x0181, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x0180, .value=0x68, .type=IO_READ},
        {.addr=0x0181, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0379) {
    const struct CPU_State initial_cpu = {.pc=0x3d13, .a=0xaa, .x=0x16, .y=0xfe, .sp=0x5a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x3d13, .value=0x68}, {.addr=0x3d14, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x3d15, .a=0xaa, .x=0x16, .y=0xfe, .sp=0x5a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3d13, .value=0x68}, {.addr=0x3d14, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x3d13, .value=0x68, .type=IO_READ},
        {.addr=0x3d14, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_037A) {
    const struct CPU_State initial_cpu = {.pc=0x6449, .a=0xdb, .x=0x1d, .y=0x94, .sp=0x76, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x6449, .value=0x68}, {.addr=0x644a, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x644b, .a=0xdb, .x=0x1d, .y=0x94, .sp=0x76, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x6449, .value=0x68}, {.addr=0x644a, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x6449, .value=0x68, .type=IO_READ},
        {.addr=0x644a, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_037B) {
    const struct CPU_State initial_cpu = {.pc=0xfad2, .a=0xf5, .x=0x62, .y=0x56, .sp=0x60, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xfad2, .value=0x68}, {.addr=0xfad3, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xfad4, .a=0xf5, .x=0x62, .y=0x56, .sp=0x60, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xfad2, .value=0x68}, {.addr=0xfad3, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xfad2, .value=0x68, .type=IO_READ},
        {.addr=0xfad3, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_037C) {
    const struct CPU_State initial_cpu = {.pc=0x975e, .a=0x7a, .x=0x11, .y=0x60, .sp=0x5a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x975e, .value=0x68}, {.addr=0x975f, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x9760, .a=0x7a, .x=0x11, .y=0x60, .sp=0x5a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x975e, .value=0x68}, {.addr=0x975f, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x975e, .value=0x68, .type=IO_READ},
        {.addr=0x975f, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_037D) {
    const struct CPU_State initial_cpu = {.pc=0x02f7, .a=0x74, .x=0x17, .y=0xf1, .sp=0xbc, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x02f7, .value=0x68}, {.addr=0x02f8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x02f9, .a=0x74, .x=0x17, .y=0xf1, .sp=0xbc, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x02f7, .value=0x68}, {.addr=0x02f8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x02f7, .value=0x68, .type=IO_READ},
        {.addr=0x02f8, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_037E) {
    const struct CPU_State initial_cpu = {.pc=0x0f52, .a=0x3a, .x=0x5a, .y=0xd5, .sp=0x02, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0f52, .value=0x68}, {.addr=0x0f53, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x0f54, .a=0x3a, .x=0x5a, .y=0xd5, .sp=0x02, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0f52, .value=0x68}, {.addr=0x0f53, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x0f52, .value=0x68, .type=IO_READ},
        {.addr=0x0f53, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_037F) {
    const struct CPU_State initial_cpu = {.pc=0x2c7d, .a=0xfe, .x=0x50, .y=0xfb, .sp=0xf7, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x2c7d, .value=0x68}, {.addr=0x2c7e, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x2c7f, .a=0xfe, .x=0x50, .y=0xfb, .sp=0xf7, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x2c7d, .value=0x68}, {.addr=0x2c7e, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x2c7d, .value=0x68, .type=IO_READ},
        {.addr=0x2c7e, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0380) {
    const struct CPU_State initial_cpu = {.pc=0x0280, .a=0xe4, .x=0x55, .y=0x96, .sp=0x6d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0280, .value=0x68}, {.addr=0x0281, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x0282, .a=0xe4, .x=0x55, .y=0x96, .sp=0x6d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0280, .value=0x68}, {.addr=0x0281, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x0280, .value=0x68, .type=IO_READ},
        {.addr=0x0281, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0381) {
    const struct CPU_State initial_cpu = {.pc=0xa73a, .a=0x8b, .x=0x33, .y=0x1c, .sp=0xa1, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xa73a, .value=0x68}, {.addr=0xa73b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa73c, .a=0x8b, .x=0x33, .y=0x1c, .sp=0xa1, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa73a, .value=0x68}, {.addr=0xa73b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa73a, .value=0x68, .type=IO_READ},
        {.addr=0xa73b, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0382) {
    const struct CPU_State initial_cpu = {.pc=0xb61f, .a=0x15, .x=0x1b, .y=0x2e, .sp=0xff, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xb61f, .value=0x68}, {.addr=0xb620, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xb621, .a=0x15, .x=0x1b, .y=0x2e, .sp=0xff, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb61f, .value=0x68}, {.addr=0xb620, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xb61f, .value=0x68, .type=IO_READ},
        {.addr=0xb620, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0383) {
    const struct CPU_State initial_cpu = {.pc=0x39a1, .a=0x93, .x=0xd3, .y=0xf0, .sp=0x94, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x39a1, .value=0x68}, {.addr=0x39a2, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x39a3, .a=0x93, .x=0xd3, .y=0xf0, .sp=0x94, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x39a1, .value=0x68}, {.addr=0x39a2, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x39a1, .value=0x68, .type=IO_READ},
        {.addr=0x39a2, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0384) {
    const struct CPU_State initial_cpu = {.pc=0x04b9, .a=0x0c, .x=0xf5, .y=0x75, .sp=0x14, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x04b9, .value=0x68}, {.addr=0x04ba, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x04bb, .a=0x0c, .x=0xf5, .y=0x75, .sp=0x14, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x04b9, .value=0x68}, {.addr=0x04ba, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x04b9, .value=0x68, .type=IO_READ},
        {.addr=0x04ba, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0385) {
    const struct CPU_State initial_cpu = {.pc=0xd099, .a=0x63, .x=0xb9, .y=0x97, .sp=0xc6, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xd099, .value=0x68}, {.addr=0xd09a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd09b, .a=0x63, .x=0xb9, .y=0x97, .sp=0xc6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd099, .value=0x68}, {.addr=0xd09a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd099, .value=0x68, .type=IO_READ},
        {.addr=0xd09a, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0386) {
    const struct CPU_State initial_cpu = {.pc=0xb603, .a=0x40, .x=0xc1, .y=0x75, .sp=0xa3, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xb603, .value=0x68}, {.addr=0xb604, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xb605, .a=0x40, .x=0xc1, .y=0x75, .sp=0xa3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb603, .value=0x68}, {.addr=0xb604, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xb603, .value=0x68, .type=IO_READ},
        {.addr=0xb604, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0387) {
    const struct CPU_State initial_cpu = {.pc=0x51fd, .a=0x6e, .x=0x79, .y=0x0f, .sp=0x25, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x51fd, .value=0x68}, {.addr=0x51fe, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x51ff, .a=0x6e, .x=0x79, .y=0x0f, .sp=0x25, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x51fd, .value=0x68}, {.addr=0x51fe, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x51fd, .value=0x68, .type=IO_READ},
        {.addr=0x51fe, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0388) {
    const struct CPU_State initial_cpu = {.pc=0x80e6, .a=0x82, .x=0x62, .y=0xbe, .sp=0xea, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x80e6, .value=0x68}, {.addr=0x80e7, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x80e8, .a=0x82, .x=0x62, .y=0xbe, .sp=0xea, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x80e6, .value=0x68}, {.addr=0x80e7, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x80e6, .value=0x68, .type=IO_READ},
        {.addr=0x80e7, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0389) {
    const struct CPU_State initial_cpu = {.pc=0xe1fc, .a=0x23, .x=0x78, .y=0xd9, .sp=0x51, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe1fc, .value=0x68}, {.addr=0xe1fd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe1fe, .a=0x23, .x=0x78, .y=0xd9, .sp=0x51, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe1fc, .value=0x68}, {.addr=0xe1fd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe1fc, .value=0x68, .type=IO_READ},
        {.addr=0xe1fd, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_038A) {
    const struct CPU_State initial_cpu = {.pc=0xad2e, .a=0xde, .x=0xeb, .y=0x15, .sp=0xee, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xad2e, .value=0x68}, {.addr=0xad2f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xad30, .a=0xde, .x=0xeb, .y=0x15, .sp=0xee, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xad2e, .value=0x68}, {.addr=0xad2f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xad2e, .value=0x68, .type=IO_READ},
        {.addr=0xad2f, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_038B) {
    const struct CPU_State initial_cpu = {.pc=0x4675, .a=0xde, .x=0x36, .y=0xeb, .sp=0xf8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x4675, .value=0x68}, {.addr=0x4676, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x4677, .a=0xde, .x=0x36, .y=0xeb, .sp=0xf8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x4675, .value=0x68}, {.addr=0x4676, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x4675, .value=0x68, .type=IO_READ},
        {.addr=0x4676, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_038C) {
    const struct CPU_State initial_cpu = {.pc=0x33ea, .a=0xc6, .x=0x52, .y=0x2e, .sp=0x22, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x33ea, .value=0x68}, {.addr=0x33eb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x33ec, .a=0xc6, .x=0x52, .y=0x2e, .sp=0x22, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x33ea, .value=0x68}, {.addr=0x33eb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x33ea, .value=0x68, .type=IO_READ},
        {.addr=0x33eb, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_038D) {
    const struct CPU_State initial_cpu = {.pc=0x57a1, .a=0x2f, .x=0x41, .y=0xde, .sp=0x36, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x57a1, .value=0x68}, {.addr=0x57a2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x57a3, .a=0x2f, .x=0x41, .y=0xde, .sp=0x36, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x57a1, .value=0x68}, {.addr=0x57a2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x57a1, .value=0x68, .type=IO_READ},
        {.addr=0x57a2, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_038E) {
    const struct CPU_State initial_cpu = {.pc=0xc21b, .a=0x25, .x=0x9c, .y=0x11, .sp=0x15, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc21b, .value=0x68}, {.addr=0xc21c, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc21d, .a=0x25, .x=0x9c, .y=0x11, .sp=0x15, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc21b, .value=0x68}, {.addr=0xc21c, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc21b, .value=0x68, .type=IO_READ},
        {.addr=0xc21c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_038F) {
    const struct CPU_State initial_cpu = {.pc=0xed94, .a=0x4c, .x=0x55, .y=0xf1, .sp=0xa4, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xed94, .value=0x68}, {.addr=0xed95, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xed96, .a=0x4c, .x=0x55, .y=0xf1, .sp=0xa4, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xed94, .value=0x68}, {.addr=0xed95, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xed94, .value=0x68, .type=IO_READ},
        {.addr=0xed95, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0390) {
    const struct CPU_State initial_cpu = {.pc=0xdc0a, .a=0x3b, .x=0x68, .y=0x7b, .sp=0xe1, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xdc0a, .value=0x68}, {.addr=0xdc0b, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xdc0c, .a=0x3b, .x=0x68, .y=0x7b, .sp=0xe1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xdc0a, .value=0x68}, {.addr=0xdc0b, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xdc0a, .value=0x68, .type=IO_READ},
        {.addr=0xdc0b, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0391) {
    const struct CPU_State initial_cpu = {.pc=0x8c7a, .a=0xf5, .x=0x94, .y=0x39, .sp=0x28, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x8c7a, .value=0x68}, {.addr=0x8c7b, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x8c7c, .a=0xf5, .x=0x94, .y=0x39, .sp=0x28, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x8c7a, .value=0x68}, {.addr=0x8c7b, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x8c7a, .value=0x68, .type=IO_READ},
        {.addr=0x8c7b, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0392) {
    const struct CPU_State initial_cpu = {.pc=0x88fc, .a=0x56, .x=0x40, .y=0xfd, .sp=0x61, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x88fc, .value=0x68}, {.addr=0x88fd, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x88fe, .a=0x56, .x=0x40, .y=0xfd, .sp=0x61, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x88fc, .value=0x68}, {.addr=0x88fd, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x88fc, .value=0x68, .type=IO_READ},
        {.addr=0x88fd, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0393) {
    const struct CPU_State initial_cpu = {.pc=0xe960, .a=0x63, .x=0x0e, .y=0x08, .sp=0xbd, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xe960, .value=0x68}, {.addr=0xe961, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xe962, .a=0x63, .x=0x0e, .y=0x08, .sp=0xbd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe960, .value=0x68}, {.addr=0xe961, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xe960, .value=0x68, .type=IO_READ},
        {.addr=0xe961, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0394) {
    const struct CPU_State initial_cpu = {.pc=0x7119, .a=0xc4, .x=0x3c, .y=0x26, .sp=0x41, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x7119, .value=0x68}, {.addr=0x711a, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x711b, .a=0xc4, .x=0x3c, .y=0x26, .sp=0x41, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x7119, .value=0x68}, {.addr=0x711a, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x7119, .value=0x68, .type=IO_READ},
        {.addr=0x711a, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0395) {
    const struct CPU_State initial_cpu = {.pc=0x6725, .a=0x4e, .x=0xa1, .y=0x6d, .sp=0x6d, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x6725, .value=0x68}, {.addr=0x6726, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x6727, .a=0x4e, .x=0xa1, .y=0x6d, .sp=0x6d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6725, .value=0x68}, {.addr=0x6726, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x6725, .value=0x68, .type=IO_READ},
        {.addr=0x6726, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0396) {
    const struct CPU_State initial_cpu = {.pc=0x4d46, .a=0xf6, .x=0xd2, .y=0x32, .sp=0xdc, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x4d46, .value=0x68}, {.addr=0x4d47, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x4d48, .a=0xf6, .x=0xd2, .y=0x32, .sp=0xdc, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4d46, .value=0x68}, {.addr=0x4d47, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x4d46, .value=0x68, .type=IO_READ},
        {.addr=0x4d47, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0397) {
    const struct CPU_State initial_cpu = {.pc=0x9127, .a=0xa0, .x=0x31, .y=0xbd, .sp=0xa3, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x9127, .value=0x68}, {.addr=0x9128, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x9129, .a=0xa0, .x=0x31, .y=0xbd, .sp=0xa3, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9127, .value=0x68}, {.addr=0x9128, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x9127, .value=0x68, .type=IO_READ},
        {.addr=0x9128, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0398) {
    const struct CPU_State initial_cpu = {.pc=0x7308, .a=0x8c, .x=0x42, .y=0x79, .sp=0x24, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x7308, .value=0x68}, {.addr=0x7309, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x730a, .a=0x8c, .x=0x42, .y=0x79, .sp=0x24, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7308, .value=0x68}, {.addr=0x7309, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x7308, .value=0x68, .type=IO_READ},
        {.addr=0x7309, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_0399) {
    const struct CPU_State initial_cpu = {.pc=0x4459, .a=0x18, .x=0xf6, .y=0x84, .sp=0x92, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4459, .value=0x68}, {.addr=0x445a, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x445b, .a=0x18, .x=0xf6, .y=0x84, .sp=0x92, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4459, .value=0x68}, {.addr=0x445a, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x4459, .value=0x68, .type=IO_READ},
        {.addr=0x445a, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_039A) {
    const struct CPU_State initial_cpu = {.pc=0xf295, .a=0x7f, .x=0x94, .y=0x5d, .sp=0xf0, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xf295, .value=0x68}, {.addr=0xf296, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xf297, .a=0x7f, .x=0x94, .y=0x5d, .sp=0xf0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf295, .value=0x68}, {.addr=0xf296, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xf295, .value=0x68, .type=IO_READ},
        {.addr=0xf296, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_039B) {
    const struct CPU_State initial_cpu = {.pc=0x478d, .a=0xf9, .x=0x4c, .y=0xe2, .sp=0x6d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x478d, .value=0x68}, {.addr=0x478e, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x478f, .a=0xf9, .x=0x4c, .y=0xe2, .sp=0x6d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x478d, .value=0x68}, {.addr=0x478e, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x478d, .value=0x68, .type=IO_READ},
        {.addr=0x478e, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_039C) {
    const struct CPU_State initial_cpu = {.pc=0x82ea, .a=0x8b, .x=0x45, .y=0x18, .sp=0x93, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x82ea, .value=0x68}, {.addr=0x82eb, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x82ec, .a=0x8b, .x=0x45, .y=0x18, .sp=0x93, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x82ea, .value=0x68}, {.addr=0x82eb, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x82ea, .value=0x68, .type=IO_READ},
        {.addr=0x82eb, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_039D) {
    const struct CPU_State initial_cpu = {.pc=0x5573, .a=0xa7, .x=0xdb, .y=0x4d, .sp=0x0b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x5573, .value=0x68}, {.addr=0x5574, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x5575, .a=0xa7, .x=0xdb, .y=0x4d, .sp=0x0b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5573, .value=0x68}, {.addr=0x5574, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x5573, .value=0x68, .type=IO_READ},
        {.addr=0x5574, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_039E) {
    const struct CPU_State initial_cpu = {.pc=0xe508, .a=0x1f, .x=0x93, .y=0x71, .sp=0x2a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xe508, .value=0x68}, {.addr=0xe509, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xe50a, .a=0x1f, .x=0x93, .y=0x71, .sp=0x2a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe508, .value=0x68}, {.addr=0xe509, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0xe508, .value=0x68, .type=IO_READ},
        {.addr=0xe509, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_039F) {
    const struct CPU_State initial_cpu = {.pc=0x6270, .a=0x60, .x=0xf5, .y=0xe9, .sp=0x67, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6270, .value=0x68}, {.addr=0x6271, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x6272, .a=0x60, .x=0xf5, .y=0xe9, .sp=0x67, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x6270, .value=0x68}, {.addr=0x6271, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x6270, .value=0x68, .type=IO_READ},
        {.addr=0x6271, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xc020, .a=0x7a, .x=0xa7, .y=0xe0, .sp=0x13, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc020, .value=0x68}, {.addr=0xc021, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xc022, .a=0x7a, .x=0xa7, .y=0xe0, .sp=0x13, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc020, .value=0x68}, {.addr=0xc021, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xc020, .value=0x68, .type=IO_READ},
        {.addr=0xc021, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xe283, .a=0x92, .x=0x5b, .y=0x8d, .sp=0xc3, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xe283, .value=0x68}, {.addr=0xe284, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe285, .a=0x92, .x=0x5b, .y=0x8d, .sp=0xc3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe283, .value=0x68}, {.addr=0xe284, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe283, .value=0x68, .type=IO_READ},
        {.addr=0xe284, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x91e4, .a=0x7c, .x=0x40, .y=0x6f, .sp=0x9e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x91e4, .value=0x68}, {.addr=0x91e5, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x91e6, .a=0x7c, .x=0x40, .y=0x6f, .sp=0x9e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x91e4, .value=0x68}, {.addr=0x91e5, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x91e4, .value=0x68, .type=IO_READ},
        {.addr=0x91e5, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xe33d, .a=0xae, .x=0x7a, .y=0x44, .sp=0xd0, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xe33d, .value=0x68}, {.addr=0xe33e, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xe33f, .a=0xae, .x=0x7a, .y=0x44, .sp=0xd0, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe33d, .value=0x68}, {.addr=0xe33e, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xe33d, .value=0x68, .type=IO_READ},
        {.addr=0xe33e, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xdbb1, .a=0x25, .x=0xad, .y=0x84, .sp=0x8e, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xdbb1, .value=0x68}, {.addr=0xdbb2, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xdbb3, .a=0x25, .x=0xad, .y=0x84, .sp=0x8e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xdbb1, .value=0x68}, {.addr=0xdbb2, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xdbb1, .value=0x68, .type=IO_READ},
        {.addr=0xdbb2, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xaf56, .a=0x05, .x=0xc0, .y=0xe5, .sp=0x3c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xaf56, .value=0x68}, {.addr=0xaf57, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xaf58, .a=0x05, .x=0xc0, .y=0xe5, .sp=0x3c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xaf56, .value=0x68}, {.addr=0xaf57, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xaf56, .value=0x68, .type=IO_READ},
        {.addr=0xaf57, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xe763, .a=0x8a, .x=0xec, .y=0x8c, .sp=0x3b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xe763, .value=0x68}, {.addr=0xe764, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xe765, .a=0x8a, .x=0xec, .y=0x8c, .sp=0x3b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe763, .value=0x68}, {.addr=0xe764, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xe763, .value=0x68, .type=IO_READ},
        {.addr=0xe764, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xf19b, .a=0x12, .x=0xa5, .y=0x02, .sp=0xe2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xf19b, .value=0x68}, {.addr=0xf19c, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf19d, .a=0x12, .x=0xa5, .y=0x02, .sp=0xe2, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf19b, .value=0x68}, {.addr=0xf19c, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf19b, .value=0x68, .type=IO_READ},
        {.addr=0xf19c, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x91c7, .a=0xa6, .x=0x02, .y=0x89, .sp=0x80, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x91c7, .value=0x68}, {.addr=0x91c8, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x91c9, .a=0xa6, .x=0x02, .y=0x89, .sp=0x80, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x91c7, .value=0x68}, {.addr=0x91c8, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x91c7, .value=0x68, .type=IO_READ},
        {.addr=0x91c8, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x275f, .a=0x01, .x=0x02, .y=0x23, .sp=0xff, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x275f, .value=0x68}, {.addr=0x2760, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x2761, .a=0x01, .x=0x02, .y=0x23, .sp=0xff, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x275f, .value=0x68}, {.addr=0x2760, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x275f, .value=0x68, .type=IO_READ},
        {.addr=0x2760, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x1e24, .a=0x1d, .x=0x10, .y=0xb7, .sp=0x93, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1e24, .value=0x68}, {.addr=0x1e25, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x1e26, .a=0x1d, .x=0x10, .y=0xb7, .sp=0x93, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1e24, .value=0x68}, {.addr=0x1e25, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x1e24, .value=0x68, .type=IO_READ},
        {.addr=0x1e25, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x9830, .a=0xd2, .x=0x67, .y=0xcb, .sp=0x74, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x9830, .value=0x68}, {.addr=0x9831, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x9832, .a=0xd2, .x=0x67, .y=0xcb, .sp=0x74, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9830, .value=0x68}, {.addr=0x9831, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x9830, .value=0x68, .type=IO_READ},
        {.addr=0x9831, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xaeea, .a=0xa9, .x=0xef, .y=0xbd, .sp=0xbf, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xaeea, .value=0x68}, {.addr=0xaeeb, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xaeec, .a=0xa9, .x=0xef, .y=0xbd, .sp=0xbf, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xaeea, .value=0x68}, {.addr=0xaeeb, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xaeea, .value=0x68, .type=IO_READ},
        {.addr=0xaeeb, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x275a, .a=0xe0, .x=0xea, .y=0xbb, .sp=0xec, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x275a, .value=0x68}, {.addr=0x275b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x275c, .a=0xe0, .x=0xea, .y=0xbb, .sp=0xec, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x275a, .value=0x68}, {.addr=0x275b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x275a, .value=0x68, .type=IO_READ},
        {.addr=0x275b, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xe412, .a=0x5e, .x=0x77, .y=0x0d, .sp=0xdb, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe412, .value=0x68}, {.addr=0xe413, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xe414, .a=0x5e, .x=0x77, .y=0x0d, .sp=0xdb, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe412, .value=0x68}, {.addr=0xe413, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xe412, .value=0x68, .type=IO_READ},
        {.addr=0xe413, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x89ec, .a=0xe9, .x=0x51, .y=0x5a, .sp=0x96, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x89ec, .value=0x68}, {.addr=0x89ed, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x89ee, .a=0xe9, .x=0x51, .y=0x5a, .sp=0x96, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x89ec, .value=0x68}, {.addr=0x89ed, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x89ec, .value=0x68, .type=IO_READ},
        {.addr=0x89ed, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xc5fb, .a=0x5d, .x=0x52, .y=0x50, .sp=0x1f, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xc5fb, .value=0x68}, {.addr=0xc5fc, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xc5fd, .a=0x5d, .x=0x52, .y=0x50, .sp=0x1f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc5fb, .value=0x68}, {.addr=0xc5fc, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xc5fb, .value=0x68, .type=IO_READ},
        {.addr=0xc5fc, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x303b, .a=0x8f, .x=0xfc, .y=0x0e, .sp=0x7a, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x303b, .value=0x68}, {.addr=0x303c, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x303d, .a=0x8f, .x=0xfc, .y=0x0e, .sp=0x7a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x303b, .value=0x68}, {.addr=0x303c, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x303b, .value=0x68, .type=IO_READ},
        {.addr=0x303c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x2f0e, .a=0xb0, .x=0x82, .y=0x02, .sp=0x72, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x2f0e, .value=0x68}, {.addr=0x2f0f, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x2f10, .a=0xb0, .x=0x82, .y=0x02, .sp=0x72, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2f0e, .value=0x68}, {.addr=0x2f0f, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x2f0e, .value=0x68, .type=IO_READ},
        {.addr=0x2f0f, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x8af6, .a=0xea, .x=0xd7, .y=0x02, .sp=0x63, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x8af6, .value=0x68}, {.addr=0x8af7, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x8af8, .a=0xea, .x=0xd7, .y=0x02, .sp=0x63, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x8af6, .value=0x68}, {.addr=0x8af7, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x8af6, .value=0x68, .type=IO_READ},
        {.addr=0x8af7, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x30b6, .a=0xa8, .x=0xe0, .y=0x7e, .sp=0x2c, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x30b6, .value=0x68}, {.addr=0x30b7, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x30b8, .a=0xa8, .x=0xe0, .y=0x7e, .sp=0x2c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x30b6, .value=0x68}, {.addr=0x30b7, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x30b6, .value=0x68, .type=IO_READ},
        {.addr=0x30b7, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x4d0b, .a=0x81, .x=0x14, .y=0xe7, .sp=0xb8, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x4d0b, .value=0x68}, {.addr=0x4d0c, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x4d0d, .a=0x81, .x=0x14, .y=0xe7, .sp=0xb8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4d0b, .value=0x68}, {.addr=0x4d0c, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x4d0b, .value=0x68, .type=IO_READ},
        {.addr=0x4d0c, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x03e8, .a=0x9e, .x=0xa9, .y=0x80, .sp=0xa9, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x03e8, .value=0x68}, {.addr=0x03e9, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x03ea, .a=0x9e, .x=0xa9, .y=0x80, .sp=0xa9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x03e8, .value=0x68}, {.addr=0x03e9, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x03e8, .value=0x68, .type=IO_READ},
        {.addr=0x03e9, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x7e7c, .a=0xc7, .x=0x26, .y=0xeb, .sp=0x5f, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x7e7c, .value=0x68}, {.addr=0x7e7d, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x7e7e, .a=0xc7, .x=0x26, .y=0xeb, .sp=0x5f, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x7e7c, .value=0x68}, {.addr=0x7e7d, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x7e7c, .value=0x68, .type=IO_READ},
        {.addr=0x7e7d, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x4e85, .a=0xbd, .x=0x43, .y=0x23, .sp=0x3e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x4e85, .value=0x68}, {.addr=0x4e86, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x4e87, .a=0xbd, .x=0x43, .y=0x23, .sp=0x3e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x4e85, .value=0x68}, {.addr=0x4e86, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x4e85, .value=0x68, .type=IO_READ},
        {.addr=0x4e86, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xa434, .a=0xb2, .x=0x75, .y=0x50, .sp=0x96, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xa434, .value=0x68}, {.addr=0xa435, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xa436, .a=0xb2, .x=0x75, .y=0x50, .sp=0x96, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa434, .value=0x68}, {.addr=0xa435, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xa434, .value=0x68, .type=IO_READ},
        {.addr=0xa435, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x3b80, .a=0xb3, .x=0xbf, .y=0x57, .sp=0x0c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x3b80, .value=0x68}, {.addr=0x3b81, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x3b82, .a=0xb3, .x=0xbf, .y=0x57, .sp=0x0c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3b80, .value=0x68}, {.addr=0x3b81, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x3b80, .value=0x68, .type=IO_READ},
        {.addr=0x3b81, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x89a0, .a=0xd0, .x=0x84, .y=0xd9, .sp=0x25, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x89a0, .value=0x68}, {.addr=0x89a1, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x89a2, .a=0xd0, .x=0x84, .y=0xd9, .sp=0x25, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x89a0, .value=0x68}, {.addr=0x89a1, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x89a0, .value=0x68, .type=IO_READ},
        {.addr=0x89a1, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x390f, .a=0x5c, .x=0x87, .y=0xde, .sp=0x99, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x390f, .value=0x68}, {.addr=0x3910, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3911, .a=0x5c, .x=0x87, .y=0xde, .sp=0x99, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x390f, .value=0x68}, {.addr=0x3910, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x390f, .value=0x68, .type=IO_READ},
        {.addr=0x3910, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x750f, .a=0xd1, .x=0x32, .y=0xf7, .sp=0x82, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x750f, .value=0x68}, {.addr=0x7510, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x7511, .a=0xd1, .x=0x32, .y=0xf7, .sp=0x82, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x750f, .value=0x68}, {.addr=0x7510, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x750f, .value=0x68, .type=IO_READ},
        {.addr=0x7510, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x2dfe, .a=0x3e, .x=0x93, .y=0xf1, .sp=0x1e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2dfe, .value=0x68}, {.addr=0x2dff, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x2e00, .a=0x3e, .x=0x93, .y=0xf1, .sp=0x1e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x2dfe, .value=0x68}, {.addr=0x2dff, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x2dfe, .value=0x68, .type=IO_READ},
        {.addr=0x2dff, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x3cce, .a=0x41, .x=0xcd, .y=0x61, .sp=0xa0, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x3cce, .value=0x68}, {.addr=0x3ccf, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x3cd0, .a=0x41, .x=0xcd, .y=0x61, .sp=0xa0, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3cce, .value=0x68}, {.addr=0x3ccf, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x3cce, .value=0x68, .type=IO_READ},
        {.addr=0x3ccf, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x2471, .a=0xf3, .x=0xe2, .y=0xeb, .sp=0x3f, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x2471, .value=0x68}, {.addr=0x2472, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x2473, .a=0xf3, .x=0xe2, .y=0xeb, .sp=0x3f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2471, .value=0x68}, {.addr=0x2472, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x2471, .value=0x68, .type=IO_READ},
        {.addr=0x2472, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x31df, .a=0x55, .x=0x8f, .y=0xb8, .sp=0x07, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x31df, .value=0x68}, {.addr=0x31e0, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x31e1, .a=0x55, .x=0x8f, .y=0xb8, .sp=0x07, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x31df, .value=0x68}, {.addr=0x31e0, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x31df, .value=0x68, .type=IO_READ},
        {.addr=0x31e0, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x8ec0, .a=0x5c, .x=0xce, .y=0x05, .sp=0x52, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x8ec0, .value=0x68}, {.addr=0x8ec1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8ec2, .a=0x5c, .x=0xce, .y=0x05, .sp=0x52, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8ec0, .value=0x68}, {.addr=0x8ec1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8ec0, .value=0x68, .type=IO_READ},
        {.addr=0x8ec1, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x36a7, .a=0x08, .x=0x58, .y=0xc0, .sp=0xd5, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x36a7, .value=0x68}, {.addr=0x36a8, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x36a9, .a=0x08, .x=0x58, .y=0xc0, .sp=0xd5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x36a7, .value=0x68}, {.addr=0x36a8, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x36a7, .value=0x68, .type=IO_READ},
        {.addr=0x36a8, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xef46, .a=0xbe, .x=0x05, .y=0xa0, .sp=0x96, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xef46, .value=0x68}, {.addr=0xef47, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xef48, .a=0xbe, .x=0x05, .y=0xa0, .sp=0x96, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xef46, .value=0x68}, {.addr=0xef47, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xef46, .value=0x68, .type=IO_READ},
        {.addr=0xef47, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xa174, .a=0x66, .x=0xd0, .y=0x35, .sp=0xf7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa174, .value=0x68}, {.addr=0xa175, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xa176, .a=0x66, .x=0xd0, .y=0x35, .sp=0xf7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa174, .value=0x68}, {.addr=0xa175, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xa174, .value=0x68, .type=IO_READ},
        {.addr=0xa175, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x7b4b, .a=0xac, .x=0xf1, .y=0x9f, .sp=0x97, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7b4b, .value=0x68}, {.addr=0x7b4c, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x7b4d, .a=0xac, .x=0xf1, .y=0x9f, .sp=0x97, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x7b4b, .value=0x68}, {.addr=0x7b4c, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x7b4b, .value=0x68, .type=IO_READ},
        {.addr=0x7b4c, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x7dbe, .a=0x07, .x=0x76, .y=0xa5, .sp=0x6e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7dbe, .value=0x68}, {.addr=0x7dbf, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x7dc0, .a=0x07, .x=0x76, .y=0xa5, .sp=0x6e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7dbe, .value=0x68}, {.addr=0x7dbf, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x7dbe, .value=0x68, .type=IO_READ},
        {.addr=0x7dbf, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x6fff, .a=0xdb, .x=0xd9, .y=0xc4, .sp=0x4a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6fff, .value=0x68}, {.addr=0x7000, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x7001, .a=0xdb, .x=0xd9, .y=0xc4, .sp=0x4a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6fff, .value=0x68}, {.addr=0x7000, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x6fff, .value=0x68, .type=IO_READ},
        {.addr=0x7000, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x3065, .a=0x79, .x=0x21, .y=0x0c, .sp=0xc0, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x3065, .value=0x68}, {.addr=0x3066, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3067, .a=0x79, .x=0x21, .y=0x0c, .sp=0xc0, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3065, .value=0x68}, {.addr=0x3066, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3065, .value=0x68, .type=IO_READ},
        {.addr=0x3066, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x9b70, .a=0x6e, .x=0x3a, .y=0xde, .sp=0xd0, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x9b70, .value=0x68}, {.addr=0x9b71, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x9b72, .a=0x6e, .x=0x3a, .y=0xde, .sp=0xd0, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x9b70, .value=0x68}, {.addr=0x9b71, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x9b70, .value=0x68, .type=IO_READ},
        {.addr=0x9b71, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xc63c, .a=0x97, .x=0xcd, .y=0x64, .sp=0x69, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xc63c, .value=0x68}, {.addr=0xc63d, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xc63e, .a=0x97, .x=0xcd, .y=0x64, .sp=0x69, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc63c, .value=0x68}, {.addr=0xc63d, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xc63c, .value=0x68, .type=IO_READ},
        {.addr=0xc63d, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xafed, .a=0x60, .x=0x60, .y=0x8f, .sp=0x13, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xafed, .value=0x68}, {.addr=0xafee, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xafef, .a=0x60, .x=0x60, .y=0x8f, .sp=0x13, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xafed, .value=0x68}, {.addr=0xafee, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xafed, .value=0x68, .type=IO_READ},
        {.addr=0xafee, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x3cee, .a=0xff, .x=0x27, .y=0x20, .sp=0x37, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x3cee, .value=0x68}, {.addr=0x3cef, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x3cf0, .a=0xff, .x=0x27, .y=0x20, .sp=0x37, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x3cee, .value=0x68}, {.addr=0x3cef, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x3cee, .value=0x68, .type=IO_READ},
        {.addr=0x3cef, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x0177, .a=0x11, .x=0xcc, .y=0x70, .sp=0xfa, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x68}, {.addr=0x0178, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x0179, .a=0x11, .x=0xcc, .y=0x70, .sp=0xfa, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x68}, {.addr=0x0178, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x0177, .value=0x68, .type=IO_READ},
        {.addr=0x0178, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xacc3, .a=0x52, .x=0x4f, .y=0x05, .sp=0x9b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xacc3, .value=0x68}, {.addr=0xacc4, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xacc5, .a=0x52, .x=0x4f, .y=0x05, .sp=0x9b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xacc3, .value=0x68}, {.addr=0xacc4, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xacc3, .value=0x68, .type=IO_READ},
        {.addr=0xacc4, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x168f, .a=0xda, .x=0xd2, .y=0x8e, .sp=0x09, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x168f, .value=0x68}, {.addr=0x1690, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x1691, .a=0xda, .x=0xd2, .y=0x8e, .sp=0x09, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x168f, .value=0x68}, {.addr=0x1690, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x168f, .value=0x68, .type=IO_READ},
        {.addr=0x1690, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x49a2, .a=0x90, .x=0x9d, .y=0x0c, .sp=0x08, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x49a2, .value=0x68}, {.addr=0x49a3, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x49a4, .a=0x90, .x=0x9d, .y=0x0c, .sp=0x08, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x49a2, .value=0x68}, {.addr=0x49a3, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x49a2, .value=0x68, .type=IO_READ},
        {.addr=0x49a3, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x51c4, .a=0x6f, .x=0x57, .y=0x6b, .sp=0x38, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x51c4, .value=0x68}, {.addr=0x51c5, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x51c6, .a=0x6f, .x=0x57, .y=0x6b, .sp=0x38, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x51c4, .value=0x68}, {.addr=0x51c5, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x51c4, .value=0x68, .type=IO_READ},
        {.addr=0x51c5, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x323a, .a=0xe6, .x=0xaa, .y=0x8e, .sp=0x9a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x323a, .value=0x68}, {.addr=0x323b, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x323c, .a=0xe6, .x=0xaa, .y=0x8e, .sp=0x9a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x323a, .value=0x68}, {.addr=0x323b, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x323a, .value=0x68, .type=IO_READ},
        {.addr=0x323b, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xcca1, .a=0x73, .x=0xdd, .y=0xc1, .sp=0x73, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xcca1, .value=0x68}, {.addr=0xcca2, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xcca3, .a=0x73, .x=0xdd, .y=0xc1, .sp=0x73, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xcca1, .value=0x68}, {.addr=0xcca2, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xcca1, .value=0x68, .type=IO_READ},
        {.addr=0xcca2, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xd5d8, .a=0xa4, .x=0x62, .y=0x5c, .sp=0x2a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd5d8, .value=0x68}, {.addr=0xd5d9, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xd5da, .a=0xa4, .x=0x62, .y=0x5c, .sp=0x2a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xd5d8, .value=0x68}, {.addr=0xd5d9, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xd5d8, .value=0x68, .type=IO_READ},
        {.addr=0xd5d9, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x3b0a, .a=0xad, .x=0x2e, .y=0xb8, .sp=0x7b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x3b0a, .value=0x68}, {.addr=0x3b0b, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x3b0c, .a=0xad, .x=0x2e, .y=0xb8, .sp=0x7b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3b0a, .value=0x68}, {.addr=0x3b0b, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x3b0a, .value=0x68, .type=IO_READ},
        {.addr=0x3b0b, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x804c, .a=0xc6, .x=0xfd, .y=0xf5, .sp=0xff, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x804c, .value=0x68}, {.addr=0x804d, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x804e, .a=0xc6, .x=0xfd, .y=0xf5, .sp=0xff, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x804c, .value=0x68}, {.addr=0x804d, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x804c, .value=0x68, .type=IO_READ},
        {.addr=0x804d, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x43cc, .a=0xa1, .x=0xa2, .y=0xc0, .sp=0xa2, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x43cc, .value=0x68}, {.addr=0x43cd, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x43ce, .a=0xa1, .x=0xa2, .y=0xc0, .sp=0xa2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x43cc, .value=0x68}, {.addr=0x43cd, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x43cc, .value=0x68, .type=IO_READ},
        {.addr=0x43cd, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x3207, .a=0x9b, .x=0x0c, .y=0x4c, .sp=0x40, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x3207, .value=0x68}, {.addr=0x3208, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x3209, .a=0x9b, .x=0x0c, .y=0x4c, .sp=0x40, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3207, .value=0x68}, {.addr=0x3208, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x3207, .value=0x68, .type=IO_READ},
        {.addr=0x3208, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xf10d, .a=0x0c, .x=0xa8, .y=0x5d, .sp=0x65, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xf10d, .value=0x68}, {.addr=0xf10e, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xf10f, .a=0x0c, .x=0xa8, .y=0x5d, .sp=0x65, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf10d, .value=0x68}, {.addr=0xf10e, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xf10d, .value=0x68, .type=IO_READ},
        {.addr=0xf10e, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x5352, .a=0xfd, .x=0x5d, .y=0x0f, .sp=0xcb, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x5352, .value=0x68}, {.addr=0x5353, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x5354, .a=0xfd, .x=0x5d, .y=0x0f, .sp=0xcb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5352, .value=0x68}, {.addr=0x5353, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x5352, .value=0x68, .type=IO_READ},
        {.addr=0x5353, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x1baf, .a=0xff, .x=0x9c, .y=0xa7, .sp=0xa3, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1baf, .value=0x68}, {.addr=0x1bb0, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1bb1, .a=0xff, .x=0x9c, .y=0xa7, .sp=0xa3, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1baf, .value=0x68}, {.addr=0x1bb0, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1baf, .value=0x68, .type=IO_READ},
        {.addr=0x1bb0, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xaa69, .a=0x3c, .x=0x71, .y=0xd2, .sp=0x5f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xaa69, .value=0x68}, {.addr=0xaa6a, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xaa6b, .a=0x3c, .x=0x71, .y=0xd2, .sp=0x5f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xaa69, .value=0x68}, {.addr=0xaa6a, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xaa69, .value=0x68, .type=IO_READ},
        {.addr=0xaa6a, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x8d30, .a=0xc6, .x=0xb7, .y=0xc5, .sp=0xb5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x8d30, .value=0x68}, {.addr=0x8d31, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8d32, .a=0xc6, .x=0xb7, .y=0xc5, .sp=0xb5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8d30, .value=0x68}, {.addr=0x8d31, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8d30, .value=0x68, .type=IO_READ},
        {.addr=0x8d31, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xd014, .a=0x1f, .x=0x67, .y=0xa6, .sp=0xbd, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd014, .value=0x68}, {.addr=0xd015, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xd016, .a=0x1f, .x=0x67, .y=0xa6, .sp=0xbd, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xd014, .value=0x68}, {.addr=0xd015, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xd014, .value=0x68, .type=IO_READ},
        {.addr=0xd015, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xbf6b, .a=0x34, .x=0x4f, .y=0x11, .sp=0x13, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xbf6b, .value=0x68}, {.addr=0xbf6c, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xbf6d, .a=0x34, .x=0x4f, .y=0x11, .sp=0x13, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xbf6b, .value=0x68}, {.addr=0xbf6c, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xbf6b, .value=0x68, .type=IO_READ},
        {.addr=0xbf6c, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x11b9, .a=0x3e, .x=0xdd, .y=0x5a, .sp=0x7b, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x11b9, .value=0x68}, {.addr=0x11ba, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x11bb, .a=0x3e, .x=0xdd, .y=0x5a, .sp=0x7b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x11b9, .value=0x68}, {.addr=0x11ba, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x11b9, .value=0x68, .type=IO_READ},
        {.addr=0x11ba, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xdf2b, .a=0x9e, .x=0x52, .y=0x07, .sp=0x36, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xdf2b, .value=0x68}, {.addr=0xdf2c, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xdf2d, .a=0x9e, .x=0x52, .y=0x07, .sp=0x36, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xdf2b, .value=0x68}, {.addr=0xdf2c, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xdf2b, .value=0x68, .type=IO_READ},
        {.addr=0xdf2c, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xef76, .a=0x9c, .x=0x6c, .y=0xe3, .sp=0x29, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xef76, .value=0x68}, {.addr=0xef77, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xef78, .a=0x9c, .x=0x6c, .y=0xe3, .sp=0x29, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xef76, .value=0x68}, {.addr=0xef77, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xef76, .value=0x68, .type=IO_READ},
        {.addr=0xef77, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x754b, .a=0x3b, .x=0x76, .y=0x07, .sp=0x88, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x754b, .value=0x68}, {.addr=0x754c, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x754d, .a=0x3b, .x=0x76, .y=0x07, .sp=0x88, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x754b, .value=0x68}, {.addr=0x754c, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x754b, .value=0x68, .type=IO_READ},
        {.addr=0x754c, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xf97d, .a=0x73, .x=0x1f, .y=0xc4, .sp=0xb1, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xf97d, .value=0x68}, {.addr=0xf97e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf97f, .a=0x73, .x=0x1f, .y=0xc4, .sp=0xb1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf97d, .value=0x68}, {.addr=0xf97e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf97d, .value=0x68, .type=IO_READ},
        {.addr=0xf97e, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x5734, .a=0x9b, .x=0x89, .y=0x6d, .sp=0x47, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x5734, .value=0x68}, {.addr=0x5735, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x5736, .a=0x9b, .x=0x89, .y=0x6d, .sp=0x47, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5734, .value=0x68}, {.addr=0x5735, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x5734, .value=0x68, .type=IO_READ},
        {.addr=0x5735, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_68, _68_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x89e9, .a=0x3c, .x=0x1e, .y=0x8c, .sp=0xe2, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x89e9, .value=0x68}, {.addr=0x89ea, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x89eb, .a=0x3c, .x=0x1e, .y=0x8c, .sp=0xe2, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x89e9, .value=0x68}, {.addr=0x89ea, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x89e9, .value=0x68, .type=IO_READ},
        {.addr=0x89ea, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("68 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
