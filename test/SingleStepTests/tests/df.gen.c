#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_DF, _DF_0000) {
    const struct CPU_State initial_cpu = {.pc=0x239d, .a=0x34, .x=0xc1, .y=0xa9, .sp=0xe3, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x239d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x239e, .a=0x94, .x=0xc1, .y=0xa9, .sp=0xe3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x239d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x239d, .value=0xdf, .type=IO_READ},
        {.addr=0x239e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0001) {
    const struct CPU_State initial_cpu = {.pc=0xaecb, .a=0xeb, .x=0x1b, .y=0xad, .sp=0x91, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xaecb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xaecc, .a=0x51, .x=0x1b, .y=0xad, .sp=0x91, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xaecb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xaecb, .value=0xdf, .type=IO_READ},
        {.addr=0xaecc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0002) {
    const struct CPU_State initial_cpu = {.pc=0xa94e, .a=0x6f, .x=0x80, .y=0x5b, .sp=0x9b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xa94e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa94f, .a=0xd5, .x=0x80, .y=0x5b, .sp=0x9b, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa94e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa94e, .value=0xdf, .type=IO_READ},
        {.addr=0xa94f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0003) {
    const struct CPU_State initial_cpu = {.pc=0x84ab, .a=0x9a, .x=0xd2, .y=0x58, .sp=0xc7, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x84ab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x84ac, .a=0x00, .x=0xd2, .y=0x58, .sp=0xc7, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x84ab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x84ab, .value=0xdf, .type=IO_READ},
        {.addr=0x84ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0004) {
    const struct CPU_State initial_cpu = {.pc=0x1435, .a=0x56, .x=0x9e, .y=0x76, .sp=0x94, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x1435, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1436, .a=0xbc, .x=0x9e, .y=0x76, .sp=0x94, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x1435, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1435, .value=0xdf, .type=IO_READ},
        {.addr=0x1436, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0005) {
    const struct CPU_State initial_cpu = {.pc=0xb439, .a=0xb8, .x=0x17, .y=0xdd, .sp=0x64, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xb439, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb43a, .a=0x18, .x=0x17, .y=0xdd, .sp=0x64, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb439, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb439, .value=0xdf, .type=IO_READ},
        {.addr=0xb43a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0006) {
    const struct CPU_State initial_cpu = {.pc=0xccd3, .a=0x6b, .x=0xe5, .y=0xc3, .sp=0xc1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xccd3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xccd4, .a=0xd1, .x=0xe5, .y=0xc3, .sp=0xc1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xccd3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xccd3, .value=0xdf, .type=IO_READ},
        {.addr=0xccd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0007) {
    const struct CPU_State initial_cpu = {.pc=0xe4d1, .a=0xc9, .x=0xcb, .y=0x25, .sp=0x5b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe4d1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe4d2, .a=0x29, .x=0xcb, .y=0x25, .sp=0x5b, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe4d1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe4d1, .value=0xdf, .type=IO_READ},
        {.addr=0xe4d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0008) {
    const struct CPU_State initial_cpu = {.pc=0x2fe9, .a=0xfa, .x=0xa0, .y=0xed, .sp=0x80, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x2fe9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2fea, .a=0x60, .x=0xa0, .y=0xed, .sp=0x80, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2fe9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2fe9, .value=0xdf, .type=IO_READ},
        {.addr=0x2fea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0009) {
    const struct CPU_State initial_cpu = {.pc=0x69e1, .a=0x80, .x=0x53, .y=0xad, .sp=0xd2, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x69e1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x69e2, .a=0xe0, .x=0x53, .y=0xad, .sp=0xd2, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x69e1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x69e1, .value=0xdf, .type=IO_READ},
        {.addr=0x69e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_000A) {
    const struct CPU_State initial_cpu = {.pc=0x822e, .a=0x61, .x=0x07, .y=0x57, .sp=0x71, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x822e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x822f, .a=0x61, .x=0x07, .y=0x57, .sp=0x71, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x822e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x822e, .value=0xdf, .type=IO_READ},
        {.addr=0x822f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_000B) {
    const struct CPU_State initial_cpu = {.pc=0xabed, .a=0xba, .x=0xf3, .y=0x70, .sp=0xa8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xabed, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xabee, .a=0x20, .x=0xf3, .y=0x70, .sp=0xa8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xabed, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xabed, .value=0xdf, .type=IO_READ},
        {.addr=0xabee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_000C) {
    const struct CPU_State initial_cpu = {.pc=0x4615, .a=0x29, .x=0x3b, .y=0xd1, .sp=0x2f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x4615, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4616, .a=0x8f, .x=0x3b, .y=0xd1, .sp=0x2f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4615, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4615, .value=0xdf, .type=IO_READ},
        {.addr=0x4616, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_000D) {
    const struct CPU_State initial_cpu = {.pc=0x352d, .a=0xc6, .x=0x97, .y=0xbf, .sp=0xa0, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x352d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x352e, .a=0x2c, .x=0x97, .y=0xbf, .sp=0xa0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x352d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x352d, .value=0xdf, .type=IO_READ},
        {.addr=0x352e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_000E) {
    const struct CPU_State initial_cpu = {.pc=0xbde9, .a=0x86, .x=0xa4, .y=0x48, .sp=0x29, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xbde9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbdea, .a=0xe6, .x=0xa4, .y=0x48, .sp=0x29, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xbde9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbde9, .value=0xdf, .type=IO_READ},
        {.addr=0xbdea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_000F) {
    const struct CPU_State initial_cpu = {.pc=0x0b65, .a=0xc1, .x=0x3d, .y=0x64, .sp=0x9a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0b65, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0b66, .a=0x21, .x=0x3d, .y=0x64, .sp=0x9a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0b65, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0b65, .value=0xdf, .type=IO_READ},
        {.addr=0x0b66, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0010) {
    const struct CPU_State initial_cpu = {.pc=0xf342, .a=0xa1, .x=0x22, .y=0x27, .sp=0x10, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xf342, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf343, .a=0x07, .x=0x22, .y=0x27, .sp=0x10, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf342, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf342, .value=0xdf, .type=IO_READ},
        {.addr=0xf343, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0011) {
    const struct CPU_State initial_cpu = {.pc=0x2a40, .a=0x57, .x=0x45, .y=0x6f, .sp=0x90, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2a40, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2a41, .a=0x57, .x=0x45, .y=0x6f, .sp=0x90, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2a40, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2a40, .value=0xdf, .type=IO_READ},
        {.addr=0x2a41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0012) {
    const struct CPU_State initial_cpu = {.pc=0xe544, .a=0x4b, .x=0x64, .y=0x1c, .sp=0xc6, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xe544, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe545, .a=0xb1, .x=0x64, .y=0x1c, .sp=0xc6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xe544, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe544, .value=0xdf, .type=IO_READ},
        {.addr=0xe545, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0013) {
    const struct CPU_State initial_cpu = {.pc=0xfd9a, .a=0xa8, .x=0x8c, .y=0xa2, .sp=0xc3, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xfd9a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfd9b, .a=0x08, .x=0x8c, .y=0xa2, .sp=0xc3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfd9a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfd9a, .value=0xdf, .type=IO_READ},
        {.addr=0xfd9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0014) {
    const struct CPU_State initial_cpu = {.pc=0x8e75, .a=0xb3, .x=0x6b, .y=0x47, .sp=0x39, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x8e75, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8e76, .a=0x19, .x=0x6b, .y=0x47, .sp=0x39, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8e75, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8e75, .value=0xdf, .type=IO_READ},
        {.addr=0x8e76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0015) {
    const struct CPU_State initial_cpu = {.pc=0x8aab, .a=0xf2, .x=0x14, .y=0xaa, .sp=0x7a, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x8aab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8aac, .a=0x52, .x=0x14, .y=0xaa, .sp=0x7a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8aab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8aab, .value=0xdf, .type=IO_READ},
        {.addr=0x8aac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0016) {
    const struct CPU_State initial_cpu = {.pc=0x76b1, .a=0x71, .x=0x69, .y=0x93, .sp=0x0e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x76b1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x76b2, .a=0x71, .x=0x69, .y=0x93, .sp=0x0e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x76b1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x76b1, .value=0xdf, .type=IO_READ},
        {.addr=0x76b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0017) {
    const struct CPU_State initial_cpu = {.pc=0xed7c, .a=0x6b, .x=0x40, .y=0x8f, .sp=0xf2, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xed7c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xed7d, .a=0xd1, .x=0x40, .y=0x8f, .sp=0xf2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xed7c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xed7c, .value=0xdf, .type=IO_READ},
        {.addr=0xed7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0018) {
    const struct CPU_State initial_cpu = {.pc=0x8eff, .a=0xff, .x=0xd0, .y=0xc0, .sp=0x90, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8eff, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8f00, .a=0x65, .x=0xd0, .y=0xc0, .sp=0x90, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8eff, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8eff, .value=0xdf, .type=IO_READ},
        {.addr=0x8f00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0019) {
    const struct CPU_State initial_cpu = {.pc=0x79c6, .a=0xf0, .x=0xe7, .y=0x82, .sp=0x47, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x79c6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x79c7, .a=0x56, .x=0xe7, .y=0x82, .sp=0x47, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x79c6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x79c6, .value=0xdf, .type=IO_READ},
        {.addr=0x79c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_001A) {
    const struct CPU_State initial_cpu = {.pc=0xbed4, .a=0x92, .x=0x79, .y=0xf1, .sp=0x0c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xbed4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbed5, .a=0xf2, .x=0x79, .y=0xf1, .sp=0x0c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xbed4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbed4, .value=0xdf, .type=IO_READ},
        {.addr=0xbed5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_001B) {
    const struct CPU_State initial_cpu = {.pc=0x6e25, .a=0xd7, .x=0xd5, .y=0x5c, .sp=0xe2, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x6e25, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6e26, .a=0x37, .x=0xd5, .y=0x5c, .sp=0xe2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6e25, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6e25, .value=0xdf, .type=IO_READ},
        {.addr=0x6e26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_001C) {
    const struct CPU_State initial_cpu = {.pc=0x39d2, .a=0x37, .x=0x8f, .y=0x45, .sp=0x1c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x39d2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x39d3, .a=0x3d, .x=0x8f, .y=0x45, .sp=0x1c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x39d2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x39d2, .value=0xdf, .type=IO_READ},
        {.addr=0x39d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_001D) {
    const struct CPU_State initial_cpu = {.pc=0x04de, .a=0xf9, .x=0x49, .y=0x7a, .sp=0x77, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x04de, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x04df, .a=0x5f, .x=0x49, .y=0x7a, .sp=0x77, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x04de, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x04de, .value=0xdf, .type=IO_READ},
        {.addr=0x04df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_001E) {
    const struct CPU_State initial_cpu = {.pc=0x487a, .a=0xf1, .x=0xeb, .y=0x7d, .sp=0x70, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x487a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x487b, .a=0x51, .x=0xeb, .y=0x7d, .sp=0x70, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x487a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x487a, .value=0xdf, .type=IO_READ},
        {.addr=0x487b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_001F) {
    const struct CPU_State initial_cpu = {.pc=0xd099, .a=0x6b, .x=0x95, .y=0x02, .sp=0xe2, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xd099, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd09a, .a=0x71, .x=0x95, .y=0x02, .sp=0xe2, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xd099, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd099, .value=0xdf, .type=IO_READ},
        {.addr=0xd09a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0020) {
    const struct CPU_State initial_cpu = {.pc=0x929b, .a=0xd6, .x=0x61, .y=0x13, .sp=0x4d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x929b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x929c, .a=0x3c, .x=0x61, .y=0x13, .sp=0x4d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x929b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x929b, .value=0xdf, .type=IO_READ},
        {.addr=0x929c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0021) {
    const struct CPU_State initial_cpu = {.pc=0x36ed, .a=0xd8, .x=0x3d, .y=0xa8, .sp=0xc3, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x36ed, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x36ee, .a=0x3e, .x=0x3d, .y=0xa8, .sp=0xc3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x36ed, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x36ed, .value=0xdf, .type=IO_READ},
        {.addr=0x36ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0022) {
    const struct CPU_State initial_cpu = {.pc=0x3c55, .a=0x99, .x=0x5f, .y=0x59, .sp=0x41, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x3c55, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3c56, .a=0xff, .x=0x5f, .y=0x59, .sp=0x41, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3c55, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3c55, .value=0xdf, .type=IO_READ},
        {.addr=0x3c56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0023) {
    const struct CPU_State initial_cpu = {.pc=0x6998, .a=0xeb, .x=0x2e, .y=0x6f, .sp=0x86, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x6998, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6999, .a=0x51, .x=0x2e, .y=0x6f, .sp=0x86, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x6998, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6998, .value=0xdf, .type=IO_READ},
        {.addr=0x6999, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0024) {
    const struct CPU_State initial_cpu = {.pc=0x2397, .a=0x35, .x=0x7b, .y=0x48, .sp=0x22, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2397, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2398, .a=0x95, .x=0x7b, .y=0x48, .sp=0x22, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2397, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2397, .value=0xdf, .type=IO_READ},
        {.addr=0x2398, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0025) {
    const struct CPU_State initial_cpu = {.pc=0xc42e, .a=0x0e, .x=0xff, .y=0x5d, .sp=0x77, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc42e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc42f, .a=0x14, .x=0xff, .y=0x5d, .sp=0x77, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc42e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc42e, .value=0xdf, .type=IO_READ},
        {.addr=0xc42f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0026) {
    const struct CPU_State initial_cpu = {.pc=0x85cc, .a=0xdc, .x=0x05, .y=0xf0, .sp=0x5c, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x85cc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x85cd, .a=0x42, .x=0x05, .y=0xf0, .sp=0x5c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x85cc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x85cc, .value=0xdf, .type=IO_READ},
        {.addr=0x85cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0027) {
    const struct CPU_State initial_cpu = {.pc=0x8da0, .a=0x1d, .x=0xab, .y=0x78, .sp=0xc1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x8da0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8da1, .a=0x83, .x=0xab, .y=0x78, .sp=0xc1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8da0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8da0, .value=0xdf, .type=IO_READ},
        {.addr=0x8da1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0028) {
    const struct CPU_State initial_cpu = {.pc=0x8646, .a=0x98, .x=0x52, .y=0xe9, .sp=0x52, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x8646, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8647, .a=0x98, .x=0x52, .y=0xe9, .sp=0x52, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8646, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8646, .value=0xdf, .type=IO_READ},
        {.addr=0x8647, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0029) {
    const struct CPU_State initial_cpu = {.pc=0xc6d4, .a=0xfa, .x=0x0a, .y=0xc3, .sp=0x51, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xc6d4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc6d5, .a=0x60, .x=0x0a, .y=0xc3, .sp=0x51, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc6d4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc6d4, .value=0xdf, .type=IO_READ},
        {.addr=0xc6d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_002A) {
    const struct CPU_State initial_cpu = {.pc=0x67e4, .a=0xb2, .x=0x95, .y=0x84, .sp=0x50, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x67e4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x67e5, .a=0x18, .x=0x95, .y=0x84, .sp=0x50, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x67e4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x67e4, .value=0xdf, .type=IO_READ},
        {.addr=0x67e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_002B) {
    const struct CPU_State initial_cpu = {.pc=0xe540, .a=0x50, .x=0x21, .y=0x21, .sp=0xf0, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xe540, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe541, .a=0x50, .x=0x21, .y=0x21, .sp=0xf0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe540, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe540, .value=0xdf, .type=IO_READ},
        {.addr=0xe541, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_002C) {
    const struct CPU_State initial_cpu = {.pc=0x8f51, .a=0x2f, .x=0x1d, .y=0xa7, .sp=0x6d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x8f51, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8f52, .a=0x35, .x=0x1d, .y=0xa7, .sp=0x6d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8f51, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8f51, .value=0xdf, .type=IO_READ},
        {.addr=0x8f52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_002D) {
    const struct CPU_State initial_cpu = {.pc=0x68f1, .a=0x81, .x=0x40, .y=0x79, .sp=0xab, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x68f1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x68f2, .a=0xe7, .x=0x40, .y=0x79, .sp=0xab, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x68f1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x68f1, .value=0xdf, .type=IO_READ},
        {.addr=0x68f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_002E) {
    const struct CPU_State initial_cpu = {.pc=0xd2c5, .a=0x3b, .x=0xa0, .y=0x11, .sp=0x65, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd2c6, .a=0xa1, .x=0xa0, .y=0x11, .sp=0x65, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd2c5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd2c5, .value=0xdf, .type=IO_READ},
        {.addr=0xd2c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_002F) {
    const struct CPU_State initial_cpu = {.pc=0xec47, .a=0x2d, .x=0x68, .y=0x51, .sp=0x08, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xec47, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xec48, .a=0x93, .x=0x68, .y=0x51, .sp=0x08, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xec47, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xec47, .value=0xdf, .type=IO_READ},
        {.addr=0xec48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0030) {
    const struct CPU_State initial_cpu = {.pc=0x80d5, .a=0x0f, .x=0x24, .y=0x23, .sp=0x17, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x80d5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x80d6, .a=0x15, .x=0x24, .y=0x23, .sp=0x17, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x80d5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x80d5, .value=0xdf, .type=IO_READ},
        {.addr=0x80d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0031) {
    const struct CPU_State initial_cpu = {.pc=0xa3d6, .a=0x50, .x=0xe5, .y=0x6c, .sp=0xb2, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa3d7, .a=0xb0, .x=0xe5, .y=0x6c, .sp=0xb2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xa3d6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa3d6, .value=0xdf, .type=IO_READ},
        {.addr=0xa3d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0032) {
    const struct CPU_State initial_cpu = {.pc=0xffff, .a=0xaa, .x=0x95, .y=0xb9, .sp=0x70, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xffff, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0000, .a=0x10, .x=0x95, .y=0xb9, .sp=0x70, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xffff, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xffff, .value=0xdf, .type=IO_READ},
        {.addr=0x0000, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0033) {
    const struct CPU_State initial_cpu = {.pc=0x64d8, .a=0x94, .x=0xfc, .y=0xe7, .sp=0x2d, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x64d8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x64d9, .a=0xf4, .x=0xfc, .y=0xe7, .sp=0x2d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x64d8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x64d8, .value=0xdf, .type=IO_READ},
        {.addr=0x64d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0034) {
    const struct CPU_State initial_cpu = {.pc=0x5688, .a=0xc7, .x=0xc7, .y=0xdb, .sp=0xa7, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x5688, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5689, .a=0x27, .x=0xc7, .y=0xdb, .sp=0xa7, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5688, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5688, .value=0xdf, .type=IO_READ},
        {.addr=0x5689, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0035) {
    const struct CPU_State initial_cpu = {.pc=0xcc42, .a=0xbb, .x=0x5f, .y=0x0d, .sp=0x18, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xcc42, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcc43, .a=0x21, .x=0x5f, .y=0x0d, .sp=0x18, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xcc42, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcc42, .value=0xdf, .type=IO_READ},
        {.addr=0xcc43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0036) {
    const struct CPU_State initial_cpu = {.pc=0x0acf, .a=0x26, .x=0x8c, .y=0x9d, .sp=0xb2, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0acf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0ad0, .a=0x86, .x=0x8c, .y=0x9d, .sp=0xb2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0acf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0acf, .value=0xdf, .type=IO_READ},
        {.addr=0x0ad0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0037) {
    const struct CPU_State initial_cpu = {.pc=0x71dc, .a=0xf9, .x=0xeb, .y=0xe5, .sp=0xb5, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x71dc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x71dd, .a=0x5f, .x=0xeb, .y=0xe5, .sp=0xb5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x71dc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x71dc, .value=0xdf, .type=IO_READ},
        {.addr=0x71dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0038) {
    const struct CPU_State initial_cpu = {.pc=0x3112, .a=0x5a, .x=0xd0, .y=0x19, .sp=0x35, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x3112, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3113, .a=0xc0, .x=0xd0, .y=0x19, .sp=0x35, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3112, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3112, .value=0xdf, .type=IO_READ},
        {.addr=0x3113, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0039) {
    const struct CPU_State initial_cpu = {.pc=0xa6f5, .a=0x71, .x=0xfc, .y=0x08, .sp=0x24, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa6f6, .a=0xd7, .x=0xfc, .y=0x08, .sp=0x24, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xa6f5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa6f5, .value=0xdf, .type=IO_READ},
        {.addr=0xa6f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_003A) {
    const struct CPU_State initial_cpu = {.pc=0x669b, .a=0x8d, .x=0x1a, .y=0xf8, .sp=0x36, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x669b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x669c, .a=0xf3, .x=0x1a, .y=0xf8, .sp=0x36, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x669b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x669b, .value=0xdf, .type=IO_READ},
        {.addr=0x669c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_003B) {
    const struct CPU_State initial_cpu = {.pc=0xe5b2, .a=0x9f, .x=0xab, .y=0x86, .sp=0x74, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe5b2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe5b3, .a=0x05, .x=0xab, .y=0x86, .sp=0x74, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe5b2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe5b2, .value=0xdf, .type=IO_READ},
        {.addr=0xe5b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_003C) {
    const struct CPU_State initial_cpu = {.pc=0x32c5, .a=0x20, .x=0xba, .y=0x30, .sp=0xb2, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x32c5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x32c6, .a=0x86, .x=0xba, .y=0x30, .sp=0xb2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x32c5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x32c5, .value=0xdf, .type=IO_READ},
        {.addr=0x32c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_003D) {
    const struct CPU_State initial_cpu = {.pc=0x596b, .a=0x71, .x=0x51, .y=0xd9, .sp=0xc3, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x596b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x596c, .a=0xd1, .x=0x51, .y=0xd9, .sp=0xc3, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x596b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x596b, .value=0xdf, .type=IO_READ},
        {.addr=0x596c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_003E) {
    const struct CPU_State initial_cpu = {.pc=0xbe22, .a=0x39, .x=0xdd, .y=0x79, .sp=0xea, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xbe22, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbe23, .a=0x9f, .x=0xdd, .y=0x79, .sp=0xea, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xbe22, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbe22, .value=0xdf, .type=IO_READ},
        {.addr=0xbe23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_003F) {
    const struct CPU_State initial_cpu = {.pc=0x9a4a, .a=0x72, .x=0xf8, .y=0x44, .sp=0x3b, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9a4a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9a4b, .a=0xd2, .x=0xf8, .y=0x44, .sp=0x3b, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9a4a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9a4a, .value=0xdf, .type=IO_READ},
        {.addr=0x9a4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0040) {
    const struct CPU_State initial_cpu = {.pc=0x59b1, .a=0x23, .x=0x7a, .y=0x41, .sp=0x40, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x59b1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x59b2, .a=0x89, .x=0x7a, .y=0x41, .sp=0x40, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x59b1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x59b1, .value=0xdf, .type=IO_READ},
        {.addr=0x59b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0041) {
    const struct CPU_State initial_cpu = {.pc=0xcfba, .a=0x5a, .x=0x9a, .y=0x87, .sp=0xbe, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xcfba, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcfbb, .a=0xc0, .x=0x9a, .y=0x87, .sp=0xbe, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xcfba, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcfba, .value=0xdf, .type=IO_READ},
        {.addr=0xcfbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0042) {
    const struct CPU_State initial_cpu = {.pc=0x6c1b, .a=0x37, .x=0x73, .y=0xaf, .sp=0x1d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x6c1b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6c1c, .a=0x3d, .x=0x73, .y=0xaf, .sp=0x1d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6c1b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6c1b, .value=0xdf, .type=IO_READ},
        {.addr=0x6c1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0043) {
    const struct CPU_State initial_cpu = {.pc=0x2e01, .a=0x81, .x=0x0f, .y=0x9c, .sp=0x85, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x2e01, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2e02, .a=0x87, .x=0x0f, .y=0x9c, .sp=0x85, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2e01, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2e01, .value=0xdf, .type=IO_READ},
        {.addr=0x2e02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0044) {
    const struct CPU_State initial_cpu = {.pc=0xc325, .a=0xc3, .x=0x02, .y=0x71, .sp=0xee, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc325, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc326, .a=0x29, .x=0x02, .y=0x71, .sp=0xee, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc325, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc325, .value=0xdf, .type=IO_READ},
        {.addr=0xc326, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0045) {
    const struct CPU_State initial_cpu = {.pc=0xcfb0, .a=0x83, .x=0xe5, .y=0x78, .sp=0x56, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcfb1, .a=0xe3, .x=0xe5, .y=0x78, .sp=0x56, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xcfb0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcfb0, .value=0xdf, .type=IO_READ},
        {.addr=0xcfb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0046) {
    const struct CPU_State initial_cpu = {.pc=0x6087, .a=0xc8, .x=0x52, .y=0xde, .sp=0xf2, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6087, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6088, .a=0x28, .x=0x52, .y=0xde, .sp=0xf2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6087, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6087, .value=0xdf, .type=IO_READ},
        {.addr=0x6088, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2280, .a=0x4d, .x=0xce, .y=0x10, .sp=0x24, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x2280, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2281, .a=0x53, .x=0xce, .y=0x10, .sp=0x24, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2280, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2280, .value=0xdf, .type=IO_READ},
        {.addr=0x2281, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0048) {
    const struct CPU_State initial_cpu = {.pc=0x0dcc, .a=0x66, .x=0xaa, .y=0xd4, .sp=0x65, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0dcc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0dcd, .a=0xcc, .x=0xaa, .y=0xd4, .sp=0x65, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0dcc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0dcc, .value=0xdf, .type=IO_READ},
        {.addr=0x0dcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0049) {
    const struct CPU_State initial_cpu = {.pc=0xd95f, .a=0x2b, .x=0x5c, .y=0x7e, .sp=0x1d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xd95f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd960, .a=0x91, .x=0x5c, .y=0x7e, .sp=0x1d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd95f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd95f, .value=0xdf, .type=IO_READ},
        {.addr=0xd960, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_004A) {
    const struct CPU_State initial_cpu = {.pc=0x96dd, .a=0x22, .x=0x27, .y=0x02, .sp=0xfd, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x96dd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x96de, .a=0x82, .x=0x27, .y=0x02, .sp=0xfd, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x96dd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x96dd, .value=0xdf, .type=IO_READ},
        {.addr=0x96de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_004B) {
    const struct CPU_State initial_cpu = {.pc=0xfd0e, .a=0xcd, .x=0x2e, .y=0xb9, .sp=0xfe, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xfd0e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfd0f, .a=0x33, .x=0x2e, .y=0xb9, .sp=0xfe, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfd0e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfd0e, .value=0xdf, .type=IO_READ},
        {.addr=0xfd0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_004C) {
    const struct CPU_State initial_cpu = {.pc=0x9384, .a=0xa5, .x=0x4f, .y=0xd8, .sp=0x62, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x9384, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9385, .a=0x05, .x=0x4f, .y=0xd8, .sp=0x62, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9384, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9384, .value=0xdf, .type=IO_READ},
        {.addr=0x9385, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_004D) {
    const struct CPU_State initial_cpu = {.pc=0x716a, .a=0xe8, .x=0xfb, .y=0x34, .sp=0xf8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x716a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x716b, .a=0x4e, .x=0xfb, .y=0x34, .sp=0xf8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x716a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x716a, .value=0xdf, .type=IO_READ},
        {.addr=0x716b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_004E) {
    const struct CPU_State initial_cpu = {.pc=0x928d, .a=0x06, .x=0xcf, .y=0x5b, .sp=0x0d, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x928d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x928e, .a=0x66, .x=0xcf, .y=0x5b, .sp=0x0d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x928d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x928d, .value=0xdf, .type=IO_READ},
        {.addr=0x928e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_004F) {
    const struct CPU_State initial_cpu = {.pc=0xd912, .a=0x45, .x=0x94, .y=0xba, .sp=0xf7, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xd912, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd913, .a=0x45, .x=0x94, .y=0xba, .sp=0xf7, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xd912, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd912, .value=0xdf, .type=IO_READ},
        {.addr=0xd913, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0050) {
    const struct CPU_State initial_cpu = {.pc=0xc198, .a=0x0a, .x=0x84, .y=0xac, .sp=0x31, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xc198, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc199, .a=0x70, .x=0x84, .y=0xac, .sp=0x31, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc198, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc198, .value=0xdf, .type=IO_READ},
        {.addr=0xc199, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0051) {
    const struct CPU_State initial_cpu = {.pc=0x391b, .a=0xb4, .x=0x87, .y=0x7f, .sp=0x77, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x391b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x391c, .a=0x1a, .x=0x87, .y=0x7f, .sp=0x77, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x391b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x391b, .value=0xdf, .type=IO_READ},
        {.addr=0x391c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0052) {
    const struct CPU_State initial_cpu = {.pc=0x49c8, .a=0x2b, .x=0x81, .y=0xcb, .sp=0x42, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x49c8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x49c9, .a=0x91, .x=0x81, .y=0xcb, .sp=0x42, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x49c8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x49c8, .value=0xdf, .type=IO_READ},
        {.addr=0x49c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0053) {
    const struct CPU_State initial_cpu = {.pc=0x376f, .a=0x69, .x=0x94, .y=0x86, .sp=0x9e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x376f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3770, .a=0x69, .x=0x94, .y=0x86, .sp=0x9e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x376f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x376f, .value=0xdf, .type=IO_READ},
        {.addr=0x3770, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0054) {
    const struct CPU_State initial_cpu = {.pc=0xedae, .a=0x41, .x=0xd7, .y=0x25, .sp=0xb6, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xedae, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xedaf, .a=0x41, .x=0xd7, .y=0x25, .sp=0xb6, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xedae, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xedae, .value=0xdf, .type=IO_READ},
        {.addr=0xedaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0055) {
    const struct CPU_State initial_cpu = {.pc=0x000e, .a=0x05, .x=0x90, .y=0xc5, .sp=0x4e, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x000f, .a=0x65, .x=0x90, .y=0xc5, .sp=0x4e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x000e, .value=0xdf, .type=IO_READ},
        {.addr=0x000f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0056) {
    const struct CPU_State initial_cpu = {.pc=0x6aa9, .a=0x15, .x=0x24, .y=0xa6, .sp=0x0f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x6aa9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6aaa, .a=0x15, .x=0x24, .y=0xa6, .sp=0x0f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6aa9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6aa9, .value=0xdf, .type=IO_READ},
        {.addr=0x6aaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0057) {
    const struct CPU_State initial_cpu = {.pc=0x8fcf, .a=0x99, .x=0x73, .y=0x2a, .sp=0xb2, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x8fcf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8fd0, .a=0x99, .x=0x73, .y=0x2a, .sp=0xb2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8fcf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8fcf, .value=0xdf, .type=IO_READ},
        {.addr=0x8fd0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0058) {
    const struct CPU_State initial_cpu = {.pc=0xda2b, .a=0xd3, .x=0xd0, .y=0xe9, .sp=0xb9, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xda2b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xda2c, .a=0x33, .x=0xd0, .y=0xe9, .sp=0xb9, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xda2b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xda2b, .value=0xdf, .type=IO_READ},
        {.addr=0xda2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0059) {
    const struct CPU_State initial_cpu = {.pc=0x4275, .a=0xf3, .x=0x2b, .y=0x00, .sp=0xa6, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4275, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4276, .a=0x59, .x=0x2b, .y=0x00, .sp=0xa6, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4275, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4275, .value=0xdf, .type=IO_READ},
        {.addr=0x4276, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_005A) {
    const struct CPU_State initial_cpu = {.pc=0xd31b, .a=0xd0, .x=0xe8, .y=0xec, .sp=0x16, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xd31b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd31c, .a=0x36, .x=0xe8, .y=0xec, .sp=0x16, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd31b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd31b, .value=0xdf, .type=IO_READ},
        {.addr=0xd31c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_005B) {
    const struct CPU_State initial_cpu = {.pc=0x576c, .a=0xdb, .x=0x6a, .y=0xfa, .sp=0x74, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x576c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x576d, .a=0x41, .x=0x6a, .y=0xfa, .sp=0x74, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x576c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x576c, .value=0xdf, .type=IO_READ},
        {.addr=0x576d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_005C) {
    const struct CPU_State initial_cpu = {.pc=0x7cd6, .a=0xad, .x=0xa2, .y=0xcf, .sp=0xda, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x7cd6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7cd7, .a=0x13, .x=0xa2, .y=0xcf, .sp=0xda, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7cd6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7cd6, .value=0xdf, .type=IO_READ},
        {.addr=0x7cd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_005D) {
    const struct CPU_State initial_cpu = {.pc=0xd69a, .a=0xe6, .x=0x34, .y=0x8e, .sp=0xe3, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd69a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd69b, .a=0x46, .x=0x34, .y=0x8e, .sp=0xe3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd69a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd69a, .value=0xdf, .type=IO_READ},
        {.addr=0xd69b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_005E) {
    const struct CPU_State initial_cpu = {.pc=0xbea1, .a=0x8e, .x=0x9c, .y=0x51, .sp=0x4b, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xbea1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbea2, .a=0xf4, .x=0x9c, .y=0x51, .sp=0x4b, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xbea1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbea1, .value=0xdf, .type=IO_READ},
        {.addr=0xbea2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_005F) {
    const struct CPU_State initial_cpu = {.pc=0x6136, .a=0x7e, .x=0xa7, .y=0xd3, .sp=0xd8, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x6136, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6137, .a=0x84, .x=0xa7, .y=0xd3, .sp=0xd8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6136, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6136, .value=0xdf, .type=IO_READ},
        {.addr=0x6137, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0060) {
    const struct CPU_State initial_cpu = {.pc=0x89fd, .a=0x05, .x=0x16, .y=0xbe, .sp=0x8e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x89fd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x89fe, .a=0x05, .x=0x16, .y=0xbe, .sp=0x8e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x89fd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x89fd, .value=0xdf, .type=IO_READ},
        {.addr=0x89fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0061) {
    const struct CPU_State initial_cpu = {.pc=0xa2b0, .a=0x67, .x=0x31, .y=0x55, .sp=0x6f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa2b0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa2b1, .a=0xc7, .x=0x31, .y=0x55, .sp=0x6f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xa2b0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa2b0, .value=0xdf, .type=IO_READ},
        {.addr=0xa2b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0062) {
    const struct CPU_State initial_cpu = {.pc=0x77ed, .a=0x73, .x=0x4f, .y=0x8a, .sp=0xc0, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x77ed, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x77ee, .a=0xd3, .x=0x4f, .y=0x8a, .sp=0xc0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x77ed, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x77ed, .value=0xdf, .type=IO_READ},
        {.addr=0x77ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0063) {
    const struct CPU_State initial_cpu = {.pc=0x136d, .a=0x73, .x=0xcc, .y=0xba, .sp=0xa3, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x136d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x136e, .a=0xd3, .x=0xcc, .y=0xba, .sp=0xa3, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x136d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x136d, .value=0xdf, .type=IO_READ},
        {.addr=0x136e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0064) {
    const struct CPU_State initial_cpu = {.pc=0x2d50, .a=0xd4, .x=0xd6, .y=0x63, .sp=0xb0, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x2d50, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2d51, .a=0x3a, .x=0xd6, .y=0x63, .sp=0xb0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2d50, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2d50, .value=0xdf, .type=IO_READ},
        {.addr=0x2d51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0065) {
    const struct CPU_State initial_cpu = {.pc=0x20d2, .a=0x95, .x=0x8b, .y=0xb7, .sp=0x30, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x20d2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x20d3, .a=0xfb, .x=0x8b, .y=0xb7, .sp=0x30, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x20d2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x20d2, .value=0xdf, .type=IO_READ},
        {.addr=0x20d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0066) {
    const struct CPU_State initial_cpu = {.pc=0xa736, .a=0xda, .x=0x92, .y=0x57, .sp=0xdf, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa736, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa737, .a=0x40, .x=0x92, .y=0x57, .sp=0xdf, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa736, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa736, .value=0xdf, .type=IO_READ},
        {.addr=0xa737, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0067) {
    const struct CPU_State initial_cpu = {.pc=0x1381, .a=0x4b, .x=0xac, .y=0x35, .sp=0xfa, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x1381, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1382, .a=0xb1, .x=0xac, .y=0x35, .sp=0xfa, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x1381, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1381, .value=0xdf, .type=IO_READ},
        {.addr=0x1382, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0068) {
    const struct CPU_State initial_cpu = {.pc=0xd4c2, .a=0x29, .x=0x41, .y=0x7c, .sp=0x6f, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd4c3, .a=0x2f, .x=0x41, .y=0x7c, .sp=0x6f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd4c2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd4c2, .value=0xdf, .type=IO_READ},
        {.addr=0xd4c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0069) {
    const struct CPU_State initial_cpu = {.pc=0x26a9, .a=0xdf, .x=0x31, .y=0x5c, .sp=0x5c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x26a9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x26aa, .a=0x45, .x=0x31, .y=0x5c, .sp=0x5c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x26a9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x26a9, .value=0xdf, .type=IO_READ},
        {.addr=0x26aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_006A) {
    const struct CPU_State initial_cpu = {.pc=0x5abc, .a=0x74, .x=0xc7, .y=0x05, .sp=0x3c, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x5abc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5abd, .a=0x74, .x=0xc7, .y=0x05, .sp=0x3c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5abc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5abc, .value=0xdf, .type=IO_READ},
        {.addr=0x5abd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_006B) {
    const struct CPU_State initial_cpu = {.pc=0x89da, .a=0x94, .x=0xdf, .y=0x6c, .sp=0x62, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x89da, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x89db, .a=0xfa, .x=0xdf, .y=0x6c, .sp=0x62, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x89da, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x89da, .value=0xdf, .type=IO_READ},
        {.addr=0x89db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_006C) {
    const struct CPU_State initial_cpu = {.pc=0xe373, .a=0xff, .x=0x05, .y=0xd9, .sp=0x68, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xe373, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe374, .a=0x65, .x=0x05, .y=0xd9, .sp=0x68, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xe373, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe373, .value=0xdf, .type=IO_READ},
        {.addr=0xe374, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_006D) {
    const struct CPU_State initial_cpu = {.pc=0x4945, .a=0xd2, .x=0x91, .y=0xc7, .sp=0xa9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x4945, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4946, .a=0x38, .x=0x91, .y=0xc7, .sp=0xa9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4945, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4945, .value=0xdf, .type=IO_READ},
        {.addr=0x4946, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_006E) {
    const struct CPU_State initial_cpu = {.pc=0x6242, .a=0x8e, .x=0x90, .y=0xdf, .sp=0xf9, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x6242, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6243, .a=0x94, .x=0x90, .y=0xdf, .sp=0xf9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6242, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6242, .value=0xdf, .type=IO_READ},
        {.addr=0x6243, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_006F) {
    const struct CPU_State initial_cpu = {.pc=0x1d36, .a=0xe2, .x=0x6e, .y=0x3e, .sp=0xd5, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x1d36, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1d37, .a=0x42, .x=0x6e, .y=0x3e, .sp=0xd5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1d36, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1d36, .value=0xdf, .type=IO_READ},
        {.addr=0x1d37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0070) {
    const struct CPU_State initial_cpu = {.pc=0x4420, .a=0xbb, .x=0x08, .y=0xa3, .sp=0x53, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x4420, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4421, .a=0x21, .x=0x08, .y=0xa3, .sp=0x53, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4420, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4420, .value=0xdf, .type=IO_READ},
        {.addr=0x4421, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0071) {
    const struct CPU_State initial_cpu = {.pc=0x0331, .a=0xa1, .x=0x49, .y=0xf5, .sp=0x03, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0331, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0332, .a=0x07, .x=0x49, .y=0xf5, .sp=0x03, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0331, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0331, .value=0xdf, .type=IO_READ},
        {.addr=0x0332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0072) {
    const struct CPU_State initial_cpu = {.pc=0xac43, .a=0x0b, .x=0xa5, .y=0xba, .sp=0x2a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xac43, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xac44, .a=0x71, .x=0xa5, .y=0xba, .sp=0x2a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xac43, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xac43, .value=0xdf, .type=IO_READ},
        {.addr=0xac44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0073) {
    const struct CPU_State initial_cpu = {.pc=0x1457, .a=0xa4, .x=0x68, .y=0xfb, .sp=0x60, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x1457, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1458, .a=0x0a, .x=0x68, .y=0xfb, .sp=0x60, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x1457, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1457, .value=0xdf, .type=IO_READ},
        {.addr=0x1458, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0074) {
    const struct CPU_State initial_cpu = {.pc=0x71bf, .a=0xbb, .x=0xa1, .y=0x8c, .sp=0x96, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x71bf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x71c0, .a=0x21, .x=0xa1, .y=0x8c, .sp=0x96, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x71bf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x71bf, .value=0xdf, .type=IO_READ},
        {.addr=0x71c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0075) {
    const struct CPU_State initial_cpu = {.pc=0x1ad8, .a=0x10, .x=0xb8, .y=0xad, .sp=0x31, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x1ad8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1ad9, .a=0x76, .x=0xb8, .y=0xad, .sp=0x31, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1ad8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1ad8, .value=0xdf, .type=IO_READ},
        {.addr=0x1ad9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0076) {
    const struct CPU_State initial_cpu = {.pc=0x4533, .a=0x05, .x=0xfd, .y=0x49, .sp=0x87, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x4533, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4534, .a=0x0b, .x=0xfd, .y=0x49, .sp=0x87, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4533, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4533, .value=0xdf, .type=IO_READ},
        {.addr=0x4534, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0077) {
    const struct CPU_State initial_cpu = {.pc=0x5859, .a=0x3a, .x=0x4c, .y=0x0e, .sp=0x02, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x5859, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x585a, .a=0xa0, .x=0x4c, .y=0x0e, .sp=0x02, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5859, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5859, .value=0xdf, .type=IO_READ},
        {.addr=0x585a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0078) {
    const struct CPU_State initial_cpu = {.pc=0x9bb2, .a=0xb6, .x=0xc7, .y=0x5c, .sp=0xda, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x9bb2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9bb3, .a=0x16, .x=0xc7, .y=0x5c, .sp=0xda, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9bb2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9bb2, .value=0xdf, .type=IO_READ},
        {.addr=0x9bb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0079) {
    const struct CPU_State initial_cpu = {.pc=0x9e18, .a=0x67, .x=0x10, .y=0xcf, .sp=0x41, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x9e18, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9e19, .a=0x67, .x=0x10, .y=0xcf, .sp=0x41, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9e18, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9e18, .value=0xdf, .type=IO_READ},
        {.addr=0x9e19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_007A) {
    const struct CPU_State initial_cpu = {.pc=0xc772, .a=0x8a, .x=0xd9, .y=0x2f, .sp=0x53, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc772, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc773, .a=0xf0, .x=0xd9, .y=0x2f, .sp=0x53, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc772, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc772, .value=0xdf, .type=IO_READ},
        {.addr=0xc773, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_007B) {
    const struct CPU_State initial_cpu = {.pc=0xa6dd, .a=0xdf, .x=0x63, .y=0xef, .sp=0x56, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xa6dd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa6de, .a=0x45, .x=0x63, .y=0xef, .sp=0x56, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa6dd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa6dd, .value=0xdf, .type=IO_READ},
        {.addr=0xa6de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_007C) {
    const struct CPU_State initial_cpu = {.pc=0x51a1, .a=0x89, .x=0xe1, .y=0xd9, .sp=0xfa, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x51a1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x51a2, .a=0x89, .x=0xe1, .y=0xd9, .sp=0xfa, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x51a1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x51a1, .value=0xdf, .type=IO_READ},
        {.addr=0x51a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_007D) {
    const struct CPU_State initial_cpu = {.pc=0x9a4a, .a=0x7e, .x=0x4d, .y=0x1e, .sp=0x7b, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x9a4a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9a4b, .a=0xe4, .x=0x4d, .y=0x1e, .sp=0x7b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9a4a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9a4a, .value=0xdf, .type=IO_READ},
        {.addr=0x9a4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_007E) {
    const struct CPU_State initial_cpu = {.pc=0x1cd8, .a=0x77, .x=0xe5, .y=0x7e, .sp=0xb6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x1cd8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1cd9, .a=0x77, .x=0xe5, .y=0x7e, .sp=0xb6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1cd8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1cd8, .value=0xdf, .type=IO_READ},
        {.addr=0x1cd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_007F) {
    const struct CPU_State initial_cpu = {.pc=0xa15f, .a=0xce, .x=0xf8, .y=0x77, .sp=0x81, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xa15f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa160, .a=0x34, .x=0xf8, .y=0x77, .sp=0x81, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa15f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa15f, .value=0xdf, .type=IO_READ},
        {.addr=0xa160, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0080) {
    const struct CPU_State initial_cpu = {.pc=0x17f3, .a=0x17, .x=0x9f, .y=0x73, .sp=0x69, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x17f3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x17f4, .a=0x7d, .x=0x9f, .y=0x73, .sp=0x69, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x17f3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x17f3, .value=0xdf, .type=IO_READ},
        {.addr=0x17f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0081) {
    const struct CPU_State initial_cpu = {.pc=0xb488, .a=0x56, .x=0x48, .y=0x38, .sp=0xfc, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xb488, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb489, .a=0x5c, .x=0x48, .y=0x38, .sp=0xfc, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb488, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb488, .value=0xdf, .type=IO_READ},
        {.addr=0xb489, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0082) {
    const struct CPU_State initial_cpu = {.pc=0x4a7d, .a=0x85, .x=0xcc, .y=0x81, .sp=0x2a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4a7e, .a=0xeb, .x=0xcc, .y=0x81, .sp=0x2a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4a7d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4a7d, .value=0xdf, .type=IO_READ},
        {.addr=0x4a7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0083) {
    const struct CPU_State initial_cpu = {.pc=0x5499, .a=0x33, .x=0xd6, .y=0x7f, .sp=0x08, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x5499, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x549a, .a=0x99, .x=0xd6, .y=0x7f, .sp=0x08, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5499, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5499, .value=0xdf, .type=IO_READ},
        {.addr=0x549a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0084) {
    const struct CPU_State initial_cpu = {.pc=0x7dee, .a=0xa2, .x=0x8e, .y=0xe2, .sp=0xc9, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x7dee, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7def, .a=0x08, .x=0x8e, .y=0xe2, .sp=0xc9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7dee, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7dee, .value=0xdf, .type=IO_READ},
        {.addr=0x7def, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0085) {
    const struct CPU_State initial_cpu = {.pc=0x99bc, .a=0xa7, .x=0x77, .y=0x98, .sp=0x42, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x99bc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x99bd, .a=0x0d, .x=0x77, .y=0x98, .sp=0x42, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x99bc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x99bc, .value=0xdf, .type=IO_READ},
        {.addr=0x99bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0086) {
    const struct CPU_State initial_cpu = {.pc=0x93f8, .a=0xab, .x=0xd5, .y=0x66, .sp=0x8f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x93f8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x93f9, .a=0x11, .x=0xd5, .y=0x66, .sp=0x8f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x93f8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x93f8, .value=0xdf, .type=IO_READ},
        {.addr=0x93f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0087) {
    const struct CPU_State initial_cpu = {.pc=0xcb4a, .a=0x64, .x=0x1c, .y=0x80, .sp=0x01, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xcb4a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcb4b, .a=0xc4, .x=0x1c, .y=0x80, .sp=0x01, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xcb4a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcb4a, .value=0xdf, .type=IO_READ},
        {.addr=0xcb4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0088) {
    const struct CPU_State initial_cpu = {.pc=0x60ba, .a=0xce, .x=0x07, .y=0x0d, .sp=0xd3, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x60ba, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x60bb, .a=0x34, .x=0x07, .y=0x0d, .sp=0xd3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x60ba, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x60ba, .value=0xdf, .type=IO_READ},
        {.addr=0x60bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0089) {
    const struct CPU_State initial_cpu = {.pc=0x8a3a, .a=0xf9, .x=0x9a, .y=0x6a, .sp=0xea, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8a3a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8a3b, .a=0x5f, .x=0x9a, .y=0x6a, .sp=0xea, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8a3a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8a3a, .value=0xdf, .type=IO_READ},
        {.addr=0x8a3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_008A) {
    const struct CPU_State initial_cpu = {.pc=0x9d4e, .a=0xa8, .x=0x84, .y=0x0f, .sp=0xa4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x9d4e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9d4f, .a=0x0e, .x=0x84, .y=0x0f, .sp=0xa4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9d4e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9d4e, .value=0xdf, .type=IO_READ},
        {.addr=0x9d4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_008B) {
    const struct CPU_State initial_cpu = {.pc=0x5fe1, .a=0xeb, .x=0xba, .y=0x1d, .sp=0x30, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5fe2, .a=0x51, .x=0xba, .y=0x1d, .sp=0x30, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5fe1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5fe1, .value=0xdf, .type=IO_READ},
        {.addr=0x5fe2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_008C) {
    const struct CPU_State initial_cpu = {.pc=0x7a2f, .a=0x8e, .x=0xe0, .y=0x79, .sp=0x5e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x7a2f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7a30, .a=0xf4, .x=0xe0, .y=0x79, .sp=0x5e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x7a2f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7a2f, .value=0xdf, .type=IO_READ},
        {.addr=0x7a30, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_008D) {
    const struct CPU_State initial_cpu = {.pc=0x4220, .a=0x45, .x=0xdf, .y=0x12, .sp=0xa1, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x4220, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4221, .a=0xa5, .x=0xdf, .y=0x12, .sp=0xa1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4220, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4220, .value=0xdf, .type=IO_READ},
        {.addr=0x4221, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_008E) {
    const struct CPU_State initial_cpu = {.pc=0x3884, .a=0x98, .x=0x2a, .y=0x02, .sp=0x24, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3884, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3885, .a=0x9e, .x=0x2a, .y=0x02, .sp=0x24, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3884, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3884, .value=0xdf, .type=IO_READ},
        {.addr=0x3885, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_008F) {
    const struct CPU_State initial_cpu = {.pc=0x3c33, .a=0x69, .x=0x07, .y=0x5e, .sp=0x24, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x3c33, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3c34, .a=0x69, .x=0x07, .y=0x5e, .sp=0x24, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x3c33, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3c33, .value=0xdf, .type=IO_READ},
        {.addr=0x3c34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0090) {
    const struct CPU_State initial_cpu = {.pc=0x14a5, .a=0x76, .x=0x56, .y=0xde, .sp=0x92, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x14a5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x14a6, .a=0x7c, .x=0x56, .y=0xde, .sp=0x92, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x14a5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x14a5, .value=0xdf, .type=IO_READ},
        {.addr=0x14a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0091) {
    const struct CPU_State initial_cpu = {.pc=0xa3f4, .a=0xa5, .x=0x9c, .y=0xf9, .sp=0x4b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa3f5, .a=0x05, .x=0x9c, .y=0xf9, .sp=0x4b, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa3f4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa3f4, .value=0xdf, .type=IO_READ},
        {.addr=0xa3f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0092) {
    const struct CPU_State initial_cpu = {.pc=0xf6b5, .a=0x48, .x=0x11, .y=0xff, .sp=0x5d, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf6b5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf6b6, .a=0x4e, .x=0x11, .y=0xff, .sp=0x5d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf6b5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf6b5, .value=0xdf, .type=IO_READ},
        {.addr=0xf6b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0093) {
    const struct CPU_State initial_cpu = {.pc=0xb265, .a=0xa8, .x=0xf9, .y=0xc6, .sp=0x05, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xb265, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb266, .a=0x0e, .x=0xf9, .y=0xc6, .sp=0x05, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb265, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb265, .value=0xdf, .type=IO_READ},
        {.addr=0xb266, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0094) {
    const struct CPU_State initial_cpu = {.pc=0x71d9, .a=0x77, .x=0x8f, .y=0x43, .sp=0x4d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x71d9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x71da, .a=0x7d, .x=0x8f, .y=0x43, .sp=0x4d, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x71d9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x71d9, .value=0xdf, .type=IO_READ},
        {.addr=0x71da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0095) {
    const struct CPU_State initial_cpu = {.pc=0x4457, .a=0xe6, .x=0xa0, .y=0x2c, .sp=0x2f, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4457, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4458, .a=0x4c, .x=0xa0, .y=0x2c, .sp=0x2f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4457, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4457, .value=0xdf, .type=IO_READ},
        {.addr=0x4458, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0096) {
    const struct CPU_State initial_cpu = {.pc=0xb4f6, .a=0xd0, .x=0x24, .y=0xa1, .sp=0x20, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb4f7, .a=0x30, .x=0x24, .y=0xa1, .sp=0x20, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xb4f6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb4f6, .value=0xdf, .type=IO_READ},
        {.addr=0xb4f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0097) {
    const struct CPU_State initial_cpu = {.pc=0x175f, .a=0xee, .x=0x87, .y=0xe9, .sp=0x22, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x175f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1760, .a=0x54, .x=0x87, .y=0xe9, .sp=0x22, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x175f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x175f, .value=0xdf, .type=IO_READ},
        {.addr=0x1760, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0098) {
    const struct CPU_State initial_cpu = {.pc=0x25e2, .a=0x7e, .x=0xb4, .y=0xbf, .sp=0x0c, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x25e2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x25e3, .a=0xe4, .x=0xb4, .y=0xbf, .sp=0x0c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x25e2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x25e2, .value=0xdf, .type=IO_READ},
        {.addr=0x25e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0099) {
    const struct CPU_State initial_cpu = {.pc=0x13ab, .a=0x84, .x=0x35, .y=0xe4, .sp=0x57, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x13ab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x13ac, .a=0x8a, .x=0x35, .y=0xe4, .sp=0x57, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x13ab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x13ab, .value=0xdf, .type=IO_READ},
        {.addr=0x13ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_009A) {
    const struct CPU_State initial_cpu = {.pc=0xf0e8, .a=0x89, .x=0x4d, .y=0x56, .sp=0x62, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xf0e8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf0e9, .a=0xef, .x=0x4d, .y=0x56, .sp=0x62, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xf0e8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf0e8, .value=0xdf, .type=IO_READ},
        {.addr=0xf0e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_009B) {
    const struct CPU_State initial_cpu = {.pc=0x6daa, .a=0xe7, .x=0x24, .y=0x11, .sp=0x22, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6daa, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6dab, .a=0x47, .x=0x24, .y=0x11, .sp=0x22, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6daa, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6daa, .value=0xdf, .type=IO_READ},
        {.addr=0x6dab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_009C) {
    const struct CPU_State initial_cpu = {.pc=0x9e2e, .a=0x44, .x=0xb2, .y=0x91, .sp=0x0e, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9e2e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9e2f, .a=0xaa, .x=0xb2, .y=0x91, .sp=0x0e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x9e2e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9e2e, .value=0xdf, .type=IO_READ},
        {.addr=0x9e2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_009D) {
    const struct CPU_State initial_cpu = {.pc=0xe79a, .a=0x4b, .x=0xf8, .y=0xc0, .sp=0x08, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe79a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe79b, .a=0x51, .x=0xf8, .y=0xc0, .sp=0x08, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe79a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe79a, .value=0xdf, .type=IO_READ},
        {.addr=0xe79b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_009E) {
    const struct CPU_State initial_cpu = {.pc=0x51af, .a=0xa0, .x=0x7e, .y=0xc5, .sp=0x93, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x51af, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x51b0, .a=0x06, .x=0x7e, .y=0xc5, .sp=0x93, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x51af, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x51af, .value=0xdf, .type=IO_READ},
        {.addr=0x51b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_009F) {
    const struct CPU_State initial_cpu = {.pc=0x2c5d, .a=0xf0, .x=0x68, .y=0xf5, .sp=0xfd, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2c5d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2c5e, .a=0x56, .x=0x68, .y=0xf5, .sp=0xfd, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2c5d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2c5d, .value=0xdf, .type=IO_READ},
        {.addr=0x2c5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x5eea, .a=0xf2, .x=0xe0, .y=0x57, .sp=0xb9, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x5eea, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5eeb, .a=0x52, .x=0xe0, .y=0x57, .sp=0xb9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5eea, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5eea, .value=0xdf, .type=IO_READ},
        {.addr=0x5eeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x5ed2, .a=0x0d, .x=0x16, .y=0xcf, .sp=0xd0, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5ed3, .a=0x73, .x=0x16, .y=0xcf, .sp=0xd0, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5ed2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5ed2, .value=0xdf, .type=IO_READ},
        {.addr=0x5ed3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x75b5, .a=0x03, .x=0x97, .y=0xe6, .sp=0x10, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x75b5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x75b6, .a=0x03, .x=0x97, .y=0xe6, .sp=0x10, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x75b5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x75b5, .value=0xdf, .type=IO_READ},
        {.addr=0x75b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x0c9c, .a=0x5c, .x=0x49, .y=0x00, .sp=0x8e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0c9c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0c9d, .a=0xc2, .x=0x49, .y=0x00, .sp=0x8e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0c9c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0c9c, .value=0xdf, .type=IO_READ},
        {.addr=0x0c9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x9794, .a=0x86, .x=0x0d, .y=0x47, .sp=0x96, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9794, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9795, .a=0x86, .x=0x0d, .y=0x47, .sp=0x96, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9794, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9794, .value=0xdf, .type=IO_READ},
        {.addr=0x9795, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xd28d, .a=0x66, .x=0xa7, .y=0x34, .sp=0xa3, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xd28d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd28e, .a=0xcc, .x=0xa7, .y=0x34, .sp=0xa3, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd28d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd28d, .value=0xdf, .type=IO_READ},
        {.addr=0xd28e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xf6f9, .a=0x01, .x=0x4b, .y=0x9d, .sp=0x80, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xf6f9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf6fa, .a=0x67, .x=0x4b, .y=0x9d, .sp=0x80, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf6f9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf6f9, .value=0xdf, .type=IO_READ},
        {.addr=0xf6fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xf074, .a=0x1f, .x=0x67, .y=0x6d, .sp=0xed, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xf074, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf075, .a=0x25, .x=0x67, .y=0x6d, .sp=0xed, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xf074, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf074, .value=0xdf, .type=IO_READ},
        {.addr=0xf075, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xb89d, .a=0x9d, .x=0x7f, .y=0x27, .sp=0xd3, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb89d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb89e, .a=0x03, .x=0x7f, .y=0x27, .sp=0xd3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb89d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb89d, .value=0xdf, .type=IO_READ},
        {.addr=0xb89e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x5db0, .a=0x1d, .x=0x9d, .y=0x45, .sp=0xee, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5db0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5db1, .a=0x23, .x=0x9d, .y=0x45, .sp=0xee, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5db0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5db0, .value=0xdf, .type=IO_READ},
        {.addr=0x5db1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x17d9, .a=0xff, .x=0x82, .y=0xbf, .sp=0xe6, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x17d9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x17da, .a=0x65, .x=0x82, .y=0xbf, .sp=0xe6, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x17d9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x17d9, .value=0xdf, .type=IO_READ},
        {.addr=0x17da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x9361, .a=0xa5, .x=0x0d, .y=0xd6, .sp=0xb8, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x9361, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9362, .a=0x0b, .x=0x0d, .y=0xd6, .sp=0xb8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9361, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9361, .value=0xdf, .type=IO_READ},
        {.addr=0x9362, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x1612, .a=0x58, .x=0xa1, .y=0x17, .sp=0xe8, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x1612, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1613, .a=0xb8, .x=0xa1, .y=0x17, .sp=0xe8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1612, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1612, .value=0xdf, .type=IO_READ},
        {.addr=0x1613, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xac64, .a=0x14, .x=0xc1, .y=0xf4, .sp=0xbf, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xac64, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xac65, .a=0x74, .x=0xc1, .y=0xf4, .sp=0xbf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xac64, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xac64, .value=0xdf, .type=IO_READ},
        {.addr=0xac65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x2621, .a=0x0f, .x=0xcf, .y=0xde, .sp=0xa2, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x2621, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2622, .a=0x15, .x=0xcf, .y=0xde, .sp=0xa2, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2621, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2621, .value=0xdf, .type=IO_READ},
        {.addr=0x2622, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x423a, .a=0x3f, .x=0xdf, .y=0x1f, .sp=0x44, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x423a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x423b, .a=0x45, .x=0xdf, .y=0x1f, .sp=0x44, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x423a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x423a, .value=0xdf, .type=IO_READ},
        {.addr=0x423b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xef91, .a=0x76, .x=0xdc, .y=0xf7, .sp=0x3e, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xef91, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xef92, .a=0x76, .x=0xdc, .y=0xf7, .sp=0x3e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xef91, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xef91, .value=0xdf, .type=IO_READ},
        {.addr=0xef92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x9dc1, .a=0xac, .x=0x98, .y=0x79, .sp=0x9a, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x9dc1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9dc2, .a=0x12, .x=0x98, .y=0x79, .sp=0x9a, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9dc1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9dc1, .value=0xdf, .type=IO_READ},
        {.addr=0x9dc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x661d, .a=0xb7, .x=0x02, .y=0x4d, .sp=0x6a, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x661d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x661e, .a=0x17, .x=0x02, .y=0x4d, .sp=0x6a, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x661d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x661d, .value=0xdf, .type=IO_READ},
        {.addr=0x661e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x798f, .a=0xbb, .x=0x23, .y=0x26, .sp=0xb3, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x798f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7990, .a=0x21, .x=0x23, .y=0x26, .sp=0xb3, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x798f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x798f, .value=0xdf, .type=IO_READ},
        {.addr=0x7990, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xfcf6, .a=0x60, .x=0xd4, .y=0x16, .sp=0x7e, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xfcf6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfcf7, .a=0xc0, .x=0xd4, .y=0x16, .sp=0x7e, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xfcf6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfcf6, .value=0xdf, .type=IO_READ},
        {.addr=0xfcf7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xbe5f, .a=0x9e, .x=0x42, .y=0x05, .sp=0x81, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xbe5f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbe60, .a=0x04, .x=0x42, .y=0x05, .sp=0x81, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xbe5f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbe5f, .value=0xdf, .type=IO_READ},
        {.addr=0xbe60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x3aae, .a=0x3e, .x=0xe9, .y=0x45, .sp=0xcf, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x3aae, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3aaf, .a=0xa4, .x=0xe9, .y=0x45, .sp=0xcf, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x3aae, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3aae, .value=0xdf, .type=IO_READ},
        {.addr=0x3aaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x02a0, .a=0xb5, .x=0x33, .y=0xd1, .sp=0xb6, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x02a0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x02a1, .a=0x15, .x=0x33, .y=0xd1, .sp=0xb6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x02a0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x02a0, .value=0xdf, .type=IO_READ},
        {.addr=0x02a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xf78c, .a=0x03, .x=0x82, .y=0x68, .sp=0x0b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf78c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf78d, .a=0x03, .x=0x82, .y=0x68, .sp=0x0b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf78c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf78c, .value=0xdf, .type=IO_READ},
        {.addr=0xf78d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xb546, .a=0x68, .x=0xd6, .y=0x4a, .sp=0x42, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xb546, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb547, .a=0x6e, .x=0xd6, .y=0x4a, .sp=0x42, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb546, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb546, .value=0xdf, .type=IO_READ},
        {.addr=0xb547, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x8aa1, .a=0x1a, .x=0x1d, .y=0x04, .sp=0x44, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8aa1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8aa2, .a=0x20, .x=0x1d, .y=0x04, .sp=0x44, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x8aa1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8aa1, .value=0xdf, .type=IO_READ},
        {.addr=0x8aa2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xb726, .a=0x42, .x=0xdd, .y=0x60, .sp=0xb6, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xb726, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb727, .a=0xa8, .x=0xdd, .y=0x60, .sp=0xb6, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb726, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb726, .value=0xdf, .type=IO_READ},
        {.addr=0xb727, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x8cd6, .a=0x94, .x=0x34, .y=0x39, .sp=0x37, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8cd7, .a=0x94, .x=0x34, .y=0x39, .sp=0x37, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8cd6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8cd6, .value=0xdf, .type=IO_READ},
        {.addr=0x8cd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xc360, .a=0x27, .x=0x55, .y=0x21, .sp=0x45, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc360, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc361, .a=0x8d, .x=0x55, .y=0x21, .sp=0x45, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc360, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc360, .value=0xdf, .type=IO_READ},
        {.addr=0xc361, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xe21a, .a=0x0e, .x=0x36, .y=0x25, .sp=0x1f, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xe21a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe21b, .a=0x74, .x=0x36, .y=0x25, .sp=0x1f, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe21a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe21a, .value=0xdf, .type=IO_READ},
        {.addr=0xe21b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xbe6a, .a=0xdb, .x=0xa7, .y=0x5c, .sp=0xfa, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xbe6a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbe6b, .a=0x41, .x=0xa7, .y=0x5c, .sp=0xfa, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xbe6a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbe6a, .value=0xdf, .type=IO_READ},
        {.addr=0xbe6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xb09b, .a=0xf8, .x=0x74, .y=0xa2, .sp=0xf5, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xb09b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb09c, .a=0x58, .x=0x74, .y=0xa2, .sp=0xf5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb09b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb09b, .value=0xdf, .type=IO_READ},
        {.addr=0xb09c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xf8eb, .a=0xb4, .x=0x21, .y=0x90, .sp=0xce, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xf8eb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf8ec, .a=0x1a, .x=0x21, .y=0x90, .sp=0xce, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf8eb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf8eb, .value=0xdf, .type=IO_READ},
        {.addr=0xf8ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x23ae, .a=0xc4, .x=0x87, .y=0x41, .sp=0x71, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x23ae, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x23af, .a=0x2a, .x=0x87, .y=0x41, .sp=0x71, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x23ae, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x23ae, .value=0xdf, .type=IO_READ},
        {.addr=0x23af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xe780, .a=0x3a, .x=0x47, .y=0xfc, .sp=0x33, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xe780, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe781, .a=0xa0, .x=0x47, .y=0xfc, .sp=0x33, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe780, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe780, .value=0xdf, .type=IO_READ},
        {.addr=0xe781, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x78bc, .a=0xda, .x=0x9b, .y=0xaf, .sp=0x60, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x78bc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x78bd, .a=0x40, .x=0x9b, .y=0xaf, .sp=0x60, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x78bc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x78bc, .value=0xdf, .type=IO_READ},
        {.addr=0x78bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x91e2, .a=0xc6, .x=0x09, .y=0xd4, .sp=0x66, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x91e2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x91e3, .a=0x26, .x=0x09, .y=0xd4, .sp=0x66, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x91e2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x91e2, .value=0xdf, .type=IO_READ},
        {.addr=0x91e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x787f, .a=0x5b, .x=0x96, .y=0x6f, .sp=0x02, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x787f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7880, .a=0xc1, .x=0x96, .y=0x6f, .sp=0x02, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x787f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x787f, .value=0xdf, .type=IO_READ},
        {.addr=0x7880, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x244b, .a=0xc7, .x=0x6a, .y=0x44, .sp=0x9b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x244b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x244c, .a=0x2d, .x=0x6a, .y=0x44, .sp=0x9b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x244b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x244b, .value=0xdf, .type=IO_READ},
        {.addr=0x244c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x39d4, .a=0x1b, .x=0xd7, .y=0x5d, .sp=0x1e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x39d4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x39d5, .a=0x21, .x=0xd7, .y=0x5d, .sp=0x1e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x39d4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x39d4, .value=0xdf, .type=IO_READ},
        {.addr=0x39d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x3be1, .a=0x1e, .x=0x69, .y=0x6d, .sp=0x6c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3be1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3be2, .a=0x24, .x=0x69, .y=0x6d, .sp=0x6c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3be1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3be1, .value=0xdf, .type=IO_READ},
        {.addr=0x3be2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xaa99, .a=0x1c, .x=0xbb, .y=0xbe, .sp=0x9f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xaa99, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xaa9a, .a=0x22, .x=0xbb, .y=0xbe, .sp=0x9f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xaa99, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xaa99, .value=0xdf, .type=IO_READ},
        {.addr=0xaa9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x7c9e, .a=0x31, .x=0xe4, .y=0x38, .sp=0x75, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x7c9e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7c9f, .a=0x97, .x=0xe4, .y=0x38, .sp=0x75, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7c9e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7c9e, .value=0xdf, .type=IO_READ},
        {.addr=0x7c9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x6fd2, .a=0x34, .x=0xac, .y=0xd1, .sp=0x13, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x6fd2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6fd3, .a=0x34, .x=0xac, .y=0xd1, .sp=0x13, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6fd2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6fd2, .value=0xdf, .type=IO_READ},
        {.addr=0x6fd3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xef9a, .a=0x41, .x=0x63, .y=0x45, .sp=0xd8, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xef9a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xef9b, .a=0x41, .x=0x63, .y=0x45, .sp=0xd8, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xef9a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xef9a, .value=0xdf, .type=IO_READ},
        {.addr=0xef9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xdb37, .a=0x62, .x=0xb7, .y=0x4d, .sp=0xa1, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xdb37, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdb38, .a=0x68, .x=0xb7, .y=0x4d, .sp=0xa1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xdb37, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdb37, .value=0xdf, .type=IO_READ},
        {.addr=0xdb38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x6346, .a=0x6d, .x=0xf6, .y=0xa5, .sp=0x4d, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6346, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6347, .a=0x73, .x=0xf6, .y=0xa5, .sp=0x4d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6346, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6346, .value=0xdf, .type=IO_READ},
        {.addr=0x6347, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x8ff6, .a=0x1e, .x=0xaa, .y=0xdc, .sp=0xa7, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8ff7, .a=0x24, .x=0xaa, .y=0xdc, .sp=0xa7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8ff6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8ff6, .value=0xdf, .type=IO_READ},
        {.addr=0x8ff7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x4cf9, .a=0xc4, .x=0xbe, .y=0xb9, .sp=0x76, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4cfa, .a=0x24, .x=0xbe, .y=0xb9, .sp=0x76, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4cf9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4cf9, .value=0xdf, .type=IO_READ},
        {.addr=0x4cfa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x9d40, .a=0x4d, .x=0x85, .y=0x0a, .sp=0x9c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x9d40, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9d41, .a=0xb3, .x=0x85, .y=0x0a, .sp=0x9c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9d40, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9d40, .value=0xdf, .type=IO_READ},
        {.addr=0x9d41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x25c6, .a=0x4e, .x=0x53, .y=0x9b, .sp=0x11, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x25c6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x25c7, .a=0xb4, .x=0x53, .y=0x9b, .sp=0x11, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x25c6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x25c6, .value=0xdf, .type=IO_READ},
        {.addr=0x25c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x6bdb, .a=0x63, .x=0xbd, .y=0x6d, .sp=0xc0, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x6bdb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6bdc, .a=0xc3, .x=0xbd, .y=0x6d, .sp=0xc0, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6bdb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6bdb, .value=0xdf, .type=IO_READ},
        {.addr=0x6bdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x753f, .a=0xca, .x=0xfa, .y=0x59, .sp=0xc2, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x753f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7540, .a=0x30, .x=0xfa, .y=0x59, .sp=0xc2, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x753f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x753f, .value=0xdf, .type=IO_READ},
        {.addr=0x7540, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x6d16, .a=0x20, .x=0x6e, .y=0xc5, .sp=0x95, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6d16, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6d17, .a=0x20, .x=0x6e, .y=0xc5, .sp=0x95, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x6d16, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6d16, .value=0xdf, .type=IO_READ},
        {.addr=0x6d17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xb02d, .a=0x99, .x=0x83, .y=0xa6, .sp=0x84, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xb02d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb02e, .a=0x99, .x=0x83, .y=0xa6, .sp=0x84, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb02d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb02d, .value=0xdf, .type=IO_READ},
        {.addr=0xb02e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xae6b, .a=0x08, .x=0x1f, .y=0x37, .sp=0xe5, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xae6b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xae6c, .a=0x08, .x=0x1f, .y=0x37, .sp=0xe5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xae6b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xae6b, .value=0xdf, .type=IO_READ},
        {.addr=0xae6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x136f, .a=0xa3, .x=0x14, .y=0xe1, .sp=0xf1, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x136f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1370, .a=0x09, .x=0x14, .y=0xe1, .sp=0xf1, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x136f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x136f, .value=0xdf, .type=IO_READ},
        {.addr=0x1370, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x7506, .a=0x19, .x=0x9b, .y=0xea, .sp=0x8c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x7506, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7507, .a=0x1f, .x=0x9b, .y=0xea, .sp=0x8c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7506, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7506, .value=0xdf, .type=IO_READ},
        {.addr=0x7507, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xda38, .a=0x25, .x=0x53, .y=0x4d, .sp=0xd7, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xda38, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xda39, .a=0x8b, .x=0x53, .y=0x4d, .sp=0xd7, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xda38, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xda38, .value=0xdf, .type=IO_READ},
        {.addr=0xda39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x17a0, .a=0x34, .x=0x10, .y=0x6c, .sp=0x10, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x17a0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x17a1, .a=0x94, .x=0x10, .y=0x6c, .sp=0x10, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x17a0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x17a0, .value=0xdf, .type=IO_READ},
        {.addr=0x17a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x6775, .a=0xdb, .x=0x1d, .y=0xea, .sp=0x6b, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x6775, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6776, .a=0x41, .x=0x1d, .y=0xea, .sp=0x6b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6775, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6775, .value=0xdf, .type=IO_READ},
        {.addr=0x6776, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x42ab, .a=0x4f, .x=0x60, .y=0x78, .sp=0x46, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x42ab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x42ac, .a=0xb5, .x=0x60, .y=0x78, .sp=0x46, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x42ab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x42ab, .value=0xdf, .type=IO_READ},
        {.addr=0x42ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x8194, .a=0x2e, .x=0x59, .y=0xf2, .sp=0x1f, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x8194, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8195, .a=0x94, .x=0x59, .y=0xf2, .sp=0x1f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8194, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8194, .value=0xdf, .type=IO_READ},
        {.addr=0x8195, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x09d8, .a=0x55, .x=0xea, .y=0xa7, .sp=0xe6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x09d8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x09d9, .a=0xb5, .x=0xea, .y=0xa7, .sp=0xe6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x09d8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x09d8, .value=0xdf, .type=IO_READ},
        {.addr=0x09d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xe974, .a=0xf0, .x=0xdf, .y=0x0e, .sp=0x2e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xe974, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe975, .a=0x56, .x=0xdf, .y=0x0e, .sp=0x2e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xe974, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe974, .value=0xdf, .type=IO_READ},
        {.addr=0xe975, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x07b1, .a=0x09, .x=0x75, .y=0x4c, .sp=0xfd, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x07b1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x07b2, .a=0x0f, .x=0x75, .y=0x4c, .sp=0xfd, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x07b1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x07b1, .value=0xdf, .type=IO_READ},
        {.addr=0x07b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xb791, .a=0x54, .x=0x1a, .y=0xb9, .sp=0x84, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xb791, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb792, .a=0xba, .x=0x1a, .y=0xb9, .sp=0x84, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb791, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb791, .value=0xdf, .type=IO_READ},
        {.addr=0xb792, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x0269, .a=0x10, .x=0xc6, .y=0x97, .sp=0x84, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0269, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x026a, .a=0x16, .x=0xc6, .y=0x97, .sp=0x84, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0269, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0269, .value=0xdf, .type=IO_READ},
        {.addr=0x026a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x88c2, .a=0x18, .x=0xb1, .y=0xfa, .sp=0x7f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x88c2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x88c3, .a=0x1e, .x=0xb1, .y=0xfa, .sp=0x7f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x88c2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x88c2, .value=0xdf, .type=IO_READ},
        {.addr=0x88c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xb4f4, .a=0xfb, .x=0xd0, .y=0xf9, .sp=0xf5, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb4f5, .a=0x61, .x=0xd0, .y=0xf9, .sp=0xf5, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb4f4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb4f4, .value=0xdf, .type=IO_READ},
        {.addr=0xb4f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xa0d9, .a=0xda, .x=0x1c, .y=0x77, .sp=0x4c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa0da, .a=0x40, .x=0x1c, .y=0x77, .sp=0x4c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa0d9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa0d9, .value=0xdf, .type=IO_READ},
        {.addr=0xa0da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x896c, .a=0xe5, .x=0x0a, .y=0x9f, .sp=0x67, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x896c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x896d, .a=0x4b, .x=0x0a, .y=0x9f, .sp=0x67, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x896c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x896c, .value=0xdf, .type=IO_READ},
        {.addr=0x896d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xa652, .a=0x1f, .x=0xca, .y=0x35, .sp=0xf0, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xa652, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa653, .a=0x25, .x=0xca, .y=0x35, .sp=0xf0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa652, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa652, .value=0xdf, .type=IO_READ},
        {.addr=0xa653, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x0418, .a=0x5c, .x=0xd5, .y=0x4f, .sp=0x19, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0418, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0419, .a=0x62, .x=0xd5, .y=0x4f, .sp=0x19, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0418, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0418, .value=0xdf, .type=IO_READ},
        {.addr=0x0419, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xb6d9, .a=0x0e, .x=0x7e, .y=0xb4, .sp=0x74, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb6d9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb6da, .a=0x14, .x=0x7e, .y=0xb4, .sp=0x74, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb6d9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb6d9, .value=0xdf, .type=IO_READ},
        {.addr=0xb6da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x0040, .a=0x2a, .x=0x97, .y=0x2c, .sp=0x75, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0041, .a=0x90, .x=0x97, .y=0x2c, .sp=0x75, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0040, .value=0xdf, .type=IO_READ},
        {.addr=0x0041, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xc96f, .a=0x8b, .x=0x91, .y=0xdc, .sp=0x4a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc96f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc970, .a=0xf1, .x=0x91, .y=0xdc, .sp=0x4a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc96f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc96f, .value=0xdf, .type=IO_READ},
        {.addr=0xc970, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xa94f, .a=0x51, .x=0xf1, .y=0x43, .sp=0x1d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xa94f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa950, .a=0xb7, .x=0xf1, .y=0x43, .sp=0x1d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa94f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa94f, .value=0xdf, .type=IO_READ},
        {.addr=0xa950, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xfb78, .a=0x34, .x=0x7d, .y=0x23, .sp=0x44, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xfb78, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfb79, .a=0x34, .x=0x7d, .y=0x23, .sp=0x44, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfb78, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfb78, .value=0xdf, .type=IO_READ},
        {.addr=0xfb79, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x5d51, .a=0x83, .x=0xa6, .y=0x80, .sp=0xe5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x5d51, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5d52, .a=0xe9, .x=0xa6, .y=0x80, .sp=0xe5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5d51, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5d51, .value=0xdf, .type=IO_READ},
        {.addr=0x5d52, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x67d1, .a=0x99, .x=0x8c, .y=0x7d, .sp=0xd2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x67d1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x67d2, .a=0xf9, .x=0x8c, .y=0x7d, .sp=0xd2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x67d1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x67d1, .value=0xdf, .type=IO_READ},
        {.addr=0x67d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x0da9, .a=0x3c, .x=0x60, .y=0xd7, .sp=0x9d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0da9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0daa, .a=0x42, .x=0x60, .y=0xd7, .sp=0x9d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0da9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0da9, .value=0xdf, .type=IO_READ},
        {.addr=0x0daa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xc45a, .a=0xa4, .x=0x98, .y=0x72, .sp=0xee, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xc45a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc45b, .a=0x0a, .x=0x98, .y=0x72, .sp=0xee, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc45a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc45a, .value=0xdf, .type=IO_READ},
        {.addr=0xc45b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xf3a9, .a=0x70, .x=0xff, .y=0x96, .sp=0xbc, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf3aa, .a=0x76, .x=0xff, .y=0x96, .sp=0xbc, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf3a9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf3a9, .value=0xdf, .type=IO_READ},
        {.addr=0xf3aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x79cf, .a=0x79, .x=0x28, .y=0x7d, .sp=0xe2, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x79cf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x79d0, .a=0x79, .x=0x28, .y=0x7d, .sp=0xe2, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x79cf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x79cf, .value=0xdf, .type=IO_READ},
        {.addr=0x79d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x6b18, .a=0x8d, .x=0x98, .y=0xbb, .sp=0xc1, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x6b18, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6b19, .a=0x93, .x=0x98, .y=0xbb, .sp=0xc1, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6b18, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6b18, .value=0xdf, .type=IO_READ},
        {.addr=0x6b19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xd906, .a=0xc4, .x=0xe5, .y=0xfb, .sp=0xf2, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd906, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd907, .a=0x24, .x=0xe5, .y=0xfb, .sp=0xf2, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd906, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd906, .value=0xdf, .type=IO_READ},
        {.addr=0xd907, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x8381, .a=0xb3, .x=0xc7, .y=0xf5, .sp=0xd1, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x8381, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8382, .a=0x19, .x=0xc7, .y=0xf5, .sp=0xd1, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8381, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8381, .value=0xdf, .type=IO_READ},
        {.addr=0x8382, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xd2e3, .a=0xb6, .x=0xde, .y=0x8e, .sp=0x6f, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xd2e3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd2e4, .a=0x16, .x=0xde, .y=0x8e, .sp=0x6f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd2e3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd2e3, .value=0xdf, .type=IO_READ},
        {.addr=0xd2e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x868e, .a=0xb5, .x=0x27, .y=0xd8, .sp=0xec, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x868e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x868f, .a=0x15, .x=0x27, .y=0xd8, .sp=0xec, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x868e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x868e, .value=0xdf, .type=IO_READ},
        {.addr=0x868f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xcf5b, .a=0xf1, .x=0xdf, .y=0xb0, .sp=0xa4, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xcf5b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcf5c, .a=0x57, .x=0xdf, .y=0xb0, .sp=0xa4, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xcf5b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcf5b, .value=0xdf, .type=IO_READ},
        {.addr=0xcf5c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x46fc, .a=0x23, .x=0x6b, .y=0x3f, .sp=0xcc, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x46fc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x46fd, .a=0x83, .x=0x6b, .y=0x3f, .sp=0xcc, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x46fc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x46fc, .value=0xdf, .type=IO_READ},
        {.addr=0x46fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x1047, .a=0x4f, .x=0x81, .y=0x6c, .sp=0x00, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x1047, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1048, .a=0x55, .x=0x81, .y=0x6c, .sp=0x00, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1047, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1047, .value=0xdf, .type=IO_READ},
        {.addr=0x1048, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xf8b6, .a=0xbf, .x=0x85, .y=0x0a, .sp=0xa8, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xf8b6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf8b7, .a=0x25, .x=0x85, .y=0x0a, .sp=0xa8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xf8b6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf8b6, .value=0xdf, .type=IO_READ},
        {.addr=0xf8b7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xf20f, .a=0x28, .x=0xb2, .y=0xdd, .sp=0x48, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xf20f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf210, .a=0x2e, .x=0xb2, .y=0xdd, .sp=0x48, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf20f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf20f, .value=0xdf, .type=IO_READ},
        {.addr=0xf210, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0100) {
    const struct CPU_State initial_cpu = {.pc=0x99b0, .a=0xca, .x=0x4a, .y=0x37, .sp=0xbb, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x99b0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x99b1, .a=0x30, .x=0x4a, .y=0x37, .sp=0xbb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x99b0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x99b0, .value=0xdf, .type=IO_READ},
        {.addr=0x99b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0101) {
    const struct CPU_State initial_cpu = {.pc=0x6c1c, .a=0x58, .x=0x41, .y=0x83, .sp=0x74, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x6c1c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6c1d, .a=0x58, .x=0x41, .y=0x83, .sp=0x74, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6c1c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6c1c, .value=0xdf, .type=IO_READ},
        {.addr=0x6c1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0102) {
    const struct CPU_State initial_cpu = {.pc=0xa9f7, .a=0x69, .x=0x81, .y=0xc2, .sp=0x36, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xa9f7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa9f8, .a=0xc9, .x=0x81, .y=0xc2, .sp=0x36, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xa9f7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa9f7, .value=0xdf, .type=IO_READ},
        {.addr=0xa9f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0103) {
    const struct CPU_State initial_cpu = {.pc=0x54c3, .a=0x9f, .x=0x3f, .y=0x62, .sp=0x8c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x54c3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x54c4, .a=0x05, .x=0x3f, .y=0x62, .sp=0x8c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x54c3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x54c3, .value=0xdf, .type=IO_READ},
        {.addr=0x54c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0104) {
    const struct CPU_State initial_cpu = {.pc=0x36e1, .a=0x4b, .x=0xdb, .y=0x8e, .sp=0x8c, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x36e1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x36e2, .a=0x51, .x=0xdb, .y=0x8e, .sp=0x8c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x36e1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x36e1, .value=0xdf, .type=IO_READ},
        {.addr=0x36e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0105) {
    const struct CPU_State initial_cpu = {.pc=0xfcd6, .a=0xc1, .x=0x8d, .y=0xe0, .sp=0xf6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xfcd6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfcd7, .a=0x27, .x=0x8d, .y=0xe0, .sp=0xf6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xfcd6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfcd6, .value=0xdf, .type=IO_READ},
        {.addr=0xfcd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0106) {
    const struct CPU_State initial_cpu = {.pc=0xe3c6, .a=0x51, .x=0x07, .y=0x7a, .sp=0xe0, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xe3c6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe3c7, .a=0xb1, .x=0x07, .y=0x7a, .sp=0xe0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe3c6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe3c6, .value=0xdf, .type=IO_READ},
        {.addr=0xe3c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0107) {
    const struct CPU_State initial_cpu = {.pc=0x1937, .a=0xf8, .x=0xbf, .y=0x7c, .sp=0x04, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1937, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1938, .a=0x58, .x=0xbf, .y=0x7c, .sp=0x04, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1937, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1937, .value=0xdf, .type=IO_READ},
        {.addr=0x1938, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0108) {
    const struct CPU_State initial_cpu = {.pc=0x6f7d, .a=0x4a, .x=0x1b, .y=0xdf, .sp=0xa8, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x6f7d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6f7e, .a=0xb0, .x=0x1b, .y=0xdf, .sp=0xa8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6f7d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6f7d, .value=0xdf, .type=IO_READ},
        {.addr=0x6f7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0109) {
    const struct CPU_State initial_cpu = {.pc=0x7080, .a=0x55, .x=0x1a, .y=0x2e, .sp=0x13, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7080, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7081, .a=0xbb, .x=0x1a, .y=0x2e, .sp=0x13, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7080, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7080, .value=0xdf, .type=IO_READ},
        {.addr=0x7081, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_010A) {
    const struct CPU_State initial_cpu = {.pc=0xdb26, .a=0x51, .x=0x8b, .y=0xe3, .sp=0x14, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xdb26, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdb27, .a=0xb1, .x=0x8b, .y=0xe3, .sp=0x14, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xdb26, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdb26, .value=0xdf, .type=IO_READ},
        {.addr=0xdb27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_010B) {
    const struct CPU_State initial_cpu = {.pc=0x28a7, .a=0xad, .x=0xd5, .y=0x2c, .sp=0xa6, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x28a7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x28a8, .a=0x13, .x=0xd5, .y=0x2c, .sp=0xa6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x28a7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x28a7, .value=0xdf, .type=IO_READ},
        {.addr=0x28a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_010C) {
    const struct CPU_State initial_cpu = {.pc=0x8096, .a=0xa4, .x=0x4f, .y=0x5c, .sp=0xa0, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x8096, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8097, .a=0x04, .x=0x4f, .y=0x5c, .sp=0xa0, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8096, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8096, .value=0xdf, .type=IO_READ},
        {.addr=0x8097, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_010D) {
    const struct CPU_State initial_cpu = {.pc=0x91e8, .a=0x54, .x=0x98, .y=0xea, .sp=0x53, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x91e8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x91e9, .a=0x5a, .x=0x98, .y=0xea, .sp=0x53, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x91e8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x91e8, .value=0xdf, .type=IO_READ},
        {.addr=0x91e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_010E) {
    const struct CPU_State initial_cpu = {.pc=0xf9d5, .a=0x60, .x=0x7b, .y=0xfa, .sp=0x8e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf9d5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf9d6, .a=0x66, .x=0x7b, .y=0xfa, .sp=0x8e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf9d5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf9d5, .value=0xdf, .type=IO_READ},
        {.addr=0xf9d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_010F) {
    const struct CPU_State initial_cpu = {.pc=0x60e4, .a=0xb8, .x=0xb5, .y=0x5b, .sp=0x12, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x60e4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x60e5, .a=0x1e, .x=0xb5, .y=0x5b, .sp=0x12, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x60e4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x60e4, .value=0xdf, .type=IO_READ},
        {.addr=0x60e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0110) {
    const struct CPU_State initial_cpu = {.pc=0x66f8, .a=0x4b, .x=0x0b, .y=0x44, .sp=0xd1, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x66f8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x66f9, .a=0xb1, .x=0x0b, .y=0x44, .sp=0xd1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x66f8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x66f8, .value=0xdf, .type=IO_READ},
        {.addr=0x66f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0111) {
    const struct CPU_State initial_cpu = {.pc=0x882e, .a=0xa3, .x=0x7a, .y=0x61, .sp=0xf3, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x882e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x882f, .a=0x03, .x=0x7a, .y=0x61, .sp=0xf3, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x882e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x882e, .value=0xdf, .type=IO_READ},
        {.addr=0x882f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0112) {
    const struct CPU_State initial_cpu = {.pc=0x2382, .a=0xc1, .x=0xb9, .y=0x4b, .sp=0x15, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x2382, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2383, .a=0x27, .x=0xb9, .y=0x4b, .sp=0x15, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2382, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2382, .value=0xdf, .type=IO_READ},
        {.addr=0x2383, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0113) {
    const struct CPU_State initial_cpu = {.pc=0x4988, .a=0xa3, .x=0x38, .y=0xb7, .sp=0xd1, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x4988, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4989, .a=0x09, .x=0x38, .y=0xb7, .sp=0xd1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4988, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4988, .value=0xdf, .type=IO_READ},
        {.addr=0x4989, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0114) {
    const struct CPU_State initial_cpu = {.pc=0xa648, .a=0x7c, .x=0x68, .y=0xb2, .sp=0x4e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xa648, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa649, .a=0xe2, .x=0x68, .y=0xb2, .sp=0x4e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa648, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa648, .value=0xdf, .type=IO_READ},
        {.addr=0xa649, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0115) {
    const struct CPU_State initial_cpu = {.pc=0x5d0f, .a=0x52, .x=0x3f, .y=0x8a, .sp=0x4a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x5d0f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5d10, .a=0xb2, .x=0x3f, .y=0x8a, .sp=0x4a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5d0f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5d0f, .value=0xdf, .type=IO_READ},
        {.addr=0x5d10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0116) {
    const struct CPU_State initial_cpu = {.pc=0x3af7, .a=0x72, .x=0xab, .y=0x62, .sp=0xa8, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3af7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3af8, .a=0x78, .x=0xab, .y=0x62, .sp=0xa8, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x3af7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3af7, .value=0xdf, .type=IO_READ},
        {.addr=0x3af8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0117) {
    const struct CPU_State initial_cpu = {.pc=0xb215, .a=0x35, .x=0xac, .y=0xf8, .sp=0xc7, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xb215, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb216, .a=0x3b, .x=0xac, .y=0xf8, .sp=0xc7, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb215, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb215, .value=0xdf, .type=IO_READ},
        {.addr=0xb216, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0118) {
    const struct CPU_State initial_cpu = {.pc=0xd3ff, .a=0x3d, .x=0xf9, .y=0x23, .sp=0x9b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xd3ff, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd400, .a=0x43, .x=0xf9, .y=0x23, .sp=0x9b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd3ff, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd3ff, .value=0xdf, .type=IO_READ},
        {.addr=0xd400, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0119) {
    const struct CPU_State initial_cpu = {.pc=0xe337, .a=0xbf, .x=0xcf, .y=0x2b, .sp=0x94, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xe337, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe338, .a=0x25, .x=0xcf, .y=0x2b, .sp=0x94, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xe337, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe337, .value=0xdf, .type=IO_READ},
        {.addr=0xe338, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_011A) {
    const struct CPU_State initial_cpu = {.pc=0x3674, .a=0xe7, .x=0xa9, .y=0x76, .sp=0x2a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x3674, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3675, .a=0x47, .x=0xa9, .y=0x76, .sp=0x2a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3674, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3674, .value=0xdf, .type=IO_READ},
        {.addr=0x3675, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_011B) {
    const struct CPU_State initial_cpu = {.pc=0x08a1, .a=0xed, .x=0x12, .y=0x04, .sp=0xb8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x08a1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x08a2, .a=0x53, .x=0x12, .y=0x04, .sp=0xb8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x08a1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x08a1, .value=0xdf, .type=IO_READ},
        {.addr=0x08a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_011C) {
    const struct CPU_State initial_cpu = {.pc=0xe3dd, .a=0xb1, .x=0x2f, .y=0x5f, .sp=0x03, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xe3dd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe3de, .a=0x17, .x=0x2f, .y=0x5f, .sp=0x03, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe3dd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe3dd, .value=0xdf, .type=IO_READ},
        {.addr=0xe3de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_011D) {
    const struct CPU_State initial_cpu = {.pc=0x4c41, .a=0xad, .x=0xcc, .y=0xd9, .sp=0x53, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x4c41, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4c42, .a=0x13, .x=0xcc, .y=0xd9, .sp=0x53, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4c41, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4c41, .value=0xdf, .type=IO_READ},
        {.addr=0x4c42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_011E) {
    const struct CPU_State initial_cpu = {.pc=0xe0b2, .a=0xf4, .x=0x70, .y=0xfd, .sp=0x08, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe0b2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe0b3, .a=0x54, .x=0x70, .y=0xfd, .sp=0x08, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe0b2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe0b2, .value=0xdf, .type=IO_READ},
        {.addr=0xe0b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_011F) {
    const struct CPU_State initial_cpu = {.pc=0xcafb, .a=0x75, .x=0x5b, .y=0x56, .sp=0xea, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xcafb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcafc, .a=0xd5, .x=0x5b, .y=0x56, .sp=0xea, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xcafb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcafb, .value=0xdf, .type=IO_READ},
        {.addr=0xcafc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0120) {
    const struct CPU_State initial_cpu = {.pc=0xd56d, .a=0x3f, .x=0xfe, .y=0x1f, .sp=0x9b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xd56d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd56e, .a=0x45, .x=0xfe, .y=0x1f, .sp=0x9b, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd56d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd56d, .value=0xdf, .type=IO_READ},
        {.addr=0xd56e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0121) {
    const struct CPU_State initial_cpu = {.pc=0x5d35, .a=0x4a, .x=0x32, .y=0xb1, .sp=0x0d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x5d35, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5d36, .a=0x50, .x=0x32, .y=0xb1, .sp=0x0d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5d35, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5d35, .value=0xdf, .type=IO_READ},
        {.addr=0x5d36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0122) {
    const struct CPU_State initial_cpu = {.pc=0x02fa, .a=0x87, .x=0xf2, .y=0x5b, .sp=0x4e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x02fa, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x02fb, .a=0x87, .x=0xf2, .y=0x5b, .sp=0x4e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x02fa, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x02fa, .value=0xdf, .type=IO_READ},
        {.addr=0x02fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0123) {
    const struct CPU_State initial_cpu = {.pc=0xd7c9, .a=0x22, .x=0xb0, .y=0x73, .sp=0x90, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd7ca, .a=0x28, .x=0xb0, .y=0x73, .sp=0x90, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xd7c9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd7c9, .value=0xdf, .type=IO_READ},
        {.addr=0xd7ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0124) {
    const struct CPU_State initial_cpu = {.pc=0xeba4, .a=0x17, .x=0x90, .y=0x83, .sp=0x3b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xeba4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xeba5, .a=0x17, .x=0x90, .y=0x83, .sp=0x3b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xeba4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xeba4, .value=0xdf, .type=IO_READ},
        {.addr=0xeba5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0125) {
    const struct CPU_State initial_cpu = {.pc=0xc11b, .a=0xfa, .x=0x1b, .y=0x7a, .sp=0x3c, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xc11b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc11c, .a=0x60, .x=0x1b, .y=0x7a, .sp=0x3c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc11b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc11b, .value=0xdf, .type=IO_READ},
        {.addr=0xc11c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0126) {
    const struct CPU_State initial_cpu = {.pc=0x0da1, .a=0x18, .x=0x0e, .y=0xa3, .sp=0x68, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0da1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0da2, .a=0x7e, .x=0x0e, .y=0xa3, .sp=0x68, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0da1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0da1, .value=0xdf, .type=IO_READ},
        {.addr=0x0da2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0127) {
    const struct CPU_State initial_cpu = {.pc=0xbc6a, .a=0x50, .x=0x37, .y=0x12, .sp=0xa3, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xbc6a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbc6b, .a=0xb6, .x=0x37, .y=0x12, .sp=0xa3, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbc6a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbc6a, .value=0xdf, .type=IO_READ},
        {.addr=0xbc6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0128) {
    const struct CPU_State initial_cpu = {.pc=0x8673, .a=0x9e, .x=0xa9, .y=0x01, .sp=0x52, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x8673, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8674, .a=0x04, .x=0xa9, .y=0x01, .sp=0x52, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8673, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8673, .value=0xdf, .type=IO_READ},
        {.addr=0x8674, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0129) {
    const struct CPU_State initial_cpu = {.pc=0x2b88, .a=0xed, .x=0xd8, .y=0xde, .sp=0x19, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2b88, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2b89, .a=0x53, .x=0xd8, .y=0xde, .sp=0x19, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2b88, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2b88, .value=0xdf, .type=IO_READ},
        {.addr=0x2b89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_012A) {
    const struct CPU_State initial_cpu = {.pc=0x1ff3, .a=0xce, .x=0x35, .y=0xf2, .sp=0xc1, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1ff3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1ff4, .a=0x34, .x=0x35, .y=0xf2, .sp=0xc1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1ff3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1ff3, .value=0xdf, .type=IO_READ},
        {.addr=0x1ff4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_012B) {
    const struct CPU_State initial_cpu = {.pc=0x446d, .a=0x0d, .x=0xd5, .y=0xed, .sp=0x37, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x446d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x446e, .a=0x13, .x=0xd5, .y=0xed, .sp=0x37, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x446d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x446d, .value=0xdf, .type=IO_READ},
        {.addr=0x446e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_012C) {
    const struct CPU_State initial_cpu = {.pc=0x546e, .a=0xba, .x=0x43, .y=0xaf, .sp=0x73, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x546e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x546f, .a=0x20, .x=0x43, .y=0xaf, .sp=0x73, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x546e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x546e, .value=0xdf, .type=IO_READ},
        {.addr=0x546f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_012D) {
    const struct CPU_State initial_cpu = {.pc=0x873b, .a=0x67, .x=0xfa, .y=0x47, .sp=0x89, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x873b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x873c, .a=0x6d, .x=0xfa, .y=0x47, .sp=0x89, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x873b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x873b, .value=0xdf, .type=IO_READ},
        {.addr=0x873c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_012E) {
    const struct CPU_State initial_cpu = {.pc=0x31c6, .a=0xea, .x=0x25, .y=0x17, .sp=0x47, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x31c6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x31c7, .a=0x50, .x=0x25, .y=0x17, .sp=0x47, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x31c6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x31c6, .value=0xdf, .type=IO_READ},
        {.addr=0x31c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_012F) {
    const struct CPU_State initial_cpu = {.pc=0x2a4f, .a=0xfb, .x=0x7b, .y=0x1c, .sp=0x4c, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2a4f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2a50, .a=0x61, .x=0x7b, .y=0x1c, .sp=0x4c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2a4f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2a4f, .value=0xdf, .type=IO_READ},
        {.addr=0x2a50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0130) {
    const struct CPU_State initial_cpu = {.pc=0x0ed7, .a=0x8c, .x=0xd5, .y=0xe0, .sp=0x55, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0ed7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0ed8, .a=0xf2, .x=0xd5, .y=0xe0, .sp=0x55, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0ed7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0ed7, .value=0xdf, .type=IO_READ},
        {.addr=0x0ed8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0131) {
    const struct CPU_State initial_cpu = {.pc=0x26cd, .a=0x0b, .x=0xdd, .y=0x3d, .sp=0xd1, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x26cd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x26ce, .a=0x71, .x=0xdd, .y=0x3d, .sp=0xd1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x26cd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x26cd, .value=0xdf, .type=IO_READ},
        {.addr=0x26ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0132) {
    const struct CPU_State initial_cpu = {.pc=0xf9e2, .a=0xfb, .x=0x6a, .y=0x70, .sp=0x73, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf9e3, .a=0x61, .x=0x6a, .y=0x70, .sp=0x73, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf9e2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf9e2, .value=0xdf, .type=IO_READ},
        {.addr=0xf9e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0133) {
    const struct CPU_State initial_cpu = {.pc=0x6933, .a=0x4c, .x=0x71, .y=0x14, .sp=0x33, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6933, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6934, .a=0xb2, .x=0x71, .y=0x14, .sp=0x33, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6933, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6933, .value=0xdf, .type=IO_READ},
        {.addr=0x6934, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0134) {
    const struct CPU_State initial_cpu = {.pc=0x17da, .a=0x3d, .x=0x49, .y=0x59, .sp=0x8f, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x17da, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x17db, .a=0x43, .x=0x49, .y=0x59, .sp=0x8f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x17da, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x17da, .value=0xdf, .type=IO_READ},
        {.addr=0x17db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0135) {
    const struct CPU_State initial_cpu = {.pc=0xc907, .a=0x68, .x=0xb7, .y=0xef, .sp=0xaa, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xc907, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc908, .a=0xc8, .x=0xb7, .y=0xef, .sp=0xaa, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc907, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc907, .value=0xdf, .type=IO_READ},
        {.addr=0xc908, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0136) {
    const struct CPU_State initial_cpu = {.pc=0x6d02, .a=0x0c, .x=0x80, .y=0x53, .sp=0xac, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x6d02, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6d03, .a=0x12, .x=0x80, .y=0x53, .sp=0xac, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6d02, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6d02, .value=0xdf, .type=IO_READ},
        {.addr=0x6d03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0137) {
    const struct CPU_State initial_cpu = {.pc=0xc897, .a=0xa7, .x=0x15, .y=0x49, .sp=0xcc, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xc897, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc898, .a=0x07, .x=0x15, .y=0x49, .sp=0xcc, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc897, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc897, .value=0xdf, .type=IO_READ},
        {.addr=0xc898, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0138) {
    const struct CPU_State initial_cpu = {.pc=0xa397, .a=0x4c, .x=0xd2, .y=0xb6, .sp=0x1a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa397, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa398, .a=0xb2, .x=0xd2, .y=0xb6, .sp=0x1a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa397, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa397, .value=0xdf, .type=IO_READ},
        {.addr=0xa398, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0139) {
    const struct CPU_State initial_cpu = {.pc=0x764d, .a=0x92, .x=0x5b, .y=0xb9, .sp=0x1e, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x764d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x764e, .a=0x92, .x=0x5b, .y=0xb9, .sp=0x1e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x764d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x764d, .value=0xdf, .type=IO_READ},
        {.addr=0x764e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_013A) {
    const struct CPU_State initial_cpu = {.pc=0xa092, .a=0x9c, .x=0xe9, .y=0x74, .sp=0xe8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xa092, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa093, .a=0x02, .x=0xe9, .y=0x74, .sp=0xe8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa092, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa092, .value=0xdf, .type=IO_READ},
        {.addr=0xa093, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_013B) {
    const struct CPU_State initial_cpu = {.pc=0xfda1, .a=0xd4, .x=0xeb, .y=0xc1, .sp=0x6c, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xfda1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfda2, .a=0x34, .x=0xeb, .y=0xc1, .sp=0x6c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfda1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfda1, .value=0xdf, .type=IO_READ},
        {.addr=0xfda2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_013C) {
    const struct CPU_State initial_cpu = {.pc=0x636c, .a=0x57, .x=0x7d, .y=0x2d, .sp=0x22, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x636c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x636d, .a=0xbd, .x=0x7d, .y=0x2d, .sp=0x22, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x636c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x636c, .value=0xdf, .type=IO_READ},
        {.addr=0x636d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_013D) {
    const struct CPU_State initial_cpu = {.pc=0x6710, .a=0xe7, .x=0xd7, .y=0xb7, .sp=0xa4, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x6710, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6711, .a=0x4d, .x=0xd7, .y=0xb7, .sp=0xa4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6710, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6710, .value=0xdf, .type=IO_READ},
        {.addr=0x6711, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_013E) {
    const struct CPU_State initial_cpu = {.pc=0x69f2, .a=0xbf, .x=0xa0, .y=0xa8, .sp=0x3f, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x69f2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x69f3, .a=0x25, .x=0xa0, .y=0xa8, .sp=0x3f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x69f2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x69f2, .value=0xdf, .type=IO_READ},
        {.addr=0x69f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_013F) {
    const struct CPU_State initial_cpu = {.pc=0xc451, .a=0x0a, .x=0x70, .y=0x8b, .sp=0xc1, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xc451, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc452, .a=0x70, .x=0x70, .y=0x8b, .sp=0xc1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc451, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc451, .value=0xdf, .type=IO_READ},
        {.addr=0xc452, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0140) {
    const struct CPU_State initial_cpu = {.pc=0x45cb, .a=0x28, .x=0xb9, .y=0x50, .sp=0x0c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x45cb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x45cc, .a=0x2e, .x=0xb9, .y=0x50, .sp=0x0c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x45cb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x45cb, .value=0xdf, .type=IO_READ},
        {.addr=0x45cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0141) {
    const struct CPU_State initial_cpu = {.pc=0xc358, .a=0x6e, .x=0xfd, .y=0xe8, .sp=0xdc, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xc358, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc359, .a=0x74, .x=0xfd, .y=0xe8, .sp=0xdc, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc358, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc358, .value=0xdf, .type=IO_READ},
        {.addr=0xc359, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0142) {
    const struct CPU_State initial_cpu = {.pc=0x3e73, .a=0xbf, .x=0x8b, .y=0x0f, .sp=0x53, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x3e73, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3e74, .a=0x25, .x=0x8b, .y=0x0f, .sp=0x53, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3e73, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3e73, .value=0xdf, .type=IO_READ},
        {.addr=0x3e74, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0143) {
    const struct CPU_State initial_cpu = {.pc=0xb178, .a=0x97, .x=0xc4, .y=0x63, .sp=0xe3, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xb178, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb179, .a=0x97, .x=0xc4, .y=0x63, .sp=0xe3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb178, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb178, .value=0xdf, .type=IO_READ},
        {.addr=0xb179, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0144) {
    const struct CPU_State initial_cpu = {.pc=0x7789, .a=0x9e, .x=0x86, .y=0x28, .sp=0xb3, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x7789, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x778a, .a=0x04, .x=0x86, .y=0x28, .sp=0xb3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7789, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7789, .value=0xdf, .type=IO_READ},
        {.addr=0x778a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0145) {
    const struct CPU_State initial_cpu = {.pc=0x09fb, .a=0x69, .x=0xb3, .y=0x0b, .sp=0xa0, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x09fb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x09fc, .a=0xc9, .x=0xb3, .y=0x0b, .sp=0xa0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x09fb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x09fb, .value=0xdf, .type=IO_READ},
        {.addr=0x09fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0146) {
    const struct CPU_State initial_cpu = {.pc=0xade8, .a=0x3e, .x=0x39, .y=0x89, .sp=0x3e, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xade8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xade9, .a=0xa4, .x=0x39, .y=0x89, .sp=0x3e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xade8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xade8, .value=0xdf, .type=IO_READ},
        {.addr=0xade9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0147) {
    const struct CPU_State initial_cpu = {.pc=0x67f6, .a=0xfc, .x=0x9c, .y=0x93, .sp=0x36, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x67f6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x67f7, .a=0x62, .x=0x9c, .y=0x93, .sp=0x36, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x67f6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x67f6, .value=0xdf, .type=IO_READ},
        {.addr=0x67f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0148) {
    const struct CPU_State initial_cpu = {.pc=0x9665, .a=0x67, .x=0x65, .y=0x67, .sp=0xba, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x9665, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9666, .a=0x67, .x=0x65, .y=0x67, .sp=0xba, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x9665, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9665, .value=0xdf, .type=IO_READ},
        {.addr=0x9666, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0149) {
    const struct CPU_State initial_cpu = {.pc=0x373e, .a=0x86, .x=0x1d, .y=0xfc, .sp=0x2f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x373e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x373f, .a=0x86, .x=0x1d, .y=0xfc, .sp=0x2f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x373e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x373e, .value=0xdf, .type=IO_READ},
        {.addr=0x373f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_014A) {
    const struct CPU_State initial_cpu = {.pc=0x820f, .a=0x4b, .x=0x64, .y=0xd3, .sp=0xec, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x820f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8210, .a=0x51, .x=0x64, .y=0xd3, .sp=0xec, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x820f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x820f, .value=0xdf, .type=IO_READ},
        {.addr=0x8210, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_014B) {
    const struct CPU_State initial_cpu = {.pc=0xa555, .a=0x89, .x=0xb9, .y=0xb1, .sp=0x6c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xa555, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa556, .a=0x89, .x=0xb9, .y=0xb1, .sp=0x6c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa555, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa555, .value=0xdf, .type=IO_READ},
        {.addr=0xa556, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_014C) {
    const struct CPU_State initial_cpu = {.pc=0xeac6, .a=0x71, .x=0xfc, .y=0xa4, .sp=0x54, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xeac6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xeac7, .a=0xd1, .x=0xfc, .y=0xa4, .sp=0x54, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xeac6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xeac6, .value=0xdf, .type=IO_READ},
        {.addr=0xeac7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_014D) {
    const struct CPU_State initial_cpu = {.pc=0x20ed, .a=0xd1, .x=0xd4, .y=0x62, .sp=0xe9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x20ed, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x20ee, .a=0x37, .x=0xd4, .y=0x62, .sp=0xe9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x20ed, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x20ed, .value=0xdf, .type=IO_READ},
        {.addr=0x20ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_014E) {
    const struct CPU_State initial_cpu = {.pc=0x3901, .a=0xe4, .x=0xe3, .y=0xe1, .sp=0x9a, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x3901, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3902, .a=0x44, .x=0xe3, .y=0xe1, .sp=0x9a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3901, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3901, .value=0xdf, .type=IO_READ},
        {.addr=0x3902, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_014F) {
    const struct CPU_State initial_cpu = {.pc=0xbfe4, .a=0x24, .x=0x86, .y=0x7d, .sp=0xde, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xbfe4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbfe5, .a=0x2a, .x=0x86, .y=0x7d, .sp=0xde, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xbfe4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbfe4, .value=0xdf, .type=IO_READ},
        {.addr=0xbfe5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0150) {
    const struct CPU_State initial_cpu = {.pc=0x5b92, .a=0x06, .x=0x9c, .y=0x02, .sp=0x61, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5b92, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5b93, .a=0x6c, .x=0x9c, .y=0x02, .sp=0x61, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5b92, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5b92, .value=0xdf, .type=IO_READ},
        {.addr=0x5b93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0151) {
    const struct CPU_State initial_cpu = {.pc=0x22f8, .a=0xce, .x=0xb7, .y=0x18, .sp=0xef, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x22f8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x22f9, .a=0x34, .x=0xb7, .y=0x18, .sp=0xef, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x22f8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x22f8, .value=0xdf, .type=IO_READ},
        {.addr=0x22f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0152) {
    const struct CPU_State initial_cpu = {.pc=0xda3d, .a=0xdc, .x=0x2c, .y=0xcc, .sp=0x95, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xda3d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xda3e, .a=0x42, .x=0x2c, .y=0xcc, .sp=0x95, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xda3d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xda3d, .value=0xdf, .type=IO_READ},
        {.addr=0xda3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0153) {
    const struct CPU_State initial_cpu = {.pc=0x4b89, .a=0x9c, .x=0x0e, .y=0x35, .sp=0x91, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x4b89, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4b8a, .a=0x02, .x=0x0e, .y=0x35, .sp=0x91, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4b89, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4b89, .value=0xdf, .type=IO_READ},
        {.addr=0x4b8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0154) {
    const struct CPU_State initial_cpu = {.pc=0xd85a, .a=0xad, .x=0xef, .y=0xf2, .sp=0xa2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd85a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd85b, .a=0x13, .x=0xef, .y=0xf2, .sp=0xa2, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd85a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd85a, .value=0xdf, .type=IO_READ},
        {.addr=0xd85b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0155) {
    const struct CPU_State initial_cpu = {.pc=0x981d, .a=0x2b, .x=0x99, .y=0x72, .sp=0x80, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x981d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x981e, .a=0x31, .x=0x99, .y=0x72, .sp=0x80, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x981d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x981d, .value=0xdf, .type=IO_READ},
        {.addr=0x981e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0156) {
    const struct CPU_State initial_cpu = {.pc=0x2da0, .a=0x80, .x=0x74, .y=0xdf, .sp=0xb0, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x2da0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2da1, .a=0xe6, .x=0x74, .y=0xdf, .sp=0xb0, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2da0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2da0, .value=0xdf, .type=IO_READ},
        {.addr=0x2da1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0157) {
    const struct CPU_State initial_cpu = {.pc=0x065e, .a=0xf4, .x=0xac, .y=0x4b, .sp=0xf0, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x065e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x065f, .a=0x54, .x=0xac, .y=0x4b, .sp=0xf0, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x065e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x065e, .value=0xdf, .type=IO_READ},
        {.addr=0x065f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0158) {
    const struct CPU_State initial_cpu = {.pc=0x7ae2, .a=0xf9, .x=0x3c, .y=0xbc, .sp=0x4c, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7ae3, .a=0x5f, .x=0x3c, .y=0xbc, .sp=0x4c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7ae2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7ae2, .value=0xdf, .type=IO_READ},
        {.addr=0x7ae3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0159) {
    const struct CPU_State initial_cpu = {.pc=0x79b3, .a=0xaa, .x=0x52, .y=0x89, .sp=0x1b, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x79b3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x79b4, .a=0x10, .x=0x52, .y=0x89, .sp=0x1b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x79b3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x79b3, .value=0xdf, .type=IO_READ},
        {.addr=0x79b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_015A) {
    const struct CPU_State initial_cpu = {.pc=0x8a1c, .a=0x4b, .x=0x2a, .y=0xb7, .sp=0x9c, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x8a1c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8a1d, .a=0x51, .x=0x2a, .y=0xb7, .sp=0x9c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8a1c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8a1c, .value=0xdf, .type=IO_READ},
        {.addr=0x8a1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_015B) {
    const struct CPU_State initial_cpu = {.pc=0xb71a, .a=0x85, .x=0x2d, .y=0x9c, .sp=0xc5, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xb71a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb71b, .a=0x8b, .x=0x2d, .y=0x9c, .sp=0xc5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb71a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb71a, .value=0xdf, .type=IO_READ},
        {.addr=0xb71b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_015C) {
    const struct CPU_State initial_cpu = {.pc=0x31d3, .a=0x64, .x=0x94, .y=0xd6, .sp=0xf6, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x31d3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x31d4, .a=0xca, .x=0x94, .y=0xd6, .sp=0xf6, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x31d3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x31d3, .value=0xdf, .type=IO_READ},
        {.addr=0x31d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_015D) {
    const struct CPU_State initial_cpu = {.pc=0xf85d, .a=0xd8, .x=0x01, .y=0x6f, .sp=0x9c, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf85d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf85e, .a=0x38, .x=0x01, .y=0x6f, .sp=0x9c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf85d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf85d, .value=0xdf, .type=IO_READ},
        {.addr=0xf85e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_015E) {
    const struct CPU_State initial_cpu = {.pc=0x502a, .a=0xfa, .x=0x4e, .y=0x56, .sp=0x39, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x502a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x502b, .a=0x60, .x=0x4e, .y=0x56, .sp=0x39, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x502a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x502a, .value=0xdf, .type=IO_READ},
        {.addr=0x502b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_015F) {
    const struct CPU_State initial_cpu = {.pc=0x20a7, .a=0xc7, .x=0x62, .y=0xa2, .sp=0x3b, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x20a7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x20a8, .a=0x27, .x=0x62, .y=0xa2, .sp=0x3b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x20a7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x20a7, .value=0xdf, .type=IO_READ},
        {.addr=0x20a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0160) {
    const struct CPU_State initial_cpu = {.pc=0x81da, .a=0xba, .x=0x7a, .y=0x68, .sp=0x0d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x81da, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x81db, .a=0x20, .x=0x7a, .y=0x68, .sp=0x0d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x81da, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x81da, .value=0xdf, .type=IO_READ},
        {.addr=0x81db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0161) {
    const struct CPU_State initial_cpu = {.pc=0x050d, .a=0xa4, .x=0x1c, .y=0x00, .sp=0x21, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x050d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x050e, .a=0x04, .x=0x1c, .y=0x00, .sp=0x21, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x050d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x050d, .value=0xdf, .type=IO_READ},
        {.addr=0x050e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0162) {
    const struct CPU_State initial_cpu = {.pc=0x0735, .a=0x6e, .x=0x5f, .y=0x87, .sp=0x37, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0735, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0736, .a=0x74, .x=0x5f, .y=0x87, .sp=0x37, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0735, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0735, .value=0xdf, .type=IO_READ},
        {.addr=0x0736, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0163) {
    const struct CPU_State initial_cpu = {.pc=0xfe21, .a=0xf8, .x=0xc7, .y=0xc1, .sp=0x56, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xfe21, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfe22, .a=0x5e, .x=0xc7, .y=0xc1, .sp=0x56, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfe21, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfe21, .value=0xdf, .type=IO_READ},
        {.addr=0xfe22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0164) {
    const struct CPU_State initial_cpu = {.pc=0xf4e8, .a=0x46, .x=0x67, .y=0x4a, .sp=0x28, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf4e9, .a=0x46, .x=0x67, .y=0x4a, .sp=0x28, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf4e8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf4e8, .value=0xdf, .type=IO_READ},
        {.addr=0xf4e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0165) {
    const struct CPU_State initial_cpu = {.pc=0xde76, .a=0x2d, .x=0xf6, .y=0x6b, .sp=0xcc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xde76, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xde77, .a=0x93, .x=0xf6, .y=0x6b, .sp=0xcc, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xde76, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xde76, .value=0xdf, .type=IO_READ},
        {.addr=0xde77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0166) {
    const struct CPU_State initial_cpu = {.pc=0x1924, .a=0x34, .x=0x6e, .y=0x14, .sp=0x63, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1924, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1925, .a=0x9a, .x=0x6e, .y=0x14, .sp=0x63, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1924, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1924, .value=0xdf, .type=IO_READ},
        {.addr=0x1925, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0167) {
    const struct CPU_State initial_cpu = {.pc=0xe269, .a=0x08, .x=0x70, .y=0x1c, .sp=0x7a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xe269, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe26a, .a=0x6e, .x=0x70, .y=0x1c, .sp=0x7a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe269, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe269, .value=0xdf, .type=IO_READ},
        {.addr=0xe26a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0168) {
    const struct CPU_State initial_cpu = {.pc=0x2b0c, .a=0x52, .x=0x9f, .y=0xb3, .sp=0xa4, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2b0c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2b0d, .a=0xb8, .x=0x9f, .y=0xb3, .sp=0xa4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2b0c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2b0c, .value=0xdf, .type=IO_READ},
        {.addr=0x2b0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0169) {
    const struct CPU_State initial_cpu = {.pc=0xed0b, .a=0xa9, .x=0x5b, .y=0xa6, .sp=0xd8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xed0b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xed0c, .a=0x09, .x=0x5b, .y=0xa6, .sp=0xd8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xed0b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xed0b, .value=0xdf, .type=IO_READ},
        {.addr=0xed0c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_016A) {
    const struct CPU_State initial_cpu = {.pc=0xfd5e, .a=0x3b, .x=0xb2, .y=0x69, .sp=0xaf, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xfd5e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfd5f, .a=0xa1, .x=0xb2, .y=0x69, .sp=0xaf, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xfd5e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfd5e, .value=0xdf, .type=IO_READ},
        {.addr=0xfd5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_016B) {
    const struct CPU_State initial_cpu = {.pc=0x5da3, .a=0x68, .x=0x52, .y=0xd1, .sp=0xbf, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x5da3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5da4, .a=0x68, .x=0x52, .y=0xd1, .sp=0xbf, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x5da3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5da3, .value=0xdf, .type=IO_READ},
        {.addr=0x5da4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_016C) {
    const struct CPU_State initial_cpu = {.pc=0x0a47, .a=0x72, .x=0x1c, .y=0x3b, .sp=0xea, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0a47, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0a48, .a=0xd2, .x=0x1c, .y=0x3b, .sp=0xea, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0a47, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0a47, .value=0xdf, .type=IO_READ},
        {.addr=0x0a48, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_016D) {
    const struct CPU_State initial_cpu = {.pc=0xe7fe, .a=0x3b, .x=0xaa, .y=0xc2, .sp=0x93, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xe7fe, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe7ff, .a=0x41, .x=0xaa, .y=0xc2, .sp=0x93, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xe7fe, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe7fe, .value=0xdf, .type=IO_READ},
        {.addr=0xe7ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_016E) {
    const struct CPU_State initial_cpu = {.pc=0xacc2, .a=0xf6, .x=0xcf, .y=0x89, .sp=0x82, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xacc2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xacc3, .a=0x5c, .x=0xcf, .y=0x89, .sp=0x82, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xacc2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xacc2, .value=0xdf, .type=IO_READ},
        {.addr=0xacc3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_016F) {
    const struct CPU_State initial_cpu = {.pc=0x283d, .a=0x3e, .x=0x32, .y=0x36, .sp=0x07, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x283d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x283e, .a=0x44, .x=0x32, .y=0x36, .sp=0x07, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x283d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x283d, .value=0xdf, .type=IO_READ},
        {.addr=0x283e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0170) {
    const struct CPU_State initial_cpu = {.pc=0x642d, .a=0x0e, .x=0x8c, .y=0xbc, .sp=0x05, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x642d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x642e, .a=0x14, .x=0x8c, .y=0xbc, .sp=0x05, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x642d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x642d, .value=0xdf, .type=IO_READ},
        {.addr=0x642e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0171) {
    const struct CPU_State initial_cpu = {.pc=0x48aa, .a=0xa7, .x=0x63, .y=0xe5, .sp=0x5a, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x48aa, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x48ab, .a=0x0d, .x=0x63, .y=0xe5, .sp=0x5a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x48aa, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x48aa, .value=0xdf, .type=IO_READ},
        {.addr=0x48ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0172) {
    const struct CPU_State initial_cpu = {.pc=0x0333, .a=0x1e, .x=0xf4, .y=0x52, .sp=0xd5, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0333, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0334, .a=0x84, .x=0xf4, .y=0x52, .sp=0xd5, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0333, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0333, .value=0xdf, .type=IO_READ},
        {.addr=0x0334, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0173) {
    const struct CPU_State initial_cpu = {.pc=0x151d, .a=0x48, .x=0xc2, .y=0x36, .sp=0x2a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x151d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x151e, .a=0xae, .x=0xc2, .y=0x36, .sp=0x2a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x151d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x151d, .value=0xdf, .type=IO_READ},
        {.addr=0x151e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0174) {
    const struct CPU_State initial_cpu = {.pc=0x5a6e, .a=0x0a, .x=0x3e, .y=0x33, .sp=0xa8, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x5a6e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5a6f, .a=0x70, .x=0x3e, .y=0x33, .sp=0xa8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5a6e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5a6e, .value=0xdf, .type=IO_READ},
        {.addr=0x5a6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0175) {
    const struct CPU_State initial_cpu = {.pc=0x2a1f, .a=0x2e, .x=0xc9, .y=0xdb, .sp=0xb1, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x2a1f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2a20, .a=0x34, .x=0xc9, .y=0xdb, .sp=0xb1, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2a1f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2a1f, .value=0xdf, .type=IO_READ},
        {.addr=0x2a20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0176) {
    const struct CPU_State initial_cpu = {.pc=0x1f8a, .a=0xd9, .x=0x2a, .y=0xc4, .sp=0xa4, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x1f8a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1f8b, .a=0x3f, .x=0x2a, .y=0xc4, .sp=0xa4, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1f8a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1f8a, .value=0xdf, .type=IO_READ},
        {.addr=0x1f8b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0177) {
    const struct CPU_State initial_cpu = {.pc=0x97b3, .a=0x4d, .x=0x0e, .y=0x82, .sp=0xc8, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x97b3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x97b4, .a=0x53, .x=0x0e, .y=0x82, .sp=0xc8, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x97b3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x97b3, .value=0xdf, .type=IO_READ},
        {.addr=0x97b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0178) {
    const struct CPU_State initial_cpu = {.pc=0xe439, .a=0x96, .x=0x0a, .y=0x3f, .sp=0x9d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xe439, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe43a, .a=0xfc, .x=0x0a, .y=0x3f, .sp=0x9d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xe439, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe439, .value=0xdf, .type=IO_READ},
        {.addr=0xe43a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0179) {
    const struct CPU_State initial_cpu = {.pc=0x3fe7, .a=0x0c, .x=0x36, .y=0xa8, .sp=0x40, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3fe8, .a=0x12, .x=0x36, .y=0xa8, .sp=0x40, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3fe7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3fe7, .value=0xdf, .type=IO_READ},
        {.addr=0x3fe8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_017A) {
    const struct CPU_State initial_cpu = {.pc=0xf273, .a=0xa2, .x=0x56, .y=0x30, .sp=0x26, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xf273, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf274, .a=0x02, .x=0x56, .y=0x30, .sp=0x26, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf273, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf273, .value=0xdf, .type=IO_READ},
        {.addr=0xf274, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_017B) {
    const struct CPU_State initial_cpu = {.pc=0xaaa9, .a=0x92, .x=0x33, .y=0x6d, .sp=0x64, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xaaa9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xaaaa, .a=0x92, .x=0x33, .y=0x6d, .sp=0x64, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xaaa9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xaaa9, .value=0xdf, .type=IO_READ},
        {.addr=0xaaaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_017C) {
    const struct CPU_State initial_cpu = {.pc=0xa965, .a=0x96, .x=0xd5, .y=0xce, .sp=0xe8, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa965, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa966, .a=0xf6, .x=0xd5, .y=0xce, .sp=0xe8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xa965, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa965, .value=0xdf, .type=IO_READ},
        {.addr=0xa966, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_017D) {
    const struct CPU_State initial_cpu = {.pc=0x3eaf, .a=0xa4, .x=0x19, .y=0xc1, .sp=0xea, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x3eaf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3eb0, .a=0x04, .x=0x19, .y=0xc1, .sp=0xea, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x3eaf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3eaf, .value=0xdf, .type=IO_READ},
        {.addr=0x3eb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_017E) {
    const struct CPU_State initial_cpu = {.pc=0x96ba, .a=0xe6, .x=0x9e, .y=0x45, .sp=0x2e, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x96ba, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x96bb, .a=0x4c, .x=0x9e, .y=0x45, .sp=0x2e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x96ba, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x96ba, .value=0xdf, .type=IO_READ},
        {.addr=0x96bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_017F) {
    const struct CPU_State initial_cpu = {.pc=0xa605, .a=0x98, .x=0x92, .y=0xb4, .sp=0x00, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xa605, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa606, .a=0xfe, .x=0x92, .y=0xb4, .sp=0x00, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa605, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa605, .value=0xdf, .type=IO_READ},
        {.addr=0xa606, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0180) {
    const struct CPU_State initial_cpu = {.pc=0xe5b2, .a=0x9c, .x=0xcb, .y=0x81, .sp=0x18, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe5b2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe5b3, .a=0x02, .x=0xcb, .y=0x81, .sp=0x18, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe5b2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe5b2, .value=0xdf, .type=IO_READ},
        {.addr=0xe5b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0181) {
    const struct CPU_State initial_cpu = {.pc=0x9411, .a=0x93, .x=0xb0, .y=0xe9, .sp=0x10, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x9411, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9412, .a=0x93, .x=0xb0, .y=0xe9, .sp=0x10, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9411, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9411, .value=0xdf, .type=IO_READ},
        {.addr=0x9412, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0182) {
    const struct CPU_State initial_cpu = {.pc=0xa1a8, .a=0x84, .x=0xda, .y=0x8b, .sp=0x8c, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xa1a8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa1a9, .a=0xea, .x=0xda, .y=0x8b, .sp=0x8c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa1a8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa1a8, .value=0xdf, .type=IO_READ},
        {.addr=0xa1a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0183) {
    const struct CPU_State initial_cpu = {.pc=0x5e42, .a=0xee, .x=0x83, .y=0xe1, .sp=0xdc, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x5e42, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5e43, .a=0x54, .x=0x83, .y=0xe1, .sp=0xdc, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5e42, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5e42, .value=0xdf, .type=IO_READ},
        {.addr=0x5e43, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0184) {
    const struct CPU_State initial_cpu = {.pc=0xd4ed, .a=0x3a, .x=0xa1, .y=0x97, .sp=0xa1, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ed, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd4ee, .a=0xa0, .x=0xa1, .y=0x97, .sp=0xa1, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd4ed, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd4ed, .value=0xdf, .type=IO_READ},
        {.addr=0xd4ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0185) {
    const struct CPU_State initial_cpu = {.pc=0x1ef6, .a=0xeb, .x=0xde, .y=0x5e, .sp=0x7d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x1ef6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1ef7, .a=0x51, .x=0xde, .y=0x5e, .sp=0x7d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1ef6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1ef6, .value=0xdf, .type=IO_READ},
        {.addr=0x1ef7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0186) {
    const struct CPU_State initial_cpu = {.pc=0xfd17, .a=0x4d, .x=0x03, .y=0xad, .sp=0x06, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xfd17, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfd18, .a=0xb3, .x=0x03, .y=0xad, .sp=0x06, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xfd17, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfd17, .value=0xdf, .type=IO_READ},
        {.addr=0xfd18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0187) {
    const struct CPU_State initial_cpu = {.pc=0x886f, .a=0x46, .x=0xf7, .y=0xa4, .sp=0x8f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x886f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8870, .a=0x4c, .x=0xf7, .y=0xa4, .sp=0x8f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x886f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x886f, .value=0xdf, .type=IO_READ},
        {.addr=0x8870, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0188) {
    const struct CPU_State initial_cpu = {.pc=0xdaa7, .a=0x91, .x=0x1b, .y=0xaa, .sp=0x7a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdaa8, .a=0x91, .x=0x1b, .y=0xaa, .sp=0x7a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xdaa7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdaa7, .value=0xdf, .type=IO_READ},
        {.addr=0xdaa8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0189) {
    const struct CPU_State initial_cpu = {.pc=0x225a, .a=0x24, .x=0x03, .y=0x2d, .sp=0x2f, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x225a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x225b, .a=0x84, .x=0x03, .y=0x2d, .sp=0x2f, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x225a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x225a, .value=0xdf, .type=IO_READ},
        {.addr=0x225b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_018A) {
    const struct CPU_State initial_cpu = {.pc=0xfdc6, .a=0x9f, .x=0x8b, .y=0x5a, .sp=0x60, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xfdc6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfdc7, .a=0x05, .x=0x8b, .y=0x5a, .sp=0x60, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xfdc6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfdc6, .value=0xdf, .type=IO_READ},
        {.addr=0xfdc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_018B) {
    const struct CPU_State initial_cpu = {.pc=0xcd84, .a=0xa9, .x=0x00, .y=0xd0, .sp=0x64, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xcd84, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcd85, .a=0x0f, .x=0x00, .y=0xd0, .sp=0x64, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xcd84, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcd84, .value=0xdf, .type=IO_READ},
        {.addr=0xcd85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_018C) {
    const struct CPU_State initial_cpu = {.pc=0x19d7, .a=0x33, .x=0xd1, .y=0x93, .sp=0x5f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x19d7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x19d8, .a=0x39, .x=0xd1, .y=0x93, .sp=0x5f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x19d7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x19d7, .value=0xdf, .type=IO_READ},
        {.addr=0x19d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_018D) {
    const struct CPU_State initial_cpu = {.pc=0x787e, .a=0x7e, .x=0x50, .y=0xf7, .sp=0x61, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x787e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x787f, .a=0x84, .x=0x50, .y=0xf7, .sp=0x61, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x787e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x787e, .value=0xdf, .type=IO_READ},
        {.addr=0x787f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_018E) {
    const struct CPU_State initial_cpu = {.pc=0xf864, .a=0xf1, .x=0x16, .y=0x6c, .sp=0x09, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xf864, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf865, .a=0x57, .x=0x16, .y=0x6c, .sp=0x09, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xf864, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf864, .value=0xdf, .type=IO_READ},
        {.addr=0xf865, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_018F) {
    const struct CPU_State initial_cpu = {.pc=0x0267, .a=0x96, .x=0x9a, .y=0x72, .sp=0x2b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0267, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0268, .a=0xfc, .x=0x9a, .y=0x72, .sp=0x2b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0267, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0267, .value=0xdf, .type=IO_READ},
        {.addr=0x0268, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0190) {
    const struct CPU_State initial_cpu = {.pc=0xd92b, .a=0xf2, .x=0xe4, .y=0x6d, .sp=0xa1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xd92b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd92c, .a=0x58, .x=0xe4, .y=0x6d, .sp=0xa1, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd92b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd92b, .value=0xdf, .type=IO_READ},
        {.addr=0xd92c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0191) {
    const struct CPU_State initial_cpu = {.pc=0x4c67, .a=0x6e, .x=0x1c, .y=0x4b, .sp=0xa5, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x4c67, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4c68, .a=0x74, .x=0x1c, .y=0x4b, .sp=0xa5, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4c67, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4c67, .value=0xdf, .type=IO_READ},
        {.addr=0x4c68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0192) {
    const struct CPU_State initial_cpu = {.pc=0x2f06, .a=0xa4, .x=0xc7, .y=0x06, .sp=0x1e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x2f06, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2f07, .a=0x0a, .x=0xc7, .y=0x06, .sp=0x1e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2f06, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2f06, .value=0xdf, .type=IO_READ},
        {.addr=0x2f07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0193) {
    const struct CPU_State initial_cpu = {.pc=0x85f7, .a=0x42, .x=0xd6, .y=0x24, .sp=0xa8, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x85f7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x85f8, .a=0xa2, .x=0xd6, .y=0x24, .sp=0xa8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x85f7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x85f7, .value=0xdf, .type=IO_READ},
        {.addr=0x85f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0194) {
    const struct CPU_State initial_cpu = {.pc=0x6757, .a=0x37, .x=0xa2, .y=0x94, .sp=0x07, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x6757, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6758, .a=0x37, .x=0xa2, .y=0x94, .sp=0x07, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6757, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6757, .value=0xdf, .type=IO_READ},
        {.addr=0x6758, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0195) {
    const struct CPU_State initial_cpu = {.pc=0x20d2, .a=0xfe, .x=0xbb, .y=0x8a, .sp=0x7c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x20d2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x20d3, .a=0x64, .x=0xbb, .y=0x8a, .sp=0x7c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x20d2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x20d2, .value=0xdf, .type=IO_READ},
        {.addr=0x20d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0196) {
    const struct CPU_State initial_cpu = {.pc=0x781b, .a=0xc4, .x=0x0d, .y=0x3b, .sp=0x41, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x781b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x781c, .a=0x24, .x=0x0d, .y=0x3b, .sp=0x41, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x781b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x781b, .value=0xdf, .type=IO_READ},
        {.addr=0x781c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0197) {
    const struct CPU_State initial_cpu = {.pc=0x96a8, .a=0x26, .x=0xd9, .y=0x2d, .sp=0xeb, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x96a8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x96a9, .a=0x2c, .x=0xd9, .y=0x2d, .sp=0xeb, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x96a8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x96a8, .value=0xdf, .type=IO_READ},
        {.addr=0x96a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0198) {
    const struct CPU_State initial_cpu = {.pc=0x9914, .a=0x08, .x=0x51, .y=0xbc, .sp=0xc2, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x9914, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9915, .a=0x0e, .x=0x51, .y=0xbc, .sp=0xc2, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9914, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9914, .value=0xdf, .type=IO_READ},
        {.addr=0x9915, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0199) {
    const struct CPU_State initial_cpu = {.pc=0x5eaf, .a=0x0e, .x=0x40, .y=0xc9, .sp=0x54, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5eaf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5eb0, .a=0x14, .x=0x40, .y=0xc9, .sp=0x54, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5eaf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5eaf, .value=0xdf, .type=IO_READ},
        {.addr=0x5eb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_019A) {
    const struct CPU_State initial_cpu = {.pc=0x70d2, .a=0x77, .x=0x91, .y=0xfb, .sp=0x22, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x70d2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x70d3, .a=0x77, .x=0x91, .y=0xfb, .sp=0x22, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x70d2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x70d2, .value=0xdf, .type=IO_READ},
        {.addr=0x70d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_019B) {
    const struct CPU_State initial_cpu = {.pc=0x2e88, .a=0x33, .x=0xb5, .y=0xdf, .sp=0x84, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x2e88, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2e89, .a=0x39, .x=0xb5, .y=0xdf, .sp=0x84, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2e88, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2e88, .value=0xdf, .type=IO_READ},
        {.addr=0x2e89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_019C) {
    const struct CPU_State initial_cpu = {.pc=0xfc06, .a=0x64, .x=0xdb, .y=0x3a, .sp=0x33, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xfc06, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfc07, .a=0x64, .x=0xdb, .y=0x3a, .sp=0x33, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xfc06, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfc06, .value=0xdf, .type=IO_READ},
        {.addr=0xfc07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_019D) {
    const struct CPU_State initial_cpu = {.pc=0x276c, .a=0xc8, .x=0x7f, .y=0x7a, .sp=0x91, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x276c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x276d, .a=0x2e, .x=0x7f, .y=0x7a, .sp=0x91, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x276c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x276c, .value=0xdf, .type=IO_READ},
        {.addr=0x276d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_019E) {
    const struct CPU_State initial_cpu = {.pc=0xc9bd, .a=0xdd, .x=0x36, .y=0x82, .sp=0xc5, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc9bd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc9be, .a=0x43, .x=0x36, .y=0x82, .sp=0xc5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc9bd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc9bd, .value=0xdf, .type=IO_READ},
        {.addr=0xc9be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_019F) {
    const struct CPU_State initial_cpu = {.pc=0x173f, .a=0x57, .x=0x47, .y=0xac, .sp=0x84, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x173f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1740, .a=0xb7, .x=0x47, .y=0xac, .sp=0x84, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x173f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x173f, .value=0xdf, .type=IO_READ},
        {.addr=0x1740, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x6c1c, .a=0xb7, .x=0xbe, .y=0x33, .sp=0xa1, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6c1c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6c1d, .a=0x1d, .x=0xbe, .y=0x33, .sp=0xa1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6c1c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6c1c, .value=0xdf, .type=IO_READ},
        {.addr=0x6c1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x8666, .a=0x7c, .x=0xf8, .y=0x39, .sp=0x84, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8666, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8667, .a=0x82, .x=0xf8, .y=0x39, .sp=0x84, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8666, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8666, .value=0xdf, .type=IO_READ},
        {.addr=0x8667, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xcf53, .a=0xa7, .x=0xc1, .y=0x0a, .sp=0xce, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xcf53, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcf54, .a=0x07, .x=0xc1, .y=0x0a, .sp=0xce, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xcf53, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcf53, .value=0xdf, .type=IO_READ},
        {.addr=0xcf54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x12dc, .a=0xa4, .x=0x4a, .y=0xea, .sp=0x7f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x12dc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x12dd, .a=0x0a, .x=0x4a, .y=0xea, .sp=0x7f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x12dc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x12dc, .value=0xdf, .type=IO_READ},
        {.addr=0x12dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xb533, .a=0xb5, .x=0x41, .y=0x87, .sp=0x0c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xb533, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb534, .a=0x1b, .x=0x41, .y=0x87, .sp=0x0c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb533, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb533, .value=0xdf, .type=IO_READ},
        {.addr=0xb534, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x52fa, .a=0xce, .x=0x5c, .y=0x69, .sp=0x8f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x52fa, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x52fb, .a=0x34, .x=0x5c, .y=0x69, .sp=0x8f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x52fa, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x52fa, .value=0xdf, .type=IO_READ},
        {.addr=0x52fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xb7be, .a=0x3c, .x=0x70, .y=0x5b, .sp=0xca, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xb7be, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb7bf, .a=0xa2, .x=0x70, .y=0x5b, .sp=0xca, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xb7be, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb7be, .value=0xdf, .type=IO_READ},
        {.addr=0xb7bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xd805, .a=0x18, .x=0x3b, .y=0x2b, .sp=0x58, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xd805, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd806, .a=0x7e, .x=0x3b, .y=0x2b, .sp=0x58, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd805, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd805, .value=0xdf, .type=IO_READ},
        {.addr=0xd806, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xc047, .a=0xbc, .x=0xf2, .y=0xb7, .sp=0x73, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc047, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc048, .a=0x22, .x=0xf2, .y=0xb7, .sp=0x73, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc047, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc047, .value=0xdf, .type=IO_READ},
        {.addr=0xc048, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x81cc, .a=0xa1, .x=0x32, .y=0xdf, .sp=0xa1, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x81cc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x81cd, .a=0x07, .x=0x32, .y=0xdf, .sp=0xa1, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x81cc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x81cc, .value=0xdf, .type=IO_READ},
        {.addr=0x81cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x17dd, .a=0xa7, .x=0xb4, .y=0x46, .sp=0x0c, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x17dd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x17de, .a=0x0d, .x=0xb4, .y=0x46, .sp=0x0c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x17dd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x17dd, .value=0xdf, .type=IO_READ},
        {.addr=0x17de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x6aca, .a=0xc5, .x=0xf1, .y=0x1f, .sp=0x7f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x6aca, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6acb, .a=0x2b, .x=0xf1, .y=0x1f, .sp=0x7f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6aca, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6aca, .value=0xdf, .type=IO_READ},
        {.addr=0x6acb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x7144, .a=0x22, .x=0x80, .y=0xe9, .sp=0x8d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x7144, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7145, .a=0x82, .x=0x80, .y=0xe9, .sp=0x8d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7144, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7144, .value=0xdf, .type=IO_READ},
        {.addr=0x7145, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xd5a4, .a=0xf9, .x=0x8a, .y=0x3c, .sp=0x8a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd5a4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd5a5, .a=0x5f, .x=0x8a, .y=0x3c, .sp=0x8a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd5a4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd5a4, .value=0xdf, .type=IO_READ},
        {.addr=0xd5a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x1277, .a=0xd7, .x=0xf3, .y=0x35, .sp=0x3b, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x1277, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1278, .a=0x37, .x=0xf3, .y=0x35, .sp=0x3b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1277, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1277, .value=0xdf, .type=IO_READ},
        {.addr=0x1278, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x4802, .a=0xa4, .x=0x81, .y=0x86, .sp=0x28, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x4802, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4803, .a=0x04, .x=0x81, .y=0x86, .sp=0x28, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4802, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4802, .value=0xdf, .type=IO_READ},
        {.addr=0x4803, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x7c2a, .a=0x04, .x=0xf0, .y=0x37, .sp=0x24, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x7c2a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7c2b, .a=0x04, .x=0xf0, .y=0x37, .sp=0x24, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7c2a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7c2a, .value=0xdf, .type=IO_READ},
        {.addr=0x7c2b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xb7fc, .a=0x07, .x=0x2b, .y=0x8c, .sp=0xb6, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xb7fc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb7fd, .a=0x6d, .x=0x2b, .y=0x8c, .sp=0xb6, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb7fc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb7fc, .value=0xdf, .type=IO_READ},
        {.addr=0xb7fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x41fe, .a=0xa6, .x=0xbd, .y=0xef, .sp=0x38, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x41fe, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x41ff, .a=0x0c, .x=0xbd, .y=0xef, .sp=0x38, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x41fe, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x41fe, .value=0xdf, .type=IO_READ},
        {.addr=0x41ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x67b1, .a=0x3f, .x=0x89, .y=0xf1, .sp=0x8a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x67b1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x67b2, .a=0xa5, .x=0x89, .y=0xf1, .sp=0x8a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x67b1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x67b1, .value=0xdf, .type=IO_READ},
        {.addr=0x67b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xdc0d, .a=0x6e, .x=0x21, .y=0x00, .sp=0x4a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xdc0d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdc0e, .a=0x74, .x=0x21, .y=0x00, .sp=0x4a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xdc0d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdc0d, .value=0xdf, .type=IO_READ},
        {.addr=0xdc0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xdb91, .a=0xad, .x=0x57, .y=0xab, .sp=0x7c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xdb91, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdb92, .a=0x13, .x=0x57, .y=0xab, .sp=0x7c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xdb91, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdb91, .value=0xdf, .type=IO_READ},
        {.addr=0xdb92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xe179, .a=0x91, .x=0x5b, .y=0x32, .sp=0xdb, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xe179, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe17a, .a=0x97, .x=0x5b, .y=0x32, .sp=0xdb, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe179, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe179, .value=0xdf, .type=IO_READ},
        {.addr=0xe17a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xfd86, .a=0x6e, .x=0x8f, .y=0xf9, .sp=0x6c, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xfd86, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfd87, .a=0x74, .x=0x8f, .y=0xf9, .sp=0x6c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xfd86, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfd86, .value=0xdf, .type=IO_READ},
        {.addr=0xfd87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xcb4e, .a=0x3e, .x=0x72, .y=0x37, .sp=0xc8, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xcb4e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcb4f, .a=0x44, .x=0x72, .y=0x37, .sp=0xc8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xcb4e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcb4e, .value=0xdf, .type=IO_READ},
        {.addr=0xcb4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xc935, .a=0x34, .x=0x4c, .y=0x5c, .sp=0x03, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xc935, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc936, .a=0x34, .x=0x4c, .y=0x5c, .sp=0x03, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc935, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc935, .value=0xdf, .type=IO_READ},
        {.addr=0xc936, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xa013, .a=0xbd, .x=0xa3, .y=0xce, .sp=0xef, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xa013, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa014, .a=0x23, .x=0xa3, .y=0xce, .sp=0xef, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa013, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa013, .value=0xdf, .type=IO_READ},
        {.addr=0xa014, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x28ba, .a=0xbe, .x=0x77, .y=0x47, .sp=0xc0, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x28ba, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x28bb, .a=0x24, .x=0x77, .y=0x47, .sp=0xc0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x28ba, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x28ba, .value=0xdf, .type=IO_READ},
        {.addr=0x28bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x70fe, .a=0x9b, .x=0xf6, .y=0x0b, .sp=0xa4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x70fe, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x70ff, .a=0x01, .x=0xf6, .y=0x0b, .sp=0xa4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x70fe, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x70fe, .value=0xdf, .type=IO_READ},
        {.addr=0x70ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xb22a, .a=0xac, .x=0x50, .y=0x97, .sp=0x93, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xb22a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb22b, .a=0x12, .x=0x50, .y=0x97, .sp=0x93, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb22a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb22a, .value=0xdf, .type=IO_READ},
        {.addr=0xb22b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x8cd2, .a=0xfb, .x=0x6c, .y=0x6f, .sp=0x11, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8cd3, .a=0x61, .x=0x6c, .y=0x6f, .sp=0x11, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8cd2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8cd2, .value=0xdf, .type=IO_READ},
        {.addr=0x8cd3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x0849, .a=0x94, .x=0xa1, .y=0x3f, .sp=0x4c, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0849, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x084a, .a=0x9a, .x=0xa1, .y=0x3f, .sp=0x4c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0849, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0849, .value=0xdf, .type=IO_READ},
        {.addr=0x084a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x1d15, .a=0xfd, .x=0x87, .y=0xfd, .sp=0x6d, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x1d15, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1d16, .a=0x63, .x=0x87, .y=0xfd, .sp=0x6d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x1d15, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1d15, .value=0xdf, .type=IO_READ},
        {.addr=0x1d16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x64a6, .a=0x17, .x=0x00, .y=0xd8, .sp=0xd5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x64a6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x64a7, .a=0x7d, .x=0x00, .y=0xd8, .sp=0xd5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x64a6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x64a6, .value=0xdf, .type=IO_READ},
        {.addr=0x64a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xb761, .a=0x12, .x=0xd1, .y=0xb9, .sp=0xbc, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xb761, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb762, .a=0x78, .x=0xd1, .y=0xb9, .sp=0xbc, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb761, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb761, .value=0xdf, .type=IO_READ},
        {.addr=0xb762, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xa33c, .a=0x99, .x=0x50, .y=0x99, .sp=0x72, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa33c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa33d, .a=0xf9, .x=0x50, .y=0x99, .sp=0x72, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa33c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa33c, .value=0xdf, .type=IO_READ},
        {.addr=0xa33d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x4134, .a=0x36, .x=0x2e, .y=0xdd, .sp=0x3c, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4134, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4135, .a=0x36, .x=0x2e, .y=0xdd, .sp=0x3c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4134, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4134, .value=0xdf, .type=IO_READ},
        {.addr=0x4135, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x33ac, .a=0x62, .x=0xa7, .y=0x35, .sp=0x9d, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x33ac, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x33ad, .a=0x68, .x=0xa7, .y=0x35, .sp=0x9d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x33ac, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x33ac, .value=0xdf, .type=IO_READ},
        {.addr=0x33ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xf6a6, .a=0xf8, .x=0x29, .y=0xac, .sp=0xb5, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf6a6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf6a7, .a=0x5e, .x=0x29, .y=0xac, .sp=0xb5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf6a6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf6a6, .value=0xdf, .type=IO_READ},
        {.addr=0xf6a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xc50e, .a=0x7b, .x=0x1d, .y=0x75, .sp=0x14, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc50e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc50f, .a=0x81, .x=0x1d, .y=0x75, .sp=0x14, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc50e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc50e, .value=0xdf, .type=IO_READ},
        {.addr=0xc50f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x8abf, .a=0xaa, .x=0xb2, .y=0x5c, .sp=0x55, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x8abf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8ac0, .a=0x10, .x=0xb2, .y=0x5c, .sp=0x55, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8abf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8abf, .value=0xdf, .type=IO_READ},
        {.addr=0x8ac0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xc952, .a=0x0d, .x=0x07, .y=0x5c, .sp=0xe5, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xc952, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc953, .a=0x73, .x=0x07, .y=0x5c, .sp=0xe5, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc952, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc952, .value=0xdf, .type=IO_READ},
        {.addr=0xc953, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xecf5, .a=0x17, .x=0x58, .y=0xbe, .sp=0xcc, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xecf5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xecf6, .a=0x1d, .x=0x58, .y=0xbe, .sp=0xcc, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xecf5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xecf5, .value=0xdf, .type=IO_READ},
        {.addr=0xecf6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x2325, .a=0xe9, .x=0x57, .y=0x80, .sp=0x8c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x2325, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2326, .a=0x4f, .x=0x57, .y=0x80, .sp=0x8c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2325, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2325, .value=0xdf, .type=IO_READ},
        {.addr=0x2326, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xe7e1, .a=0x4e, .x=0x44, .y=0x9f, .sp=0xe5, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xe7e1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe7e2, .a=0xb4, .x=0x44, .y=0x9f, .sp=0xe5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe7e1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe7e1, .value=0xdf, .type=IO_READ},
        {.addr=0xe7e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x4501, .a=0x97, .x=0x7c, .y=0x5c, .sp=0xc4, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4501, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4502, .a=0x9d, .x=0x7c, .y=0x5c, .sp=0xc4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4501, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4501, .value=0xdf, .type=IO_READ},
        {.addr=0x4502, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xf92c, .a=0x02, .x=0xc4, .y=0x53, .sp=0x16, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf92c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf92d, .a=0x02, .x=0xc4, .y=0x53, .sp=0x16, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf92c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf92c, .value=0xdf, .type=IO_READ},
        {.addr=0xf92d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x2cef, .a=0x94, .x=0xe2, .y=0x6a, .sp=0x4c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x2cef, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2cf0, .a=0xf4, .x=0xe2, .y=0x6a, .sp=0x4c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2cef, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2cef, .value=0xdf, .type=IO_READ},
        {.addr=0x2cf0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x53f4, .a=0x70, .x=0x85, .y=0x4e, .sp=0xc4, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x53f4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x53f5, .a=0x70, .x=0x85, .y=0x4e, .sp=0xc4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x53f4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x53f4, .value=0xdf, .type=IO_READ},
        {.addr=0x53f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xe4e7, .a=0x5c, .x=0xed, .y=0xf1, .sp=0x00, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xe4e7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe4e8, .a=0xc2, .x=0xed, .y=0xf1, .sp=0x00, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe4e7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe4e7, .value=0xdf, .type=IO_READ},
        {.addr=0xe4e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xf318, .a=0x6f, .x=0xf3, .y=0x37, .sp=0xb9, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xf318, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf319, .a=0x75, .x=0xf3, .y=0x37, .sp=0xb9, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xf318, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf318, .value=0xdf, .type=IO_READ},
        {.addr=0xf319, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xc358, .a=0xe7, .x=0x46, .y=0xdd, .sp=0x2b, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xc358, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc359, .a=0x4d, .x=0x46, .y=0xdd, .sp=0x2b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc358, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc358, .value=0xdf, .type=IO_READ},
        {.addr=0xc359, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x7927, .a=0x91, .x=0x59, .y=0xf2, .sp=0x8c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7927, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7928, .a=0xf1, .x=0x59, .y=0xf2, .sp=0x8c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x7927, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7927, .value=0xdf, .type=IO_READ},
        {.addr=0x7928, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x05c3, .a=0x5b, .x=0xf1, .y=0xd2, .sp=0xea, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x05c3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x05c4, .a=0xc1, .x=0xf1, .y=0xd2, .sp=0xea, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x05c3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x05c3, .value=0xdf, .type=IO_READ},
        {.addr=0x05c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x745e, .a=0x1b, .x=0xa3, .y=0x1f, .sp=0x26, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x745e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x745f, .a=0x21, .x=0xa3, .y=0x1f, .sp=0x26, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x745e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x745e, .value=0xdf, .type=IO_READ},
        {.addr=0x745f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x4258, .a=0x1a, .x=0x38, .y=0x6d, .sp=0xdf, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x4258, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4259, .a=0x80, .x=0x38, .y=0x6d, .sp=0xdf, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x4258, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4258, .value=0xdf, .type=IO_READ},
        {.addr=0x4259, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x3347, .a=0x0d, .x=0xae, .y=0xc6, .sp=0x1e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x3347, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3348, .a=0x73, .x=0xae, .y=0xc6, .sp=0x1e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3347, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3347, .value=0xdf, .type=IO_READ},
        {.addr=0x3348, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x971b, .a=0x61, .x=0xf2, .y=0x10, .sp=0x74, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x971b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x971c, .a=0x67, .x=0xf2, .y=0x10, .sp=0x74, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x971b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x971b, .value=0xdf, .type=IO_READ},
        {.addr=0x971c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xc7f0, .a=0x12, .x=0x1a, .y=0x37, .sp=0x52, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc7f0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc7f1, .a=0x12, .x=0x1a, .y=0x37, .sp=0x52, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc7f0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc7f0, .value=0xdf, .type=IO_READ},
        {.addr=0xc7f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xda0e, .a=0xef, .x=0xf4, .y=0x46, .sp=0x82, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xda0e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xda0f, .a=0x55, .x=0xf4, .y=0x46, .sp=0x82, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xda0e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xda0e, .value=0xdf, .type=IO_READ},
        {.addr=0xda0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x13a8, .a=0xd9, .x=0x38, .y=0x0c, .sp=0xbf, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x13a8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x13a9, .a=0x39, .x=0x38, .y=0x0c, .sp=0xbf, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x13a8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x13a8, .value=0xdf, .type=IO_READ},
        {.addr=0x13a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x7d05, .a=0x1f, .x=0x91, .y=0xa2, .sp=0xa4, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x7d05, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7d06, .a=0x85, .x=0x91, .y=0xa2, .sp=0xa4, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x7d05, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7d05, .value=0xdf, .type=IO_READ},
        {.addr=0x7d06, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x3206, .a=0xfa, .x=0x82, .y=0x20, .sp=0xbb, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x3206, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3207, .a=0x60, .x=0x82, .y=0x20, .sp=0xbb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3206, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3206, .value=0xdf, .type=IO_READ},
        {.addr=0x3207, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x3829, .a=0x1f, .x=0x33, .y=0x75, .sp=0x97, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x3829, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x382a, .a=0x85, .x=0x33, .y=0x75, .sp=0x97, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3829, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3829, .value=0xdf, .type=IO_READ},
        {.addr=0x382a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x17a8, .a=0x9b, .x=0xe5, .y=0xa8, .sp=0x00, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x17a8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x17a9, .a=0x01, .x=0xe5, .y=0xa8, .sp=0x00, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x17a8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x17a8, .value=0xdf, .type=IO_READ},
        {.addr=0x17a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xd47a, .a=0xde, .x=0x8b, .y=0xa4, .sp=0x5a, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd47a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd47b, .a=0x44, .x=0x8b, .y=0xa4, .sp=0x5a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd47a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd47a, .value=0xdf, .type=IO_READ},
        {.addr=0xd47b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xa5a9, .a=0x3b, .x=0x99, .y=0x8e, .sp=0x5e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xa5a9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa5aa, .a=0x41, .x=0x99, .y=0x8e, .sp=0x5e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa5a9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa5a9, .value=0xdf, .type=IO_READ},
        {.addr=0xa5aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x9096, .a=0xcc, .x=0xeb, .y=0x40, .sp=0x48, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x9096, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9097, .a=0x32, .x=0xeb, .y=0x40, .sp=0x48, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9096, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9096, .value=0xdf, .type=IO_READ},
        {.addr=0x9097, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xb6c1, .a=0x41, .x=0x70, .y=0x08, .sp=0x18, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb6c1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb6c2, .a=0xa1, .x=0x70, .y=0x08, .sp=0x18, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb6c1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb6c1, .value=0xdf, .type=IO_READ},
        {.addr=0xb6c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x60e7, .a=0x4c, .x=0x17, .y=0x88, .sp=0xc8, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x60e7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x60e8, .a=0x52, .x=0x17, .y=0x88, .sp=0xc8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x60e7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x60e7, .value=0xdf, .type=IO_READ},
        {.addr=0x60e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x16ab, .a=0x18, .x=0xb7, .y=0xf3, .sp=0xdd, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x16ab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x16ac, .a=0x18, .x=0xb7, .y=0xf3, .sp=0xdd, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x16ab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x16ab, .value=0xdf, .type=IO_READ},
        {.addr=0x16ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x3af8, .a=0x86, .x=0x4f, .y=0xd5, .sp=0xad, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x3af8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3af9, .a=0xec, .x=0x4f, .y=0xd5, .sp=0xad, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x3af8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3af8, .value=0xdf, .type=IO_READ},
        {.addr=0x3af9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xf05d, .a=0xcb, .x=0x4a, .y=0x3d, .sp=0x6b, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf05d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf05e, .a=0x31, .x=0x4a, .y=0x3d, .sp=0x6b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf05d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf05d, .value=0xdf, .type=IO_READ},
        {.addr=0xf05e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xd9aa, .a=0x19, .x=0xb9, .y=0x9f, .sp=0x2a, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xd9aa, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd9ab, .a=0x19, .x=0xb9, .y=0x9f, .sp=0x2a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd9aa, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd9aa, .value=0xdf, .type=IO_READ},
        {.addr=0xd9ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x16cc, .a=0x28, .x=0x1a, .y=0x54, .sp=0x42, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x16cc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x16cd, .a=0x88, .x=0x1a, .y=0x54, .sp=0x42, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x16cc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x16cc, .value=0xdf, .type=IO_READ},
        {.addr=0x16cd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x8835, .a=0xdc, .x=0x91, .y=0x34, .sp=0xb4, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x8835, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8836, .a=0x42, .x=0x91, .y=0x34, .sp=0xb4, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8835, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8835, .value=0xdf, .type=IO_READ},
        {.addr=0x8836, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x6adf, .a=0x36, .x=0x00, .y=0x81, .sp=0x74, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6adf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6ae0, .a=0x9c, .x=0x00, .y=0x81, .sp=0x74, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6adf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6adf, .value=0xdf, .type=IO_READ},
        {.addr=0x6ae0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xe463, .a=0xf3, .x=0x4d, .y=0x53, .sp=0x96, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xe463, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe464, .a=0x59, .x=0x4d, .y=0x53, .sp=0x96, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe463, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe463, .value=0xdf, .type=IO_READ},
        {.addr=0xe464, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x83ca, .a=0xc1, .x=0x24, .y=0x6c, .sp=0x09, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x83ca, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x83cb, .a=0x27, .x=0x24, .y=0x6c, .sp=0x09, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x83ca, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x83ca, .value=0xdf, .type=IO_READ},
        {.addr=0x83cb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x68ef, .a=0x42, .x=0xfc, .y=0xb5, .sp=0xc0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x68ef, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x68f0, .a=0x48, .x=0xfc, .y=0xb5, .sp=0xc0, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x68ef, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x68ef, .value=0xdf, .type=IO_READ},
        {.addr=0x68f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xf2de, .a=0xec, .x=0x06, .y=0xc3, .sp=0x3c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xf2de, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf2df, .a=0x52, .x=0x06, .y=0xc3, .sp=0x3c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xf2de, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf2de, .value=0xdf, .type=IO_READ},
        {.addr=0xf2df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x2fb0, .a=0xdd, .x=0x68, .y=0x81, .sp=0xb1, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x2fb0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2fb1, .a=0x43, .x=0x68, .y=0x81, .sp=0xb1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2fb0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2fb0, .value=0xdf, .type=IO_READ},
        {.addr=0x2fb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x6543, .a=0xfa, .x=0x26, .y=0xf4, .sp=0x25, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x6543, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6544, .a=0x60, .x=0x26, .y=0xf4, .sp=0x25, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6543, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6543, .value=0xdf, .type=IO_READ},
        {.addr=0x6544, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xb209, .a=0x11, .x=0x26, .y=0x94, .sp=0x75, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xb209, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb20a, .a=0x17, .x=0x26, .y=0x94, .sp=0x75, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb209, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb209, .value=0xdf, .type=IO_READ},
        {.addr=0xb20a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x216a, .a=0x13, .x=0x29, .y=0xbb, .sp=0xea, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x216a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x216b, .a=0x73, .x=0x29, .y=0xbb, .sp=0xea, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x216a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x216a, .value=0xdf, .type=IO_READ},
        {.addr=0x216b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xe3de, .a=0x83, .x=0x53, .y=0x19, .sp=0x8d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xe3de, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe3df, .a=0x83, .x=0x53, .y=0x19, .sp=0x8d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe3de, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe3de, .value=0xdf, .type=IO_READ},
        {.addr=0xe3df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x02bd, .a=0x4f, .x=0xca, .y=0xed, .sp=0xac, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x02bd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x02be, .a=0x55, .x=0xca, .y=0xed, .sp=0xac, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x02bd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x02bd, .value=0xdf, .type=IO_READ},
        {.addr=0x02be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x71ba, .a=0xb4, .x=0xc2, .y=0x44, .sp=0xaa, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x71ba, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x71bb, .a=0x14, .x=0xc2, .y=0x44, .sp=0xaa, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x71ba, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x71ba, .value=0xdf, .type=IO_READ},
        {.addr=0x71bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x4984, .a=0x6a, .x=0x84, .y=0xe0, .sp=0x81, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x4984, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4985, .a=0xd0, .x=0x84, .y=0xe0, .sp=0x81, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x4984, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4984, .value=0xdf, .type=IO_READ},
        {.addr=0x4985, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xafee, .a=0x35, .x=0xf0, .y=0x64, .sp=0x3b, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xafee, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xafef, .a=0x95, .x=0xf0, .y=0x64, .sp=0x3b, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xafee, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xafee, .value=0xdf, .type=IO_READ},
        {.addr=0xafef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xfe2b, .a=0xdb, .x=0x4e, .y=0x0b, .sp=0x53, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xfe2b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfe2c, .a=0x41, .x=0x4e, .y=0x0b, .sp=0x53, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xfe2b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfe2b, .value=0xdf, .type=IO_READ},
        {.addr=0xfe2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xaa03, .a=0x51, .x=0x16, .y=0xba, .sp=0x8f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xaa03, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xaa04, .a=0x51, .x=0x16, .y=0xba, .sp=0x8f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xaa03, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xaa03, .value=0xdf, .type=IO_READ},
        {.addr=0xaa04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x769c, .a=0x02, .x=0xce, .y=0x38, .sp=0xe7, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x769c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x769d, .a=0x68, .x=0xce, .y=0x38, .sp=0xe7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x769c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x769c, .value=0xdf, .type=IO_READ},
        {.addr=0x769d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xe117, .a=0x38, .x=0x68, .y=0xba, .sp=0x1a, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xe117, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe118, .a=0x38, .x=0x68, .y=0xba, .sp=0x1a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe117, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe117, .value=0xdf, .type=IO_READ},
        {.addr=0xe118, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xd864, .a=0xe8, .x=0x4d, .y=0x80, .sp=0x98, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xd864, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd865, .a=0x4e, .x=0x4d, .y=0x80, .sp=0x98, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd864, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd864, .value=0xdf, .type=IO_READ},
        {.addr=0xd865, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x4f35, .a=0x3f, .x=0xec, .y=0x80, .sp=0xd9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x4f35, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4f36, .a=0xa5, .x=0xec, .y=0x80, .sp=0xd9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4f35, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4f35, .value=0xdf, .type=IO_READ},
        {.addr=0x4f36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0200) {
    const struct CPU_State initial_cpu = {.pc=0x450a, .a=0xa5, .x=0xf2, .y=0x50, .sp=0x9f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x450a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x450b, .a=0x05, .x=0xf2, .y=0x50, .sp=0x9f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x450a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x450a, .value=0xdf, .type=IO_READ},
        {.addr=0x450b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0201) {
    const struct CPU_State initial_cpu = {.pc=0x77e0, .a=0x1e, .x=0x26, .y=0x2b, .sp=0x68, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x77e0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x77e1, .a=0x84, .x=0x26, .y=0x2b, .sp=0x68, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x77e0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x77e0, .value=0xdf, .type=IO_READ},
        {.addr=0x77e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0202) {
    const struct CPU_State initial_cpu = {.pc=0x0cab, .a=0xe2, .x=0xea, .y=0xfd, .sp=0x9c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0cab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0cac, .a=0x42, .x=0xea, .y=0xfd, .sp=0x9c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0cab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0cab, .value=0xdf, .type=IO_READ},
        {.addr=0x0cac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0203) {
    const struct CPU_State initial_cpu = {.pc=0x194a, .a=0x79, .x=0x86, .y=0xf3, .sp=0x4c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x194a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x194b, .a=0x7f, .x=0x86, .y=0xf3, .sp=0x4c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x194a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x194a, .value=0xdf, .type=IO_READ},
        {.addr=0x194b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0204) {
    const struct CPU_State initial_cpu = {.pc=0x786b, .a=0x96, .x=0xcf, .y=0x02, .sp=0x63, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x786b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x786c, .a=0x9c, .x=0xcf, .y=0x02, .sp=0x63, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x786b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x786b, .value=0xdf, .type=IO_READ},
        {.addr=0x786c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0205) {
    const struct CPU_State initial_cpu = {.pc=0x0dd0, .a=0x1b, .x=0x36, .y=0x5b, .sp=0xf2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0dd1, .a=0x81, .x=0x36, .y=0x5b, .sp=0xf2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0dd0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0dd0, .value=0xdf, .type=IO_READ},
        {.addr=0x0dd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0206) {
    const struct CPU_State initial_cpu = {.pc=0xae23, .a=0xd6, .x=0xd8, .y=0x63, .sp=0x87, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xae23, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xae24, .a=0x36, .x=0xd8, .y=0x63, .sp=0x87, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xae23, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xae23, .value=0xdf, .type=IO_READ},
        {.addr=0xae24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0207) {
    const struct CPU_State initial_cpu = {.pc=0x0ff5, .a=0x04, .x=0x5e, .y=0x22, .sp=0x72, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0ff5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0ff6, .a=0x64, .x=0x5e, .y=0x22, .sp=0x72, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0ff5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0ff5, .value=0xdf, .type=IO_READ},
        {.addr=0x0ff6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0208) {
    const struct CPU_State initial_cpu = {.pc=0x2cb1, .a=0xa5, .x=0x31, .y=0xdf, .sp=0xd8, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2cb1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2cb2, .a=0x0b, .x=0x31, .y=0xdf, .sp=0xd8, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2cb1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2cb1, .value=0xdf, .type=IO_READ},
        {.addr=0x2cb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0209) {
    const struct CPU_State initial_cpu = {.pc=0x0b9d, .a=0x3c, .x=0x81, .y=0xae, .sp=0xe0, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0b9d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0b9e, .a=0xa2, .x=0x81, .y=0xae, .sp=0xe0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0b9d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0b9d, .value=0xdf, .type=IO_READ},
        {.addr=0x0b9e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_020A) {
    const struct CPU_State initial_cpu = {.pc=0x5518, .a=0x99, .x=0xe5, .y=0x12, .sp=0x8e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5518, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5519, .a=0xf9, .x=0xe5, .y=0x12, .sp=0x8e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5518, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5518, .value=0xdf, .type=IO_READ},
        {.addr=0x5519, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_020B) {
    const struct CPU_State initial_cpu = {.pc=0x1d74, .a=0x5d, .x=0x97, .y=0xfa, .sp=0x3c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1d74, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1d75, .a=0x63, .x=0x97, .y=0xfa, .sp=0x3c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1d74, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1d74, .value=0xdf, .type=IO_READ},
        {.addr=0x1d75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_020C) {
    const struct CPU_State initial_cpu = {.pc=0x3550, .a=0x33, .x=0x57, .y=0x1b, .sp=0x24, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x3550, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3551, .a=0x93, .x=0x57, .y=0x1b, .sp=0x24, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x3550, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3550, .value=0xdf, .type=IO_READ},
        {.addr=0x3551, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_020D) {
    const struct CPU_State initial_cpu = {.pc=0xeff6, .a=0x1a, .x=0xde, .y=0x7a, .sp=0x61, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xeff6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xeff7, .a=0x20, .x=0xde, .y=0x7a, .sp=0x61, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xeff6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xeff6, .value=0xdf, .type=IO_READ},
        {.addr=0xeff7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_020E) {
    const struct CPU_State initial_cpu = {.pc=0xbebe, .a=0x18, .x=0x23, .y=0x09, .sp=0x24, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xbebe, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbebf, .a=0x7e, .x=0x23, .y=0x09, .sp=0x24, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xbebe, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbebe, .value=0xdf, .type=IO_READ},
        {.addr=0xbebf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_020F) {
    const struct CPU_State initial_cpu = {.pc=0xe426, .a=0xbe, .x=0xfc, .y=0xe8, .sp=0xf7, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xe426, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe427, .a=0x24, .x=0xfc, .y=0xe8, .sp=0xf7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xe426, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe426, .value=0xdf, .type=IO_READ},
        {.addr=0xe427, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0210) {
    const struct CPU_State initial_cpu = {.pc=0x250c, .a=0x23, .x=0xd2, .y=0xcf, .sp=0x69, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x250c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x250d, .a=0x23, .x=0xd2, .y=0xcf, .sp=0x69, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x250c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x250c, .value=0xdf, .type=IO_READ},
        {.addr=0x250d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0211) {
    const struct CPU_State initial_cpu = {.pc=0x05c9, .a=0xfd, .x=0x98, .y=0x32, .sp=0x20, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x05c9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x05ca, .a=0x63, .x=0x98, .y=0x32, .sp=0x20, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x05c9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x05c9, .value=0xdf, .type=IO_READ},
        {.addr=0x05ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0212) {
    const struct CPU_State initial_cpu = {.pc=0x4f72, .a=0x76, .x=0x5b, .y=0xb7, .sp=0x41, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x4f72, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4f73, .a=0xd6, .x=0x5b, .y=0xb7, .sp=0x41, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4f72, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4f72, .value=0xdf, .type=IO_READ},
        {.addr=0x4f73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0213) {
    const struct CPU_State initial_cpu = {.pc=0x05a3, .a=0x5d, .x=0xe8, .y=0xde, .sp=0xd7, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x05a3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x05a4, .a=0x63, .x=0xe8, .y=0xde, .sp=0xd7, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x05a3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x05a3, .value=0xdf, .type=IO_READ},
        {.addr=0x05a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0214) {
    const struct CPU_State initial_cpu = {.pc=0xfbc5, .a=0xd2, .x=0xc5, .y=0x7d, .sp=0x91, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xfbc5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfbc6, .a=0x38, .x=0xc5, .y=0x7d, .sp=0x91, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfbc5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfbc5, .value=0xdf, .type=IO_READ},
        {.addr=0xfbc6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0215) {
    const struct CPU_State initial_cpu = {.pc=0x70ba, .a=0xe0, .x=0x80, .y=0xb5, .sp=0x72, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x70ba, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x70bb, .a=0x46, .x=0x80, .y=0xb5, .sp=0x72, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x70ba, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x70ba, .value=0xdf, .type=IO_READ},
        {.addr=0x70bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0216) {
    const struct CPU_State initial_cpu = {.pc=0x4aeb, .a=0x28, .x=0xa2, .y=0x44, .sp=0x0d, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x4aeb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4aec, .a=0x2e, .x=0xa2, .y=0x44, .sp=0x0d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4aeb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4aeb, .value=0xdf, .type=IO_READ},
        {.addr=0x4aec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0217) {
    const struct CPU_State initial_cpu = {.pc=0xd8c0, .a=0xc0, .x=0x9e, .y=0xd4, .sp=0x3c, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd8c0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd8c1, .a=0x26, .x=0x9e, .y=0xd4, .sp=0x3c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd8c0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd8c0, .value=0xdf, .type=IO_READ},
        {.addr=0xd8c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0218) {
    const struct CPU_State initial_cpu = {.pc=0xeb9e, .a=0xb8, .x=0x0a, .y=0x07, .sp=0x2b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xeb9e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xeb9f, .a=0x1e, .x=0x0a, .y=0x07, .sp=0x2b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xeb9e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xeb9e, .value=0xdf, .type=IO_READ},
        {.addr=0xeb9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0219) {
    const struct CPU_State initial_cpu = {.pc=0x2b16, .a=0xa7, .x=0x5f, .y=0x47, .sp=0x7a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x2b16, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2b17, .a=0x0d, .x=0x5f, .y=0x47, .sp=0x7a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2b16, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2b16, .value=0xdf, .type=IO_READ},
        {.addr=0x2b17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_021A) {
    const struct CPU_State initial_cpu = {.pc=0x17ab, .a=0xb2, .x=0xcf, .y=0xf0, .sp=0x0d, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x17ab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x17ac, .a=0x18, .x=0xcf, .y=0xf0, .sp=0x0d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x17ab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x17ab, .value=0xdf, .type=IO_READ},
        {.addr=0x17ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_021B) {
    const struct CPU_State initial_cpu = {.pc=0xb68c, .a=0x42, .x=0x10, .y=0xa9, .sp=0x85, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xb68c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb68d, .a=0xa2, .x=0x10, .y=0xa9, .sp=0x85, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb68c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb68c, .value=0xdf, .type=IO_READ},
        {.addr=0xb68d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_021C) {
    const struct CPU_State initial_cpu = {.pc=0xda6c, .a=0xc2, .x=0xf3, .y=0x8a, .sp=0x0d, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xda6c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xda6d, .a=0x22, .x=0xf3, .y=0x8a, .sp=0x0d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xda6c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xda6c, .value=0xdf, .type=IO_READ},
        {.addr=0xda6d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_021D) {
    const struct CPU_State initial_cpu = {.pc=0x6392, .a=0x51, .x=0x1c, .y=0xe8, .sp=0xec, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6392, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6393, .a=0xb1, .x=0x1c, .y=0xe8, .sp=0xec, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6392, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6392, .value=0xdf, .type=IO_READ},
        {.addr=0x6393, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_021E) {
    const struct CPU_State initial_cpu = {.pc=0xe5a6, .a=0x82, .x=0xb2, .y=0x41, .sp=0x3c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xe5a6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe5a7, .a=0x88, .x=0xb2, .y=0x41, .sp=0x3c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe5a6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe5a6, .value=0xdf, .type=IO_READ},
        {.addr=0xe5a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_021F) {
    const struct CPU_State initial_cpu = {.pc=0x010d, .a=0xa4, .x=0x47, .y=0x0a, .sp=0x8c, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x010e, .a=0x0a, .x=0x47, .y=0x0a, .sp=0x8c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x010d, .value=0xdf, .type=IO_READ},
        {.addr=0x010e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0220) {
    const struct CPU_State initial_cpu = {.pc=0x4499, .a=0x67, .x=0x2d, .y=0x47, .sp=0xd3, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x4499, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x449a, .a=0x6d, .x=0x2d, .y=0x47, .sp=0xd3, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x4499, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4499, .value=0xdf, .type=IO_READ},
        {.addr=0x449a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0221) {
    const struct CPU_State initial_cpu = {.pc=0x1b7d, .a=0xe5, .x=0x32, .y=0x44, .sp=0xfa, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x1b7d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1b7e, .a=0x4b, .x=0x32, .y=0x44, .sp=0xfa, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1b7d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1b7d, .value=0xdf, .type=IO_READ},
        {.addr=0x1b7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0222) {
    const struct CPU_State initial_cpu = {.pc=0x712a, .a=0xd5, .x=0xfb, .y=0x97, .sp=0xcf, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x712a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x712b, .a=0x35, .x=0xfb, .y=0x97, .sp=0xcf, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x712a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x712a, .value=0xdf, .type=IO_READ},
        {.addr=0x712b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0223) {
    const struct CPU_State initial_cpu = {.pc=0xa17a, .a=0xe3, .x=0x61, .y=0x98, .sp=0x4b, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xa17a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa17b, .a=0x43, .x=0x61, .y=0x98, .sp=0x4b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xa17a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa17a, .value=0xdf, .type=IO_READ},
        {.addr=0xa17b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0224) {
    const struct CPU_State initial_cpu = {.pc=0x8fbb, .a=0xe4, .x=0xa6, .y=0x1e, .sp=0xa8, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8fbb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8fbc, .a=0x4a, .x=0xa6, .y=0x1e, .sp=0xa8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8fbb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8fbb, .value=0xdf, .type=IO_READ},
        {.addr=0x8fbc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0225) {
    const struct CPU_State initial_cpu = {.pc=0xe7b0, .a=0x54, .x=0x2e, .y=0xb6, .sp=0xcd, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe7b1, .a=0x5a, .x=0x2e, .y=0xb6, .sp=0xcd, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe7b0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe7b0, .value=0xdf, .type=IO_READ},
        {.addr=0xe7b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0226) {
    const struct CPU_State initial_cpu = {.pc=0xfe75, .a=0x74, .x=0x41, .y=0x65, .sp=0x12, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xfe75, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfe76, .a=0x7a, .x=0x41, .y=0x65, .sp=0x12, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfe75, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfe75, .value=0xdf, .type=IO_READ},
        {.addr=0xfe76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0227) {
    const struct CPU_State initial_cpu = {.pc=0x3056, .a=0x45, .x=0x4c, .y=0x25, .sp=0x45, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x3056, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3057, .a=0xab, .x=0x4c, .y=0x25, .sp=0x45, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3056, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3056, .value=0xdf, .type=IO_READ},
        {.addr=0x3057, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0228) {
    const struct CPU_State initial_cpu = {.pc=0xa05b, .a=0x5d, .x=0x7f, .y=0x3e, .sp=0x34, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa05b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa05c, .a=0xc3, .x=0x7f, .y=0x3e, .sp=0x34, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xa05b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa05b, .value=0xdf, .type=IO_READ},
        {.addr=0xa05c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0229) {
    const struct CPU_State initial_cpu = {.pc=0x4063, .a=0x05, .x=0x8d, .y=0x27, .sp=0xa0, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4063, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4064, .a=0x65, .x=0x8d, .y=0x27, .sp=0xa0, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4063, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4063, .value=0xdf, .type=IO_READ},
        {.addr=0x4064, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_022A) {
    const struct CPU_State initial_cpu = {.pc=0x83ba, .a=0xf4, .x=0xbf, .y=0xa5, .sp=0x0b, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x83ba, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x83bb, .a=0x5a, .x=0xbf, .y=0xa5, .sp=0x0b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x83ba, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x83ba, .value=0xdf, .type=IO_READ},
        {.addr=0x83bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_022B) {
    const struct CPU_State initial_cpu = {.pc=0xbad8, .a=0xd8, .x=0x51, .y=0x5d, .sp=0x15, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xbad8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbad9, .a=0x38, .x=0x51, .y=0x5d, .sp=0x15, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xbad8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbad8, .value=0xdf, .type=IO_READ},
        {.addr=0xbad9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_022C) {
    const struct CPU_State initial_cpu = {.pc=0xf095, .a=0xaa, .x=0x33, .y=0x9f, .sp=0x8e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf095, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf096, .a=0x10, .x=0x33, .y=0x9f, .sp=0x8e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf095, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf095, .value=0xdf, .type=IO_READ},
        {.addr=0xf096, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_022D) {
    const struct CPU_State initial_cpu = {.pc=0xb0ef, .a=0x54, .x=0x22, .y=0x02, .sp=0xda, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xb0ef, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb0f0, .a=0xba, .x=0x22, .y=0x02, .sp=0xda, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb0ef, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb0ef, .value=0xdf, .type=IO_READ},
        {.addr=0xb0f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_022E) {
    const struct CPU_State initial_cpu = {.pc=0x3f5d, .a=0xc3, .x=0x60, .y=0xfd, .sp=0x8e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x3f5d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3f5e, .a=0x29, .x=0x60, .y=0xfd, .sp=0x8e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3f5d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3f5d, .value=0xdf, .type=IO_READ},
        {.addr=0x3f5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_022F) {
    const struct CPU_State initial_cpu = {.pc=0x20b1, .a=0x2c, .x=0x02, .y=0x20, .sp=0x90, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x20b1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x20b2, .a=0x92, .x=0x02, .y=0x20, .sp=0x90, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x20b1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x20b1, .value=0xdf, .type=IO_READ},
        {.addr=0x20b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0230) {
    const struct CPU_State initial_cpu = {.pc=0xafa6, .a=0x8e, .x=0x10, .y=0xb6, .sp=0x0f, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xafa6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xafa7, .a=0xf4, .x=0x10, .y=0xb6, .sp=0x0f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xafa6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xafa6, .value=0xdf, .type=IO_READ},
        {.addr=0xafa7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0231) {
    const struct CPU_State initial_cpu = {.pc=0x267b, .a=0xa9, .x=0x54, .y=0xb5, .sp=0x9a, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x267b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x267c, .a=0x0f, .x=0x54, .y=0xb5, .sp=0x9a, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x267b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x267b, .value=0xdf, .type=IO_READ},
        {.addr=0x267c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0232) {
    const struct CPU_State initial_cpu = {.pc=0x36ee, .a=0xb1, .x=0x77, .y=0x84, .sp=0x64, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x36ee, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x36ef, .a=0x11, .x=0x77, .y=0x84, .sp=0x64, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x36ee, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x36ee, .value=0xdf, .type=IO_READ},
        {.addr=0x36ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0233) {
    const struct CPU_State initial_cpu = {.pc=0x53db, .a=0x8e, .x=0x31, .y=0xf3, .sp=0x5a, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x53db, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x53dc, .a=0x94, .x=0x31, .y=0xf3, .sp=0x5a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x53db, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x53db, .value=0xdf, .type=IO_READ},
        {.addr=0x53dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0234) {
    const struct CPU_State initial_cpu = {.pc=0xb408, .a=0xd7, .x=0xb1, .y=0x86, .sp=0xdd, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb408, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb409, .a=0x3d, .x=0xb1, .y=0x86, .sp=0xdd, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb408, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb408, .value=0xdf, .type=IO_READ},
        {.addr=0xb409, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0235) {
    const struct CPU_State initial_cpu = {.pc=0xdc07, .a=0x57, .x=0x2a, .y=0xf9, .sp=0xc9, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xdc07, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdc08, .a=0xbd, .x=0x2a, .y=0xf9, .sp=0xc9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xdc07, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdc07, .value=0xdf, .type=IO_READ},
        {.addr=0xdc08, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0236) {
    const struct CPU_State initial_cpu = {.pc=0x612b, .a=0x28, .x=0xf1, .y=0x04, .sp=0xf5, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x612b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x612c, .a=0x28, .x=0xf1, .y=0x04, .sp=0xf5, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x612b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x612b, .value=0xdf, .type=IO_READ},
        {.addr=0x612c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0237) {
    const struct CPU_State initial_cpu = {.pc=0xecb1, .a=0x9b, .x=0xef, .y=0x29, .sp=0x1a, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xecb1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xecb2, .a=0x01, .x=0xef, .y=0x29, .sp=0x1a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xecb1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xecb1, .value=0xdf, .type=IO_READ},
        {.addr=0xecb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0238) {
    const struct CPU_State initial_cpu = {.pc=0x2428, .a=0x95, .x=0x9f, .y=0xbf, .sp=0xa9, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2428, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2429, .a=0xfb, .x=0x9f, .y=0xbf, .sp=0xa9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2428, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2428, .value=0xdf, .type=IO_READ},
        {.addr=0x2429, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0239) {
    const struct CPU_State initial_cpu = {.pc=0x9b70, .a=0x96, .x=0x2c, .y=0x6f, .sp=0xb8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x9b70, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9b71, .a=0xfc, .x=0x2c, .y=0x6f, .sp=0xb8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9b70, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9b70, .value=0xdf, .type=IO_READ},
        {.addr=0x9b71, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_023A) {
    const struct CPU_State initial_cpu = {.pc=0xe3bb, .a=0x48, .x=0xe6, .y=0x6b, .sp=0x40, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xe3bb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe3bc, .a=0x48, .x=0xe6, .y=0x6b, .sp=0x40, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xe3bb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe3bb, .value=0xdf, .type=IO_READ},
        {.addr=0xe3bc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_023B) {
    const struct CPU_State initial_cpu = {.pc=0xe860, .a=0xad, .x=0xac, .y=0x41, .sp=0x0b, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xe860, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe861, .a=0x13, .x=0xac, .y=0x41, .sp=0x0b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe860, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe860, .value=0xdf, .type=IO_READ},
        {.addr=0xe861, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_023C) {
    const struct CPU_State initial_cpu = {.pc=0xddf0, .a=0xe6, .x=0xe7, .y=0xe9, .sp=0x91, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xddf0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xddf1, .a=0x46, .x=0xe7, .y=0xe9, .sp=0x91, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xddf0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xddf0, .value=0xdf, .type=IO_READ},
        {.addr=0xddf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_023D) {
    const struct CPU_State initial_cpu = {.pc=0x766c, .a=0xf5, .x=0x2c, .y=0xb4, .sp=0x61, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x766c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x766d, .a=0x5b, .x=0x2c, .y=0xb4, .sp=0x61, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x766c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x766c, .value=0xdf, .type=IO_READ},
        {.addr=0x766d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_023E) {
    const struct CPU_State initial_cpu = {.pc=0xe55f, .a=0xb1, .x=0xb3, .y=0xc6, .sp=0xee, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xe55f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe560, .a=0x17, .x=0xb3, .y=0xc6, .sp=0xee, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe55f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe55f, .value=0xdf, .type=IO_READ},
        {.addr=0xe560, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_023F) {
    const struct CPU_State initial_cpu = {.pc=0xfa3a, .a=0xfe, .x=0x34, .y=0xed, .sp=0xab, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xfa3a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfa3b, .a=0x64, .x=0x34, .y=0xed, .sp=0xab, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xfa3a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfa3a, .value=0xdf, .type=IO_READ},
        {.addr=0xfa3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0240) {
    const struct CPU_State initial_cpu = {.pc=0x0d8d, .a=0xd8, .x=0x0a, .y=0xff, .sp=0x32, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0d8d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0d8e, .a=0x38, .x=0x0a, .y=0xff, .sp=0x32, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0d8d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0d8d, .value=0xdf, .type=IO_READ},
        {.addr=0x0d8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0241) {
    const struct CPU_State initial_cpu = {.pc=0x8605, .a=0xe0, .x=0x09, .y=0xda, .sp=0x05, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x8605, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8606, .a=0x46, .x=0x09, .y=0xda, .sp=0x05, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8605, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8605, .value=0xdf, .type=IO_READ},
        {.addr=0x8606, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0242) {
    const struct CPU_State initial_cpu = {.pc=0x631f, .a=0x20, .x=0xec, .y=0x1a, .sp=0xcc, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x631f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6320, .a=0x86, .x=0xec, .y=0x1a, .sp=0xcc, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x631f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x631f, .value=0xdf, .type=IO_READ},
        {.addr=0x6320, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0243) {
    const struct CPU_State initial_cpu = {.pc=0x3d66, .a=0x55, .x=0xca, .y=0x2c, .sp=0xbe, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x3d66, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3d67, .a=0xb5, .x=0xca, .y=0x2c, .sp=0xbe, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3d66, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3d66, .value=0xdf, .type=IO_READ},
        {.addr=0x3d67, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0244) {
    const struct CPU_State initial_cpu = {.pc=0xf37d, .a=0xb8, .x=0xb1, .y=0x7d, .sp=0x00, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xf37d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf37e, .a=0x1e, .x=0xb1, .y=0x7d, .sp=0x00, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf37d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf37d, .value=0xdf, .type=IO_READ},
        {.addr=0xf37e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0245) {
    const struct CPU_State initial_cpu = {.pc=0x4f0b, .a=0x7d, .x=0x62, .y=0x44, .sp=0x86, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x4f0b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4f0c, .a=0x83, .x=0x62, .y=0x44, .sp=0x86, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4f0b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4f0b, .value=0xdf, .type=IO_READ},
        {.addr=0x4f0c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0246) {
    const struct CPU_State initial_cpu = {.pc=0xaada, .a=0xd6, .x=0x84, .y=0x1f, .sp=0x17, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xaada, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xaadb, .a=0x3c, .x=0x84, .y=0x1f, .sp=0x17, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xaada, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xaada, .value=0xdf, .type=IO_READ},
        {.addr=0xaadb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0247) {
    const struct CPU_State initial_cpu = {.pc=0x2041, .a=0xac, .x=0xcc, .y=0xaa, .sp=0x1a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x2041, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2042, .a=0x12, .x=0xcc, .y=0xaa, .sp=0x1a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2041, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2041, .value=0xdf, .type=IO_READ},
        {.addr=0x2042, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0248) {
    const struct CPU_State initial_cpu = {.pc=0x1caa, .a=0xb1, .x=0xdd, .y=0x7d, .sp=0xb6, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x1caa, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1cab, .a=0x17, .x=0xdd, .y=0x7d, .sp=0xb6, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1caa, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1caa, .value=0xdf, .type=IO_READ},
        {.addr=0x1cab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0249) {
    const struct CPU_State initial_cpu = {.pc=0x52d2, .a=0x62, .x=0x27, .y=0xb3, .sp=0xa8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x52d2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x52d3, .a=0x68, .x=0x27, .y=0xb3, .sp=0xa8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x52d2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x52d2, .value=0xdf, .type=IO_READ},
        {.addr=0x52d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_024A) {
    const struct CPU_State initial_cpu = {.pc=0x467a, .a=0x38, .x=0xf1, .y=0x39, .sp=0x45, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x467a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x467b, .a=0x9e, .x=0xf1, .y=0x39, .sp=0x45, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x467a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x467a, .value=0xdf, .type=IO_READ},
        {.addr=0x467b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_024B) {
    const struct CPU_State initial_cpu = {.pc=0xa06f, .a=0x4d, .x=0x98, .y=0x21, .sp=0xe8, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xa06f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa070, .a=0xb3, .x=0x98, .y=0x21, .sp=0xe8, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa06f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa06f, .value=0xdf, .type=IO_READ},
        {.addr=0xa070, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_024C) {
    const struct CPU_State initial_cpu = {.pc=0xec4f, .a=0x32, .x=0x50, .y=0x07, .sp=0xc5, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xec4f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xec50, .a=0x38, .x=0x50, .y=0x07, .sp=0xc5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xec4f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xec4f, .value=0xdf, .type=IO_READ},
        {.addr=0xec50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_024D) {
    const struct CPU_State initial_cpu = {.pc=0xc69c, .a=0x83, .x=0x21, .y=0x2f, .sp=0x8c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xc69c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc69d, .a=0xe3, .x=0x21, .y=0x2f, .sp=0x8c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc69c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc69c, .value=0xdf, .type=IO_READ},
        {.addr=0xc69d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_024E) {
    const struct CPU_State initial_cpu = {.pc=0x7bd0, .a=0x9a, .x=0xf5, .y=0x61, .sp=0xda, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7bd1, .a=0x00, .x=0xf5, .y=0x61, .sp=0xda, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x7bd0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7bd0, .value=0xdf, .type=IO_READ},
        {.addr=0x7bd1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_024F) {
    const struct CPU_State initial_cpu = {.pc=0x8514, .a=0x99, .x=0x52, .y=0xf6, .sp=0x4b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x8514, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8515, .a=0x99, .x=0x52, .y=0xf6, .sp=0x4b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8514, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8514, .value=0xdf, .type=IO_READ},
        {.addr=0x8515, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0250) {
    const struct CPU_State initial_cpu = {.pc=0x1774, .a=0x19, .x=0x0a, .y=0xa0, .sp=0x9e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1774, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1775, .a=0x79, .x=0x0a, .y=0xa0, .sp=0x9e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1774, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1774, .value=0xdf, .type=IO_READ},
        {.addr=0x1775, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0251) {
    const struct CPU_State initial_cpu = {.pc=0x9a2a, .a=0x82, .x=0xcf, .y=0x17, .sp=0x4e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9a2a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9a2b, .a=0xe2, .x=0xcf, .y=0x17, .sp=0x4e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9a2a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9a2a, .value=0xdf, .type=IO_READ},
        {.addr=0x9a2b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0252) {
    const struct CPU_State initial_cpu = {.pc=0x7378, .a=0x3f, .x=0x29, .y=0x7b, .sp=0x40, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x7378, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7379, .a=0x45, .x=0x29, .y=0x7b, .sp=0x40, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7378, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7378, .value=0xdf, .type=IO_READ},
        {.addr=0x7379, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0253) {
    const struct CPU_State initial_cpu = {.pc=0xa272, .a=0xf6, .x=0xa5, .y=0x02, .sp=0x47, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xa272, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa273, .a=0x56, .x=0xa5, .y=0x02, .sp=0x47, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa272, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa272, .value=0xdf, .type=IO_READ},
        {.addr=0xa273, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0254) {
    const struct CPU_State initial_cpu = {.pc=0xa1df, .a=0xa1, .x=0x80, .y=0x09, .sp=0x31, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xa1df, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa1e0, .a=0x01, .x=0x80, .y=0x09, .sp=0x31, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa1df, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa1df, .value=0xdf, .type=IO_READ},
        {.addr=0xa1e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0255) {
    const struct CPU_State initial_cpu = {.pc=0xf4e0, .a=0x18, .x=0xe0, .y=0xd4, .sp=0xf4, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf4e1, .a=0x7e, .x=0xe0, .y=0xd4, .sp=0xf4, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf4e0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf4e0, .value=0xdf, .type=IO_READ},
        {.addr=0xf4e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0256) {
    const struct CPU_State initial_cpu = {.pc=0xa772, .a=0xb5, .x=0x39, .y=0xf2, .sp=0xb8, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xa772, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa773, .a=0x1b, .x=0x39, .y=0xf2, .sp=0xb8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa772, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa772, .value=0xdf, .type=IO_READ},
        {.addr=0xa773, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0257) {
    const struct CPU_State initial_cpu = {.pc=0x71a7, .a=0x72, .x=0x1c, .y=0x33, .sp=0x28, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x71a7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x71a8, .a=0x72, .x=0x1c, .y=0x33, .sp=0x28, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x71a7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x71a7, .value=0xdf, .type=IO_READ},
        {.addr=0x71a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0258) {
    const struct CPU_State initial_cpu = {.pc=0xd5f0, .a=0x65, .x=0x34, .y=0x5a, .sp=0xcc, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd5f1, .a=0xcb, .x=0x34, .y=0x5a, .sp=0xcc, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd5f0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd5f0, .value=0xdf, .type=IO_READ},
        {.addr=0xd5f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0259) {
    const struct CPU_State initial_cpu = {.pc=0x7520, .a=0x00, .x=0xed, .y=0xef, .sp=0xac, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x7520, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7521, .a=0x00, .x=0xed, .y=0xef, .sp=0xac, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x7520, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7520, .value=0xdf, .type=IO_READ},
        {.addr=0x7521, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_025A) {
    const struct CPU_State initial_cpu = {.pc=0xac85, .a=0x30, .x=0xfe, .y=0xd8, .sp=0x34, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xac85, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xac86, .a=0x36, .x=0xfe, .y=0xd8, .sp=0x34, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xac85, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xac85, .value=0xdf, .type=IO_READ},
        {.addr=0xac86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_025B) {
    const struct CPU_State initial_cpu = {.pc=0xa6ee, .a=0x4e, .x=0x94, .y=0x9c, .sp=0x8f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xa6ee, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa6ef, .a=0x54, .x=0x94, .y=0x9c, .sp=0x8f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa6ee, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa6ee, .value=0xdf, .type=IO_READ},
        {.addr=0xa6ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_025C) {
    const struct CPU_State initial_cpu = {.pc=0xc871, .a=0x29, .x=0xd3, .y=0x44, .sp=0x56, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xc871, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc872, .a=0x2f, .x=0xd3, .y=0x44, .sp=0x56, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc871, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc871, .value=0xdf, .type=IO_READ},
        {.addr=0xc872, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_025D) {
    const struct CPU_State initial_cpu = {.pc=0x204a, .a=0xe5, .x=0x89, .y=0xae, .sp=0xab, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x204a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x204b, .a=0x45, .x=0x89, .y=0xae, .sp=0xab, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x204a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x204a, .value=0xdf, .type=IO_READ},
        {.addr=0x204b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_025E) {
    const struct CPU_State initial_cpu = {.pc=0x3a17, .a=0xe9, .x=0xdf, .y=0xc3, .sp=0x78, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3a17, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3a18, .a=0x49, .x=0xdf, .y=0xc3, .sp=0x78, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x3a17, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3a17, .value=0xdf, .type=IO_READ},
        {.addr=0x3a18, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_025F) {
    const struct CPU_State initial_cpu = {.pc=0xf4ff, .a=0xe5, .x=0x5e, .y=0x95, .sp=0x33, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xf4ff, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf500, .a=0x4b, .x=0x5e, .y=0x95, .sp=0x33, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf4ff, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf4ff, .value=0xdf, .type=IO_READ},
        {.addr=0xf500, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0260) {
    const struct CPU_State initial_cpu = {.pc=0x2e8d, .a=0x9a, .x=0xb8, .y=0x23, .sp=0x9f, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x2e8d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2e8e, .a=0x00, .x=0xb8, .y=0x23, .sp=0x9f, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x2e8d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2e8d, .value=0xdf, .type=IO_READ},
        {.addr=0x2e8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0261) {
    const struct CPU_State initial_cpu = {.pc=0xb9e9, .a=0x21, .x=0x9e, .y=0x03, .sp=0x40, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb9ea, .a=0x81, .x=0x9e, .y=0x03, .sp=0x40, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb9e9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb9e9, .value=0xdf, .type=IO_READ},
        {.addr=0xb9ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0262) {
    const struct CPU_State initial_cpu = {.pc=0x55e7, .a=0x08, .x=0xa9, .y=0x14, .sp=0x69, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x55e7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x55e8, .a=0x08, .x=0xa9, .y=0x14, .sp=0x69, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x55e7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x55e7, .value=0xdf, .type=IO_READ},
        {.addr=0x55e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0263) {
    const struct CPU_State initial_cpu = {.pc=0xa1ef, .a=0x6f, .x=0x08, .y=0xca, .sp=0x3b, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xa1ef, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa1f0, .a=0x75, .x=0x08, .y=0xca, .sp=0x3b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa1ef, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa1ef, .value=0xdf, .type=IO_READ},
        {.addr=0xa1f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0264) {
    const struct CPU_State initial_cpu = {.pc=0x57e8, .a=0x3e, .x=0xb2, .y=0x85, .sp=0x37, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x57e8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x57e9, .a=0xa4, .x=0xb2, .y=0x85, .sp=0x37, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x57e8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x57e8, .value=0xdf, .type=IO_READ},
        {.addr=0x57e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0265) {
    const struct CPU_State initial_cpu = {.pc=0x29a8, .a=0x3f, .x=0xd8, .y=0x78, .sp=0x45, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x29a8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x29a9, .a=0x45, .x=0xd8, .y=0x78, .sp=0x45, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x29a8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x29a8, .value=0xdf, .type=IO_READ},
        {.addr=0x29a9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0266) {
    const struct CPU_State initial_cpu = {.pc=0x3ec3, .a=0x22, .x=0x88, .y=0xef, .sp=0x8b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x3ec3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3ec4, .a=0x22, .x=0x88, .y=0xef, .sp=0x8b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3ec3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3ec3, .value=0xdf, .type=IO_READ},
        {.addr=0x3ec4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0267) {
    const struct CPU_State initial_cpu = {.pc=0xf51c, .a=0x78, .x=0x9c, .y=0x9c, .sp=0xfc, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xf51c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf51d, .a=0xd8, .x=0x9c, .y=0x9c, .sp=0xfc, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf51c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf51c, .value=0xdf, .type=IO_READ},
        {.addr=0xf51d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0268) {
    const struct CPU_State initial_cpu = {.pc=0x20fe, .a=0x34, .x=0xf3, .y=0x05, .sp=0xe7, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x20fe, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x20ff, .a=0x9a, .x=0xf3, .y=0x05, .sp=0xe7, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x20fe, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x20fe, .value=0xdf, .type=IO_READ},
        {.addr=0x20ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0269) {
    const struct CPU_State initial_cpu = {.pc=0x6ecb, .a=0xd9, .x=0xb9, .y=0x12, .sp=0x16, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x6ecb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6ecc, .a=0x39, .x=0xb9, .y=0x12, .sp=0x16, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x6ecb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6ecb, .value=0xdf, .type=IO_READ},
        {.addr=0x6ecc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_026A) {
    const struct CPU_State initial_cpu = {.pc=0x3634, .a=0x5a, .x=0x58, .y=0xdb, .sp=0x24, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3634, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3635, .a=0x60, .x=0x58, .y=0xdb, .sp=0x24, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3634, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3634, .value=0xdf, .type=IO_READ},
        {.addr=0x3635, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_026B) {
    const struct CPU_State initial_cpu = {.pc=0xa4c1, .a=0x80, .x=0x9a, .y=0xd8, .sp=0x7d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa4c2, .a=0x80, .x=0x9a, .y=0xd8, .sp=0x7d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa4c1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa4c1, .value=0xdf, .type=IO_READ},
        {.addr=0xa4c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_026C) {
    const struct CPU_State initial_cpu = {.pc=0x7449, .a=0xc6, .x=0x41, .y=0x1a, .sp=0x16, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x7449, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x744a, .a=0x26, .x=0x41, .y=0x1a, .sp=0x16, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7449, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7449, .value=0xdf, .type=IO_READ},
        {.addr=0x744a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_026D) {
    const struct CPU_State initial_cpu = {.pc=0x1b08, .a=0x5a, .x=0xaa, .y=0x61, .sp=0xd7, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x1b08, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1b09, .a=0x60, .x=0xaa, .y=0x61, .sp=0xd7, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1b08, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1b08, .value=0xdf, .type=IO_READ},
        {.addr=0x1b09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_026E) {
    const struct CPU_State initial_cpu = {.pc=0x48e3, .a=0x8f, .x=0xb3, .y=0xe7, .sp=0xa6, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x48e3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x48e4, .a=0xf5, .x=0xb3, .y=0xe7, .sp=0xa6, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x48e3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x48e3, .value=0xdf, .type=IO_READ},
        {.addr=0x48e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_026F) {
    const struct CPU_State initial_cpu = {.pc=0x8842, .a=0xf1, .x=0x87, .y=0x0e, .sp=0x5a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8842, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8843, .a=0x51, .x=0x87, .y=0x0e, .sp=0x5a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8842, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8842, .value=0xdf, .type=IO_READ},
        {.addr=0x8843, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0270) {
    const struct CPU_State initial_cpu = {.pc=0x2a86, .a=0x86, .x=0x89, .y=0xf7, .sp=0x0d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x2a86, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2a87, .a=0x8c, .x=0x89, .y=0xf7, .sp=0x0d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2a86, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2a86, .value=0xdf, .type=IO_READ},
        {.addr=0x2a87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0271) {
    const struct CPU_State initial_cpu = {.pc=0x5068, .a=0x69, .x=0x5a, .y=0x9e, .sp=0x1c, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5068, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5069, .a=0xcf, .x=0x5a, .y=0x9e, .sp=0x1c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5068, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5068, .value=0xdf, .type=IO_READ},
        {.addr=0x5069, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0272) {
    const struct CPU_State initial_cpu = {.pc=0x51d5, .a=0x77, .x=0xb1, .y=0x13, .sp=0x23, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x51d5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x51d6, .a=0x7d, .x=0xb1, .y=0x13, .sp=0x23, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x51d5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x51d5, .value=0xdf, .type=IO_READ},
        {.addr=0x51d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0273) {
    const struct CPU_State initial_cpu = {.pc=0xd427, .a=0x28, .x=0x94, .y=0x47, .sp=0x42, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd427, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd428, .a=0x8e, .x=0x94, .y=0x47, .sp=0x42, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd427, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd427, .value=0xdf, .type=IO_READ},
        {.addr=0xd428, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0274) {
    const struct CPU_State initial_cpu = {.pc=0x4570, .a=0xfa, .x=0xc4, .y=0x05, .sp=0xe3, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x4570, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4571, .a=0x60, .x=0xc4, .y=0x05, .sp=0xe3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4570, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4570, .value=0xdf, .type=IO_READ},
        {.addr=0x4571, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0275) {
    const struct CPU_State initial_cpu = {.pc=0xa34f, .a=0xe3, .x=0xf4, .y=0xdd, .sp=0x97, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xa34f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa350, .a=0x49, .x=0xf4, .y=0xdd, .sp=0x97, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa34f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa34f, .value=0xdf, .type=IO_READ},
        {.addr=0xa350, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0276) {
    const struct CPU_State initial_cpu = {.pc=0x5061, .a=0xe1, .x=0x30, .y=0x00, .sp=0x58, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x5061, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5062, .a=0x47, .x=0x30, .y=0x00, .sp=0x58, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5061, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5061, .value=0xdf, .type=IO_READ},
        {.addr=0x5062, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0277) {
    const struct CPU_State initial_cpu = {.pc=0x784f, .a=0xfe, .x=0x98, .y=0x42, .sp=0x34, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x784f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7850, .a=0x64, .x=0x98, .y=0x42, .sp=0x34, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x784f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x784f, .value=0xdf, .type=IO_READ},
        {.addr=0x7850, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0278) {
    const struct CPU_State initial_cpu = {.pc=0x9ede, .a=0x43, .x=0xde, .y=0x89, .sp=0xbb, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9ede, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9edf, .a=0xa3, .x=0xde, .y=0x89, .sp=0xbb, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x9ede, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9ede, .value=0xdf, .type=IO_READ},
        {.addr=0x9edf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0279) {
    const struct CPU_State initial_cpu = {.pc=0x78d5, .a=0xfc, .x=0x43, .y=0x08, .sp=0x58, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x78d5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x78d6, .a=0x62, .x=0x43, .y=0x08, .sp=0x58, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x78d5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x78d5, .value=0xdf, .type=IO_READ},
        {.addr=0x78d6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_027A) {
    const struct CPU_State initial_cpu = {.pc=0xed04, .a=0x38, .x=0x1b, .y=0xbb, .sp=0x78, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xed04, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xed05, .a=0x38, .x=0x1b, .y=0xbb, .sp=0x78, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xed04, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xed04, .value=0xdf, .type=IO_READ},
        {.addr=0xed05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_027B) {
    const struct CPU_State initial_cpu = {.pc=0xcc88, .a=0x94, .x=0xb6, .y=0x69, .sp=0x22, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc88, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcc89, .a=0x9a, .x=0xb6, .y=0x69, .sp=0x22, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcc88, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcc88, .value=0xdf, .type=IO_READ},
        {.addr=0xcc89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_027C) {
    const struct CPU_State initial_cpu = {.pc=0xe718, .a=0x4b, .x=0x2f, .y=0x31, .sp=0xd8, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xe718, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe719, .a=0x51, .x=0x2f, .y=0x31, .sp=0xd8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe718, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe718, .value=0xdf, .type=IO_READ},
        {.addr=0xe719, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_027D) {
    const struct CPU_State initial_cpu = {.pc=0x761a, .a=0x6b, .x=0xc8, .y=0x45, .sp=0xef, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x761a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x761b, .a=0x71, .x=0xc8, .y=0x45, .sp=0xef, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x761a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x761a, .value=0xdf, .type=IO_READ},
        {.addr=0x761b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_027E) {
    const struct CPU_State initial_cpu = {.pc=0xdb3f, .a=0xba, .x=0xa4, .y=0xe2, .sp=0x58, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xdb3f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdb40, .a=0x20, .x=0xa4, .y=0xe2, .sp=0x58, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdb3f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdb3f, .value=0xdf, .type=IO_READ},
        {.addr=0xdb40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_027F) {
    const struct CPU_State initial_cpu = {.pc=0xc1dd, .a=0xb7, .x=0xfe, .y=0x30, .sp=0x97, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xc1dd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc1de, .a=0x1d, .x=0xfe, .y=0x30, .sp=0x97, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc1dd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc1dd, .value=0xdf, .type=IO_READ},
        {.addr=0xc1de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0280) {
    const struct CPU_State initial_cpu = {.pc=0x3e32, .a=0x06, .x=0x81, .y=0x71, .sp=0x38, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x3e32, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3e33, .a=0x66, .x=0x81, .y=0x71, .sp=0x38, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3e32, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3e32, .value=0xdf, .type=IO_READ},
        {.addr=0x3e33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0281) {
    const struct CPU_State initial_cpu = {.pc=0xa4bc, .a=0xdc, .x=0xeb, .y=0x19, .sp=0xcf, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xa4bc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa4bd, .a=0x42, .x=0xeb, .y=0x19, .sp=0xcf, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa4bc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa4bc, .value=0xdf, .type=IO_READ},
        {.addr=0xa4bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0282) {
    const struct CPU_State initial_cpu = {.pc=0xe9c5, .a=0xfa, .x=0x92, .y=0x1b, .sp=0x7e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xe9c5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe9c6, .a=0x60, .x=0x92, .y=0x1b, .sp=0x7e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe9c5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe9c5, .value=0xdf, .type=IO_READ},
        {.addr=0xe9c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0283) {
    const struct CPU_State initial_cpu = {.pc=0x372f, .a=0x79, .x=0xbe, .y=0x31, .sp=0xd6, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x372f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3730, .a=0xd9, .x=0xbe, .y=0x31, .sp=0xd6, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x372f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x372f, .value=0xdf, .type=IO_READ},
        {.addr=0x3730, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0284) {
    const struct CPU_State initial_cpu = {.pc=0x5249, .a=0x84, .x=0x9d, .y=0x65, .sp=0x62, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x5249, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x524a, .a=0xe4, .x=0x9d, .y=0x65, .sp=0x62, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5249, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5249, .value=0xdf, .type=IO_READ},
        {.addr=0x524a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb28b, .a=0xc4, .x=0x9a, .y=0x7d, .sp=0x19, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xb28b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb28c, .a=0x24, .x=0x9a, .y=0x7d, .sp=0x19, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb28b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb28b, .value=0xdf, .type=IO_READ},
        {.addr=0xb28c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0286) {
    const struct CPU_State initial_cpu = {.pc=0x1911, .a=0x2f, .x=0xb7, .y=0xfb, .sp=0x0b, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x1911, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1912, .a=0x35, .x=0xb7, .y=0xfb, .sp=0x0b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1911, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1911, .value=0xdf, .type=IO_READ},
        {.addr=0x1912, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0287) {
    const struct CPU_State initial_cpu = {.pc=0x1dd3, .a=0xa2, .x=0x94, .y=0xcc, .sp=0x35, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1dd3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1dd4, .a=0x02, .x=0x94, .y=0xcc, .sp=0x35, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1dd3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1dd3, .value=0xdf, .type=IO_READ},
        {.addr=0x1dd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0288) {
    const struct CPU_State initial_cpu = {.pc=0x9428, .a=0x6a, .x=0xdd, .y=0x76, .sp=0xf9, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9428, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9429, .a=0x70, .x=0xdd, .y=0x76, .sp=0xf9, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9428, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9428, .value=0xdf, .type=IO_READ},
        {.addr=0x9429, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0289) {
    const struct CPU_State initial_cpu = {.pc=0xbd74, .a=0x09, .x=0x43, .y=0x71, .sp=0x9d, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xbd74, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbd75, .a=0x6f, .x=0x43, .y=0x71, .sp=0x9d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbd74, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbd74, .value=0xdf, .type=IO_READ},
        {.addr=0xbd75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_028A) {
    const struct CPU_State initial_cpu = {.pc=0x91f4, .a=0x98, .x=0x13, .y=0xad, .sp=0xfb, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x91f4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x91f5, .a=0xf8, .x=0x13, .y=0xad, .sp=0xfb, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x91f4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x91f4, .value=0xdf, .type=IO_READ},
        {.addr=0x91f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_028B) {
    const struct CPU_State initial_cpu = {.pc=0x4e55, .a=0x1d, .x=0xdf, .y=0x46, .sp=0xd1, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4e55, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4e56, .a=0x83, .x=0xdf, .y=0x46, .sp=0xd1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4e55, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4e55, .value=0xdf, .type=IO_READ},
        {.addr=0x4e56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_028C) {
    const struct CPU_State initial_cpu = {.pc=0x6bc1, .a=0xad, .x=0xca, .y=0xc5, .sp=0x1f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x6bc1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6bc2, .a=0x13, .x=0xca, .y=0xc5, .sp=0x1f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6bc1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6bc1, .value=0xdf, .type=IO_READ},
        {.addr=0x6bc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_028D) {
    const struct CPU_State initial_cpu = {.pc=0xc6ee, .a=0x44, .x=0x4e, .y=0xed, .sp=0x18, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ee, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc6ef, .a=0x4a, .x=0x4e, .y=0xed, .sp=0x18, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc6ee, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc6ee, .value=0xdf, .type=IO_READ},
        {.addr=0xc6ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_028E) {
    const struct CPU_State initial_cpu = {.pc=0x2ca2, .a=0x28, .x=0xce, .y=0xf6, .sp=0x93, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2ca2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2ca3, .a=0x8e, .x=0xce, .y=0xf6, .sp=0x93, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2ca2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2ca2, .value=0xdf, .type=IO_READ},
        {.addr=0x2ca3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_028F) {
    const struct CPU_State initial_cpu = {.pc=0x4cf2, .a=0x81, .x=0xe7, .y=0xf4, .sp=0xd4, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4cf3, .a=0x81, .x=0xe7, .y=0xf4, .sp=0xd4, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4cf2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4cf2, .value=0xdf, .type=IO_READ},
        {.addr=0x4cf3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0290) {
    const struct CPU_State initial_cpu = {.pc=0xfd3c, .a=0xd0, .x=0xbc, .y=0xd2, .sp=0x82, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xfd3c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfd3d, .a=0x30, .x=0xbc, .y=0xd2, .sp=0x82, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfd3c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfd3c, .value=0xdf, .type=IO_READ},
        {.addr=0xfd3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0291) {
    const struct CPU_State initial_cpu = {.pc=0xa095, .a=0x29, .x=0xc0, .y=0x14, .sp=0xa2, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xa095, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa096, .a=0x2f, .x=0xc0, .y=0x14, .sp=0xa2, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa095, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa095, .value=0xdf, .type=IO_READ},
        {.addr=0xa096, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0292) {
    const struct CPU_State initial_cpu = {.pc=0x0801, .a=0x81, .x=0x6e, .y=0xae, .sp=0xda, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0801, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0802, .a=0xe7, .x=0x6e, .y=0xae, .sp=0xda, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0801, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0801, .value=0xdf, .type=IO_READ},
        {.addr=0x0802, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0293) {
    const struct CPU_State initial_cpu = {.pc=0x0b56, .a=0x43, .x=0xc3, .y=0x58, .sp=0x99, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0b56, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0b57, .a=0xa3, .x=0xc3, .y=0x58, .sp=0x99, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0b56, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0b56, .value=0xdf, .type=IO_READ},
        {.addr=0x0b57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0294) {
    const struct CPU_State initial_cpu = {.pc=0x955e, .a=0x6d, .x=0x99, .y=0x3b, .sp=0xf8, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x955e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x955f, .a=0x73, .x=0x99, .y=0x3b, .sp=0xf8, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x955e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x955e, .value=0xdf, .type=IO_READ},
        {.addr=0x955f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0295) {
    const struct CPU_State initial_cpu = {.pc=0x9093, .a=0x6e, .x=0x56, .y=0xbc, .sp=0xa6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x9093, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9094, .a=0x74, .x=0x56, .y=0xbc, .sp=0xa6, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x9093, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9093, .value=0xdf, .type=IO_READ},
        {.addr=0x9094, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0296) {
    const struct CPU_State initial_cpu = {.pc=0x994d, .a=0x02, .x=0x52, .y=0x0e, .sp=0xb8, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x994d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x994e, .a=0x62, .x=0x52, .y=0x0e, .sp=0xb8, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x994d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x994d, .value=0xdf, .type=IO_READ},
        {.addr=0x994e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0297) {
    const struct CPU_State initial_cpu = {.pc=0x9e87, .a=0xdb, .x=0xbd, .y=0xa2, .sp=0xd6, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e87, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9e88, .a=0x41, .x=0xbd, .y=0xa2, .sp=0xd6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9e87, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9e87, .value=0xdf, .type=IO_READ},
        {.addr=0x9e88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0298) {
    const struct CPU_State initial_cpu = {.pc=0xffb0, .a=0xb1, .x=0xdd, .y=0xdc, .sp=0xa8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xffb0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xffb1, .a=0x11, .x=0xdd, .y=0xdc, .sp=0xa8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xffb0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xffb0, .value=0xdf, .type=IO_READ},
        {.addr=0xffb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0299) {
    const struct CPU_State initial_cpu = {.pc=0x48e8, .a=0x42, .x=0xf1, .y=0x1f, .sp=0xdf, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x48e8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x48e9, .a=0xa8, .x=0xf1, .y=0x1f, .sp=0xdf, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x48e8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x48e8, .value=0xdf, .type=IO_READ},
        {.addr=0x48e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_029A) {
    const struct CPU_State initial_cpu = {.pc=0x8046, .a=0x84, .x=0xcc, .y=0x45, .sp=0xb6, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x8046, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8047, .a=0xe4, .x=0xcc, .y=0x45, .sp=0xb6, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x8046, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8046, .value=0xdf, .type=IO_READ},
        {.addr=0x8047, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_029B) {
    const struct CPU_State initial_cpu = {.pc=0x1ef2, .a=0xd3, .x=0x99, .y=0xac, .sp=0xba, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ef2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1ef3, .a=0x39, .x=0x99, .y=0xac, .sp=0xba, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1ef2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1ef2, .value=0xdf, .type=IO_READ},
        {.addr=0x1ef3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_029C) {
    const struct CPU_State initial_cpu = {.pc=0x300a, .a=0x0c, .x=0x3a, .y=0x93, .sp=0x07, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x300a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x300b, .a=0x12, .x=0x3a, .y=0x93, .sp=0x07, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x300a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x300a, .value=0xdf, .type=IO_READ},
        {.addr=0x300b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_029D) {
    const struct CPU_State initial_cpu = {.pc=0xfc10, .a=0xc5, .x=0x82, .y=0x80, .sp=0x9e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xfc10, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfc11, .a=0x2b, .x=0x82, .y=0x80, .sp=0x9e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xfc10, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfc10, .value=0xdf, .type=IO_READ},
        {.addr=0xfc11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_029E) {
    const struct CPU_State initial_cpu = {.pc=0x62df, .a=0xaa, .x=0x07, .y=0x64, .sp=0xf6, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x62df, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x62e0, .a=0x10, .x=0x07, .y=0x64, .sp=0xf6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x62df, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x62df, .value=0xdf, .type=IO_READ},
        {.addr=0x62e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_029F) {
    const struct CPU_State initial_cpu = {.pc=0xc0fe, .a=0xf2, .x=0x5a, .y=0xc8, .sp=0x9c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xc0fe, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc0ff, .a=0x52, .x=0x5a, .y=0xc8, .sp=0x9c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc0fe, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc0fe, .value=0xdf, .type=IO_READ},
        {.addr=0xc0ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xc4c6, .a=0x90, .x=0x88, .y=0xb7, .sp=0x7a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc4c6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc4c7, .a=0x90, .x=0x88, .y=0xb7, .sp=0x7a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc4c6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc4c6, .value=0xdf, .type=IO_READ},
        {.addr=0xc4c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x1337, .a=0x41, .x=0x99, .y=0xf8, .sp=0x4f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x1337, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1338, .a=0xa1, .x=0x99, .y=0xf8, .sp=0x4f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1337, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1337, .value=0xdf, .type=IO_READ},
        {.addr=0x1338, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x6dae, .a=0xb1, .x=0x46, .y=0x6e, .sp=0x64, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x6dae, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6daf, .a=0x11, .x=0x46, .y=0x6e, .sp=0x64, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6dae, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6dae, .value=0xdf, .type=IO_READ},
        {.addr=0x6daf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x9a24, .a=0x02, .x=0x3c, .y=0x8b, .sp=0x63, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x9a24, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9a25, .a=0x62, .x=0x3c, .y=0x8b, .sp=0x63, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9a24, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9a24, .value=0xdf, .type=IO_READ},
        {.addr=0x9a25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x7fb2, .a=0x36, .x=0x43, .y=0xeb, .sp=0x16, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x7fb2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7fb3, .a=0x3c, .x=0x43, .y=0xeb, .sp=0x16, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7fb2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7fb2, .value=0xdf, .type=IO_READ},
        {.addr=0x7fb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x55f3, .a=0xf4, .x=0x0f, .y=0x98, .sp=0xf4, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x55f3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x55f4, .a=0x5a, .x=0x0f, .y=0x98, .sp=0xf4, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x55f3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x55f3, .value=0xdf, .type=IO_READ},
        {.addr=0x55f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x96bc, .a=0xe6, .x=0xe8, .y=0x7c, .sp=0xe2, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x96bc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x96bd, .a=0x46, .x=0xe8, .y=0x7c, .sp=0xe2, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x96bc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x96bc, .value=0xdf, .type=IO_READ},
        {.addr=0x96bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x18bd, .a=0xa8, .x=0xfb, .y=0x69, .sp=0xbe, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x18bd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x18be, .a=0x08, .x=0xfb, .y=0x69, .sp=0xbe, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x18bd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x18bd, .value=0xdf, .type=IO_READ},
        {.addr=0x18be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x7b32, .a=0x09, .x=0x8f, .y=0x7a, .sp=0xea, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7b32, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7b33, .a=0x69, .x=0x8f, .y=0x7a, .sp=0xea, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7b32, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7b32, .value=0xdf, .type=IO_READ},
        {.addr=0x7b33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x9947, .a=0xa1, .x=0x00, .y=0x50, .sp=0x71, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x9947, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9948, .a=0x07, .x=0x00, .y=0x50, .sp=0x71, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9947, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9947, .value=0xdf, .type=IO_READ},
        {.addr=0x9948, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xd36d, .a=0x91, .x=0xb7, .y=0xba, .sp=0xd9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xd36d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd36e, .a=0xf7, .x=0xb7, .y=0xba, .sp=0xd9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd36d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd36d, .value=0xdf, .type=IO_READ},
        {.addr=0xd36e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x9007, .a=0xea, .x=0x93, .y=0x22, .sp=0xca, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9007, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9008, .a=0x50, .x=0x93, .y=0x22, .sp=0xca, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9007, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9007, .value=0xdf, .type=IO_READ},
        {.addr=0x9008, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x9f9a, .a=0x4c, .x=0x50, .y=0x74, .sp=0x4e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x9f9a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9f9b, .a=0xb2, .x=0x50, .y=0x74, .sp=0x4e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9f9a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9f9a, .value=0xdf, .type=IO_READ},
        {.addr=0x9f9b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xb7e0, .a=0xb1, .x=0xbf, .y=0xbe, .sp=0xff, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xb7e0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb7e1, .a=0x17, .x=0xbf, .y=0xbe, .sp=0xff, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb7e0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb7e0, .value=0xdf, .type=IO_READ},
        {.addr=0xb7e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xd44a, .a=0x9c, .x=0xa2, .y=0x46, .sp=0x33, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd44a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd44b, .a=0x02, .x=0xa2, .y=0x46, .sp=0x33, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd44a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd44a, .value=0xdf, .type=IO_READ},
        {.addr=0xd44b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x97f5, .a=0xe9, .x=0x6d, .y=0xd7, .sp=0x04, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x97f5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x97f6, .a=0x4f, .x=0x6d, .y=0xd7, .sp=0x04, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x97f5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x97f5, .value=0xdf, .type=IO_READ},
        {.addr=0x97f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x722c, .a=0x7f, .x=0x80, .y=0xd3, .sp=0x6a, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x722c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x722d, .a=0xe5, .x=0x80, .y=0xd3, .sp=0x6a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x722c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x722c, .value=0xdf, .type=IO_READ},
        {.addr=0x722d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x8af1, .a=0x43, .x=0xc8, .y=0x04, .sp=0x2b, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x8af1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8af2, .a=0x43, .x=0xc8, .y=0x04, .sp=0x2b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8af1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8af1, .value=0xdf, .type=IO_READ},
        {.addr=0x8af2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xdbc1, .a=0xb6, .x=0x70, .y=0x4b, .sp=0xe5, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xdbc1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdbc2, .a=0x1c, .x=0x70, .y=0x4b, .sp=0xe5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xdbc1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdbc1, .value=0xdf, .type=IO_READ},
        {.addr=0xdbc2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xc404, .a=0xe1, .x=0xcd, .y=0xb9, .sp=0x12, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xc404, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc405, .a=0x41, .x=0xcd, .y=0xb9, .sp=0x12, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc404, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc404, .value=0xdf, .type=IO_READ},
        {.addr=0xc405, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xdffb, .a=0x75, .x=0x6d, .y=0x32, .sp=0x9a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xdffb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdffc, .a=0xd5, .x=0x6d, .y=0x32, .sp=0x9a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xdffb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdffb, .value=0xdf, .type=IO_READ},
        {.addr=0xdffc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x7b0c, .a=0x7c, .x=0x24, .y=0xb1, .sp=0x77, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7b0c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7b0d, .a=0xe2, .x=0x24, .y=0xb1, .sp=0x77, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7b0c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7b0c, .value=0xdf, .type=IO_READ},
        {.addr=0x7b0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xbd3e, .a=0x30, .x=0x3d, .y=0xda, .sp=0xf2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xbd3e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbd3f, .a=0x30, .x=0x3d, .y=0xda, .sp=0xf2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xbd3e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbd3e, .value=0xdf, .type=IO_READ},
        {.addr=0xbd3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xce15, .a=0x31, .x=0x73, .y=0xcc, .sp=0xe9, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xce15, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xce16, .a=0x97, .x=0x73, .y=0xcc, .sp=0xe9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xce15, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xce15, .value=0xdf, .type=IO_READ},
        {.addr=0xce16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x9962, .a=0x14, .x=0x4a, .y=0xaa, .sp=0x35, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x9962, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9963, .a=0x14, .x=0x4a, .y=0xaa, .sp=0x35, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9962, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9962, .value=0xdf, .type=IO_READ},
        {.addr=0x9963, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x3a0e, .a=0xe4, .x=0xd6, .y=0x80, .sp=0xd0, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3a0f, .a=0x44, .x=0xd6, .y=0x80, .sp=0xd0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3a0e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3a0e, .value=0xdf, .type=IO_READ},
        {.addr=0x3a0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xccdb, .a=0x0d, .x=0xe1, .y=0x12, .sp=0x89, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xccdb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xccdc, .a=0x13, .x=0xe1, .y=0x12, .sp=0x89, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xccdb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xccdb, .value=0xdf, .type=IO_READ},
        {.addr=0xccdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xc4ed, .a=0x93, .x=0x46, .y=0x0f, .sp=0xef, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc4ed, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc4ee, .a=0xf3, .x=0x46, .y=0x0f, .sp=0xef, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc4ed, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc4ed, .value=0xdf, .type=IO_READ},
        {.addr=0xc4ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x567b, .a=0xbf, .x=0xe0, .y=0xc4, .sp=0xfb, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x567b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x567c, .a=0x25, .x=0xe0, .y=0xc4, .sp=0xfb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x567b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x567b, .value=0xdf, .type=IO_READ},
        {.addr=0x567c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x81d2, .a=0xd2, .x=0xbc, .y=0x69, .sp=0x9a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x81d2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x81d3, .a=0x32, .x=0xbc, .y=0x69, .sp=0x9a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x81d2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x81d2, .value=0xdf, .type=IO_READ},
        {.addr=0x81d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x1365, .a=0x21, .x=0x23, .y=0x19, .sp=0xea, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x1365, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1366, .a=0x21, .x=0x23, .y=0x19, .sp=0xea, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1365, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1365, .value=0xdf, .type=IO_READ},
        {.addr=0x1366, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x209b, .a=0x33, .x=0x63, .y=0x1a, .sp=0x31, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x209b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x209c, .a=0x99, .x=0x63, .y=0x1a, .sp=0x31, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x209b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x209b, .value=0xdf, .type=IO_READ},
        {.addr=0x209c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xe3f4, .a=0x25, .x=0xce, .y=0xda, .sp=0xba, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xe3f4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe3f5, .a=0x85, .x=0xce, .y=0xda, .sp=0xba, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xe3f4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe3f4, .value=0xdf, .type=IO_READ},
        {.addr=0xe3f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x2bcc, .a=0x10, .x=0x37, .y=0x72, .sp=0x9e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2bcc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2bcd, .a=0x76, .x=0x37, .y=0x72, .sp=0x9e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2bcc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2bcc, .value=0xdf, .type=IO_READ},
        {.addr=0x2bcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x89ae, .a=0x93, .x=0x3d, .y=0xdb, .sp=0xc2, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x89ae, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x89af, .a=0x99, .x=0x3d, .y=0xdb, .sp=0xc2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x89ae, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x89ae, .value=0xdf, .type=IO_READ},
        {.addr=0x89af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x7a67, .a=0x4b, .x=0x05, .y=0x49, .sp=0x2e, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x7a67, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7a68, .a=0x51, .x=0x05, .y=0x49, .sp=0x2e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7a67, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7a67, .value=0xdf, .type=IO_READ},
        {.addr=0x7a68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xb5b0, .a=0x5b, .x=0x16, .y=0xe1, .sp=0x54, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xb5b0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb5b1, .a=0xc1, .x=0x16, .y=0xe1, .sp=0x54, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb5b0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb5b0, .value=0xdf, .type=IO_READ},
        {.addr=0xb5b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2aa2, .a=0x6e, .x=0x66, .y=0xaa, .sp=0xb4, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x2aa2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2aa3, .a=0x74, .x=0x66, .y=0xaa, .sp=0xb4, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2aa2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2aa2, .value=0xdf, .type=IO_READ},
        {.addr=0x2aa3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xba64, .a=0x39, .x=0xd4, .y=0x0f, .sp=0xf1, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xba64, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xba65, .a=0x3f, .x=0xd4, .y=0x0f, .sp=0xf1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xba64, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xba64, .value=0xdf, .type=IO_READ},
        {.addr=0xba65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x7142, .a=0xa3, .x=0x36, .y=0x4d, .sp=0xd1, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x7142, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7143, .a=0x09, .x=0x36, .y=0x4d, .sp=0xd1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x7142, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7142, .value=0xdf, .type=IO_READ},
        {.addr=0x7143, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xf18b, .a=0x8b, .x=0x1e, .y=0xc5, .sp=0x03, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xf18b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf18c, .a=0xf1, .x=0x1e, .y=0xc5, .sp=0x03, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xf18b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf18b, .value=0xdf, .type=IO_READ},
        {.addr=0xf18c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xa7bf, .a=0xb4, .x=0x21, .y=0xe4, .sp=0x76, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xa7bf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa7c0, .a=0x14, .x=0x21, .y=0xe4, .sp=0x76, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa7bf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa7bf, .value=0xdf, .type=IO_READ},
        {.addr=0xa7c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xb6a9, .a=0x84, .x=0x5b, .y=0x43, .sp=0x6b, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xb6a9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb6aa, .a=0xea, .x=0x5b, .y=0x43, .sp=0x6b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb6a9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb6a9, .value=0xdf, .type=IO_READ},
        {.addr=0xb6aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x26dd, .a=0xfa, .x=0x8b, .y=0x46, .sp=0x38, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x26dd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x26de, .a=0x60, .x=0x8b, .y=0x46, .sp=0x38, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x26dd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x26dd, .value=0xdf, .type=IO_READ},
        {.addr=0x26de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x6be9, .a=0x2c, .x=0x92, .y=0x08, .sp=0x0c, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x6be9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6bea, .a=0x92, .x=0x92, .y=0x08, .sp=0x0c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6be9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6be9, .value=0xdf, .type=IO_READ},
        {.addr=0x6bea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x3b25, .a=0x7b, .x=0x14, .y=0x5f, .sp=0xb3, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x3b25, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3b26, .a=0x81, .x=0x14, .y=0x5f, .sp=0xb3, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3b25, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3b25, .value=0xdf, .type=IO_READ},
        {.addr=0x3b26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x4fc8, .a=0x40, .x=0x11, .y=0x19, .sp=0xf1, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x4fc8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4fc9, .a=0x46, .x=0x11, .y=0x19, .sp=0xf1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4fc8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4fc8, .value=0xdf, .type=IO_READ},
        {.addr=0x4fc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xff55, .a=0x29, .x=0xbe, .y=0xe4, .sp=0x9d, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xff55, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xff56, .a=0x8f, .x=0xbe, .y=0xe4, .sp=0x9d, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xff55, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xff55, .value=0xdf, .type=IO_READ},
        {.addr=0xff56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x77a7, .a=0x2f, .x=0x61, .y=0x68, .sp=0x12, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x77a7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x77a8, .a=0x35, .x=0x61, .y=0x68, .sp=0x12, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x77a7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x77a7, .value=0xdf, .type=IO_READ},
        {.addr=0x77a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x5fa9, .a=0x16, .x=0x87, .y=0x9e, .sp=0x40, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5faa, .a=0x7c, .x=0x87, .y=0x9e, .sp=0x40, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5fa9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5fa9, .value=0xdf, .type=IO_READ},
        {.addr=0x5faa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xd286, .a=0x6e, .x=0x40, .y=0x01, .sp=0x98, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xd286, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd287, .a=0xd4, .x=0x40, .y=0x01, .sp=0x98, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xd286, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd286, .value=0xdf, .type=IO_READ},
        {.addr=0xd287, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xbab0, .a=0x2e, .x=0xf7, .y=0x25, .sp=0xf2, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xbab0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbab1, .a=0x94, .x=0xf7, .y=0x25, .sp=0xf2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xbab0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbab0, .value=0xdf, .type=IO_READ},
        {.addr=0xbab1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x6f88, .a=0x2e, .x=0x94, .y=0x43, .sp=0x48, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x6f88, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6f89, .a=0x34, .x=0x94, .y=0x43, .sp=0x48, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6f88, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6f88, .value=0xdf, .type=IO_READ},
        {.addr=0x6f89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x876d, .a=0xf9, .x=0x43, .y=0x3c, .sp=0x04, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x876d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x876e, .a=0x5f, .x=0x43, .y=0x3c, .sp=0x04, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x876d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x876d, .value=0xdf, .type=IO_READ},
        {.addr=0x876e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x32f4, .a=0xbc, .x=0x41, .y=0xf4, .sp=0xfb, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x32f4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x32f5, .a=0x22, .x=0x41, .y=0xf4, .sp=0xfb, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x32f4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x32f4, .value=0xdf, .type=IO_READ},
        {.addr=0x32f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x86fe, .a=0x05, .x=0x3b, .y=0xb0, .sp=0x94, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x86fe, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x86ff, .a=0x0b, .x=0x3b, .y=0xb0, .sp=0x94, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x86fe, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x86fe, .value=0xdf, .type=IO_READ},
        {.addr=0x86ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xe677, .a=0x8e, .x=0x11, .y=0x7c, .sp=0x91, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xe677, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe678, .a=0x94, .x=0x11, .y=0x7c, .sp=0x91, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe677, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe677, .value=0xdf, .type=IO_READ},
        {.addr=0xe678, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x4472, .a=0x87, .x=0x18, .y=0xab, .sp=0x0a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4472, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4473, .a=0x87, .x=0x18, .y=0xab, .sp=0x0a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x4472, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4472, .value=0xdf, .type=IO_READ},
        {.addr=0x4473, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x5ea0, .a=0x00, .x=0x81, .y=0xb3, .sp=0x33, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x5ea0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5ea1, .a=0x60, .x=0x81, .y=0xb3, .sp=0x33, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5ea0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5ea0, .value=0xdf, .type=IO_READ},
        {.addr=0x5ea1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x2210, .a=0x32, .x=0xcd, .y=0xdd, .sp=0xbb, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2210, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2211, .a=0x38, .x=0xcd, .y=0xdd, .sp=0xbb, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x2210, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2210, .value=0xdf, .type=IO_READ},
        {.addr=0x2211, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x2945, .a=0x2b, .x=0xdb, .y=0x56, .sp=0xfd, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x2945, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2946, .a=0x91, .x=0xdb, .y=0x56, .sp=0xfd, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2945, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2945, .value=0xdf, .type=IO_READ},
        {.addr=0x2946, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xad3f, .a=0xf0, .x=0x24, .y=0x62, .sp=0xd6, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xad3f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xad40, .a=0x56, .x=0x24, .y=0x62, .sp=0xd6, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xad3f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xad3f, .value=0xdf, .type=IO_READ},
        {.addr=0xad40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x07a2, .a=0xd7, .x=0xef, .y=0x3e, .sp=0xbb, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x07a2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x07a3, .a=0x3d, .x=0xef, .y=0x3e, .sp=0xbb, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x07a2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x07a2, .value=0xdf, .type=IO_READ},
        {.addr=0x07a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xbf10, .a=0xca, .x=0xb2, .y=0x8f, .sp=0xd2, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xbf10, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbf11, .a=0x30, .x=0xb2, .y=0x8f, .sp=0xd2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xbf10, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbf10, .value=0xdf, .type=IO_READ},
        {.addr=0xbf11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x526f, .a=0x43, .x=0x32, .y=0x84, .sp=0xbc, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x526f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5270, .a=0x43, .x=0x32, .y=0x84, .sp=0xbc, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x526f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x526f, .value=0xdf, .type=IO_READ},
        {.addr=0x5270, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xd972, .a=0x63, .x=0xa1, .y=0xed, .sp=0x4b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xd972, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd973, .a=0x69, .x=0xa1, .y=0xed, .sp=0x4b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd972, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd972, .value=0xdf, .type=IO_READ},
        {.addr=0xd973, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x09f5, .a=0x74, .x=0x8d, .y=0x62, .sp=0x39, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x09f5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x09f6, .a=0xd4, .x=0x8d, .y=0x62, .sp=0x39, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x09f5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x09f5, .value=0xdf, .type=IO_READ},
        {.addr=0x09f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x6cb1, .a=0x2b, .x=0x1c, .y=0xb0, .sp=0x28, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x6cb1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6cb2, .a=0x91, .x=0x1c, .y=0xb0, .sp=0x28, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6cb1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6cb1, .value=0xdf, .type=IO_READ},
        {.addr=0x6cb2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xc519, .a=0xb0, .x=0x6c, .y=0xb8, .sp=0xab, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc519, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc51a, .a=0x16, .x=0x6c, .y=0xb8, .sp=0xab, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc519, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc519, .value=0xdf, .type=IO_READ},
        {.addr=0xc51a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x5766, .a=0x13, .x=0x7b, .y=0xd9, .sp=0x92, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x5766, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5767, .a=0x19, .x=0x7b, .y=0xd9, .sp=0x92, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5766, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5766, .value=0xdf, .type=IO_READ},
        {.addr=0x5767, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xfef5, .a=0x32, .x=0x0c, .y=0x28, .sp=0xf1, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xfef5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfef6, .a=0x32, .x=0x0c, .y=0x28, .sp=0xf1, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xfef5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfef5, .value=0xdf, .type=IO_READ},
        {.addr=0xfef6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xe14c, .a=0x04, .x=0x07, .y=0x24, .sp=0xea, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xe14c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe14d, .a=0x6a, .x=0x07, .y=0x24, .sp=0xea, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe14c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe14c, .value=0xdf, .type=IO_READ},
        {.addr=0xe14d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xdc29, .a=0x86, .x=0xa9, .y=0x93, .sp=0x3a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xdc29, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdc2a, .a=0x86, .x=0xa9, .y=0x93, .sp=0x3a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xdc29, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdc29, .value=0xdf, .type=IO_READ},
        {.addr=0xdc2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x4571, .a=0x20, .x=0xa3, .y=0xcb, .sp=0xcf, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x4571, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4572, .a=0x20, .x=0xa3, .y=0xcb, .sp=0xcf, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4571, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4571, .value=0xdf, .type=IO_READ},
        {.addr=0x4572, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x00e5, .a=0x51, .x=0xb8, .y=0x43, .sp=0x5e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x00e6, .a=0x57, .x=0xb8, .y=0x43, .sp=0x5e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x00e5, .value=0xdf, .type=IO_READ},
        {.addr=0x00e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xd3e4, .a=0x13, .x=0x2a, .y=0x11, .sp=0xc8, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd3e4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd3e5, .a=0x13, .x=0x2a, .y=0x11, .sp=0xc8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd3e4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd3e4, .value=0xdf, .type=IO_READ},
        {.addr=0xd3e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x9c49, .a=0xd7, .x=0x15, .y=0x60, .sp=0x59, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9c49, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9c4a, .a=0x3d, .x=0x15, .y=0x60, .sp=0x59, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9c49, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9c49, .value=0xdf, .type=IO_READ},
        {.addr=0x9c4a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xeb9e, .a=0xfc, .x=0xa1, .y=0x1b, .sp=0x97, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xeb9e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xeb9f, .a=0x62, .x=0xa1, .y=0x1b, .sp=0x97, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xeb9e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xeb9e, .value=0xdf, .type=IO_READ},
        {.addr=0xeb9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x9608, .a=0xcf, .x=0x21, .y=0xe4, .sp=0xd0, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9608, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9609, .a=0x35, .x=0x21, .y=0xe4, .sp=0xd0, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9608, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9608, .value=0xdf, .type=IO_READ},
        {.addr=0x9609, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xea81, .a=0xd5, .x=0x46, .y=0xa0, .sp=0x3e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xea81, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xea82, .a=0x3b, .x=0x46, .y=0xa0, .sp=0x3e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xea81, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xea81, .value=0xdf, .type=IO_READ},
        {.addr=0xea82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x8b5c, .a=0x6f, .x=0x1b, .y=0x0f, .sp=0xee, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b5c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8b5d, .a=0x75, .x=0x1b, .y=0x0f, .sp=0xee, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8b5c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8b5c, .value=0xdf, .type=IO_READ},
        {.addr=0x8b5d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x3d33, .a=0xed, .x=0x64, .y=0xff, .sp=0x42, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x3d33, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3d34, .a=0x53, .x=0x64, .y=0xff, .sp=0x42, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3d33, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3d33, .value=0xdf, .type=IO_READ},
        {.addr=0x3d34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xf272, .a=0xd3, .x=0xed, .y=0xdf, .sp=0xd6, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xf272, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf273, .a=0x39, .x=0xed, .y=0xdf, .sp=0xd6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf272, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf272, .value=0xdf, .type=IO_READ},
        {.addr=0xf273, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xc844, .a=0xe1, .x=0x2c, .y=0x75, .sp=0xd2, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xc844, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc845, .a=0x47, .x=0x2c, .y=0x75, .sp=0xd2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc844, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc844, .value=0xdf, .type=IO_READ},
        {.addr=0xc845, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x32c4, .a=0x21, .x=0x10, .y=0x67, .sp=0x7d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x32c4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x32c5, .a=0x87, .x=0x10, .y=0x67, .sp=0x7d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x32c4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x32c4, .value=0xdf, .type=IO_READ},
        {.addr=0x32c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x3c62, .a=0x30, .x=0xb2, .y=0xc0, .sp=0x12, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x3c62, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3c63, .a=0x30, .x=0xb2, .y=0xc0, .sp=0x12, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x3c62, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3c62, .value=0xdf, .type=IO_READ},
        {.addr=0x3c63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x07e6, .a=0x9e, .x=0x1a, .y=0x30, .sp=0xa4, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x07e6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x07e7, .a=0x04, .x=0x1a, .y=0x30, .sp=0xa4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x07e6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x07e6, .value=0xdf, .type=IO_READ},
        {.addr=0x07e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x1d3e, .a=0x99, .x=0xbe, .y=0x92, .sp=0x29, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x1d3e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1d3f, .a=0xff, .x=0xbe, .y=0x92, .sp=0x29, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1d3e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1d3e, .value=0xdf, .type=IO_READ},
        {.addr=0x1d3f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x5862, .a=0xe5, .x=0x80, .y=0x1d, .sp=0xb1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x5862, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5863, .a=0x45, .x=0x80, .y=0x1d, .sp=0xb1, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5862, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5862, .value=0xdf, .type=IO_READ},
        {.addr=0x5863, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x32ea, .a=0xd1, .x=0x3c, .y=0x7c, .sp=0x84, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x32ea, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x32eb, .a=0x31, .x=0x3c, .y=0x7c, .sp=0x84, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x32ea, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x32ea, .value=0xdf, .type=IO_READ},
        {.addr=0x32eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xb3d7, .a=0x7b, .x=0xad, .y=0x57, .sp=0x67, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xb3d7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb3d8, .a=0xe1, .x=0xad, .y=0x57, .sp=0x67, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb3d7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb3d7, .value=0xdf, .type=IO_READ},
        {.addr=0xb3d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xce56, .a=0xae, .x=0x92, .y=0xe6, .sp=0x27, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xce56, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xce57, .a=0x14, .x=0x92, .y=0xe6, .sp=0x27, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xce56, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xce56, .value=0xdf, .type=IO_READ},
        {.addr=0xce57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x2c0e, .a=0x5a, .x=0x1f, .y=0x8f, .sp=0xdf, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x2c0e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2c0f, .a=0xc0, .x=0x1f, .y=0x8f, .sp=0xdf, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x2c0e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2c0e, .value=0xdf, .type=IO_READ},
        {.addr=0x2c0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x26a4, .a=0xe9, .x=0x27, .y=0xef, .sp=0x33, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x26a4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x26a5, .a=0x49, .x=0x27, .y=0xef, .sp=0x33, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x26a4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x26a4, .value=0xdf, .type=IO_READ},
        {.addr=0x26a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xa8b8, .a=0x20, .x=0xa8, .y=0xe5, .sp=0x6d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa8b9, .a=0x86, .x=0xa8, .y=0xe5, .sp=0x6d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa8b8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa8b8, .value=0xdf, .type=IO_READ},
        {.addr=0xa8b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x02a5, .a=0xa1, .x=0xc9, .y=0x78, .sp=0x7a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x02a5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x02a6, .a=0x07, .x=0xc9, .y=0x78, .sp=0x7a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x02a5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x02a5, .value=0xdf, .type=IO_READ},
        {.addr=0x02a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0300) {
    const struct CPU_State initial_cpu = {.pc=0xb572, .a=0x0f, .x=0x54, .y=0xa9, .sp=0x0b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xb572, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb573, .a=0x75, .x=0x54, .y=0xa9, .sp=0x0b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb572, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb572, .value=0xdf, .type=IO_READ},
        {.addr=0xb573, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0301) {
    const struct CPU_State initial_cpu = {.pc=0x912f, .a=0xc1, .x=0x88, .y=0x08, .sp=0x57, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x912f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9130, .a=0x21, .x=0x88, .y=0x08, .sp=0x57, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x912f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x912f, .value=0xdf, .type=IO_READ},
        {.addr=0x9130, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0302) {
    const struct CPU_State initial_cpu = {.pc=0x007a, .a=0x9b, .x=0xa1, .y=0xae, .sp=0xd6, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x007b, .a=0x01, .x=0xa1, .y=0xae, .sp=0xd6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x007a, .value=0xdf, .type=IO_READ},
        {.addr=0x007b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0303) {
    const struct CPU_State initial_cpu = {.pc=0x7aa4, .a=0x55, .x=0xbc, .y=0x1d, .sp=0x74, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7aa5, .a=0xbb, .x=0xbc, .y=0x1d, .sp=0x74, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7aa4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7aa4, .value=0xdf, .type=IO_READ},
        {.addr=0x7aa5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0304) {
    const struct CPU_State initial_cpu = {.pc=0x94cd, .a=0x59, .x=0x12, .y=0x3f, .sp=0xc0, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x94cd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x94ce, .a=0x59, .x=0x12, .y=0x3f, .sp=0xc0, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x94cd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x94cd, .value=0xdf, .type=IO_READ},
        {.addr=0x94ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0305) {
    const struct CPU_State initial_cpu = {.pc=0x1104, .a=0xda, .x=0xd0, .y=0x03, .sp=0xf0, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x1104, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1105, .a=0x40, .x=0xd0, .y=0x03, .sp=0xf0, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1104, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1104, .value=0xdf, .type=IO_READ},
        {.addr=0x1105, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0306) {
    const struct CPU_State initial_cpu = {.pc=0x5e22, .a=0xae, .x=0x77, .y=0xba, .sp=0x9a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x5e22, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5e23, .a=0x14, .x=0x77, .y=0xba, .sp=0x9a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5e22, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5e22, .value=0xdf, .type=IO_READ},
        {.addr=0x5e23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0307) {
    const struct CPU_State initial_cpu = {.pc=0xf7e0, .a=0x16, .x=0x9a, .y=0x21, .sp=0x79, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xf7e0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf7e1, .a=0x1c, .x=0x9a, .y=0x21, .sp=0x79, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xf7e0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf7e0, .value=0xdf, .type=IO_READ},
        {.addr=0xf7e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0308) {
    const struct CPU_State initial_cpu = {.pc=0x60de, .a=0xdc, .x=0xa5, .y=0x6b, .sp=0xbe, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x60de, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x60df, .a=0x42, .x=0xa5, .y=0x6b, .sp=0xbe, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x60de, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x60de, .value=0xdf, .type=IO_READ},
        {.addr=0x60df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0309) {
    const struct CPU_State initial_cpu = {.pc=0xdcba, .a=0x34, .x=0x08, .y=0x62, .sp=0xda, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xdcba, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdcbb, .a=0x3a, .x=0x08, .y=0x62, .sp=0xda, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xdcba, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdcba, .value=0xdf, .type=IO_READ},
        {.addr=0xdcbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_030A) {
    const struct CPU_State initial_cpu = {.pc=0x4bc6, .a=0xeb, .x=0x03, .y=0x18, .sp=0x93, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x4bc6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4bc7, .a=0x51, .x=0x03, .y=0x18, .sp=0x93, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4bc6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4bc6, .value=0xdf, .type=IO_READ},
        {.addr=0x4bc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_030B) {
    const struct CPU_State initial_cpu = {.pc=0xbf76, .a=0x3f, .x=0x74, .y=0x7a, .sp=0x5e, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xbf76, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbf77, .a=0xa5, .x=0x74, .y=0x7a, .sp=0x5e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xbf76, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbf76, .value=0xdf, .type=IO_READ},
        {.addr=0xbf77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_030C) {
    const struct CPU_State initial_cpu = {.pc=0x8031, .a=0xc8, .x=0x03, .y=0xa0, .sp=0x10, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x8031, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8032, .a=0x2e, .x=0x03, .y=0xa0, .sp=0x10, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8031, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8031, .value=0xdf, .type=IO_READ},
        {.addr=0x8032, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_030D) {
    const struct CPU_State initial_cpu = {.pc=0xc5b7, .a=0x95, .x=0x15, .y=0xa4, .sp=0x57, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc5b7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc5b8, .a=0x9b, .x=0x15, .y=0xa4, .sp=0x57, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc5b7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc5b7, .value=0xdf, .type=IO_READ},
        {.addr=0xc5b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_030E) {
    const struct CPU_State initial_cpu = {.pc=0x4d56, .a=0x94, .x=0xf6, .y=0x18, .sp=0x38, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x4d56, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4d57, .a=0x9a, .x=0xf6, .y=0x18, .sp=0x38, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4d56, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4d56, .value=0xdf, .type=IO_READ},
        {.addr=0x4d57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_030F) {
    const struct CPU_State initial_cpu = {.pc=0x40f3, .a=0x48, .x=0x07, .y=0x67, .sp=0x3f, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x40f3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x40f4, .a=0xa8, .x=0x07, .y=0x67, .sp=0x3f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x40f3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x40f3, .value=0xdf, .type=IO_READ},
        {.addr=0x40f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0310) {
    const struct CPU_State initial_cpu = {.pc=0xb2b4, .a=0xb8, .x=0x12, .y=0x67, .sp=0x48, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xb2b4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb2b5, .a=0x18, .x=0x12, .y=0x67, .sp=0x48, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb2b4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb2b4, .value=0xdf, .type=IO_READ},
        {.addr=0xb2b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0311) {
    const struct CPU_State initial_cpu = {.pc=0x7d0c, .a=0xb1, .x=0x71, .y=0x09, .sp=0x7b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7d0c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7d0d, .a=0x17, .x=0x71, .y=0x09, .sp=0x7b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7d0c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7d0c, .value=0xdf, .type=IO_READ},
        {.addr=0x7d0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0312) {
    const struct CPU_State initial_cpu = {.pc=0xdc53, .a=0x78, .x=0xcf, .y=0xc8, .sp=0x26, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xdc53, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdc54, .a=0xde, .x=0xcf, .y=0xc8, .sp=0x26, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xdc53, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdc53, .value=0xdf, .type=IO_READ},
        {.addr=0xdc54, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0313) {
    const struct CPU_State initial_cpu = {.pc=0xdd76, .a=0x99, .x=0xe0, .y=0xf9, .sp=0x4d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xdd76, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdd77, .a=0x99, .x=0xe0, .y=0xf9, .sp=0x4d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xdd76, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdd76, .value=0xdf, .type=IO_READ},
        {.addr=0xdd77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0314) {
    const struct CPU_State initial_cpu = {.pc=0x7bac, .a=0x96, .x=0x78, .y=0xbc, .sp=0x0e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x7bac, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7bad, .a=0xfc, .x=0x78, .y=0xbc, .sp=0x0e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7bac, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7bac, .value=0xdf, .type=IO_READ},
        {.addr=0x7bad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0315) {
    const struct CPU_State initial_cpu = {.pc=0x97d4, .a=0x8c, .x=0xba, .y=0x4c, .sp=0x39, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x97d4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x97d5, .a=0xf2, .x=0xba, .y=0x4c, .sp=0x39, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x97d4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x97d4, .value=0xdf, .type=IO_READ},
        {.addr=0x97d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0316) {
    const struct CPU_State initial_cpu = {.pc=0x0a87, .a=0xaf, .x=0xa0, .y=0x23, .sp=0xcf, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0a87, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0a88, .a=0x15, .x=0xa0, .y=0x23, .sp=0xcf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0a87, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0a87, .value=0xdf, .type=IO_READ},
        {.addr=0x0a88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0317) {
    const struct CPU_State initial_cpu = {.pc=0x2d3c, .a=0x22, .x=0xdd, .y=0xfa, .sp=0xe6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x2d3c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2d3d, .a=0x28, .x=0xdd, .y=0xfa, .sp=0xe6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2d3c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2d3c, .value=0xdf, .type=IO_READ},
        {.addr=0x2d3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0318) {
    const struct CPU_State initial_cpu = {.pc=0xa8be, .a=0x3e, .x=0x05, .y=0x8b, .sp=0xe0, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xa8be, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa8bf, .a=0xa4, .x=0x05, .y=0x8b, .sp=0xe0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xa8be, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa8be, .value=0xdf, .type=IO_READ},
        {.addr=0xa8bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0319) {
    const struct CPU_State initial_cpu = {.pc=0xcd69, .a=0x24, .x=0x38, .y=0x03, .sp=0x66, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xcd69, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcd6a, .a=0x8a, .x=0x38, .y=0x03, .sp=0x66, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xcd69, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcd69, .value=0xdf, .type=IO_READ},
        {.addr=0xcd6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_031A) {
    const struct CPU_State initial_cpu = {.pc=0x4473, .a=0x0a, .x=0x81, .y=0x74, .sp=0xae, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x4473, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4474, .a=0x70, .x=0x81, .y=0x74, .sp=0xae, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4473, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4473, .value=0xdf, .type=IO_READ},
        {.addr=0x4474, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_031B) {
    const struct CPU_State initial_cpu = {.pc=0xdbe9, .a=0xef, .x=0x1b, .y=0x45, .sp=0x14, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xdbe9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdbea, .a=0x55, .x=0x1b, .y=0x45, .sp=0x14, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xdbe9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdbe9, .value=0xdf, .type=IO_READ},
        {.addr=0xdbea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_031C) {
    const struct CPU_State initial_cpu = {.pc=0xa1d4, .a=0x72, .x=0xc1, .y=0x3c, .sp=0xa1, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa1d4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa1d5, .a=0xd8, .x=0xc1, .y=0x3c, .sp=0xa1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa1d4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa1d4, .value=0xdf, .type=IO_READ},
        {.addr=0xa1d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_031D) {
    const struct CPU_State initial_cpu = {.pc=0xd03f, .a=0x40, .x=0xa1, .y=0xe4, .sp=0x20, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd03f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd040, .a=0x46, .x=0xa1, .y=0xe4, .sp=0x20, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd03f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd03f, .value=0xdf, .type=IO_READ},
        {.addr=0xd040, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_031E) {
    const struct CPU_State initial_cpu = {.pc=0x432a, .a=0xbc, .x=0x54, .y=0x62, .sp=0x0a, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x432a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x432b, .a=0x22, .x=0x54, .y=0x62, .sp=0x0a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x432a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x432a, .value=0xdf, .type=IO_READ},
        {.addr=0x432b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_031F) {
    const struct CPU_State initial_cpu = {.pc=0xbe3c, .a=0x6b, .x=0x32, .y=0xdc, .sp=0xd1, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xbe3c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbe3d, .a=0xd1, .x=0x32, .y=0xdc, .sp=0xd1, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xbe3c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbe3c, .value=0xdf, .type=IO_READ},
        {.addr=0xbe3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0320) {
    const struct CPU_State initial_cpu = {.pc=0x88b4, .a=0xc2, .x=0x86, .y=0xb5, .sp=0x93, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x88b4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x88b5, .a=0x28, .x=0x86, .y=0xb5, .sp=0x93, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x88b4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x88b4, .value=0xdf, .type=IO_READ},
        {.addr=0x88b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0321) {
    const struct CPU_State initial_cpu = {.pc=0xad31, .a=0xa9, .x=0x5f, .y=0x8d, .sp=0xc3, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xad31, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xad32, .a=0x0f, .x=0x5f, .y=0x8d, .sp=0xc3, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xad31, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xad31, .value=0xdf, .type=IO_READ},
        {.addr=0xad32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0322) {
    const struct CPU_State initial_cpu = {.pc=0xc009, .a=0x63, .x=0xe8, .y=0x5a, .sp=0x8c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc009, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc00a, .a=0xc9, .x=0xe8, .y=0x5a, .sp=0x8c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc009, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc009, .value=0xdf, .type=IO_READ},
        {.addr=0xc00a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0323) {
    const struct CPU_State initial_cpu = {.pc=0x2486, .a=0x0b, .x=0xe4, .y=0x26, .sp=0x90, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x2486, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2487, .a=0x11, .x=0xe4, .y=0x26, .sp=0x90, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x2486, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2486, .value=0xdf, .type=IO_READ},
        {.addr=0x2487, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0324) {
    const struct CPU_State initial_cpu = {.pc=0xab7d, .a=0x6f, .x=0x8c, .y=0x04, .sp=0x76, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xab7d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xab7e, .a=0xd5, .x=0x8c, .y=0x04, .sp=0x76, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xab7d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xab7d, .value=0xdf, .type=IO_READ},
        {.addr=0xab7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0325) {
    const struct CPU_State initial_cpu = {.pc=0xc8b9, .a=0x01, .x=0x83, .y=0x25, .sp=0x93, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc8b9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc8ba, .a=0x61, .x=0x83, .y=0x25, .sp=0x93, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc8b9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc8b9, .value=0xdf, .type=IO_READ},
        {.addr=0xc8ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0326) {
    const struct CPU_State initial_cpu = {.pc=0x58ed, .a=0xb3, .x=0x6d, .y=0x6c, .sp=0xbb, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x58ed, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x58ee, .a=0x19, .x=0x6d, .y=0x6c, .sp=0xbb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x58ed, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x58ed, .value=0xdf, .type=IO_READ},
        {.addr=0x58ee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0327) {
    const struct CPU_State initial_cpu = {.pc=0x8b14, .a=0x79, .x=0xcc, .y=0x6d, .sp=0xbe, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x8b14, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8b15, .a=0x7f, .x=0xcc, .y=0x6d, .sp=0xbe, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x8b14, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8b14, .value=0xdf, .type=IO_READ},
        {.addr=0x8b15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0328) {
    const struct CPU_State initial_cpu = {.pc=0xc136, .a=0x27, .x=0x84, .y=0x8c, .sp=0x27, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xc136, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc137, .a=0x87, .x=0x84, .y=0x8c, .sp=0x27, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xc136, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc136, .value=0xdf, .type=IO_READ},
        {.addr=0xc137, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0329) {
    const struct CPU_State initial_cpu = {.pc=0xdd8b, .a=0x68, .x=0xde, .y=0x2b, .sp=0x71, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xdd8b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdd8c, .a=0x68, .x=0xde, .y=0x2b, .sp=0x71, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xdd8b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdd8b, .value=0xdf, .type=IO_READ},
        {.addr=0xdd8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_032A) {
    const struct CPU_State initial_cpu = {.pc=0x25a2, .a=0x39, .x=0x52, .y=0x2b, .sp=0xa6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x25a2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x25a3, .a=0x39, .x=0x52, .y=0x2b, .sp=0xa6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x25a2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x25a2, .value=0xdf, .type=IO_READ},
        {.addr=0x25a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_032B) {
    const struct CPU_State initial_cpu = {.pc=0x7e9b, .a=0xc7, .x=0x1c, .y=0xe6, .sp=0x95, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7e9b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7e9c, .a=0x2d, .x=0x1c, .y=0xe6, .sp=0x95, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7e9b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7e9b, .value=0xdf, .type=IO_READ},
        {.addr=0x7e9c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_032C) {
    const struct CPU_State initial_cpu = {.pc=0x52e9, .a=0x91, .x=0x78, .y=0x94, .sp=0x3d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x52e9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x52ea, .a=0xf1, .x=0x78, .y=0x94, .sp=0x3d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x52e9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x52e9, .value=0xdf, .type=IO_READ},
        {.addr=0x52ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_032D) {
    const struct CPU_State initial_cpu = {.pc=0xfe63, .a=0xaf, .x=0x73, .y=0x4a, .sp=0x79, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xfe63, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfe64, .a=0x15, .x=0x73, .y=0x4a, .sp=0x79, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xfe63, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfe63, .value=0xdf, .type=IO_READ},
        {.addr=0xfe64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_032E) {
    const struct CPU_State initial_cpu = {.pc=0xd330, .a=0x75, .x=0x2c, .y=0xd9, .sp=0x09, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd330, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd331, .a=0xd5, .x=0x2c, .y=0xd9, .sp=0x09, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xd330, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd330, .value=0xdf, .type=IO_READ},
        {.addr=0xd331, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_032F) {
    const struct CPU_State initial_cpu = {.pc=0x6bd9, .a=0x7f, .x=0x75, .y=0xc9, .sp=0x93, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x6bd9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6bda, .a=0xe5, .x=0x75, .y=0xc9, .sp=0x93, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6bd9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6bd9, .value=0xdf, .type=IO_READ},
        {.addr=0x6bda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0330) {
    const struct CPU_State initial_cpu = {.pc=0x5c26, .a=0xc0, .x=0xfd, .y=0xa4, .sp=0x66, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x5c26, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5c27, .a=0x20, .x=0xfd, .y=0xa4, .sp=0x66, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5c26, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5c26, .value=0xdf, .type=IO_READ},
        {.addr=0x5c27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0331) {
    const struct CPU_State initial_cpu = {.pc=0x8d2a, .a=0x70, .x=0x52, .y=0x68, .sp=0x86, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x8d2a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8d2b, .a=0x76, .x=0x52, .y=0x68, .sp=0x86, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x8d2a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8d2a, .value=0xdf, .type=IO_READ},
        {.addr=0x8d2b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0332) {
    const struct CPU_State initial_cpu = {.pc=0x989f, .a=0xf2, .x=0xc6, .y=0x13, .sp=0xa3, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x989f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x98a0, .a=0x52, .x=0xc6, .y=0x13, .sp=0xa3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x989f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x989f, .value=0xdf, .type=IO_READ},
        {.addr=0x98a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0333) {
    const struct CPU_State initial_cpu = {.pc=0x36c8, .a=0x9e, .x=0x2f, .y=0xc2, .sp=0xbd, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x36c8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x36c9, .a=0x04, .x=0x2f, .y=0xc2, .sp=0xbd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x36c8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x36c8, .value=0xdf, .type=IO_READ},
        {.addr=0x36c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0334) {
    const struct CPU_State initial_cpu = {.pc=0x0adf, .a=0x52, .x=0x74, .y=0x35, .sp=0x9c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0adf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0ae0, .a=0xb8, .x=0x74, .y=0x35, .sp=0x9c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0adf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0adf, .value=0xdf, .type=IO_READ},
        {.addr=0x0ae0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0335) {
    const struct CPU_State initial_cpu = {.pc=0x392a, .a=0x5b, .x=0x22, .y=0xfd, .sp=0x76, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x392a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x392b, .a=0xc1, .x=0x22, .y=0xfd, .sp=0x76, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x392a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x392a, .value=0xdf, .type=IO_READ},
        {.addr=0x392b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0336) {
    const struct CPU_State initial_cpu = {.pc=0xc38f, .a=0xa7, .x=0x46, .y=0xb6, .sp=0x58, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc38f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc390, .a=0x0d, .x=0x46, .y=0xb6, .sp=0x58, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc38f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc38f, .value=0xdf, .type=IO_READ},
        {.addr=0xc390, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0337) {
    const struct CPU_State initial_cpu = {.pc=0xcb98, .a=0xde, .x=0x4a, .y=0xed, .sp=0xbb, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xcb98, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcb99, .a=0x44, .x=0x4a, .y=0xed, .sp=0xbb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xcb98, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcb98, .value=0xdf, .type=IO_READ},
        {.addr=0xcb99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0338) {
    const struct CPU_State initial_cpu = {.pc=0xbfc8, .a=0xaf, .x=0x8a, .y=0x4d, .sp=0xcd, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbfc9, .a=0x15, .x=0x8a, .y=0x4d, .sp=0xcd, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xbfc8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbfc8, .value=0xdf, .type=IO_READ},
        {.addr=0xbfc9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0339) {
    const struct CPU_State initial_cpu = {.pc=0x2abb, .a=0xff, .x=0xa0, .y=0xdc, .sp=0x0a, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x2abb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2abc, .a=0x65, .x=0xa0, .y=0xdc, .sp=0x0a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2abb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2abb, .value=0xdf, .type=IO_READ},
        {.addr=0x2abc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_033A) {
    const struct CPU_State initial_cpu = {.pc=0xc27b, .a=0x6a, .x=0xdd, .y=0x05, .sp=0x40, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xc27b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc27c, .a=0x70, .x=0xdd, .y=0x05, .sp=0x40, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xc27b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc27b, .value=0xdf, .type=IO_READ},
        {.addr=0xc27c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_033B) {
    const struct CPU_State initial_cpu = {.pc=0x6a7a, .a=0xad, .x=0x81, .y=0xbe, .sp=0xe8, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x6a7a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6a7b, .a=0x13, .x=0x81, .y=0xbe, .sp=0xe8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6a7a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6a7a, .value=0xdf, .type=IO_READ},
        {.addr=0x6a7b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_033C) {
    const struct CPU_State initial_cpu = {.pc=0xfdb7, .a=0xe3, .x=0xd5, .y=0xf0, .sp=0x23, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfdb8, .a=0x49, .x=0xd5, .y=0xf0, .sp=0x23, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xfdb7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfdb7, .value=0xdf, .type=IO_READ},
        {.addr=0xfdb8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_033D) {
    const struct CPU_State initial_cpu = {.pc=0x8557, .a=0x39, .x=0x7a, .y=0xe6, .sp=0x71, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8557, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8558, .a=0x9f, .x=0x7a, .y=0xe6, .sp=0x71, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8557, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8557, .value=0xdf, .type=IO_READ},
        {.addr=0x8558, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc10f, .a=0x5a, .x=0xa5, .y=0x77, .sp=0x7c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc10f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc110, .a=0xc0, .x=0xa5, .y=0x77, .sp=0x7c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc10f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc10f, .value=0xdf, .type=IO_READ},
        {.addr=0xc110, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_033F) {
    const struct CPU_State initial_cpu = {.pc=0x9442, .a=0x07, .x=0x77, .y=0x37, .sp=0x29, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x9442, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9443, .a=0x07, .x=0x77, .y=0x37, .sp=0x29, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9442, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9442, .value=0xdf, .type=IO_READ},
        {.addr=0x9443, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0340) {
    const struct CPU_State initial_cpu = {.pc=0x9e29, .a=0x8f, .x=0x72, .y=0xee, .sp=0x56, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x9e29, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9e2a, .a=0x95, .x=0x72, .y=0xee, .sp=0x56, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x9e29, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9e29, .value=0xdf, .type=IO_READ},
        {.addr=0x9e2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0341) {
    const struct CPU_State initial_cpu = {.pc=0xe0d4, .a=0xa1, .x=0x35, .y=0x76, .sp=0x48, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xe0d4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe0d5, .a=0x01, .x=0x35, .y=0x76, .sp=0x48, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe0d4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe0d4, .value=0xdf, .type=IO_READ},
        {.addr=0xe0d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0342) {
    const struct CPU_State initial_cpu = {.pc=0xa36c, .a=0x1f, .x=0x63, .y=0xcf, .sp=0x67, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xa36c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa36d, .a=0x25, .x=0x63, .y=0xcf, .sp=0x67, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa36c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa36c, .value=0xdf, .type=IO_READ},
        {.addr=0xa36d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0343) {
    const struct CPU_State initial_cpu = {.pc=0x6fbf, .a=0x34, .x=0x2f, .y=0x59, .sp=0xae, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x6fbf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6fc0, .a=0x34, .x=0x2f, .y=0x59, .sp=0xae, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x6fbf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6fbf, .value=0xdf, .type=IO_READ},
        {.addr=0x6fc0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0344) {
    const struct CPU_State initial_cpu = {.pc=0x9cbd, .a=0x64, .x=0x8a, .y=0x29, .sp=0xc1, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x9cbd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9cbe, .a=0xca, .x=0x8a, .y=0x29, .sp=0xc1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9cbd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9cbd, .value=0xdf, .type=IO_READ},
        {.addr=0x9cbe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0345) {
    const struct CPU_State initial_cpu = {.pc=0x891f, .a=0x96, .x=0x93, .y=0x31, .sp=0xc9, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x891f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8920, .a=0x96, .x=0x93, .y=0x31, .sp=0xc9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x891f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x891f, .value=0xdf, .type=IO_READ},
        {.addr=0x8920, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0346) {
    const struct CPU_State initial_cpu = {.pc=0x0bea, .a=0x20, .x=0x67, .y=0x05, .sp=0x7f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0bea, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0beb, .a=0x20, .x=0x67, .y=0x05, .sp=0x7f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0bea, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0bea, .value=0xdf, .type=IO_READ},
        {.addr=0x0beb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0347) {
    const struct CPU_State initial_cpu = {.pc=0x19be, .a=0x9f, .x=0x75, .y=0x22, .sp=0x64, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x19be, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x19bf, .a=0x05, .x=0x75, .y=0x22, .sp=0x64, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x19be, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x19be, .value=0xdf, .type=IO_READ},
        {.addr=0x19bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0348) {
    const struct CPU_State initial_cpu = {.pc=0xe05e, .a=0x99, .x=0x26, .y=0xb9, .sp=0x9b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xe05e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe05f, .a=0x99, .x=0x26, .y=0xb9, .sp=0x9b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe05e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe05e, .value=0xdf, .type=IO_READ},
        {.addr=0xe05f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0349) {
    const struct CPU_State initial_cpu = {.pc=0x022b, .a=0x23, .x=0x96, .y=0x48, .sp=0x3e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x022b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x022c, .a=0x29, .x=0x96, .y=0x48, .sp=0x3e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x022b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x022b, .value=0xdf, .type=IO_READ},
        {.addr=0x022c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_034A) {
    const struct CPU_State initial_cpu = {.pc=0xa12d, .a=0xfb, .x=0xa5, .y=0x01, .sp=0x04, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa12d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa12e, .a=0x61, .x=0xa5, .y=0x01, .sp=0x04, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xa12d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa12d, .value=0xdf, .type=IO_READ},
        {.addr=0xa12e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_034B) {
    const struct CPU_State initial_cpu = {.pc=0xe820, .a=0xa3, .x=0x24, .y=0x07, .sp=0x14, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xe820, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe821, .a=0x03, .x=0x24, .y=0x07, .sp=0x14, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe820, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe820, .value=0xdf, .type=IO_READ},
        {.addr=0xe821, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_034C) {
    const struct CPU_State initial_cpu = {.pc=0x0998, .a=0x36, .x=0xcb, .y=0x29, .sp=0x6b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0998, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0999, .a=0x3c, .x=0xcb, .y=0x29, .sp=0x6b, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0998, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0998, .value=0xdf, .type=IO_READ},
        {.addr=0x0999, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_034D) {
    const struct CPU_State initial_cpu = {.pc=0x5040, .a=0x74, .x=0x20, .y=0xdb, .sp=0x5f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x5040, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5041, .a=0xd4, .x=0x20, .y=0xdb, .sp=0x5f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5040, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5040, .value=0xdf, .type=IO_READ},
        {.addr=0x5041, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_034E) {
    const struct CPU_State initial_cpu = {.pc=0x8e46, .a=0xc3, .x=0x95, .y=0xe3, .sp=0xe2, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x8e46, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8e47, .a=0x23, .x=0x95, .y=0xe3, .sp=0xe2, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8e46, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8e46, .value=0xdf, .type=IO_READ},
        {.addr=0x8e47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_034F) {
    const struct CPU_State initial_cpu = {.pc=0x32b0, .a=0x83, .x=0xd7, .y=0x39, .sp=0x45, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x32b0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x32b1, .a=0xe9, .x=0xd7, .y=0x39, .sp=0x45, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x32b0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x32b0, .value=0xdf, .type=IO_READ},
        {.addr=0x32b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0350) {
    const struct CPU_State initial_cpu = {.pc=0xa96c, .a=0xdc, .x=0xf4, .y=0xd9, .sp=0xd0, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa96c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa96d, .a=0x42, .x=0xf4, .y=0xd9, .sp=0xd0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa96c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa96c, .value=0xdf, .type=IO_READ},
        {.addr=0xa96d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0351) {
    const struct CPU_State initial_cpu = {.pc=0x7169, .a=0x46, .x=0x52, .y=0x52, .sp=0x60, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7169, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x716a, .a=0xac, .x=0x52, .y=0x52, .sp=0x60, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7169, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7169, .value=0xdf, .type=IO_READ},
        {.addr=0x716a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0352) {
    const struct CPU_State initial_cpu = {.pc=0x96ab, .a=0x47, .x=0xa4, .y=0x4e, .sp=0x74, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x96ab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x96ac, .a=0x47, .x=0xa4, .y=0x4e, .sp=0x74, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x96ab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x96ab, .value=0xdf, .type=IO_READ},
        {.addr=0x96ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0353) {
    const struct CPU_State initial_cpu = {.pc=0x363f, .a=0xf6, .x=0x03, .y=0x16, .sp=0xaa, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x363f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3640, .a=0x5c, .x=0x03, .y=0x16, .sp=0xaa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x363f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x363f, .value=0xdf, .type=IO_READ},
        {.addr=0x3640, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0354) {
    const struct CPU_State initial_cpu = {.pc=0xf5cf, .a=0x26, .x=0x1e, .y=0x87, .sp=0x46, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xf5cf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf5d0, .a=0x26, .x=0x1e, .y=0x87, .sp=0x46, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf5cf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf5cf, .value=0xdf, .type=IO_READ},
        {.addr=0xf5d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0355) {
    const struct CPU_State initial_cpu = {.pc=0xfb0d, .a=0x3e, .x=0xa7, .y=0xca, .sp=0x76, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xfb0d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfb0e, .a=0xa4, .x=0xa7, .y=0xca, .sp=0x76, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xfb0d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfb0d, .value=0xdf, .type=IO_READ},
        {.addr=0xfb0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0356) {
    const struct CPU_State initial_cpu = {.pc=0xdfcc, .a=0x2e, .x=0x90, .y=0x93, .sp=0xd2, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xdfcc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdfcd, .a=0x34, .x=0x90, .y=0x93, .sp=0xd2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xdfcc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdfcc, .value=0xdf, .type=IO_READ},
        {.addr=0xdfcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0357) {
    const struct CPU_State initial_cpu = {.pc=0x7ea7, .a=0xd1, .x=0x4e, .y=0xd9, .sp=0x59, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x7ea7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7ea8, .a=0x37, .x=0x4e, .y=0xd9, .sp=0x59, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7ea7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7ea7, .value=0xdf, .type=IO_READ},
        {.addr=0x7ea8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0358) {
    const struct CPU_State initial_cpu = {.pc=0xcd33, .a=0xed, .x=0x29, .y=0x2c, .sp=0xb2, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xcd33, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcd34, .a=0x53, .x=0x29, .y=0x2c, .sp=0xb2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcd33, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcd33, .value=0xdf, .type=IO_READ},
        {.addr=0xcd34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3e16, .a=0x2a, .x=0x14, .y=0xdd, .sp=0x8a, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3e16, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3e17, .a=0x30, .x=0x14, .y=0xdd, .sp=0x8a, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3e16, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3e16, .value=0xdf, .type=IO_READ},
        {.addr=0x3e17, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_035A) {
    const struct CPU_State initial_cpu = {.pc=0x5a35, .a=0x4d, .x=0xbd, .y=0x04, .sp=0x7c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x5a35, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5a36, .a=0xb3, .x=0xbd, .y=0x04, .sp=0x7c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5a35, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5a35, .value=0xdf, .type=IO_READ},
        {.addr=0x5a36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_035B) {
    const struct CPU_State initial_cpu = {.pc=0x133d, .a=0x71, .x=0xc2, .y=0xfc, .sp=0x21, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x133d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x133e, .a=0xd7, .x=0xc2, .y=0xfc, .sp=0x21, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x133d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x133d, .value=0xdf, .type=IO_READ},
        {.addr=0x133e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_035C) {
    const struct CPU_State initial_cpu = {.pc=0xb866, .a=0xde, .x=0xd0, .y=0x98, .sp=0x64, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xb866, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb867, .a=0x44, .x=0xd0, .y=0x98, .sp=0x64, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb866, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb866, .value=0xdf, .type=IO_READ},
        {.addr=0xb867, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_035D) {
    const struct CPU_State initial_cpu = {.pc=0x4e31, .a=0xc7, .x=0x9e, .y=0xfd, .sp=0x28, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x4e31, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4e32, .a=0x27, .x=0x9e, .y=0xfd, .sp=0x28, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4e31, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4e31, .value=0xdf, .type=IO_READ},
        {.addr=0x4e32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_035E) {
    const struct CPU_State initial_cpu = {.pc=0xd0ac, .a=0x5f, .x=0x97, .y=0x3d, .sp=0x6d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ac, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd0ad, .a=0x65, .x=0x97, .y=0x3d, .sp=0x6d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd0ac, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd0ac, .value=0xdf, .type=IO_READ},
        {.addr=0xd0ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_035F) {
    const struct CPU_State initial_cpu = {.pc=0x9b55, .a=0x33, .x=0x5a, .y=0x0f, .sp=0x2c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9b55, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9b56, .a=0x99, .x=0x5a, .y=0x0f, .sp=0x2c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9b55, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9b55, .value=0xdf, .type=IO_READ},
        {.addr=0x9b56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0360) {
    const struct CPU_State initial_cpu = {.pc=0xa0ab, .a=0xe1, .x=0xe8, .y=0xed, .sp=0x28, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa0ac, .a=0x41, .x=0xe8, .y=0xed, .sp=0x28, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa0ab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa0ab, .value=0xdf, .type=IO_READ},
        {.addr=0xa0ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0361) {
    const struct CPU_State initial_cpu = {.pc=0xfde5, .a=0x89, .x=0x9f, .y=0x72, .sp=0x88, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xfde5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfde6, .a=0x89, .x=0x9f, .y=0x72, .sp=0x88, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfde5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfde5, .value=0xdf, .type=IO_READ},
        {.addr=0xfde6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0362) {
    const struct CPU_State initial_cpu = {.pc=0x3790, .a=0x95, .x=0xe5, .y=0x00, .sp=0x7e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x3790, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3791, .a=0x9b, .x=0xe5, .y=0x00, .sp=0x7e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x3790, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3790, .value=0xdf, .type=IO_READ},
        {.addr=0x3791, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0363) {
    const struct CPU_State initial_cpu = {.pc=0xd53a, .a=0x79, .x=0x8e, .y=0xd9, .sp=0xaa, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd53a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd53b, .a=0x79, .x=0x8e, .y=0xd9, .sp=0xaa, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd53a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd53a, .value=0xdf, .type=IO_READ},
        {.addr=0xd53b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0364) {
    const struct CPU_State initial_cpu = {.pc=0x7535, .a=0xe6, .x=0x50, .y=0x55, .sp=0xdd, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7535, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7536, .a=0x4c, .x=0x50, .y=0x55, .sp=0xdd, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x7535, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7535, .value=0xdf, .type=IO_READ},
        {.addr=0x7536, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0365) {
    const struct CPU_State initial_cpu = {.pc=0x1eb2, .a=0xfb, .x=0x9d, .y=0xce, .sp=0x95, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x1eb2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1eb3, .a=0x61, .x=0x9d, .y=0xce, .sp=0x95, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1eb2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1eb2, .value=0xdf, .type=IO_READ},
        {.addr=0x1eb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0366) {
    const struct CPU_State initial_cpu = {.pc=0x6cfa, .a=0x3a, .x=0x9a, .y=0xe0, .sp=0x93, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6cfa, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6cfb, .a=0x40, .x=0x9a, .y=0xe0, .sp=0x93, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6cfa, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6cfa, .value=0xdf, .type=IO_READ},
        {.addr=0x6cfb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0367) {
    const struct CPU_State initial_cpu = {.pc=0x3596, .a=0xd0, .x=0xd3, .y=0x0d, .sp=0x83, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x3596, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3597, .a=0x36, .x=0xd3, .y=0x0d, .sp=0x83, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3596, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3596, .value=0xdf, .type=IO_READ},
        {.addr=0x3597, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0368) {
    const struct CPU_State initial_cpu = {.pc=0x08e0, .a=0x74, .x=0xd7, .y=0xd4, .sp=0x1e, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x08e0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x08e1, .a=0x7a, .x=0xd7, .y=0xd4, .sp=0x1e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x08e0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x08e0, .value=0xdf, .type=IO_READ},
        {.addr=0x08e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0369) {
    const struct CPU_State initial_cpu = {.pc=0x239f, .a=0x87, .x=0x51, .y=0x34, .sp=0x3b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x239f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x23a0, .a=0x8d, .x=0x51, .y=0x34, .sp=0x3b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x239f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x239f, .value=0xdf, .type=IO_READ},
        {.addr=0x23a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_036A) {
    const struct CPU_State initial_cpu = {.pc=0x7728, .a=0xe3, .x=0x3b, .y=0xa7, .sp=0x68, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x7728, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7729, .a=0x43, .x=0x3b, .y=0xa7, .sp=0x68, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7728, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7728, .value=0xdf, .type=IO_READ},
        {.addr=0x7729, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_036B) {
    const struct CPU_State initial_cpu = {.pc=0x8fc5, .a=0x4d, .x=0x3c, .y=0xf9, .sp=0xe3, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x8fc5, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8fc6, .a=0xb3, .x=0x3c, .y=0xf9, .sp=0xe3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x8fc5, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8fc5, .value=0xdf, .type=IO_READ},
        {.addr=0x8fc6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_036C) {
    const struct CPU_State initial_cpu = {.pc=0x81dc, .a=0x72, .x=0x44, .y=0xbb, .sp=0xc0, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x81dc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x81dd, .a=0xd2, .x=0x44, .y=0xbb, .sp=0xc0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x81dc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x81dc, .value=0xdf, .type=IO_READ},
        {.addr=0x81dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_036D) {
    const struct CPU_State initial_cpu = {.pc=0x49f1, .a=0xdf, .x=0x16, .y=0x32, .sp=0x88, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x49f1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x49f2, .a=0x45, .x=0x16, .y=0x32, .sp=0x88, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x49f1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x49f1, .value=0xdf, .type=IO_READ},
        {.addr=0x49f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_036E) {
    const struct CPU_State initial_cpu = {.pc=0xcc45, .a=0x0d, .x=0x18, .y=0xc2, .sp=0x99, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xcc45, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcc46, .a=0x13, .x=0x18, .y=0xc2, .sp=0x99, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xcc45, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcc45, .value=0xdf, .type=IO_READ},
        {.addr=0xcc46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_036F) {
    const struct CPU_State initial_cpu = {.pc=0x8cb9, .a=0x24, .x=0x95, .y=0xa7, .sp=0x7f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8cba, .a=0x84, .x=0x95, .y=0xa7, .sp=0x7f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x8cb9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8cb9, .value=0xdf, .type=IO_READ},
        {.addr=0x8cba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0370) {
    const struct CPU_State initial_cpu = {.pc=0x5471, .a=0xe7, .x=0xf9, .y=0x77, .sp=0x85, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5471, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5472, .a=0x4d, .x=0xf9, .y=0x77, .sp=0x85, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5471, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5471, .value=0xdf, .type=IO_READ},
        {.addr=0x5472, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0371) {
    const struct CPU_State initial_cpu = {.pc=0x6965, .a=0xe8, .x=0x67, .y=0x48, .sp=0xe0, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x6965, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6966, .a=0x4e, .x=0x67, .y=0x48, .sp=0xe0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6965, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6965, .value=0xdf, .type=IO_READ},
        {.addr=0x6966, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0372) {
    const struct CPU_State initial_cpu = {.pc=0x2cab, .a=0x5f, .x=0xaf, .y=0xc3, .sp=0xff, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x2cab, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2cac, .a=0xc5, .x=0xaf, .y=0xc3, .sp=0xff, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2cab, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2cab, .value=0xdf, .type=IO_READ},
        {.addr=0x2cac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0373) {
    const struct CPU_State initial_cpu = {.pc=0xaa00, .a=0x0c, .x=0x91, .y=0xad, .sp=0x93, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xaa00, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xaa01, .a=0x12, .x=0x91, .y=0xad, .sp=0x93, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xaa00, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xaa00, .value=0xdf, .type=IO_READ},
        {.addr=0xaa01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0374) {
    const struct CPU_State initial_cpu = {.pc=0x41b3, .a=0x1e, .x=0x43, .y=0x01, .sp=0xa0, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x41b3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x41b4, .a=0x84, .x=0x43, .y=0x01, .sp=0xa0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x41b3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x41b3, .value=0xdf, .type=IO_READ},
        {.addr=0x41b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0375) {
    const struct CPU_State initial_cpu = {.pc=0x171c, .a=0xd1, .x=0xe5, .y=0x96, .sp=0x3f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x171c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x171d, .a=0x37, .x=0xe5, .y=0x96, .sp=0x3f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x171c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x171c, .value=0xdf, .type=IO_READ},
        {.addr=0x171d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0376) {
    const struct CPU_State initial_cpu = {.pc=0x195d, .a=0x0d, .x=0x03, .y=0x7d, .sp=0x3b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x195d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x195e, .a=0x13, .x=0x03, .y=0x7d, .sp=0x3b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x195d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x195d, .value=0xdf, .type=IO_READ},
        {.addr=0x195e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0377) {
    const struct CPU_State initial_cpu = {.pc=0x5f96, .a=0x41, .x=0x07, .y=0xaa, .sp=0xc7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x5f96, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5f97, .a=0x47, .x=0x07, .y=0xaa, .sp=0xc7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x5f96, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5f96, .value=0xdf, .type=IO_READ},
        {.addr=0x5f97, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0378) {
    const struct CPU_State initial_cpu = {.pc=0x7c8f, .a=0xa7, .x=0x5a, .y=0xe0, .sp=0x19, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x7c8f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7c90, .a=0x0d, .x=0x5a, .y=0xe0, .sp=0x19, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7c8f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7c8f, .value=0xdf, .type=IO_READ},
        {.addr=0x7c90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0379) {
    const struct CPU_State initial_cpu = {.pc=0x974c, .a=0x88, .x=0x98, .y=0xb8, .sp=0x93, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x974c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x974d, .a=0xe8, .x=0x98, .y=0xb8, .sp=0x93, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x974c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x974c, .value=0xdf, .type=IO_READ},
        {.addr=0x974d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_037A) {
    const struct CPU_State initial_cpu = {.pc=0xcdaf, .a=0x2e, .x=0x17, .y=0x93, .sp=0x17, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xcdaf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xcdb0, .a=0x94, .x=0x17, .y=0x93, .sp=0x17, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xcdaf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xcdaf, .value=0xdf, .type=IO_READ},
        {.addr=0xcdb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_037B) {
    const struct CPU_State initial_cpu = {.pc=0xe58a, .a=0x69, .x=0x42, .y=0xb1, .sp=0xa5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xe58a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe58b, .a=0x69, .x=0x42, .y=0xb1, .sp=0xa5, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe58a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe58a, .value=0xdf, .type=IO_READ},
        {.addr=0xe58b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_037C) {
    const struct CPU_State initial_cpu = {.pc=0xf607, .a=0x02, .x=0x43, .y=0x9c, .sp=0xcb, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xf607, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf608, .a=0x08, .x=0x43, .y=0x9c, .sp=0xcb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xf607, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf607, .value=0xdf, .type=IO_READ},
        {.addr=0xf608, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_037D) {
    const struct CPU_State initial_cpu = {.pc=0x61ec, .a=0xb5, .x=0x94, .y=0x45, .sp=0x93, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x61ec, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x61ed, .a=0x15, .x=0x94, .y=0x45, .sp=0x93, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x61ec, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x61ec, .value=0xdf, .type=IO_READ},
        {.addr=0x61ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_037E) {
    const struct CPU_State initial_cpu = {.pc=0x0abd, .a=0x55, .x=0x34, .y=0x6f, .sp=0x3a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0abd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0abe, .a=0xb5, .x=0x34, .y=0x6f, .sp=0x3a, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0abd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0abd, .value=0xdf, .type=IO_READ},
        {.addr=0x0abe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_037F) {
    const struct CPU_State initial_cpu = {.pc=0xbf76, .a=0x5c, .x=0xc8, .y=0xa6, .sp=0xb2, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xbf76, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbf77, .a=0x62, .x=0xc8, .y=0xa6, .sp=0xb2, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xbf76, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbf76, .value=0xdf, .type=IO_READ},
        {.addr=0xbf77, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0380) {
    const struct CPU_State initial_cpu = {.pc=0x8028, .a=0x07, .x=0x0e, .y=0x31, .sp=0xbd, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x8028, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8029, .a=0x07, .x=0x0e, .y=0x31, .sp=0xbd, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8028, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8028, .value=0xdf, .type=IO_READ},
        {.addr=0x8029, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0381) {
    const struct CPU_State initial_cpu = {.pc=0xafd1, .a=0xab, .x=0xad, .y=0x1e, .sp=0x8f, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xafd1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xafd2, .a=0x11, .x=0xad, .y=0x1e, .sp=0x8f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xafd1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xafd1, .value=0xdf, .type=IO_READ},
        {.addr=0xafd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0382) {
    const struct CPU_State initial_cpu = {.pc=0xb331, .a=0xd5, .x=0x40, .y=0x32, .sp=0x16, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xb331, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb332, .a=0x35, .x=0x40, .y=0x32, .sp=0x16, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb331, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb331, .value=0xdf, .type=IO_READ},
        {.addr=0xb332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0383) {
    const struct CPU_State initial_cpu = {.pc=0x1b54, .a=0xc2, .x=0xd2, .y=0x0c, .sp=0x8b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x1b54, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1b55, .a=0x28, .x=0xd2, .y=0x0c, .sp=0x8b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1b54, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1b54, .value=0xdf, .type=IO_READ},
        {.addr=0x1b55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0384) {
    const struct CPU_State initial_cpu = {.pc=0x9a25, .a=0x5f, .x=0x36, .y=0x4e, .sp=0x3a, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x9a25, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9a26, .a=0x65, .x=0x36, .y=0x4e, .sp=0x3a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9a25, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9a25, .value=0xdf, .type=IO_READ},
        {.addr=0x9a26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0385) {
    const struct CPU_State initial_cpu = {.pc=0xfd5d, .a=0xfd, .x=0x2c, .y=0x2c, .sp=0x14, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xfd5d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xfd5e, .a=0x63, .x=0x2c, .y=0x2c, .sp=0x14, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xfd5d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xfd5d, .value=0xdf, .type=IO_READ},
        {.addr=0xfd5e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0386) {
    const struct CPU_State initial_cpu = {.pc=0xf55f, .a=0x3a, .x=0xa8, .y=0xa8, .sp=0xe4, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xf55f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf560, .a=0xa0, .x=0xa8, .y=0xa8, .sp=0xe4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xf55f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf55f, .value=0xdf, .type=IO_READ},
        {.addr=0xf560, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0387) {
    const struct CPU_State initial_cpu = {.pc=0x9629, .a=0x50, .x=0x8e, .y=0x9e, .sp=0xb2, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x9629, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x962a, .a=0xb0, .x=0x8e, .y=0x9e, .sp=0xb2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x9629, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9629, .value=0xdf, .type=IO_READ},
        {.addr=0x962a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0388) {
    const struct CPU_State initial_cpu = {.pc=0x270e, .a=0x47, .x=0xa6, .y=0x82, .sp=0x64, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x270e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x270f, .a=0x47, .x=0xa6, .y=0x82, .sp=0x64, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x270e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x270e, .value=0xdf, .type=IO_READ},
        {.addr=0x270f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0389) {
    const struct CPU_State initial_cpu = {.pc=0x9527, .a=0x57, .x=0x95, .y=0x07, .sp=0xc1, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9527, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9528, .a=0xbd, .x=0x95, .y=0x07, .sp=0xc1, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9527, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9527, .value=0xdf, .type=IO_READ},
        {.addr=0x9528, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_038A) {
    const struct CPU_State initial_cpu = {.pc=0x2250, .a=0x66, .x=0x45, .y=0x2b, .sp=0x1a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x2250, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2251, .a=0x6c, .x=0x45, .y=0x2b, .sp=0x1a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2250, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2250, .value=0xdf, .type=IO_READ},
        {.addr=0x2251, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_038B) {
    const struct CPU_State initial_cpu = {.pc=0x579f, .a=0x1a, .x=0x17, .y=0x4e, .sp=0x5e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x579f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x57a0, .a=0x20, .x=0x17, .y=0x4e, .sp=0x5e, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x579f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x579f, .value=0xdf, .type=IO_READ},
        {.addr=0x57a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_038C) {
    const struct CPU_State initial_cpu = {.pc=0xedf8, .a=0xda, .x=0x7e, .y=0xfa, .sp=0xfc, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xedf8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xedf9, .a=0x40, .x=0x7e, .y=0xfa, .sp=0xfc, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xedf8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xedf8, .value=0xdf, .type=IO_READ},
        {.addr=0xedf9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_038D) {
    const struct CPU_State initial_cpu = {.pc=0x566b, .a=0xe3, .x=0x9c, .y=0x0f, .sp=0x2d, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x566b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x566c, .a=0x43, .x=0x9c, .y=0x0f, .sp=0x2d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x566b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x566b, .value=0xdf, .type=IO_READ},
        {.addr=0x566c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_038E) {
    const struct CPU_State initial_cpu = {.pc=0x99a7, .a=0xf0, .x=0x2f, .y=0xd1, .sp=0xf7, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x99a7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x99a8, .a=0x50, .x=0x2f, .y=0xd1, .sp=0xf7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x99a7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x99a7, .value=0xdf, .type=IO_READ},
        {.addr=0x99a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_038F) {
    const struct CPU_State initial_cpu = {.pc=0x43da, .a=0xa2, .x=0x87, .y=0x85, .sp=0x2a, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x43da, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x43db, .a=0x02, .x=0x87, .y=0x85, .sp=0x2a, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x43da, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x43da, .value=0xdf, .type=IO_READ},
        {.addr=0x43db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0390) {
    const struct CPU_State initial_cpu = {.pc=0xbcfd, .a=0x3a, .x=0xa2, .y=0xb9, .sp=0x39, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xbcfd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbcfe, .a=0x40, .x=0xa2, .y=0xb9, .sp=0x39, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xbcfd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbcfd, .value=0xdf, .type=IO_READ},
        {.addr=0xbcfe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0391) {
    const struct CPU_State initial_cpu = {.pc=0xd20b, .a=0xaf, .x=0xce, .y=0x6b, .sp=0xc5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd20b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd20c, .a=0x15, .x=0xce, .y=0x6b, .sp=0xc5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd20b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd20b, .value=0xdf, .type=IO_READ},
        {.addr=0xd20c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0392) {
    const struct CPU_State initial_cpu = {.pc=0xb5de, .a=0x07, .x=0x60, .y=0xf6, .sp=0x24, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb5de, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb5df, .a=0x0d, .x=0x60, .y=0xf6, .sp=0x24, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb5de, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb5de, .value=0xdf, .type=IO_READ},
        {.addr=0xb5df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0393) {
    const struct CPU_State initial_cpu = {.pc=0x34e6, .a=0x20, .x=0x96, .y=0x83, .sp=0x5b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x34e6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x34e7, .a=0x20, .x=0x96, .y=0x83, .sp=0x5b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x34e6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x34e6, .value=0xdf, .type=IO_READ},
        {.addr=0x34e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0394) {
    const struct CPU_State initial_cpu = {.pc=0x5ee0, .a=0xef, .x=0x10, .y=0x01, .sp=0xcd, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5ee1, .a=0x55, .x=0x10, .y=0x01, .sp=0xcd, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5ee0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5ee0, .value=0xdf, .type=IO_READ},
        {.addr=0x5ee1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0395) {
    const struct CPU_State initial_cpu = {.pc=0xe9ad, .a=0x29, .x=0x11, .y=0xb7, .sp=0x6c, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xe9ad, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe9ae, .a=0x2f, .x=0x11, .y=0xb7, .sp=0x6c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xe9ad, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe9ad, .value=0xdf, .type=IO_READ},
        {.addr=0xe9ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0396) {
    const struct CPU_State initial_cpu = {.pc=0x1059, .a=0xbd, .x=0x5b, .y=0xb7, .sp=0x9f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x1059, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x105a, .a=0x23, .x=0x5b, .y=0xb7, .sp=0x9f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1059, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1059, .value=0xdf, .type=IO_READ},
        {.addr=0x105a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0397) {
    const struct CPU_State initial_cpu = {.pc=0xc361, .a=0x0a, .x=0x14, .y=0xdd, .sp=0xad, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc361, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc362, .a=0x10, .x=0x14, .y=0xdd, .sp=0xad, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc361, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc361, .value=0xdf, .type=IO_READ},
        {.addr=0xc362, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0398) {
    const struct CPU_State initial_cpu = {.pc=0xa3d1, .a=0x29, .x=0xdf, .y=0x4d, .sp=0x7f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa3d2, .a=0x8f, .x=0xdf, .y=0x4d, .sp=0x7f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa3d1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa3d1, .value=0xdf, .type=IO_READ},
        {.addr=0xa3d2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_0399) {
    const struct CPU_State initial_cpu = {.pc=0xaff2, .a=0xd1, .x=0xb5, .y=0x5d, .sp=0x9e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xaff2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xaff3, .a=0x31, .x=0xb5, .y=0x5d, .sp=0x9e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xaff2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xaff2, .value=0xdf, .type=IO_READ},
        {.addr=0xaff3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_039A) {
    const struct CPU_State initial_cpu = {.pc=0x5a37, .a=0x06, .x=0x3e, .y=0x7d, .sp=0x3b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x5a37, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5a38, .a=0x6c, .x=0x3e, .y=0x7d, .sp=0x3b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5a37, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5a37, .value=0xdf, .type=IO_READ},
        {.addr=0x5a38, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_039B) {
    const struct CPU_State initial_cpu = {.pc=0x3fc2, .a=0x1b, .x=0x5e, .y=0x8b, .sp=0xcd, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x3fc2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3fc3, .a=0x81, .x=0x5e, .y=0x8b, .sp=0xcd, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3fc2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3fc2, .value=0xdf, .type=IO_READ},
        {.addr=0x3fc3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_039C) {
    const struct CPU_State initial_cpu = {.pc=0x9c1c, .a=0xec, .x=0x6b, .y=0x13, .sp=0x45, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9c1c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9c1d, .a=0x52, .x=0x6b, .y=0x13, .sp=0x45, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9c1c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9c1c, .value=0xdf, .type=IO_READ},
        {.addr=0x9c1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_039D) {
    const struct CPU_State initial_cpu = {.pc=0x5235, .a=0x19, .x=0xf0, .y=0xef, .sp=0x76, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5235, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5236, .a=0x7f, .x=0xf0, .y=0xef, .sp=0x76, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5235, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5235, .value=0xdf, .type=IO_READ},
        {.addr=0x5236, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_039E) {
    const struct CPU_State initial_cpu = {.pc=0xeb02, .a=0xd1, .x=0x24, .y=0x32, .sp=0x57, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb02, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xeb03, .a=0x37, .x=0x24, .y=0x32, .sp=0x57, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xeb02, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xeb02, .value=0xdf, .type=IO_READ},
        {.addr=0xeb03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_039F) {
    const struct CPU_State initial_cpu = {.pc=0x67f4, .a=0x7f, .x=0xe6, .y=0x21, .sp=0xaa, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x67f4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x67f5, .a=0x85, .x=0xe6, .y=0x21, .sp=0xaa, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x67f4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x67f4, .value=0xdf, .type=IO_READ},
        {.addr=0x67f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x0511, .a=0x25, .x=0x70, .y=0x11, .sp=0x30, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0511, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0512, .a=0x8b, .x=0x70, .y=0x11, .sp=0x30, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0511, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0511, .value=0xdf, .type=IO_READ},
        {.addr=0x0512, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xda12, .a=0xe3, .x=0x88, .y=0xe3, .sp=0xa3, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xda12, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xda13, .a=0x43, .x=0x88, .y=0xe3, .sp=0xa3, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xda12, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xda12, .value=0xdf, .type=IO_READ},
        {.addr=0xda13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x1aa3, .a=0xd5, .x=0xd2, .y=0x7a, .sp=0x05, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1aa3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1aa4, .a=0x35, .x=0xd2, .y=0x7a, .sp=0x05, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1aa3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1aa3, .value=0xdf, .type=IO_READ},
        {.addr=0x1aa4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x33e8, .a=0x3d, .x=0x96, .y=0xc5, .sp=0x8e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x33e8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x33e9, .a=0xa3, .x=0x96, .y=0xc5, .sp=0x8e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x33e8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x33e8, .value=0xdf, .type=IO_READ},
        {.addr=0x33e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x3031, .a=0xc5, .x=0x17, .y=0x6a, .sp=0x42, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x3031, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3032, .a=0x2b, .x=0x17, .y=0x6a, .sp=0x42, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x3031, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3031, .value=0xdf, .type=IO_READ},
        {.addr=0x3032, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xdf92, .a=0x32, .x=0xd5, .y=0x9c, .sp=0xa7, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xdf92, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdf93, .a=0x98, .x=0xd5, .y=0x9c, .sp=0xa7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xdf92, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdf92, .value=0xdf, .type=IO_READ},
        {.addr=0xdf93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x1cdc, .a=0x2e, .x=0x86, .y=0x4c, .sp=0xba, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x1cdc, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x1cdd, .a=0x94, .x=0x86, .y=0x4c, .sp=0xba, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x1cdc, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x1cdc, .value=0xdf, .type=IO_READ},
        {.addr=0x1cdd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x4890, .a=0x0f, .x=0x1c, .y=0x25, .sp=0x93, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4890, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4891, .a=0x75, .x=0x1c, .y=0x25, .sp=0x93, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4890, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4890, .value=0xdf, .type=IO_READ},
        {.addr=0x4891, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x4f64, .a=0x1e, .x=0xeb, .y=0x50, .sp=0xee, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x4f64, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4f65, .a=0x24, .x=0xeb, .y=0x50, .sp=0xee, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4f64, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4f64, .value=0xdf, .type=IO_READ},
        {.addr=0x4f65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xdf1e, .a=0x15, .x=0x86, .y=0x70, .sp=0xe4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdf1f, .a=0x15, .x=0x86, .y=0x70, .sp=0xe4, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xdf1e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdf1e, .value=0xdf, .type=IO_READ},
        {.addr=0xdf1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xe1a3, .a=0xc6, .x=0x8d, .y=0xb5, .sp=0x06, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xe1a3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe1a4, .a=0x2c, .x=0x8d, .y=0xb5, .sp=0x06, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe1a3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe1a3, .value=0xdf, .type=IO_READ},
        {.addr=0xe1a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xe73d, .a=0x95, .x=0x57, .y=0xe3, .sp=0x1d, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xe73d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe73e, .a=0x9b, .x=0x57, .y=0xe3, .sp=0x1d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe73d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe73d, .value=0xdf, .type=IO_READ},
        {.addr=0xe73e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x9a18, .a=0x17, .x=0x4e, .y=0x6d, .sp=0xc6, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x9a18, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x9a19, .a=0x1d, .x=0x4e, .y=0x6d, .sp=0xc6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9a18, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x9a18, .value=0xdf, .type=IO_READ},
        {.addr=0x9a19, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xb45b, .a=0x48, .x=0x24, .y=0xbf, .sp=0x3d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xb45b, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb45c, .a=0xa8, .x=0x24, .y=0xbf, .sp=0x3d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb45b, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb45b, .value=0xdf, .type=IO_READ},
        {.addr=0xb45c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x4c08, .a=0xf2, .x=0x28, .y=0x49, .sp=0xc4, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x4c08, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4c09, .a=0x58, .x=0x28, .y=0x49, .sp=0xc4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4c08, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4c08, .value=0xdf, .type=IO_READ},
        {.addr=0x4c09, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x6228, .a=0x68, .x=0xcb, .y=0xb5, .sp=0x44, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6228, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x6229, .a=0x68, .x=0xcb, .y=0xb5, .sp=0x44, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6228, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x6228, .value=0xdf, .type=IO_READ},
        {.addr=0x6229, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x96a2, .a=0x72, .x=0x74, .y=0xd5, .sp=0xa2, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x96a2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x96a3, .a=0x78, .x=0x74, .y=0xd5, .sp=0xa2, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x96a2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x96a2, .value=0xdf, .type=IO_READ},
        {.addr=0x96a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xa398, .a=0x76, .x=0x4c, .y=0x04, .sp=0x12, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xa398, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa399, .a=0x7c, .x=0x4c, .y=0x04, .sp=0x12, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xa398, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa398, .value=0xdf, .type=IO_READ},
        {.addr=0xa399, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x7395, .a=0x7e, .x=0xf3, .y=0xac, .sp=0xeb, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x7395, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7396, .a=0xe4, .x=0xf3, .y=0xac, .sp=0xeb, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x7395, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7395, .value=0xdf, .type=IO_READ},
        {.addr=0x7396, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x43f1, .a=0xf2, .x=0xff, .y=0x5d, .sp=0x6d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x43f1, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x43f2, .a=0x52, .x=0xff, .y=0x5d, .sp=0x6d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x43f1, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x43f1, .value=0xdf, .type=IO_READ},
        {.addr=0x43f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xf47a, .a=0xb6, .x=0x79, .y=0xd0, .sp=0x4f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xf47a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf47b, .a=0x16, .x=0x79, .y=0xd0, .sp=0x4f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf47a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf47a, .value=0xdf, .type=IO_READ},
        {.addr=0xf47b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x2868, .a=0xea, .x=0x37, .y=0x7c, .sp=0x37, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2868, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2869, .a=0x50, .x=0x37, .y=0x7c, .sp=0x37, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2868, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2868, .value=0xdf, .type=IO_READ},
        {.addr=0x2869, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x2ba8, .a=0xc2, .x=0x82, .y=0x0e, .sp=0x99, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x2ba8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2ba9, .a=0x22, .x=0x82, .y=0x0e, .sp=0x99, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x2ba8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2ba8, .value=0xdf, .type=IO_READ},
        {.addr=0x2ba9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x89c0, .a=0x1f, .x=0x4d, .y=0x84, .sp=0xdf, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x89c0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x89c1, .a=0x25, .x=0x4d, .y=0x84, .sp=0xdf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x89c0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x89c0, .value=0xdf, .type=IO_READ},
        {.addr=0x89c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xa0d6, .a=0x42, .x=0x9e, .y=0x36, .sp=0xe1, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa0d7, .a=0xa8, .x=0x9e, .y=0x36, .sp=0xe1, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xa0d6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa0d6, .value=0xdf, .type=IO_READ},
        {.addr=0xa0d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xba38, .a=0x28, .x=0x00, .y=0xbf, .sp=0x68, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xba38, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xba39, .a=0x28, .x=0x00, .y=0xbf, .sp=0x68, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xba38, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xba38, .value=0xdf, .type=IO_READ},
        {.addr=0xba39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x5444, .a=0x61, .x=0xb2, .y=0xf8, .sp=0x6a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x5444, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5445, .a=0x61, .x=0xb2, .y=0xf8, .sp=0x6a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5444, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5444, .value=0xdf, .type=IO_READ},
        {.addr=0x5445, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xab34, .a=0x82, .x=0x6c, .y=0x38, .sp=0xf6, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xab34, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xab35, .a=0x82, .x=0x6c, .y=0x38, .sp=0xf6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xab34, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xab34, .value=0xdf, .type=IO_READ},
        {.addr=0xab35, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xa8a2, .a=0x45, .x=0x9c, .y=0xd0, .sp=0x29, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa8a3, .a=0xab, .x=0x9c, .y=0xd0, .sp=0x29, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xa8a2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa8a2, .value=0xdf, .type=IO_READ},
        {.addr=0xa8a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x0063, .a=0xe7, .x=0x45, .y=0x99, .sp=0x5c, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0064, .a=0x47, .x=0x45, .y=0x99, .sp=0x5c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0063, .value=0xdf, .type=IO_READ},
        {.addr=0x0064, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x5934, .a=0x1e, .x=0xc9, .y=0x3d, .sp=0x2c, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x5934, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x5935, .a=0x24, .x=0xc9, .y=0x3d, .sp=0x2c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x5934, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x5934, .value=0xdf, .type=IO_READ},
        {.addr=0x5935, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xbceb, .a=0x3f, .x=0x3b, .y=0xd4, .sp=0x38, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xbceb, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbcec, .a=0xa5, .x=0x3b, .y=0xd4, .sp=0x38, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xbceb, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbceb, .value=0xdf, .type=IO_READ},
        {.addr=0xbcec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xf68a, .a=0xd9, .x=0x47, .y=0xf0, .sp=0x45, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf68a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xf68b, .a=0x39, .x=0x47, .y=0xf0, .sp=0x45, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf68a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xf68a, .value=0xdf, .type=IO_READ},
        {.addr=0xf68b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x904d, .a=0xac, .x=0x84, .y=0x7a, .sp=0xfb, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x904d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x904e, .a=0x12, .x=0x84, .y=0x7a, .sp=0xfb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x904d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x904d, .value=0xdf, .type=IO_READ},
        {.addr=0x904e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x4222, .a=0x04, .x=0x8c, .y=0xca, .sp=0x07, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x4222, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4223, .a=0x6a, .x=0x8c, .y=0xca, .sp=0x07, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4222, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4222, .value=0xdf, .type=IO_READ},
        {.addr=0x4223, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x8700, .a=0xb4, .x=0x8d, .y=0x5e, .sp=0xc4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x8700, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8701, .a=0x1a, .x=0x8d, .y=0x5e, .sp=0xc4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8700, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8700, .value=0xdf, .type=IO_READ},
        {.addr=0x8701, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xdb95, .a=0x88, .x=0x1d, .y=0xcb, .sp=0x37, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xdb95, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdb96, .a=0x8e, .x=0x1d, .y=0xcb, .sp=0x37, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xdb95, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdb95, .value=0xdf, .type=IO_READ},
        {.addr=0xdb96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xdc57, .a=0x83, .x=0x90, .y=0x4f, .sp=0x81, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xdc57, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xdc58, .a=0xe9, .x=0x90, .y=0x4f, .sp=0x81, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xdc57, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xdc57, .value=0xdf, .type=IO_READ},
        {.addr=0xdc58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x919f, .a=0x70, .x=0xa2, .y=0xa2, .sp=0xd5, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x919f, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x91a0, .a=0xd6, .x=0xa2, .y=0xa2, .sp=0xd5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x919f, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x919f, .value=0xdf, .type=IO_READ},
        {.addr=0x91a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x99b3, .a=0x21, .x=0x90, .y=0xb8, .sp=0x23, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x99b3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x99b4, .a=0x81, .x=0x90, .y=0xb8, .sp=0x23, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x99b3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x99b3, .value=0xdf, .type=IO_READ},
        {.addr=0x99b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x0027, .a=0x2c, .x=0x96, .y=0xec, .sp=0x1c, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0028, .a=0x92, .x=0x96, .y=0xec, .sp=0x1c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0027, .value=0xdf, .type=IO_READ},
        {.addr=0x0028, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x418a, .a=0x41, .x=0x33, .y=0x75, .sp=0xe9, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x418a, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x418b, .a=0xa1, .x=0x33, .y=0x75, .sp=0xe9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x418a, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x418a, .value=0xdf, .type=IO_READ},
        {.addr=0x418b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x37f8, .a=0x4e, .x=0x46, .y=0xf5, .sp=0x55, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x37f8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x37f9, .a=0xb4, .x=0x46, .y=0xf5, .sp=0x55, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x37f8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x37f8, .value=0xdf, .type=IO_READ},
        {.addr=0x37f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xc3c8, .a=0x6e, .x=0x41, .y=0xea, .sp=0x59, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc3c8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc3c9, .a=0xd4, .x=0x41, .y=0xea, .sp=0x59, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xc3c8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc3c8, .value=0xdf, .type=IO_READ},
        {.addr=0xc3c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xbc94, .a=0x2d, .x=0x70, .y=0x45, .sp=0x0c, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xbc94, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xbc95, .a=0x33, .x=0x70, .y=0x45, .sp=0x0c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xbc94, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xbc94, .value=0xdf, .type=IO_READ},
        {.addr=0xbc95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x352c, .a=0xe9, .x=0x14, .y=0x3c, .sp=0x80, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x352c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x352d, .a=0x49, .x=0x14, .y=0x3c, .sp=0x80, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x352c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x352c, .value=0xdf, .type=IO_READ},
        {.addr=0x352d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x95c8, .a=0xf6, .x=0xf8, .y=0xcb, .sp=0x01, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x95c8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x95c9, .a=0x5c, .x=0xf8, .y=0xcb, .sp=0x01, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x95c8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x95c8, .value=0xdf, .type=IO_READ},
        {.addr=0x95c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xa3bf, .a=0xf9, .x=0xa8, .y=0x9c, .sp=0x1a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa3bf, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xa3c0, .a=0x59, .x=0xa8, .y=0x9c, .sp=0x1a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa3bf, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xa3bf, .value=0xdf, .type=IO_READ},
        {.addr=0xa3c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x0ac4, .a=0x30, .x=0x59, .y=0xfd, .sp=0x7e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0ac4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0ac5, .a=0x30, .x=0x59, .y=0xfd, .sp=0x7e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0ac4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0ac4, .value=0xdf, .type=IO_READ},
        {.addr=0x0ac5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x23cd, .a=0xf6, .x=0x23, .y=0xdc, .sp=0x14, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x23cd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x23ce, .a=0x5c, .x=0x23, .y=0xdc, .sp=0x14, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x23cd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x23cd, .value=0xdf, .type=IO_READ},
        {.addr=0x23ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x7d95, .a=0xe9, .x=0x6e, .y=0x69, .sp=0xcc, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x7d95, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7d96, .a=0x49, .x=0x6e, .y=0x69, .sp=0xcc, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7d95, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7d95, .value=0xdf, .type=IO_READ},
        {.addr=0x7d96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x0d99, .a=0x50, .x=0xd5, .y=0xec, .sp=0x10, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0d99, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0d9a, .a=0x56, .x=0xd5, .y=0xec, .sp=0x10, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0d99, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0d99, .value=0xdf, .type=IO_READ},
        {.addr=0x0d9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xd9e0, .a=0x26, .x=0xb9, .y=0x34, .sp=0x7d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xd9e0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd9e1, .a=0x86, .x=0xb9, .y=0x34, .sp=0x7d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd9e0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd9e0, .value=0xdf, .type=IO_READ},
        {.addr=0xd9e1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x7bd8, .a=0xe8, .x=0xa4, .y=0x37, .sp=0x80, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd8, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7bd9, .a=0x4e, .x=0xa4, .y=0x37, .sp=0x80, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x7bd8, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x7bd8, .value=0xdf, .type=IO_READ},
        {.addr=0x7bd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x90ac, .a=0x7f, .x=0x7b, .y=0xee, .sp=0xec, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x90ac, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x90ad, .a=0xe5, .x=0x7b, .y=0xee, .sp=0xec, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x90ac, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x90ac, .value=0xdf, .type=IO_READ},
        {.addr=0x90ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x3b35, .a=0x66, .x=0xf7, .y=0xc4, .sp=0x50, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x3b35, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x3b36, .a=0x6c, .x=0xf7, .y=0xc4, .sp=0x50, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x3b35, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x3b35, .value=0xdf, .type=IO_READ},
        {.addr=0x3b36, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xc80d, .a=0x2b, .x=0x10, .y=0x16, .sp=0x37, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xc80d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc80e, .a=0x31, .x=0x10, .y=0x16, .sp=0x37, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xc80d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc80d, .value=0xdf, .type=IO_READ},
        {.addr=0xc80e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x73fd, .a=0x32, .x=0x7a, .y=0x3a, .sp=0x2e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x73fd, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x73fe, .a=0x38, .x=0x7a, .y=0x3a, .sp=0x2e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x73fd, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x73fd, .value=0xdf, .type=IO_READ},
        {.addr=0x73fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x77e2, .a=0xe5, .x=0x58, .y=0xd9, .sp=0x9f, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x77e2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x77e3, .a=0x45, .x=0x58, .y=0xd9, .sp=0x9f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x77e2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x77e2, .value=0xdf, .type=IO_READ},
        {.addr=0x77e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xd4f9, .a=0x8c, .x=0x01, .y=0x7f, .sp=0xb4, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd4f9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd4fa, .a=0x92, .x=0x01, .y=0x7f, .sp=0xb4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd4f9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd4f9, .value=0xdf, .type=IO_READ},
        {.addr=0xd4fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xd3e9, .a=0x72, .x=0xc4, .y=0xfc, .sp=0x6e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd3e9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd3ea, .a=0xd8, .x=0xc4, .y=0xfc, .sp=0x6e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd3e9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd3e9, .value=0xdf, .type=IO_READ},
        {.addr=0xd3ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x94d9, .a=0xc4, .x=0xd6, .y=0x56, .sp=0xe2, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x94d9, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x94da, .a=0x24, .x=0xd6, .y=0x56, .sp=0xe2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x94d9, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x94d9, .value=0xdf, .type=IO_READ},
        {.addr=0x94da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x18a7, .a=0xd6, .x=0xd3, .y=0x6e, .sp=0x42, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x18a7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x18a8, .a=0x36, .x=0xd3, .y=0x6e, .sp=0x42, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x18a7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x18a7, .value=0xdf, .type=IO_READ},
        {.addr=0x18a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xb9b4, .a=0x7b, .x=0xee, .y=0x99, .sp=0x40, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xb9b4, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb9b5, .a=0x81, .x=0xee, .y=0x99, .sp=0x40, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb9b4, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb9b4, .value=0xdf, .type=IO_READ},
        {.addr=0xb9b5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xd4c7, .a=0x18, .x=0x6f, .y=0x9f, .sp=0x9a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c7, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xd4c8, .a=0x1e, .x=0x6f, .y=0x9f, .sp=0x9a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd4c7, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xd4c7, .value=0xdf, .type=IO_READ},
        {.addr=0xd4c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xb7c6, .a=0x43, .x=0x34, .y=0x36, .sp=0x67, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xb7c6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb7c7, .a=0x43, .x=0x34, .y=0x36, .sp=0x67, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xb7c6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb7c6, .value=0xdf, .type=IO_READ},
        {.addr=0xb7c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xb046, .a=0xd0, .x=0x28, .y=0x28, .sp=0x97, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb046, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb047, .a=0x30, .x=0x28, .y=0x28, .sp=0x97, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb046, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb046, .value=0xdf, .type=IO_READ},
        {.addr=0xb047, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x4f6d, .a=0x7e, .x=0x95, .y=0x0d, .sp=0x67, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4f6d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4f6e, .a=0x84, .x=0x95, .y=0x0d, .sp=0x67, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4f6d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4f6d, .value=0xdf, .type=IO_READ},
        {.addr=0x4f6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xddb0, .a=0x9f, .x=0x96, .y=0x39, .sp=0xbc, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xddb0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xddb1, .a=0x05, .x=0x96, .y=0x39, .sp=0xbc, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xddb0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xddb0, .value=0xdf, .type=IO_READ},
        {.addr=0xddb1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x0d57, .a=0x05, .x=0xab, .y=0x1c, .sp=0x1b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0d57, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x0d58, .a=0x05, .x=0xab, .y=0x1c, .sp=0x1b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0d57, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x0d57, .value=0xdf, .type=IO_READ},
        {.addr=0x0d58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x682c, .a=0xf5, .x=0x12, .y=0xb1, .sp=0xee, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x682c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x682d, .a=0x55, .x=0x12, .y=0xb1, .sp=0xee, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x682c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x682c, .value=0xdf, .type=IO_READ},
        {.addr=0x682d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DF, _DF_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x2393, .a=0x04, .x=0x0d, .y=0x97, .sp=0xf5, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2393, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2394, .a=0x6a, .x=0x0d, .y=0x97, .sp=0xf5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2393, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2393, .value=0xdf, .type=IO_READ},
        {.addr=0x2394, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DF 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
