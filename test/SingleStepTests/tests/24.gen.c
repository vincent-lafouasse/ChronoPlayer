#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_24, _24_0000) {
    const struct CPU_State initial_cpu = {.pc=0x54bf, .a=0xa5, .x=0x6c, .y=0x21, .sp=0x58, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x03}, {.addr=0x54bf, .value=0x24}, {.addr=0x54c0, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x54c1, .a=0x01, .x=0x6c, .y=0x21, .sp=0x58, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x03}, {.addr=0x54bf, .value=0x24}, {.addr=0x54c0, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x54bf, .value=0x24, .type=IO_READ},
        {.addr=0x54c0, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0001) {
    const struct CPU_State initial_cpu = {.pc=0x2792, .a=0x49, .x=0xb3, .y=0xd3, .sp=0xbe, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0xbf}, {.addr=0x2792, .value=0x24}, {.addr=0x2793, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x2794, .a=0x09, .x=0xb3, .y=0xd3, .sp=0xbe, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0xbf}, {.addr=0x2792, .value=0x24}, {.addr=0x2793, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2792, .value=0x24, .type=IO_READ},
        {.addr=0x2793, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0002) {
    const struct CPU_State initial_cpu = {.pc=0x5f1e, .a=0x64, .x=0x0e, .y=0x98, .sp=0xe7, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0xf0}, {.addr=0x5f1e, .value=0x24}, {.addr=0x5f1f, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x5f20, .a=0x60, .x=0x0e, .y=0x98, .sp=0xe7, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0xf0}, {.addr=0x5f1e, .value=0x24}, {.addr=0x5f1f, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f1e, .value=0x24, .type=IO_READ},
        {.addr=0x5f1f, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0003) {
    const struct CPU_State initial_cpu = {.pc=0xf257, .a=0x42, .x=0x6a, .y=0x94, .sp=0x7d, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x30}, {.addr=0xf257, .value=0x24}, {.addr=0xf258, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xf259, .a=0x00, .x=0x6a, .y=0x94, .sp=0x7d, .status=0x6a};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x30}, {.addr=0xf257, .value=0x24}, {.addr=0xf258, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xf257, .value=0x24, .type=IO_READ},
        {.addr=0xf258, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0004) {
    const struct CPU_State initial_cpu = {.pc=0xa88a, .a=0x31, .x=0x95, .y=0x55, .sp=0xda, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xd4}, {.addr=0xa88a, .value=0x24}, {.addr=0xa88b, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xa88c, .a=0x10, .x=0x95, .y=0x55, .sp=0xda, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xd4}, {.addr=0xa88a, .value=0x24}, {.addr=0xa88b, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa88a, .value=0x24, .type=IO_READ},
        {.addr=0xa88b, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0005) {
    const struct CPU_State initial_cpu = {.pc=0xc0fb, .a=0x76, .x=0x7d, .y=0xf4, .sp=0xbc, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x6e}, {.addr=0xc0fb, .value=0x24}, {.addr=0xc0fc, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xc0fd, .a=0x66, .x=0x7d, .y=0xf4, .sp=0xbc, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x6e}, {.addr=0xc0fb, .value=0x24}, {.addr=0xc0fc, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0fb, .value=0x24, .type=IO_READ},
        {.addr=0xc0fc, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0007) {
    const struct CPU_State initial_cpu = {.pc=0x0076, .a=0x57, .x=0xb3, .y=0xe8, .sp=0xae, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0xb3}, {.addr=0x0076, .value=0x24}, {.addr=0x0077, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x0078, .a=0x13, .x=0xb3, .y=0xe8, .sp=0xae, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0xb3}, {.addr=0x0076, .value=0x24}, {.addr=0x0077, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0076, .value=0x24, .type=IO_READ},
        {.addr=0x0077, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0009) {
    const struct CPU_State initial_cpu = {.pc=0x6d67, .a=0x8c, .x=0xb1, .y=0x9f, .sp=0x2b, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x05}, {.addr=0x6d67, .value=0x24}, {.addr=0x6d68, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x6d69, .a=0x04, .x=0xb1, .y=0x9f, .sp=0x2b, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x05}, {.addr=0x6d67, .value=0x24}, {.addr=0x6d68, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d67, .value=0x24, .type=IO_READ},
        {.addr=0x6d68, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_000A) {
    const struct CPU_State initial_cpu = {.pc=0xb63c, .a=0x43, .x=0x04, .y=0x0d, .sp=0xb8, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xa4}, {.addr=0xb63c, .value=0x24}, {.addr=0xb63d, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xb63e, .a=0x00, .x=0x04, .y=0x0d, .sp=0xb8, .status=0x1b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xa4}, {.addr=0xb63c, .value=0x24}, {.addr=0xb63d, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xb63c, .value=0x24, .type=IO_READ},
        {.addr=0xb63d, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_000B) {
    const struct CPU_State initial_cpu = {.pc=0x8fbe, .a=0x78, .x=0xe8, .y=0xe5, .sp=0xce, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x92}, {.addr=0x8fbe, .value=0x24}, {.addr=0x8fbf, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x8fc0, .a=0x10, .x=0xe8, .y=0xe5, .sp=0xce, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x92}, {.addr=0x8fbe, .value=0x24}, {.addr=0x8fbf, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fbe, .value=0x24, .type=IO_READ},
        {.addr=0x8fbf, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_000C) {
    const struct CPU_State initial_cpu = {.pc=0x17ca, .a=0x06, .x=0xb0, .y=0xf1, .sp=0x53, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x68}, {.addr=0x17ca, .value=0x24}, {.addr=0x17cb, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x17cc, .a=0x00, .x=0xb0, .y=0xf1, .sp=0x53, .status=0x5e};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x68}, {.addr=0x17ca, .value=0x24}, {.addr=0x17cb, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x17ca, .value=0x24, .type=IO_READ},
        {.addr=0x17cb, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_000D) {
    const struct CPU_State initial_cpu = {.pc=0xe4e6, .a=0x44, .x=0xc9, .y=0x17, .sp=0x1f, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x45}, {.addr=0xe4e6, .value=0x24}, {.addr=0xe4e7, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xe4e8, .a=0x44, .x=0xc9, .y=0x17, .sp=0x1f, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x45}, {.addr=0xe4e6, .value=0x24}, {.addr=0xe4e7, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4e6, .value=0x24, .type=IO_READ},
        {.addr=0xe4e7, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_000E) {
    const struct CPU_State initial_cpu = {.pc=0x40f6, .a=0x41, .x=0x4e, .y=0x58, .sp=0x6e, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x9a}, {.addr=0x40f6, .value=0x24}, {.addr=0x40f7, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x40f8, .a=0x00, .x=0x4e, .y=0x58, .sp=0x6e, .status=0x0f};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x9a}, {.addr=0x40f6, .value=0x24}, {.addr=0x40f7, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x40f6, .value=0x24, .type=IO_READ},
        {.addr=0x40f7, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_000F) {
    const struct CPU_State initial_cpu = {.pc=0xa297, .a=0x8a, .x=0xa4, .y=0x26, .sp=0x70, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x80}, {.addr=0xa297, .value=0x24}, {.addr=0xa298, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xa299, .a=0x80, .x=0xa4, .y=0x26, .sp=0x70, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x80}, {.addr=0xa297, .value=0x24}, {.addr=0xa298, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xa297, .value=0x24, .type=IO_READ},
        {.addr=0xa298, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0010) {
    const struct CPU_State initial_cpu = {.pc=0x9969, .a=0x44, .x=0xde, .y=0x66, .sp=0xbc, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xfe}, {.addr=0x9969, .value=0x24}, {.addr=0x996a, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x996b, .a=0x44, .x=0xde, .y=0x66, .sp=0xbc, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xfe}, {.addr=0x9969, .value=0x24}, {.addr=0x996a, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x9969, .value=0x24, .type=IO_READ},
        {.addr=0x996a, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0011) {
    const struct CPU_State initial_cpu = {.pc=0x6b98, .a=0x24, .x=0x7e, .y=0xe7, .sp=0x6f, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0xf5}, {.addr=0x6b98, .value=0x24}, {.addr=0x6b99, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x6b9a, .a=0x24, .x=0x7e, .y=0xe7, .sp=0x6f, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0xf5}, {.addr=0x6b98, .value=0x24}, {.addr=0x6b99, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b98, .value=0x24, .type=IO_READ},
        {.addr=0x6b99, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0012) {
    const struct CPU_State initial_cpu = {.pc=0x82d1, .a=0xeb, .x=0xfa, .y=0xae, .sp=0x26, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xc7}, {.addr=0x82d1, .value=0x24}, {.addr=0x82d2, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x82d3, .a=0xc3, .x=0xfa, .y=0xae, .sp=0x26, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xc7}, {.addr=0x82d1, .value=0x24}, {.addr=0x82d2, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x82d1, .value=0x24, .type=IO_READ},
        {.addr=0x82d2, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0013) {
    const struct CPU_State initial_cpu = {.pc=0xc719, .a=0x41, .x=0xa3, .y=0x9c, .sp=0xe6, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x3b}, {.addr=0xc719, .value=0x24}, {.addr=0xc71a, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xc71b, .a=0x01, .x=0xa3, .y=0x9c, .sp=0xe6, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x3b}, {.addr=0xc719, .value=0x24}, {.addr=0xc71a, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xc719, .value=0x24, .type=IO_READ},
        {.addr=0xc71a, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0014) {
    const struct CPU_State initial_cpu = {.pc=0xcb6f, .a=0xb1, .x=0x77, .y=0x4a, .sp=0x8a, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xeb}, {.addr=0xcb6f, .value=0x24}, {.addr=0xcb70, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xcb71, .a=0xa1, .x=0x77, .y=0x4a, .sp=0x8a, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xeb}, {.addr=0xcb6f, .value=0x24}, {.addr=0xcb70, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb6f, .value=0x24, .type=IO_READ},
        {.addr=0xcb70, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0015) {
    const struct CPU_State initial_cpu = {.pc=0xb988, .a=0xb0, .x=0x46, .y=0x8b, .sp=0x1b, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x74}, {.addr=0xb988, .value=0x24}, {.addr=0xb989, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xb98a, .a=0x30, .x=0x46, .y=0x8b, .sp=0x1b, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x74}, {.addr=0xb988, .value=0x24}, {.addr=0xb989, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb988, .value=0x24, .type=IO_READ},
        {.addr=0xb989, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0016) {
    const struct CPU_State initial_cpu = {.pc=0x6705, .a=0x05, .x=0xf5, .y=0xbd, .sp=0x4a, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x0b}, {.addr=0x6705, .value=0x24}, {.addr=0x6706, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x6707, .a=0x01, .x=0xf5, .y=0xbd, .sp=0x4a, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x0b}, {.addr=0x6705, .value=0x24}, {.addr=0x6706, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x6705, .value=0x24, .type=IO_READ},
        {.addr=0x6706, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0018) {
    const struct CPU_State initial_cpu = {.pc=0x56c4, .a=0x96, .x=0x8f, .y=0x35, .sp=0x0e, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0xd3}, {.addr=0x56c4, .value=0x24}, {.addr=0x56c5, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x56c6, .a=0x92, .x=0x8f, .y=0x35, .sp=0x0e, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0xd3}, {.addr=0x56c4, .value=0x24}, {.addr=0x56c5, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x56c4, .value=0x24, .type=IO_READ},
        {.addr=0x56c5, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0019) {
    const struct CPU_State initial_cpu = {.pc=0x99d4, .a=0x8a, .x=0x79, .y=0x48, .sp=0x0f, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x7c}, {.addr=0x99d4, .value=0x24}, {.addr=0x99d5, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x99d6, .a=0x08, .x=0x79, .y=0x48, .sp=0x0f, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x7c}, {.addr=0x99d4, .value=0x24}, {.addr=0x99d5, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x99d4, .value=0x24, .type=IO_READ},
        {.addr=0x99d5, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_001A) {
    const struct CPU_State initial_cpu = {.pc=0xbac4, .a=0x6d, .x=0xf0, .y=0x16, .sp=0x78, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x92}, {.addr=0xbac4, .value=0x24}, {.addr=0xbac5, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xbac6, .a=0x00, .x=0xf0, .y=0x16, .sp=0x78, .status=0x1b};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x92}, {.addr=0xbac4, .value=0x24}, {.addr=0xbac5, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xbac4, .value=0x24, .type=IO_READ},
        {.addr=0xbac5, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_001B) {
    const struct CPU_State initial_cpu = {.pc=0x484e, .a=0x1d, .x=0x69, .y=0x33, .sp=0x25, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x79}, {.addr=0x484e, .value=0x24}, {.addr=0x484f, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x4850, .a=0x19, .x=0x69, .y=0x33, .sp=0x25, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x79}, {.addr=0x484e, .value=0x24}, {.addr=0x484f, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x484e, .value=0x24, .type=IO_READ},
        {.addr=0x484f, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_001C) {
    const struct CPU_State initial_cpu = {.pc=0xb784, .a=0x9e, .x=0x4b, .y=0x55, .sp=0xd6, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xae}, {.addr=0xb784, .value=0x24}, {.addr=0xb785, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xb786, .a=0x8e, .x=0x4b, .y=0x55, .sp=0xd6, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xae}, {.addr=0xb784, .value=0x24}, {.addr=0xb785, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb784, .value=0x24, .type=IO_READ},
        {.addr=0xb785, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_001D) {
    const struct CPU_State initial_cpu = {.pc=0x873b, .a=0x17, .x=0xc5, .y=0xe6, .sp=0x36, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x79}, {.addr=0x873b, .value=0x24}, {.addr=0x873c, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x873d, .a=0x11, .x=0xc5, .y=0xe6, .sp=0x36, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x79}, {.addr=0x873b, .value=0x24}, {.addr=0x873c, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x873b, .value=0x24, .type=IO_READ},
        {.addr=0x873c, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_001E) {
    const struct CPU_State initial_cpu = {.pc=0xfa12, .a=0x2e, .x=0x97, .y=0x45, .sp=0x8f, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x82}, {.addr=0xfa12, .value=0x24}, {.addr=0xfa13, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xfa14, .a=0x02, .x=0x97, .y=0x45, .sp=0x8f, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x82}, {.addr=0xfa12, .value=0x24}, {.addr=0xfa13, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa12, .value=0x24, .type=IO_READ},
        {.addr=0xfa13, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_001F) {
    const struct CPU_State initial_cpu = {.pc=0xb8f2, .a=0x52, .x=0x31, .y=0x41, .sp=0x17, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xbd}, {.addr=0xb8f2, .value=0x24}, {.addr=0xb8f3, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xb8f4, .a=0x10, .x=0x31, .y=0x41, .sp=0x17, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xbd}, {.addr=0xb8f2, .value=0x24}, {.addr=0xb8f3, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8f2, .value=0x24, .type=IO_READ},
        {.addr=0xb8f3, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0020) {
    const struct CPU_State initial_cpu = {.pc=0xd288, .a=0x97, .x=0xab, .y=0x2a, .sp=0x83, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xc5}, {.addr=0xd288, .value=0x24}, {.addr=0xd289, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xd28a, .a=0x85, .x=0xab, .y=0x2a, .sp=0x83, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xc5}, {.addr=0xd288, .value=0x24}, {.addr=0xd289, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xd288, .value=0x24, .type=IO_READ},
        {.addr=0xd289, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0021) {
    const struct CPU_State initial_cpu = {.pc=0x3735, .a=0xba, .x=0xdb, .y=0x1f, .sp=0x72, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x2a}, {.addr=0x3735, .value=0x24}, {.addr=0x3736, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x3737, .a=0x2a, .x=0xdb, .y=0x1f, .sp=0x72, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x2a}, {.addr=0x3735, .value=0x24}, {.addr=0x3736, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3735, .value=0x24, .type=IO_READ},
        {.addr=0x3736, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0022) {
    const struct CPU_State initial_cpu = {.pc=0x252a, .a=0x12, .x=0xff, .y=0xc1, .sp=0x23, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x10}, {.addr=0x252a, .value=0x24}, {.addr=0x252b, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x252c, .a=0x10, .x=0xff, .y=0xc1, .sp=0x23, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x10}, {.addr=0x252a, .value=0x24}, {.addr=0x252b, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x252a, .value=0x24, .type=IO_READ},
        {.addr=0x252b, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0024) {
    const struct CPU_State initial_cpu = {.pc=0xf96d, .a=0x69, .x=0xd8, .y=0xe1, .sp=0x0c, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xfb}, {.addr=0xf96d, .value=0x24}, {.addr=0xf96e, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xf96f, .a=0x69, .x=0xd8, .y=0xe1, .sp=0x0c, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xfb}, {.addr=0xf96d, .value=0x24}, {.addr=0xf96e, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xf96d, .value=0x24, .type=IO_READ},
        {.addr=0xf96e, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0025) {
    const struct CPU_State initial_cpu = {.pc=0x3bd7, .a=0x84, .x=0x51, .y=0xbc, .sp=0x4d, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0xed}, {.addr=0x3bd7, .value=0x24}, {.addr=0x3bd8, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x3bd9, .a=0x84, .x=0x51, .y=0xbc, .sp=0x4d, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0xed}, {.addr=0x3bd7, .value=0x24}, {.addr=0x3bd8, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bd7, .value=0x24, .type=IO_READ},
        {.addr=0x3bd8, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0026) {
    const struct CPU_State initial_cpu = {.pc=0x469f, .a=0x3c, .x=0x91, .y=0x20, .sp=0xfb, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x0c}, {.addr=0x469f, .value=0x24}, {.addr=0x46a0, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x46a1, .a=0x0c, .x=0x91, .y=0x20, .sp=0xfb, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x0c}, {.addr=0x469f, .value=0x24}, {.addr=0x46a0, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x469f, .value=0x24, .type=IO_READ},
        {.addr=0x46a0, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0027) {
    const struct CPU_State initial_cpu = {.pc=0x8190, .a=0xe4, .x=0x13, .y=0xf8, .sp=0xcd, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x3e}, {.addr=0x8190, .value=0x24}, {.addr=0x8191, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x8192, .a=0x24, .x=0x13, .y=0xf8, .sp=0xcd, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x3e}, {.addr=0x8190, .value=0x24}, {.addr=0x8191, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x8190, .value=0x24, .type=IO_READ},
        {.addr=0x8191, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0028) {
    const struct CPU_State initial_cpu = {.pc=0xa8f0, .a=0x35, .x=0x76, .y=0xe1, .sp=0xac, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x13}, {.addr=0xa8f0, .value=0x24}, {.addr=0xa8f1, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xa8f2, .a=0x11, .x=0x76, .y=0xe1, .sp=0xac, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x13}, {.addr=0xa8f0, .value=0x24}, {.addr=0xa8f1, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8f0, .value=0x24, .type=IO_READ},
        {.addr=0xa8f1, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0029) {
    const struct CPU_State initial_cpu = {.pc=0x3ea1, .a=0x01, .x=0x99, .y=0x39, .sp=0x80, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x48}, {.addr=0x3ea1, .value=0x24}, {.addr=0x3ea2, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x3ea3, .a=0x00, .x=0x99, .y=0x39, .sp=0x80, .status=0x43};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x48}, {.addr=0x3ea1, .value=0x24}, {.addr=0x3ea2, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ea1, .value=0x24, .type=IO_READ},
        {.addr=0x3ea2, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_002A) {
    const struct CPU_State initial_cpu = {.pc=0x33e3, .a=0x1b, .x=0xe2, .y=0x9c, .sp=0x57, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0xcc}, {.addr=0x33e3, .value=0x24}, {.addr=0x33e4, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x33e5, .a=0x08, .x=0xe2, .y=0x9c, .sp=0x57, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0xcc}, {.addr=0x33e3, .value=0x24}, {.addr=0x33e4, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x33e3, .value=0x24, .type=IO_READ},
        {.addr=0x33e4, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_002B) {
    const struct CPU_State initial_cpu = {.pc=0x3fcc, .a=0xa9, .x=0x33, .y=0x0c, .sp=0x06, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x2a}, {.addr=0x3fcc, .value=0x24}, {.addr=0x3fcd, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x3fce, .a=0x28, .x=0x33, .y=0x0c, .sp=0x06, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x2a}, {.addr=0x3fcc, .value=0x24}, {.addr=0x3fcd, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x3fcc, .value=0x24, .type=IO_READ},
        {.addr=0x3fcd, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_002C) {
    const struct CPU_State initial_cpu = {.pc=0xcf64, .a=0xfb, .x=0xa6, .y=0x71, .sp=0x09, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x8e}, {.addr=0xcf64, .value=0x24}, {.addr=0xcf65, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xcf66, .a=0x8a, .x=0xa6, .y=0x71, .sp=0x09, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x8e}, {.addr=0xcf64, .value=0x24}, {.addr=0xcf65, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf64, .value=0x24, .type=IO_READ},
        {.addr=0xcf65, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_002D) {
    const struct CPU_State initial_cpu = {.pc=0x9fef, .a=0x13, .x=0x67, .y=0xe9, .sp=0x57, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x37}, {.addr=0x9fef, .value=0x24}, {.addr=0x9ff0, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x9ff1, .a=0x13, .x=0x67, .y=0xe9, .sp=0x57, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x37}, {.addr=0x9fef, .value=0x24}, {.addr=0x9ff0, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fef, .value=0x24, .type=IO_READ},
        {.addr=0x9ff0, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_002E) {
    const struct CPU_State initial_cpu = {.pc=0x2d8f, .a=0xd5, .x=0x45, .y=0xe6, .sp=0xb4, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0xc7}, {.addr=0x2d8f, .value=0x24}, {.addr=0x2d90, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x2d91, .a=0xc5, .x=0x45, .y=0xe6, .sp=0xb4, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0xc7}, {.addr=0x2d8f, .value=0x24}, {.addr=0x2d90, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d8f, .value=0x24, .type=IO_READ},
        {.addr=0x2d90, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_002F) {
    const struct CPU_State initial_cpu = {.pc=0x1d90, .a=0xf6, .x=0x3b, .y=0x67, .sp=0xf1, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0xbf}, {.addr=0x1d90, .value=0x24}, {.addr=0x1d91, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x1d92, .a=0xb6, .x=0x3b, .y=0x67, .sp=0xf1, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0xbf}, {.addr=0x1d90, .value=0x24}, {.addr=0x1d91, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d90, .value=0x24, .type=IO_READ},
        {.addr=0x1d91, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0030) {
    const struct CPU_State initial_cpu = {.pc=0x73a3, .a=0xb1, .x=0x9b, .y=0x7f, .sp=0x41, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x0f}, {.addr=0x73a3, .value=0x24}, {.addr=0x73a4, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x73a5, .a=0x01, .x=0x9b, .y=0x7f, .sp=0x41, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x0f}, {.addr=0x73a3, .value=0x24}, {.addr=0x73a4, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x73a3, .value=0x24, .type=IO_READ},
        {.addr=0x73a4, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0031) {
    const struct CPU_State initial_cpu = {.pc=0x896b, .a=0x9d, .x=0x7d, .y=0x00, .sp=0xd0, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x01}, {.addr=0x896b, .value=0x24}, {.addr=0x896c, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x896d, .a=0x01, .x=0x7d, .y=0x00, .sp=0xd0, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x01}, {.addr=0x896b, .value=0x24}, {.addr=0x896c, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x896b, .value=0x24, .type=IO_READ},
        {.addr=0x896c, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0032) {
    const struct CPU_State initial_cpu = {.pc=0x26c8, .a=0xc4, .x=0x35, .y=0x80, .sp=0xfe, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0xc4}, {.addr=0x26c8, .value=0x24}, {.addr=0x26c9, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x26ca, .a=0xc4, .x=0x35, .y=0x80, .sp=0xfe, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0xc4}, {.addr=0x26c8, .value=0x24}, {.addr=0x26c9, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x26c8, .value=0x24, .type=IO_READ},
        {.addr=0x26c9, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0033) {
    const struct CPU_State initial_cpu = {.pc=0x943a, .a=0x7f, .x=0x35, .y=0xbc, .sp=0xad, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x79}, {.addr=0x943a, .value=0x24}, {.addr=0x943b, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x943c, .a=0x79, .x=0x35, .y=0xbc, .sp=0xad, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x79}, {.addr=0x943a, .value=0x24}, {.addr=0x943b, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x943a, .value=0x24, .type=IO_READ},
        {.addr=0x943b, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0034) {
    const struct CPU_State initial_cpu = {.pc=0x8618, .a=0xa3, .x=0xa7, .y=0x00, .sp=0x3e, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0xde}, {.addr=0x8618, .value=0x24}, {.addr=0x8619, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x861a, .a=0x82, .x=0xa7, .y=0x00, .sp=0x3e, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0xde}, {.addr=0x8618, .value=0x24}, {.addr=0x8619, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8618, .value=0x24, .type=IO_READ},
        {.addr=0x8619, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0035) {
    const struct CPU_State initial_cpu = {.pc=0x7bfb, .a=0xe7, .x=0x5a, .y=0xe1, .sp=0xe2, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xf5}, {.addr=0x7bfb, .value=0x24}, {.addr=0x7bfc, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x7bfd, .a=0xe5, .x=0x5a, .y=0xe1, .sp=0xe2, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xf5}, {.addr=0x7bfb, .value=0x24}, {.addr=0x7bfc, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bfb, .value=0x24, .type=IO_READ},
        {.addr=0x7bfc, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0036) {
    const struct CPU_State initial_cpu = {.pc=0xe71d, .a=0xf8, .x=0x28, .y=0x42, .sp=0x33, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0x72}, {.addr=0xe71d, .value=0x24}, {.addr=0xe71e, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xe71f, .a=0x70, .x=0x28, .y=0x42, .sp=0x33, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0x72}, {.addr=0xe71d, .value=0x24}, {.addr=0xe71e, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xe71d, .value=0x24, .type=IO_READ},
        {.addr=0xe71e, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0037) {
    const struct CPU_State initial_cpu = {.pc=0x3315, .a=0x0e, .x=0x85, .y=0x95, .sp=0xe2, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x84}, {.addr=0x3315, .value=0x24}, {.addr=0x3316, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x3317, .a=0x04, .x=0x85, .y=0x95, .sp=0xe2, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x84}, {.addr=0x3315, .value=0x24}, {.addr=0x3316, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3315, .value=0x24, .type=IO_READ},
        {.addr=0x3316, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0038) {
    const struct CPU_State initial_cpu = {.pc=0x1149, .a=0x1e, .x=0xae, .y=0xc6, .sp=0xda, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x5b}, {.addr=0x1149, .value=0x24}, {.addr=0x114a, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x114b, .a=0x1a, .x=0xae, .y=0xc6, .sp=0xda, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x5b}, {.addr=0x1149, .value=0x24}, {.addr=0x114a, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x1149, .value=0x24, .type=IO_READ},
        {.addr=0x114a, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0039) {
    const struct CPU_State initial_cpu = {.pc=0x13ea, .a=0x99, .x=0xc7, .y=0x5b, .sp=0x76, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0x62}, {.addr=0x13ea, .value=0x24}, {.addr=0x13eb, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x13ec, .a=0x00, .x=0xc7, .y=0x5b, .sp=0x76, .status=0x22};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0x62}, {.addr=0x13ea, .value=0x24}, {.addr=0x13eb, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x13ea, .value=0x24, .type=IO_READ},
        {.addr=0x13eb, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_003A) {
    const struct CPU_State initial_cpu = {.pc=0xc743, .a=0x38, .x=0xf4, .y=0x0c, .sp=0x03, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x75}, {.addr=0xc743, .value=0x24}, {.addr=0xc744, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xc745, .a=0x30, .x=0xf4, .y=0x0c, .sp=0x03, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x75}, {.addr=0xc743, .value=0x24}, {.addr=0xc744, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xc743, .value=0x24, .type=IO_READ},
        {.addr=0xc744, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_003B) {
    const struct CPU_State initial_cpu = {.pc=0xacc4, .a=0x4c, .x=0x88, .y=0x80, .sp=0xe3, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x5f}, {.addr=0xacc4, .value=0x24}, {.addr=0xacc5, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xacc6, .a=0x4c, .x=0x88, .y=0x80, .sp=0xe3, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x5f}, {.addr=0xacc4, .value=0x24}, {.addr=0xacc5, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xacc4, .value=0x24, .type=IO_READ},
        {.addr=0xacc5, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_003C) {
    const struct CPU_State initial_cpu = {.pc=0x4006, .a=0x34, .x=0x02, .y=0x68, .sp=0x80, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0xb5}, {.addr=0x4006, .value=0x24}, {.addr=0x4007, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x4008, .a=0x34, .x=0x02, .y=0x68, .sp=0x80, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0xb5}, {.addr=0x4006, .value=0x24}, {.addr=0x4007, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x4006, .value=0x24, .type=IO_READ},
        {.addr=0x4007, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_003D) {
    const struct CPU_State initial_cpu = {.pc=0xe2f6, .a=0xa8, .x=0xd0, .y=0x85, .sp=0x07, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xcc}, {.addr=0xe2f6, .value=0x24}, {.addr=0xe2f7, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xe2f8, .a=0x88, .x=0xd0, .y=0x85, .sp=0x07, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xcc}, {.addr=0xe2f6, .value=0x24}, {.addr=0xe2f7, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2f6, .value=0x24, .type=IO_READ},
        {.addr=0xe2f7, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_003E) {
    const struct CPU_State initial_cpu = {.pc=0x279a, .a=0xc5, .x=0xbc, .y=0x59, .sp=0xdb, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xed}, {.addr=0x279a, .value=0x24}, {.addr=0x279b, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x279c, .a=0xc5, .x=0xbc, .y=0x59, .sp=0xdb, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xed}, {.addr=0x279a, .value=0x24}, {.addr=0x279b, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x279a, .value=0x24, .type=IO_READ},
        {.addr=0x279b, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_003F) {
    const struct CPU_State initial_cpu = {.pc=0x3a71, .a=0x8d, .x=0xb7, .y=0xd5, .sp=0xcc, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x49}, {.addr=0x3a71, .value=0x24}, {.addr=0x3a72, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x3a73, .a=0x09, .x=0xb7, .y=0xd5, .sp=0xcc, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x49}, {.addr=0x3a71, .value=0x24}, {.addr=0x3a72, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a71, .value=0x24, .type=IO_READ},
        {.addr=0x3a72, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0040) {
    const struct CPU_State initial_cpu = {.pc=0xfc88, .a=0xd4, .x=0xee, .y=0x24, .sp=0xe6, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x8f}, {.addr=0xfc88, .value=0x24}, {.addr=0xfc89, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xfc8a, .a=0x84, .x=0xee, .y=0x24, .sp=0xe6, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x8f}, {.addr=0xfc88, .value=0x24}, {.addr=0xfc89, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc88, .value=0x24, .type=IO_READ},
        {.addr=0xfc89, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0041) {
    const struct CPU_State initial_cpu = {.pc=0xa313, .a=0x0b, .x=0x1f, .y=0x34, .sp=0x56, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xb0}, {.addr=0xa313, .value=0x24}, {.addr=0xa314, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xa315, .a=0x00, .x=0x1f, .y=0x34, .sp=0x56, .status=0x02};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xb0}, {.addr=0xa313, .value=0x24}, {.addr=0xa314, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xa313, .value=0x24, .type=IO_READ},
        {.addr=0xa314, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0042) {
    const struct CPU_State initial_cpu = {.pc=0xe115, .a=0xdd, .x=0xf2, .y=0x35, .sp=0xea, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0xf3}, {.addr=0xe115, .value=0x24}, {.addr=0xe116, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xe117, .a=0xd1, .x=0xf2, .y=0x35, .sp=0xea, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0xf3}, {.addr=0xe115, .value=0x24}, {.addr=0xe116, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe115, .value=0x24, .type=IO_READ},
        {.addr=0xe116, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0043) {
    const struct CPU_State initial_cpu = {.pc=0x50e4, .a=0x46, .x=0x50, .y=0xfe, .sp=0x4c, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x38}, {.addr=0x50e4, .value=0x24}, {.addr=0x50e5, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x50e6, .a=0x00, .x=0x50, .y=0xfe, .sp=0x4c, .status=0x5b};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x38}, {.addr=0x50e4, .value=0x24}, {.addr=0x50e5, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x50e4, .value=0x24, .type=IO_READ},
        {.addr=0x50e5, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0044) {
    const struct CPU_State initial_cpu = {.pc=0x4c7d, .a=0x56, .x=0x08, .y=0x3e, .sp=0x3f, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x6d}, {.addr=0x4c7d, .value=0x24}, {.addr=0x4c7e, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x4c7f, .a=0x44, .x=0x08, .y=0x3e, .sp=0x3f, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x6d}, {.addr=0x4c7d, .value=0x24}, {.addr=0x4c7e, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c7d, .value=0x24, .type=IO_READ},
        {.addr=0x4c7e, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0045) {
    const struct CPU_State initial_cpu = {.pc=0xe778, .a=0xea, .x=0x6a, .y=0x40, .sp=0xd0, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x7f}, {.addr=0xe778, .value=0x24}, {.addr=0xe779, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xe77a, .a=0x6a, .x=0x6a, .y=0x40, .sp=0xd0, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x7f}, {.addr=0xe778, .value=0x24}, {.addr=0xe779, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xe778, .value=0x24, .type=IO_READ},
        {.addr=0xe779, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0046) {
    const struct CPU_State initial_cpu = {.pc=0xd925, .a=0x97, .x=0xd6, .y=0xd3, .sp=0x64, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x0d}, {.addr=0xd925, .value=0x24}, {.addr=0xd926, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xd927, .a=0x05, .x=0xd6, .y=0xd3, .sp=0x64, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x0d}, {.addr=0xd925, .value=0x24}, {.addr=0xd926, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xd925, .value=0x24, .type=IO_READ},
        {.addr=0xd926, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0047) {
    const struct CPU_State initial_cpu = {.pc=0x8039, .a=0x42, .x=0xc2, .y=0x44, .sp=0x1a, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x90}, {.addr=0x8039, .value=0x24}, {.addr=0x803a, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x803b, .a=0x00, .x=0xc2, .y=0x44, .sp=0x1a, .status=0x76};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x90}, {.addr=0x8039, .value=0x24}, {.addr=0x803a, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8039, .value=0x24, .type=IO_READ},
        {.addr=0x803a, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0048) {
    const struct CPU_State initial_cpu = {.pc=0x30da, .a=0x4f, .x=0x39, .y=0x93, .sp=0xc7, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xfd}, {.addr=0x30da, .value=0x24}, {.addr=0x30db, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x30dc, .a=0x4d, .x=0x39, .y=0x93, .sp=0xc7, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xfd}, {.addr=0x30da, .value=0x24}, {.addr=0x30db, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x30da, .value=0x24, .type=IO_READ},
        {.addr=0x30db, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0049) {
    const struct CPU_State initial_cpu = {.pc=0x38b7, .a=0xb0, .x=0x0c, .y=0xc8, .sp=0xb0, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x39}, {.addr=0x38b7, .value=0x24}, {.addr=0x38b8, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x38b9, .a=0x30, .x=0x0c, .y=0xc8, .sp=0xb0, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x39}, {.addr=0x38b7, .value=0x24}, {.addr=0x38b8, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x38b7, .value=0x24, .type=IO_READ},
        {.addr=0x38b8, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_004A) {
    const struct CPU_State initial_cpu = {.pc=0x1641, .a=0xf8, .x=0xad, .y=0x94, .sp=0x23, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x54}, {.addr=0x1641, .value=0x24}, {.addr=0x1642, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x1643, .a=0x50, .x=0xad, .y=0x94, .sp=0x23, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x54}, {.addr=0x1641, .value=0x24}, {.addr=0x1642, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1641, .value=0x24, .type=IO_READ},
        {.addr=0x1642, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_004B) {
    const struct CPU_State initial_cpu = {.pc=0x1f19, .a=0x7c, .x=0x14, .y=0x84, .sp=0xf7, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x54}, {.addr=0x1f19, .value=0x24}, {.addr=0x1f1a, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x1f1b, .a=0x54, .x=0x14, .y=0x84, .sp=0xf7, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x54}, {.addr=0x1f19, .value=0x24}, {.addr=0x1f1a, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f19, .value=0x24, .type=IO_READ},
        {.addr=0x1f1a, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_004C) {
    const struct CPU_State initial_cpu = {.pc=0x53e7, .a=0xee, .x=0xbe, .y=0x6a, .sp=0x47, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0x0d}, {.addr=0x53e7, .value=0x24}, {.addr=0x53e8, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x53e9, .a=0x0c, .x=0xbe, .y=0x6a, .sp=0x47, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0x0d}, {.addr=0x53e7, .value=0x24}, {.addr=0x53e8, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x53e7, .value=0x24, .type=IO_READ},
        {.addr=0x53e8, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_004D) {
    const struct CPU_State initial_cpu = {.pc=0xa632, .a=0xf5, .x=0x3f, .y=0x73, .sp=0x7c, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0xb7}, {.addr=0xa632, .value=0x24}, {.addr=0xa633, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0xa634, .a=0xb5, .x=0x3f, .y=0x73, .sp=0x7c, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0xb7}, {.addr=0xa632, .value=0x24}, {.addr=0xa633, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0xa632, .value=0x24, .type=IO_READ},
        {.addr=0xa633, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_004E) {
    const struct CPU_State initial_cpu = {.pc=0xbb4c, .a=0x8f, .x=0xc7, .y=0xec, .sp=0x6a, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x29}, {.addr=0xbb4c, .value=0x24}, {.addr=0xbb4d, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xbb4e, .a=0x09, .x=0xc7, .y=0xec, .sp=0x6a, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x29}, {.addr=0xbb4c, .value=0x24}, {.addr=0xbb4d, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb4c, .value=0x24, .type=IO_READ},
        {.addr=0xbb4d, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_004F) {
    const struct CPU_State initial_cpu = {.pc=0x0746, .a=0x30, .x=0x17, .y=0x58, .sp=0xe6, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0xf8}, {.addr=0x0746, .value=0x24}, {.addr=0x0747, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x0748, .a=0x30, .x=0x17, .y=0x58, .sp=0xe6, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0xf8}, {.addr=0x0746, .value=0x24}, {.addr=0x0747, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0746, .value=0x24, .type=IO_READ},
        {.addr=0x0747, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0050) {
    const struct CPU_State initial_cpu = {.pc=0x5f27, .a=0x5b, .x=0x67, .y=0x92, .sp=0x84, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xf7}, {.addr=0x5f27, .value=0x24}, {.addr=0x5f28, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x5f29, .a=0x53, .x=0x67, .y=0x92, .sp=0x84, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xf7}, {.addr=0x5f27, .value=0x24}, {.addr=0x5f28, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f27, .value=0x24, .type=IO_READ},
        {.addr=0x5f28, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0051) {
    const struct CPU_State initial_cpu = {.pc=0xe469, .a=0xa2, .x=0x0c, .y=0xee, .sp=0x40, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xd6}, {.addr=0xe469, .value=0x24}, {.addr=0xe46a, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xe46b, .a=0x82, .x=0x0c, .y=0xee, .sp=0x40, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xd6}, {.addr=0xe469, .value=0x24}, {.addr=0xe46a, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xe469, .value=0x24, .type=IO_READ},
        {.addr=0xe46a, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0052) {
    const struct CPU_State initial_cpu = {.pc=0x3bd0, .a=0x70, .x=0xdc, .y=0x54, .sp=0xff, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x5e}, {.addr=0x3bd0, .value=0x24}, {.addr=0x3bd1, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x3bd2, .a=0x50, .x=0xdc, .y=0x54, .sp=0xff, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x5e}, {.addr=0x3bd0, .value=0x24}, {.addr=0x3bd1, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bd0, .value=0x24, .type=IO_READ},
        {.addr=0x3bd1, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0053) {
    const struct CPU_State initial_cpu = {.pc=0x9c62, .a=0x8e, .x=0xf7, .y=0xad, .sp=0x4a, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x0c}, {.addr=0x9c62, .value=0x24}, {.addr=0x9c63, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x9c64, .a=0x0c, .x=0xf7, .y=0xad, .sp=0x4a, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x0c}, {.addr=0x9c62, .value=0x24}, {.addr=0x9c63, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c62, .value=0x24, .type=IO_READ},
        {.addr=0x9c63, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0054) {
    const struct CPU_State initial_cpu = {.pc=0xfc17, .a=0x4f, .x=0xdf, .y=0xf0, .sp=0x48, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x6d}, {.addr=0xfc17, .value=0x24}, {.addr=0xfc18, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xfc19, .a=0x4d, .x=0xdf, .y=0xf0, .sp=0x48, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x6d}, {.addr=0xfc17, .value=0x24}, {.addr=0xfc18, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc17, .value=0x24, .type=IO_READ},
        {.addr=0xfc18, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0055) {
    const struct CPU_State initial_cpu = {.pc=0x920f, .a=0xe9, .x=0x51, .y=0x66, .sp=0x22, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x47}, {.addr=0x920f, .value=0x24}, {.addr=0x9210, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x9211, .a=0x41, .x=0x51, .y=0x66, .sp=0x22, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x47}, {.addr=0x920f, .value=0x24}, {.addr=0x9210, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x920f, .value=0x24, .type=IO_READ},
        {.addr=0x9210, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0056) {
    const struct CPU_State initial_cpu = {.pc=0x5aa7, .a=0x5a, .x=0x0c, .y=0xac, .sp=0x09, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0x47}, {.addr=0x5aa7, .value=0x24}, {.addr=0x5aa8, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x5aa9, .a=0x42, .x=0x0c, .y=0xac, .sp=0x09, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0x47}, {.addr=0x5aa7, .value=0x24}, {.addr=0x5aa8, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5aa7, .value=0x24, .type=IO_READ},
        {.addr=0x5aa8, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0057) {
    const struct CPU_State initial_cpu = {.pc=0x1b51, .a=0x6d, .x=0x8b, .y=0x75, .sp=0xbb, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x26}, {.addr=0x1b51, .value=0x24}, {.addr=0x1b52, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x1b53, .a=0x24, .x=0x8b, .y=0x75, .sp=0xbb, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x26}, {.addr=0x1b51, .value=0x24}, {.addr=0x1b52, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b51, .value=0x24, .type=IO_READ},
        {.addr=0x1b52, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0058) {
    const struct CPU_State initial_cpu = {.pc=0x2ea8, .a=0x3d, .x=0x09, .y=0x98, .sp=0x41, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x8d}, {.addr=0x2ea8, .value=0x24}, {.addr=0x2ea9, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x2eaa, .a=0x0d, .x=0x09, .y=0x98, .sp=0x41, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x8d}, {.addr=0x2ea8, .value=0x24}, {.addr=0x2ea9, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ea8, .value=0x24, .type=IO_READ},
        {.addr=0x2ea9, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0059) {
    const struct CPU_State initial_cpu = {.pc=0x6680, .a=0x8e, .x=0x5b, .y=0x1a, .sp=0x47, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xe4}, {.addr=0x6680, .value=0x24}, {.addr=0x6681, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x6682, .a=0x84, .x=0x5b, .y=0x1a, .sp=0x47, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xe4}, {.addr=0x6680, .value=0x24}, {.addr=0x6681, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6680, .value=0x24, .type=IO_READ},
        {.addr=0x6681, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_005A) {
    const struct CPU_State initial_cpu = {.pc=0x924f, .a=0xa5, .x=0x2d, .y=0xf7, .sp=0xde, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0xaa}, {.addr=0x924f, .value=0x24}, {.addr=0x9250, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x9251, .a=0xa0, .x=0x2d, .y=0xf7, .sp=0xde, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0xaa}, {.addr=0x924f, .value=0x24}, {.addr=0x9250, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x924f, .value=0x24, .type=IO_READ},
        {.addr=0x9250, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_005B) {
    const struct CPU_State initial_cpu = {.pc=0x58a2, .a=0x1d, .x=0x0f, .y=0x15, .sp=0xea, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0xef}, {.addr=0x58a2, .value=0x24}, {.addr=0x58a3, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x58a4, .a=0x0d, .x=0x0f, .y=0x15, .sp=0xea, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0xef}, {.addr=0x58a2, .value=0x24}, {.addr=0x58a3, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x58a2, .value=0x24, .type=IO_READ},
        {.addr=0x58a3, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_005D) {
    const struct CPU_State initial_cpu = {.pc=0xdeca, .a=0xad, .x=0xb5, .y=0xbe, .sp=0x74, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x05}, {.addr=0xdeca, .value=0x24}, {.addr=0xdecb, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xdecc, .a=0x05, .x=0xb5, .y=0xbe, .sp=0x74, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x05}, {.addr=0xdeca, .value=0x24}, {.addr=0xdecb, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xdeca, .value=0x24, .type=IO_READ},
        {.addr=0xdecb, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_005E) {
    const struct CPU_State initial_cpu = {.pc=0xc08e, .a=0x57, .x=0xa7, .y=0xd0, .sp=0x96, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0xab}, {.addr=0xc08e, .value=0x24}, {.addr=0xc08f, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xc090, .a=0x03, .x=0xa7, .y=0xd0, .sp=0x96, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0xab}, {.addr=0xc08e, .value=0x24}, {.addr=0xc08f, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xc08e, .value=0x24, .type=IO_READ},
        {.addr=0xc08f, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_005F) {
    const struct CPU_State initial_cpu = {.pc=0x5393, .a=0xa8, .x=0xef, .y=0xea, .sp=0xa8, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xf6}, {.addr=0x5393, .value=0x24}, {.addr=0x5394, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x5395, .a=0xa0, .x=0xef, .y=0xea, .sp=0xa8, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xf6}, {.addr=0x5393, .value=0x24}, {.addr=0x5394, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x5393, .value=0x24, .type=IO_READ},
        {.addr=0x5394, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0060) {
    const struct CPU_State initial_cpu = {.pc=0x06fd, .a=0xb0, .x=0x43, .y=0x94, .sp=0xa5, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x70}, {.addr=0x06fd, .value=0x24}, {.addr=0x06fe, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x06ff, .a=0x30, .x=0x43, .y=0x94, .sp=0xa5, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x70}, {.addr=0x06fd, .value=0x24}, {.addr=0x06fe, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x06fd, .value=0x24, .type=IO_READ},
        {.addr=0x06fe, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0062) {
    const struct CPU_State initial_cpu = {.pc=0x059c, .a=0xf0, .x=0xdc, .y=0x7c, .sp=0xad, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x3c}, {.addr=0x059c, .value=0x24}, {.addr=0x059d, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x059e, .a=0x30, .x=0xdc, .y=0x7c, .sp=0xad, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x3c}, {.addr=0x059c, .value=0x24}, {.addr=0x059d, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x059c, .value=0x24, .type=IO_READ},
        {.addr=0x059d, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0063) {
    const struct CPU_State initial_cpu = {.pc=0xd980, .a=0x5f, .x=0xbb, .y=0xc9, .sp=0x05, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0xf6}, {.addr=0xd980, .value=0x24}, {.addr=0xd981, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xd982, .a=0x56, .x=0xbb, .y=0xc9, .sp=0x05, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0xf6}, {.addr=0xd980, .value=0x24}, {.addr=0xd981, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd980, .value=0x24, .type=IO_READ},
        {.addr=0xd981, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0064) {
    const struct CPU_State initial_cpu = {.pc=0xdfec, .a=0x4e, .x=0x7a, .y=0x95, .sp=0xaf, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x67}, {.addr=0xdfec, .value=0x24}, {.addr=0xdfed, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xdfee, .a=0x46, .x=0x7a, .y=0x95, .sp=0xaf, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x67}, {.addr=0xdfec, .value=0x24}, {.addr=0xdfed, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfec, .value=0x24, .type=IO_READ},
        {.addr=0xdfed, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0065) {
    const struct CPU_State initial_cpu = {.pc=0xef57, .a=0x38, .x=0xa5, .y=0x35, .sp=0xe0, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xb9}, {.addr=0xef57, .value=0x24}, {.addr=0xef58, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xef59, .a=0x38, .x=0xa5, .y=0x35, .sp=0xe0, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xb9}, {.addr=0xef57, .value=0x24}, {.addr=0xef58, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xef57, .value=0x24, .type=IO_READ},
        {.addr=0xef58, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0066) {
    const struct CPU_State initial_cpu = {.pc=0xfbaf, .a=0x49, .x=0x2f, .y=0x0c, .sp=0xd1, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x42}, {.addr=0xfbaf, .value=0x24}, {.addr=0xfbb0, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xfbb1, .a=0x40, .x=0x2f, .y=0x0c, .sp=0xd1, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x42}, {.addr=0xfbaf, .value=0x24}, {.addr=0xfbb0, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xfbaf, .value=0x24, .type=IO_READ},
        {.addr=0xfbb0, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0067) {
    const struct CPU_State initial_cpu = {.pc=0xf58a, .a=0x2d, .x=0x51, .y=0xc8, .sp=0x87, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xd2}, {.addr=0xf58a, .value=0x24}, {.addr=0xf58b, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xf58c, .a=0x00, .x=0x51, .y=0xc8, .sp=0x87, .status=0x6f};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xd2}, {.addr=0xf58a, .value=0x24}, {.addr=0xf58b, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xf58a, .value=0x24, .type=IO_READ},
        {.addr=0xf58b, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0068) {
    const struct CPU_State initial_cpu = {.pc=0x8077, .a=0x0d, .x=0xd3, .y=0x30, .sp=0xc9, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0x45}, {.addr=0x8077, .value=0x24}, {.addr=0x8078, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x8079, .a=0x05, .x=0xd3, .y=0x30, .sp=0xc9, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0x45}, {.addr=0x8077, .value=0x24}, {.addr=0x8078, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x8077, .value=0x24, .type=IO_READ},
        {.addr=0x8078, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0069) {
    const struct CPU_State initial_cpu = {.pc=0x3dc1, .a=0xa4, .x=0x89, .y=0x15, .sp=0x2c, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x9a}, {.addr=0x3dc1, .value=0x24}, {.addr=0x3dc2, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x3dc3, .a=0x80, .x=0x89, .y=0x15, .sp=0x2c, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x9a}, {.addr=0x3dc1, .value=0x24}, {.addr=0x3dc2, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dc1, .value=0x24, .type=IO_READ},
        {.addr=0x3dc2, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_006A) {
    const struct CPU_State initial_cpu = {.pc=0x07cf, .a=0x84, .x=0xa7, .y=0x07, .sp=0xa0, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x40}, {.addr=0x07cf, .value=0x24}, {.addr=0x07d0, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x07d1, .a=0x00, .x=0xa7, .y=0x07, .sp=0xa0, .status=0x1a};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x40}, {.addr=0x07cf, .value=0x24}, {.addr=0x07d0, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x07cf, .value=0x24, .type=IO_READ},
        {.addr=0x07d0, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_006B) {
    const struct CPU_State initial_cpu = {.pc=0xc957, .a=0xf4, .x=0xaf, .y=0xea, .sp=0xe5, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0xb2}, {.addr=0xc957, .value=0x24}, {.addr=0xc958, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xc959, .a=0xb0, .x=0xaf, .y=0xea, .sp=0xe5, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0xb2}, {.addr=0xc957, .value=0x24}, {.addr=0xc958, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xc957, .value=0x24, .type=IO_READ},
        {.addr=0xc958, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_006C) {
    const struct CPU_State initial_cpu = {.pc=0x8f8c, .a=0x33, .x=0xb8, .y=0x7c, .sp=0x1f, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0xb3}, {.addr=0x8f8c, .value=0x24}, {.addr=0x8f8d, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x8f8e, .a=0x33, .x=0xb8, .y=0x7c, .sp=0x1f, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0xb3}, {.addr=0x8f8c, .value=0x24}, {.addr=0x8f8d, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f8c, .value=0x24, .type=IO_READ},
        {.addr=0x8f8d, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_006D) {
    const struct CPU_State initial_cpu = {.pc=0xa0b9, .a=0x6d, .x=0x3f, .y=0xfc, .sp=0x92, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x83}, {.addr=0xa0b9, .value=0x24}, {.addr=0xa0ba, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xa0bb, .a=0x01, .x=0x3f, .y=0xfc, .sp=0x92, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x83}, {.addr=0xa0b9, .value=0x24}, {.addr=0xa0ba, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0b9, .value=0x24, .type=IO_READ},
        {.addr=0xa0ba, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_006E) {
    const struct CPU_State initial_cpu = {.pc=0x3cb6, .a=0x99, .x=0x38, .y=0xe6, .sp=0x23, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0xb7}, {.addr=0x3cb6, .value=0x24}, {.addr=0x3cb7, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x3cb8, .a=0x91, .x=0x38, .y=0xe6, .sp=0x23, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0xb7}, {.addr=0x3cb6, .value=0x24}, {.addr=0x3cb7, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cb6, .value=0x24, .type=IO_READ},
        {.addr=0x3cb7, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_006F) {
    const struct CPU_State initial_cpu = {.pc=0x4134, .a=0xf8, .x=0x95, .y=0xe9, .sp=0x44, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x29}, {.addr=0x4134, .value=0x24}, {.addr=0x4135, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x4136, .a=0x28, .x=0x95, .y=0xe9, .sp=0x44, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x29}, {.addr=0x4134, .value=0x24}, {.addr=0x4135, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x4134, .value=0x24, .type=IO_READ},
        {.addr=0x4135, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0070) {
    const struct CPU_State initial_cpu = {.pc=0x7b5c, .a=0xda, .x=0xde, .y=0x63, .sp=0xb2, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0xfd}, {.addr=0x7b5c, .value=0x24}, {.addr=0x7b5d, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x7b5e, .a=0xd8, .x=0xde, .y=0x63, .sp=0xb2, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0xfd}, {.addr=0x7b5c, .value=0x24}, {.addr=0x7b5d, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b5c, .value=0x24, .type=IO_READ},
        {.addr=0x7b5d, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0071) {
    const struct CPU_State initial_cpu = {.pc=0x7356, .a=0xf3, .x=0xa5, .y=0x18, .sp=0x25, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x4a}, {.addr=0x7356, .value=0x24}, {.addr=0x7357, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x7358, .a=0x42, .x=0xa5, .y=0x18, .sp=0x25, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x4a}, {.addr=0x7356, .value=0x24}, {.addr=0x7357, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x7356, .value=0x24, .type=IO_READ},
        {.addr=0x7357, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0072) {
    const struct CPU_State initial_cpu = {.pc=0x068d, .a=0xa7, .x=0x82, .y=0x0f, .sp=0x80, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0xc7}, {.addr=0x068d, .value=0x24}, {.addr=0x068e, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x068f, .a=0x87, .x=0x82, .y=0x0f, .sp=0x80, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0xc7}, {.addr=0x068d, .value=0x24}, {.addr=0x068e, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x068d, .value=0x24, .type=IO_READ},
        {.addr=0x068e, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0073) {
    const struct CPU_State initial_cpu = {.pc=0x4df3, .a=0x88, .x=0x21, .y=0xf5, .sp=0x3e, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x06}, {.addr=0x4df3, .value=0x24}, {.addr=0x4df4, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x4df5, .a=0x00, .x=0x21, .y=0xf5, .sp=0x3e, .status=0x5e};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x06}, {.addr=0x4df3, .value=0x24}, {.addr=0x4df4, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x4df3, .value=0x24, .type=IO_READ},
        {.addr=0x4df4, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0074) {
    const struct CPU_State initial_cpu = {.pc=0xab0d, .a=0x25, .x=0x9b, .y=0xc7, .sp=0x0c, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x1a}, {.addr=0xab0d, .value=0x24}, {.addr=0xab0e, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xab0f, .a=0x00, .x=0x9b, .y=0xc7, .sp=0x0c, .status=0x63};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x1a}, {.addr=0xab0d, .value=0x24}, {.addr=0xab0e, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xab0d, .value=0x24, .type=IO_READ},
        {.addr=0xab0e, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0075) {
    const struct CPU_State initial_cpu = {.pc=0xc8d4, .a=0x08, .x=0xf3, .y=0xf9, .sp=0x14, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x32}, {.addr=0xc8d4, .value=0x24}, {.addr=0xc8d5, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xc8d6, .a=0x00, .x=0xf3, .y=0xf9, .sp=0x14, .status=0x36};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x32}, {.addr=0xc8d4, .value=0x24}, {.addr=0xc8d5, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8d4, .value=0x24, .type=IO_READ},
        {.addr=0xc8d5, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0076) {
    const struct CPU_State initial_cpu = {.pc=0xc116, .a=0xa6, .x=0x72, .y=0x05, .sp=0x6c, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0xb5}, {.addr=0xc116, .value=0x24}, {.addr=0xc117, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xc118, .a=0xa4, .x=0x72, .y=0x05, .sp=0x6c, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0xb5}, {.addr=0xc116, .value=0x24}, {.addr=0xc117, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc116, .value=0x24, .type=IO_READ},
        {.addr=0xc117, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0077) {
    const struct CPU_State initial_cpu = {.pc=0xd713, .a=0xf1, .x=0x3b, .y=0xc0, .sp=0xe9, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0xf1}, {.addr=0xd713, .value=0x24}, {.addr=0xd714, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xd715, .a=0xf1, .x=0x3b, .y=0xc0, .sp=0xe9, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0xf1}, {.addr=0xd713, .value=0x24}, {.addr=0xd714, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xd713, .value=0x24, .type=IO_READ},
        {.addr=0xd714, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0078) {
    const struct CPU_State initial_cpu = {.pc=0x9c7c, .a=0x8a, .x=0x2c, .y=0x2a, .sp=0x27, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x9f}, {.addr=0x9c7c, .value=0x24}, {.addr=0x9c7d, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x9c7e, .a=0x8a, .x=0x2c, .y=0x2a, .sp=0x27, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x9f}, {.addr=0x9c7c, .value=0x24}, {.addr=0x9c7d, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c7c, .value=0x24, .type=IO_READ},
        {.addr=0x9c7d, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0079) {
    const struct CPU_State initial_cpu = {.pc=0xefed, .a=0x9e, .x=0x0e, .y=0x42, .sp=0x63, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xac}, {.addr=0xefed, .value=0x24}, {.addr=0xefee, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xefef, .a=0x8c, .x=0x0e, .y=0x42, .sp=0x63, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xac}, {.addr=0xefed, .value=0x24}, {.addr=0xefee, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xefed, .value=0x24, .type=IO_READ},
        {.addr=0xefee, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_007A) {
    const struct CPU_State initial_cpu = {.pc=0x1756, .a=0x92, .x=0xdb, .y=0xcb, .sp=0xed, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xfe}, {.addr=0x1756, .value=0x24}, {.addr=0x1757, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x1758, .a=0x92, .x=0xdb, .y=0xcb, .sp=0xed, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xfe}, {.addr=0x1756, .value=0x24}, {.addr=0x1757, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1756, .value=0x24, .type=IO_READ},
        {.addr=0x1757, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_007B) {
    const struct CPU_State initial_cpu = {.pc=0x2a77, .a=0x94, .x=0x09, .y=0x09, .sp=0x3b, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xf5}, {.addr=0x2a77, .value=0x24}, {.addr=0x2a78, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x2a79, .a=0x94, .x=0x09, .y=0x09, .sp=0x3b, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xf5}, {.addr=0x2a77, .value=0x24}, {.addr=0x2a78, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a77, .value=0x24, .type=IO_READ},
        {.addr=0x2a78, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_007C) {
    const struct CPU_State initial_cpu = {.pc=0x7583, .a=0x9e, .x=0xf2, .y=0x28, .sp=0x01, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x62}, {.addr=0x7583, .value=0x24}, {.addr=0x7584, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x7585, .a=0x02, .x=0xf2, .y=0x28, .sp=0x01, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x62}, {.addr=0x7583, .value=0x24}, {.addr=0x7584, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7583, .value=0x24, .type=IO_READ},
        {.addr=0x7584, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_007D) {
    const struct CPU_State initial_cpu = {.pc=0x7e02, .a=0x7b, .x=0x49, .y=0xad, .sp=0xca, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x1a}, {.addr=0x7e02, .value=0x24}, {.addr=0x7e03, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x7e04, .a=0x1a, .x=0x49, .y=0xad, .sp=0xca, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x1a}, {.addr=0x7e02, .value=0x24}, {.addr=0x7e03, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e02, .value=0x24, .type=IO_READ},
        {.addr=0x7e03, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_007E) {
    const struct CPU_State initial_cpu = {.pc=0x5a01, .a=0x79, .x=0x20, .y=0x35, .sp=0x23, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x2c}, {.addr=0x5a01, .value=0x24}, {.addr=0x5a02, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x5a03, .a=0x28, .x=0x20, .y=0x35, .sp=0x23, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x2c}, {.addr=0x5a01, .value=0x24}, {.addr=0x5a02, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a01, .value=0x24, .type=IO_READ},
        {.addr=0x5a02, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_007F) {
    const struct CPU_State initial_cpu = {.pc=0x1e29, .a=0x2f, .x=0x7c, .y=0xee, .sp=0xa7, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x73}, {.addr=0x1e29, .value=0x24}, {.addr=0x1e2a, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x1e2b, .a=0x23, .x=0x7c, .y=0xee, .sp=0xa7, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x73}, {.addr=0x1e29, .value=0x24}, {.addr=0x1e2a, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e29, .value=0x24, .type=IO_READ},
        {.addr=0x1e2a, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0080) {
    const struct CPU_State initial_cpu = {.pc=0xbd0e, .a=0x4b, .x=0x7f, .y=0x91, .sp=0x09, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x2a}, {.addr=0xbd0e, .value=0x24}, {.addr=0xbd0f, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xbd10, .a=0x0a, .x=0x7f, .y=0x91, .sp=0x09, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x2a}, {.addr=0xbd0e, .value=0x24}, {.addr=0xbd0f, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd0e, .value=0x24, .type=IO_READ},
        {.addr=0xbd0f, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0081) {
    const struct CPU_State initial_cpu = {.pc=0xaf8d, .a=0xb3, .x=0x9c, .y=0xbd, .sp=0xa7, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0xc0}, {.addr=0xaf8d, .value=0x24}, {.addr=0xaf8e, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xaf8f, .a=0x80, .x=0x9c, .y=0xbd, .sp=0xa7, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0xc0}, {.addr=0xaf8d, .value=0x24}, {.addr=0xaf8e, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf8d, .value=0x24, .type=IO_READ},
        {.addr=0xaf8e, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0082) {
    const struct CPU_State initial_cpu = {.pc=0x0eb1, .a=0xbf, .x=0x4f, .y=0x18, .sp=0x2e, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x6d}, {.addr=0x0eb1, .value=0x24}, {.addr=0x0eb2, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x0eb3, .a=0x2d, .x=0x4f, .y=0x18, .sp=0x2e, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x6d}, {.addr=0x0eb1, .value=0x24}, {.addr=0x0eb2, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x0eb1, .value=0x24, .type=IO_READ},
        {.addr=0x0eb2, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0083) {
    const struct CPU_State initial_cpu = {.pc=0xf141, .a=0x48, .x=0x96, .y=0x7f, .sp=0xee, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x39}, {.addr=0xf141, .value=0x24}, {.addr=0xf142, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xf143, .a=0x08, .x=0x96, .y=0x7f, .sp=0xee, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x39}, {.addr=0xf141, .value=0x24}, {.addr=0xf142, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xf141, .value=0x24, .type=IO_READ},
        {.addr=0xf142, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0084) {
    const struct CPU_State initial_cpu = {.pc=0xd069, .a=0xce, .x=0x41, .y=0xc4, .sp=0x0b, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x81}, {.addr=0xd069, .value=0x24}, {.addr=0xd06a, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xd06b, .a=0x80, .x=0x41, .y=0xc4, .sp=0x0b, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x81}, {.addr=0xd069, .value=0x24}, {.addr=0xd06a, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xd069, .value=0x24, .type=IO_READ},
        {.addr=0xd06a, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0085) {
    const struct CPU_State initial_cpu = {.pc=0x1f77, .a=0x75, .x=0xf8, .y=0xcd, .sp=0x97, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x64}, {.addr=0x1f77, .value=0x24}, {.addr=0x1f78, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x1f79, .a=0x64, .x=0xf8, .y=0xcd, .sp=0x97, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x64}, {.addr=0x1f77, .value=0x24}, {.addr=0x1f78, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f77, .value=0x24, .type=IO_READ},
        {.addr=0x1f78, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0086) {
    const struct CPU_State initial_cpu = {.pc=0x330e, .a=0xb3, .x=0x5e, .y=0x53, .sp=0xdc, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0xd2}, {.addr=0x330e, .value=0x24}, {.addr=0x330f, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x3310, .a=0x92, .x=0x5e, .y=0x53, .sp=0xdc, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0xd2}, {.addr=0x330e, .value=0x24}, {.addr=0x330f, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x330e, .value=0x24, .type=IO_READ},
        {.addr=0x330f, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0087) {
    const struct CPU_State initial_cpu = {.pc=0x5cdc, .a=0x42, .x=0x49, .y=0x33, .sp=0x4b, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x3d}, {.addr=0x5cdc, .value=0x24}, {.addr=0x5cdd, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x5cde, .a=0x00, .x=0x49, .y=0x33, .sp=0x4b, .status=0x0a};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x3d}, {.addr=0x5cdc, .value=0x24}, {.addr=0x5cdd, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5cdc, .value=0x24, .type=IO_READ},
        {.addr=0x5cdd, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0088) {
    const struct CPU_State initial_cpu = {.pc=0x384d, .a=0x11, .x=0x14, .y=0x82, .sp=0x90, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xb3}, {.addr=0x384d, .value=0x24}, {.addr=0x384e, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x384f, .a=0x11, .x=0x14, .y=0x82, .sp=0x90, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xb3}, {.addr=0x384d, .value=0x24}, {.addr=0x384e, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x384d, .value=0x24, .type=IO_READ},
        {.addr=0x384e, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0089) {
    const struct CPU_State initial_cpu = {.pc=0xd3e7, .a=0xca, .x=0xb7, .y=0xc1, .sp=0x98, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0xeb}, {.addr=0xd3e7, .value=0x24}, {.addr=0xd3e8, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xd3e9, .a=0xca, .x=0xb7, .y=0xc1, .sp=0x98, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0xeb}, {.addr=0xd3e7, .value=0x24}, {.addr=0xd3e8, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3e7, .value=0x24, .type=IO_READ},
        {.addr=0xd3e8, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_008A) {
    const struct CPU_State initial_cpu = {.pc=0xb3ad, .a=0x64, .x=0xa6, .y=0x7e, .sp=0x2e, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x30}, {.addr=0xb3ad, .value=0x24}, {.addr=0xb3ae, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xb3af, .a=0x20, .x=0xa6, .y=0x7e, .sp=0x2e, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x30}, {.addr=0xb3ad, .value=0x24}, {.addr=0xb3ae, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3ad, .value=0x24, .type=IO_READ},
        {.addr=0xb3ae, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_008B) {
    const struct CPU_State initial_cpu = {.pc=0xeddf, .a=0xc7, .x=0x1b, .y=0x64, .sp=0x25, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x9c}, {.addr=0xeddf, .value=0x24}, {.addr=0xede0, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xede1, .a=0x84, .x=0x1b, .y=0x64, .sp=0x25, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x9c}, {.addr=0xeddf, .value=0x24}, {.addr=0xede0, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xeddf, .value=0x24, .type=IO_READ},
        {.addr=0xede0, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_008C) {
    const struct CPU_State initial_cpu = {.pc=0x0cfc, .a=0x9a, .x=0x49, .y=0xf2, .sp=0x04, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0xf4}, {.addr=0x0cfc, .value=0x24}, {.addr=0x0cfd, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x0cfe, .a=0x90, .x=0x49, .y=0xf2, .sp=0x04, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0xf4}, {.addr=0x0cfc, .value=0x24}, {.addr=0x0cfd, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cfc, .value=0x24, .type=IO_READ},
        {.addr=0x0cfd, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_008D) {
    const struct CPU_State initial_cpu = {.pc=0x4e49, .a=0xca, .x=0x68, .y=0x63, .sp=0x2b, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x9f}, {.addr=0x4e49, .value=0x24}, {.addr=0x4e4a, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x4e4b, .a=0x8a, .x=0x68, .y=0x63, .sp=0x2b, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x9f}, {.addr=0x4e49, .value=0x24}, {.addr=0x4e4a, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e49, .value=0x24, .type=IO_READ},
        {.addr=0x4e4a, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_008E) {
    const struct CPU_State initial_cpu = {.pc=0x71fa, .a=0xba, .x=0x83, .y=0xe1, .sp=0xfd, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x0e}, {.addr=0x71fa, .value=0x24}, {.addr=0x71fb, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x71fc, .a=0x0a, .x=0x83, .y=0xe1, .sp=0xfd, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x0e}, {.addr=0x71fa, .value=0x24}, {.addr=0x71fb, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x71fa, .value=0x24, .type=IO_READ},
        {.addr=0x71fb, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_008F) {
    const struct CPU_State initial_cpu = {.pc=0x6608, .a=0x82, .x=0x65, .y=0x68, .sp=0x5b, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x26}, {.addr=0x6608, .value=0x24}, {.addr=0x6609, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x660a, .a=0x02, .x=0x65, .y=0x68, .sp=0x5b, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x26}, {.addr=0x6608, .value=0x24}, {.addr=0x6609, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x6608, .value=0x24, .type=IO_READ},
        {.addr=0x6609, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0090) {
    const struct CPU_State initial_cpu = {.pc=0x155b, .a=0x04, .x=0x15, .y=0x15, .sp=0x6d, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x36}, {.addr=0x155b, .value=0x24}, {.addr=0x155c, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x155d, .a=0x04, .x=0x15, .y=0x15, .sp=0x6d, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x36}, {.addr=0x155b, .value=0x24}, {.addr=0x155c, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x155b, .value=0x24, .type=IO_READ},
        {.addr=0x155c, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0091) {
    const struct CPU_State initial_cpu = {.pc=0xe8a6, .a=0xe1, .x=0x40, .y=0xac, .sp=0xba, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0xd8}, {.addr=0xe8a6, .value=0x24}, {.addr=0xe8a7, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xe8a8, .a=0xc0, .x=0x40, .y=0xac, .sp=0xba, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0xd8}, {.addr=0xe8a6, .value=0x24}, {.addr=0xe8a7, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8a6, .value=0x24, .type=IO_READ},
        {.addr=0xe8a7, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0092) {
    const struct CPU_State initial_cpu = {.pc=0x093a, .a=0x45, .x=0x89, .y=0x4d, .sp=0x66, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x23}, {.addr=0x093a, .value=0x24}, {.addr=0x093b, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x093c, .a=0x01, .x=0x89, .y=0x4d, .sp=0x66, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x23}, {.addr=0x093a, .value=0x24}, {.addr=0x093b, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x093a, .value=0x24, .type=IO_READ},
        {.addr=0x093b, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0093) {
    const struct CPU_State initial_cpu = {.pc=0x28b2, .a=0x9f, .x=0x9f, .y=0xad, .sp=0x4e, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0x1a}, {.addr=0x28b2, .value=0x24}, {.addr=0x28b3, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x28b4, .a=0x1a, .x=0x9f, .y=0xad, .sp=0x4e, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0x1a}, {.addr=0x28b2, .value=0x24}, {.addr=0x28b3, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x28b2, .value=0x24, .type=IO_READ},
        {.addr=0x28b3, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0094) {
    const struct CPU_State initial_cpu = {.pc=0xeb20, .a=0xf5, .x=0x78, .y=0xbd, .sp=0xe3, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0xc9}, {.addr=0xeb20, .value=0x24}, {.addr=0xeb21, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xeb22, .a=0xc1, .x=0x78, .y=0xbd, .sp=0xe3, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0xc9}, {.addr=0xeb20, .value=0x24}, {.addr=0xeb21, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb20, .value=0x24, .type=IO_READ},
        {.addr=0xeb21, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0095) {
    const struct CPU_State initial_cpu = {.pc=0xd5f1, .a=0xb9, .x=0x30, .y=0xca, .sp=0x78, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x8f}, {.addr=0xd5f1, .value=0x24}, {.addr=0xd5f2, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xd5f3, .a=0x89, .x=0x30, .y=0xca, .sp=0x78, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x8f}, {.addr=0xd5f1, .value=0x24}, {.addr=0xd5f2, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xd5f1, .value=0x24, .type=IO_READ},
        {.addr=0xd5f2, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0097) {
    const struct CPU_State initial_cpu = {.pc=0x6321, .a=0xce, .x=0x84, .y=0x5f, .sp=0xdf, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xe8}, {.addr=0x6321, .value=0x24}, {.addr=0x6322, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x6323, .a=0xc8, .x=0x84, .y=0x5f, .sp=0xdf, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xe8}, {.addr=0x6321, .value=0x24}, {.addr=0x6322, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x6321, .value=0x24, .type=IO_READ},
        {.addr=0x6322, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0098) {
    const struct CPU_State initial_cpu = {.pc=0x5c3a, .a=0x78, .x=0x35, .y=0xbc, .sp=0x8e, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x93}, {.addr=0x5c3a, .value=0x24}, {.addr=0x5c3b, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x5c3c, .a=0x10, .x=0x35, .y=0xbc, .sp=0x8e, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x93}, {.addr=0x5c3a, .value=0x24}, {.addr=0x5c3b, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c3a, .value=0x24, .type=IO_READ},
        {.addr=0x5c3b, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0099) {
    const struct CPU_State initial_cpu = {.pc=0x1983, .a=0x74, .x=0xfb, .y=0x07, .sp=0x3e, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x38}, {.addr=0x1983, .value=0x24}, {.addr=0x1984, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x1985, .a=0x30, .x=0xfb, .y=0x07, .sp=0x3e, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x38}, {.addr=0x1983, .value=0x24}, {.addr=0x1984, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x1983, .value=0x24, .type=IO_READ},
        {.addr=0x1984, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_009A) {
    const struct CPU_State initial_cpu = {.pc=0xc326, .a=0xc9, .x=0x24, .y=0x61, .sp=0x92, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x34}, {.addr=0xc326, .value=0x24}, {.addr=0xc327, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xc328, .a=0x00, .x=0x24, .y=0x61, .sp=0x92, .status=0x13};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x34}, {.addr=0xc326, .value=0x24}, {.addr=0xc327, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc326, .value=0x24, .type=IO_READ},
        {.addr=0xc327, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_009B) {
    const struct CPU_State initial_cpu = {.pc=0x5441, .a=0xb5, .x=0xce, .y=0xd7, .sp=0xa0, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xf2}, {.addr=0x5441, .value=0x24}, {.addr=0x5442, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x5443, .a=0xb0, .x=0xce, .y=0xd7, .sp=0xa0, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xf2}, {.addr=0x5441, .value=0x24}, {.addr=0x5442, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x5441, .value=0x24, .type=IO_READ},
        {.addr=0x5442, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_009C) {
    const struct CPU_State initial_cpu = {.pc=0xd936, .a=0x09, .x=0x29, .y=0x28, .sp=0x3e, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x94}, {.addr=0xd936, .value=0x24}, {.addr=0xd937, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xd938, .a=0x00, .x=0x29, .y=0x28, .sp=0x3e, .status=0x2f};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x94}, {.addr=0xd936, .value=0x24}, {.addr=0xd937, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd936, .value=0x24, .type=IO_READ},
        {.addr=0xd937, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_009D) {
    const struct CPU_State initial_cpu = {.pc=0x502d, .a=0x63, .x=0x89, .y=0xcb, .sp=0xe2, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x5f}, {.addr=0x502d, .value=0x24}, {.addr=0x502e, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x502f, .a=0x43, .x=0x89, .y=0xcb, .sp=0xe2, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x5f}, {.addr=0x502d, .value=0x24}, {.addr=0x502e, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x502d, .value=0x24, .type=IO_READ},
        {.addr=0x502e, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_009E) {
    const struct CPU_State initial_cpu = {.pc=0xce82, .a=0x06, .x=0xd2, .y=0x74, .sp=0xda, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x67}, {.addr=0xce82, .value=0x24}, {.addr=0xce83, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xce84, .a=0x06, .x=0xd2, .y=0x74, .sp=0xda, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x67}, {.addr=0xce82, .value=0x24}, {.addr=0xce83, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xce82, .value=0x24, .type=IO_READ},
        {.addr=0xce83, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_009F) {
    const struct CPU_State initial_cpu = {.pc=0xafda, .a=0xff, .x=0xba, .y=0x49, .sp=0x29, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x39}, {.addr=0xafda, .value=0x24}, {.addr=0xafdb, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xafdc, .a=0x39, .x=0xba, .y=0x49, .sp=0x29, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x39}, {.addr=0xafda, .value=0x24}, {.addr=0xafdb, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xafda, .value=0x24, .type=IO_READ},
        {.addr=0xafdb, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xf385, .a=0x0f, .x=0x57, .y=0x69, .sp=0x5f, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0xd7}, {.addr=0xf385, .value=0x24}, {.addr=0xf386, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xf387, .a=0x07, .x=0x57, .y=0x69, .sp=0x5f, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0xd7}, {.addr=0xf385, .value=0x24}, {.addr=0xf386, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xf385, .value=0x24, .type=IO_READ},
        {.addr=0xf386, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xde2b, .a=0x37, .x=0x22, .y=0x7d, .sp=0x4e, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x61}, {.addr=0xde2b, .value=0x24}, {.addr=0xde2c, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xde2d, .a=0x21, .x=0x22, .y=0x7d, .sp=0x4e, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x61}, {.addr=0xde2b, .value=0x24}, {.addr=0xde2c, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xde2b, .value=0x24, .type=IO_READ},
        {.addr=0xde2c, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x8b81, .a=0xfb, .x=0xb9, .y=0xcb, .sp=0x44, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xf3}, {.addr=0x8b81, .value=0x24}, {.addr=0x8b82, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x8b83, .a=0xf3, .x=0xb9, .y=0xcb, .sp=0x44, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xf3}, {.addr=0x8b81, .value=0x24}, {.addr=0x8b82, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b81, .value=0x24, .type=IO_READ},
        {.addr=0x8b82, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x65e0, .a=0x2c, .x=0xd3, .y=0x2b, .sp=0x4b, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x5f}, {.addr=0x65e0, .value=0x24}, {.addr=0x65e1, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x65e2, .a=0x0c, .x=0xd3, .y=0x2b, .sp=0x4b, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x5f}, {.addr=0x65e0, .value=0x24}, {.addr=0x65e1, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x65e0, .value=0x24, .type=IO_READ},
        {.addr=0x65e1, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x4278, .a=0x6d, .x=0x9e, .y=0xae, .sp=0x30, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0xe0}, {.addr=0x4278, .value=0x24}, {.addr=0x4279, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x427a, .a=0x60, .x=0x9e, .y=0xae, .sp=0x30, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0xe0}, {.addr=0x4278, .value=0x24}, {.addr=0x4279, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x4278, .value=0x24, .type=IO_READ},
        {.addr=0x4279, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x3097, .a=0x39, .x=0x56, .y=0xe7, .sp=0xe9, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x9f}, {.addr=0x3097, .value=0x24}, {.addr=0x3098, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x3099, .a=0x19, .x=0x56, .y=0xe7, .sp=0xe9, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x9f}, {.addr=0x3097, .value=0x24}, {.addr=0x3098, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3097, .value=0x24, .type=IO_READ},
        {.addr=0x3098, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x295e, .a=0xd4, .x=0x37, .y=0xc6, .sp=0xdb, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0xdf}, {.addr=0x295e, .value=0x24}, {.addr=0x295f, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x2960, .a=0xd4, .x=0x37, .y=0xc6, .sp=0xdb, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0xdf}, {.addr=0x295e, .value=0x24}, {.addr=0x295f, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x295e, .value=0x24, .type=IO_READ},
        {.addr=0x295f, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x7a9b, .a=0xfb, .x=0x94, .y=0xb0, .sp=0xc3, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x79}, {.addr=0x7a9b, .value=0x24}, {.addr=0x7a9c, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x7a9d, .a=0x79, .x=0x94, .y=0xb0, .sp=0xc3, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x79}, {.addr=0x7a9b, .value=0x24}, {.addr=0x7a9c, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a9b, .value=0x24, .type=IO_READ},
        {.addr=0x7a9c, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x40d9, .a=0x1f, .x=0x16, .y=0x1e, .sp=0xc4, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0x17}, {.addr=0x40d9, .value=0x24}, {.addr=0x40da, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x40db, .a=0x17, .x=0x16, .y=0x1e, .sp=0xc4, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0x17}, {.addr=0x40d9, .value=0x24}, {.addr=0x40da, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x40d9, .value=0x24, .type=IO_READ},
        {.addr=0x40da, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x32e8, .a=0xee, .x=0xb0, .y=0x63, .sp=0xf1, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x2d}, {.addr=0x32e8, .value=0x24}, {.addr=0x32e9, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x32ea, .a=0x2c, .x=0xb0, .y=0x63, .sp=0xf1, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x2d}, {.addr=0x32e8, .value=0x24}, {.addr=0x32e9, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x32e8, .value=0x24, .type=IO_READ},
        {.addr=0x32e9, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xb9e9, .a=0xf9, .x=0x0b, .y=0x0a, .sp=0x31, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x02}, {.addr=0xb9e9, .value=0x24}, {.addr=0xb9ea, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xb9eb, .a=0x00, .x=0x0b, .y=0x0a, .sp=0x31, .status=0x6a};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x02}, {.addr=0xb9e9, .value=0x24}, {.addr=0xb9ea, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xb9e9, .value=0x24, .type=IO_READ},
        {.addr=0xb9ea, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x86a0, .a=0xf4, .x=0xd0, .y=0xe2, .sp=0xb9, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0x5c}, {.addr=0x86a0, .value=0x24}, {.addr=0x86a1, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x86a2, .a=0x54, .x=0xd0, .y=0xe2, .sp=0xb9, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0x5c}, {.addr=0x86a0, .value=0x24}, {.addr=0x86a1, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x86a0, .value=0x24, .type=IO_READ},
        {.addr=0x86a1, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x04c5, .a=0xd1, .x=0x05, .y=0x87, .sp=0xbf, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xf4}, {.addr=0x04c5, .value=0x24}, {.addr=0x04c6, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x04c7, .a=0xd0, .x=0x05, .y=0x87, .sp=0xbf, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xf4}, {.addr=0x04c5, .value=0x24}, {.addr=0x04c6, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x04c5, .value=0x24, .type=IO_READ},
        {.addr=0x04c6, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x7795, .a=0x9d, .x=0x1a, .y=0x8d, .sp=0xd8, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x3b}, {.addr=0x7795, .value=0x24}, {.addr=0x7796, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x7797, .a=0x19, .x=0x1a, .y=0x8d, .sp=0xd8, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x3b}, {.addr=0x7795, .value=0x24}, {.addr=0x7796, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x7795, .value=0x24, .type=IO_READ},
        {.addr=0x7796, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x0974, .a=0xdb, .x=0xd2, .y=0x77, .sp=0x6f, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x6c}, {.addr=0x0974, .value=0x24}, {.addr=0x0975, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x0976, .a=0x48, .x=0xd2, .y=0x77, .sp=0x6f, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x6c}, {.addr=0x0974, .value=0x24}, {.addr=0x0975, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0974, .value=0x24, .type=IO_READ},
        {.addr=0x0975, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xbd4c, .a=0x6f, .x=0xdd, .y=0x8f, .sp=0xab, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0x3b}, {.addr=0xbd4c, .value=0x24}, {.addr=0xbd4d, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xbd4e, .a=0x2b, .x=0xdd, .y=0x8f, .sp=0xab, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0x3b}, {.addr=0xbd4c, .value=0x24}, {.addr=0xbd4d, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd4c, .value=0x24, .type=IO_READ},
        {.addr=0xbd4d, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xae1e, .a=0xc9, .x=0xad, .y=0x8f, .sp=0x6a, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0xe6}, {.addr=0xae1e, .value=0x24}, {.addr=0xae1f, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xae20, .a=0xc0, .x=0xad, .y=0x8f, .sp=0x6a, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0xe6}, {.addr=0xae1e, .value=0x24}, {.addr=0xae1f, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xae1e, .value=0x24, .type=IO_READ},
        {.addr=0xae1f, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x4e1e, .a=0x2c, .x=0x01, .y=0x05, .sp=0xf6, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x0d}, {.addr=0x4e1e, .value=0x24}, {.addr=0x4e1f, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x4e20, .a=0x0c, .x=0x01, .y=0x05, .sp=0xf6, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x0d}, {.addr=0x4e1e, .value=0x24}, {.addr=0x4e1f, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e1e, .value=0x24, .type=IO_READ},
        {.addr=0x4e1f, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xc786, .a=0xac, .x=0xe7, .y=0xbd, .sp=0x88, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x52}, {.addr=0xc786, .value=0x24}, {.addr=0xc787, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xc788, .a=0x00, .x=0xe7, .y=0xbd, .sp=0x88, .status=0x76};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x52}, {.addr=0xc786, .value=0x24}, {.addr=0xc787, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc786, .value=0x24, .type=IO_READ},
        {.addr=0xc787, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x258a, .a=0x4b, .x=0xfe, .y=0x62, .sp=0xeb, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x84}, {.addr=0x258a, .value=0x24}, {.addr=0x258b, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x258c, .a=0x00, .x=0xfe, .y=0x62, .sp=0xeb, .status=0x22};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x84}, {.addr=0x258a, .value=0x24}, {.addr=0x258b, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x258a, .value=0x24, .type=IO_READ},
        {.addr=0x258b, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x6fe5, .a=0x83, .x=0xd4, .y=0x6a, .sp=0x4b, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x4a}, {.addr=0x6fe5, .value=0x24}, {.addr=0x6fe6, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x6fe7, .a=0x02, .x=0xd4, .y=0x6a, .sp=0x4b, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x4a}, {.addr=0x6fe5, .value=0x24}, {.addr=0x6fe6, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fe5, .value=0x24, .type=IO_READ},
        {.addr=0x6fe6, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x9177, .a=0x8a, .x=0xaa, .y=0xf8, .sp=0x53, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x12}, {.addr=0x9177, .value=0x24}, {.addr=0x9178, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x9179, .a=0x02, .x=0xaa, .y=0xf8, .sp=0x53, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x12}, {.addr=0x9177, .value=0x24}, {.addr=0x9178, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x9177, .value=0x24, .type=IO_READ},
        {.addr=0x9178, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x45df, .a=0x28, .x=0x46, .y=0x13, .sp=0xfa, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x5e}, {.addr=0x45df, .value=0x24}, {.addr=0x45e0, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x45e1, .a=0x08, .x=0x46, .y=0x13, .sp=0xfa, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x5e}, {.addr=0x45df, .value=0x24}, {.addr=0x45e0, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x45df, .value=0x24, .type=IO_READ},
        {.addr=0x45e0, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x5e6d, .a=0x92, .x=0x94, .y=0xdb, .sp=0x1f, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x1b}, {.addr=0x5e6d, .value=0x24}, {.addr=0x5e6e, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x5e6f, .a=0x12, .x=0x94, .y=0xdb, .sp=0x1f, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x1b}, {.addr=0x5e6d, .value=0x24}, {.addr=0x5e6e, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e6d, .value=0x24, .type=IO_READ},
        {.addr=0x5e6e, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xcc23, .a=0x36, .x=0x14, .y=0xa6, .sp=0x97, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x77}, {.addr=0xcc23, .value=0x24}, {.addr=0xcc24, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xcc25, .a=0x36, .x=0x14, .y=0xa6, .sp=0x97, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x77}, {.addr=0xcc23, .value=0x24}, {.addr=0xcc24, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc23, .value=0x24, .type=IO_READ},
        {.addr=0xcc24, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x82f2, .a=0x40, .x=0x9d, .y=0x2e, .sp=0x63, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x21}, {.addr=0x82f2, .value=0x24}, {.addr=0x82f3, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x82f4, .a=0x00, .x=0x9d, .y=0x2e, .sp=0x63, .status=0x1b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x21}, {.addr=0x82f2, .value=0x24}, {.addr=0x82f3, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x82f2, .value=0x24, .type=IO_READ},
        {.addr=0x82f3, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x446e, .a=0x0c, .x=0xdd, .y=0x23, .sp=0xf0, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x05}, {.addr=0x446e, .value=0x24}, {.addr=0x446f, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x4470, .a=0x04, .x=0xdd, .y=0x23, .sp=0xf0, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x05}, {.addr=0x446e, .value=0x24}, {.addr=0x446f, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x446e, .value=0x24, .type=IO_READ},
        {.addr=0x446f, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x9ef6, .a=0x3e, .x=0x85, .y=0xe4, .sp=0x95, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0x68}, {.addr=0x9ef6, .value=0x24}, {.addr=0x9ef7, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x9ef8, .a=0x28, .x=0x85, .y=0xe4, .sp=0x95, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0x68}, {.addr=0x9ef6, .value=0x24}, {.addr=0x9ef7, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ef6, .value=0x24, .type=IO_READ},
        {.addr=0x9ef7, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xd78a, .a=0xfb, .x=0x15, .y=0xa6, .sp=0xd1, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x4b}, {.addr=0xd78a, .value=0x24}, {.addr=0xd78b, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0xd78c, .a=0x4b, .x=0x15, .y=0xa6, .sp=0xd1, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x4b}, {.addr=0xd78a, .value=0x24}, {.addr=0xd78b, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd78a, .value=0x24, .type=IO_READ},
        {.addr=0xd78b, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x78e3, .a=0xe6, .x=0xee, .y=0xae, .sp=0xc5, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x8e}, {.addr=0x78e3, .value=0x24}, {.addr=0x78e4, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x78e5, .a=0x86, .x=0xee, .y=0xae, .sp=0xc5, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x8e}, {.addr=0x78e3, .value=0x24}, {.addr=0x78e4, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x78e3, .value=0x24, .type=IO_READ},
        {.addr=0x78e4, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x0a27, .a=0xad, .x=0xde, .y=0x98, .sp=0x49, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x65}, {.addr=0x0a27, .value=0x24}, {.addr=0x0a28, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x0a29, .a=0x25, .x=0xde, .y=0x98, .sp=0x49, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x65}, {.addr=0x0a27, .value=0x24}, {.addr=0x0a28, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a27, .value=0x24, .type=IO_READ},
        {.addr=0x0a28, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xcba5, .a=0x96, .x=0xed, .y=0xf9, .sp=0x74, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0x19}, {.addr=0xcba5, .value=0x24}, {.addr=0xcba6, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xcba7, .a=0x10, .x=0xed, .y=0xf9, .sp=0x74, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0x19}, {.addr=0xcba5, .value=0x24}, {.addr=0xcba6, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xcba5, .value=0x24, .type=IO_READ},
        {.addr=0xcba6, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x4a2c, .a=0xfa, .x=0x86, .y=0xd0, .sp=0x05, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0xc8}, {.addr=0x4a2c, .value=0x24}, {.addr=0x4a2d, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x4a2e, .a=0xc8, .x=0x86, .y=0xd0, .sp=0x05, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0xc8}, {.addr=0x4a2c, .value=0x24}, {.addr=0x4a2d, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a2c, .value=0x24, .type=IO_READ},
        {.addr=0x4a2d, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xd5c4, .a=0x46, .x=0x85, .y=0xe9, .sp=0xed, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xc6}, {.addr=0xd5c4, .value=0x24}, {.addr=0xd5c5, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xd5c6, .a=0x46, .x=0x85, .y=0xe9, .sp=0xed, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xc6}, {.addr=0xd5c4, .value=0x24}, {.addr=0xd5c5, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xd5c4, .value=0x24, .type=IO_READ},
        {.addr=0xd5c5, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xbdf8, .a=0x9e, .x=0xfc, .y=0x94, .sp=0xf9, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x31}, {.addr=0xbdf8, .value=0x24}, {.addr=0xbdf9, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xbdfa, .a=0x10, .x=0xfc, .y=0x94, .sp=0xf9, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x31}, {.addr=0xbdf8, .value=0x24}, {.addr=0xbdf9, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdf8, .value=0x24, .type=IO_READ},
        {.addr=0xbdf9, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xea58, .a=0xe9, .x=0x96, .y=0x25, .sp=0x36, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x16}, {.addr=0xea58, .value=0x24}, {.addr=0xea59, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xea5a, .a=0x00, .x=0x96, .y=0x25, .sp=0x36, .status=0x7e};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x16}, {.addr=0xea58, .value=0x24}, {.addr=0xea59, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xea58, .value=0x24, .type=IO_READ},
        {.addr=0xea59, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xe256, .a=0xa0, .x=0x2f, .y=0xd8, .sp=0xa2, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xa2}, {.addr=0xe256, .value=0x24}, {.addr=0xe257, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xe258, .a=0xa0, .x=0x2f, .y=0xd8, .sp=0xa2, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xa2}, {.addr=0xe256, .value=0x24}, {.addr=0xe257, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xe256, .value=0x24, .type=IO_READ},
        {.addr=0xe257, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x612f, .a=0x80, .x=0x46, .y=0x06, .sp=0x89, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x9d}, {.addr=0x612f, .value=0x24}, {.addr=0x6130, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x6131, .a=0x80, .x=0x46, .y=0x06, .sp=0x89, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x9d}, {.addr=0x612f, .value=0x24}, {.addr=0x6130, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x612f, .value=0x24, .type=IO_READ},
        {.addr=0x6130, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x5063, .a=0x88, .x=0x9d, .y=0x62, .sp=0x45, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x25}, {.addr=0x5063, .value=0x24}, {.addr=0x5064, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x5065, .a=0x00, .x=0x9d, .y=0x62, .sp=0x45, .status=0x3b};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x25}, {.addr=0x5063, .value=0x24}, {.addr=0x5064, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5063, .value=0x24, .type=IO_READ},
        {.addr=0x5064, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xa019, .a=0x7c, .x=0x2e, .y=0x47, .sp=0x20, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x62}, {.addr=0xa019, .value=0x24}, {.addr=0xa01a, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xa01b, .a=0x60, .x=0x2e, .y=0x47, .sp=0x20, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x62}, {.addr=0xa019, .value=0x24}, {.addr=0xa01a, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xa019, .value=0x24, .type=IO_READ},
        {.addr=0xa01a, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x4b7c, .a=0x92, .x=0xd6, .y=0x13, .sp=0xf4, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x64}, {.addr=0x4b7c, .value=0x24}, {.addr=0x4b7d, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x4b7e, .a=0x00, .x=0xd6, .y=0x13, .sp=0xf4, .status=0x26};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x64}, {.addr=0x4b7c, .value=0x24}, {.addr=0x4b7d, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b7c, .value=0x24, .type=IO_READ},
        {.addr=0x4b7d, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xe79e, .a=0x3d, .x=0x53, .y=0x6c, .sp=0x84, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x37}, {.addr=0xe79e, .value=0x24}, {.addr=0xe79f, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0xe7a0, .a=0x35, .x=0x53, .y=0x6c, .sp=0x84, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x37}, {.addr=0xe79e, .value=0x24}, {.addr=0xe79f, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe79e, .value=0x24, .type=IO_READ},
        {.addr=0xe79f, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x7de3, .a=0xf9, .x=0xd0, .y=0x66, .sp=0xa2, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0xac}, {.addr=0x7de3, .value=0x24}, {.addr=0x7de4, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x7de5, .a=0xa8, .x=0xd0, .y=0x66, .sp=0xa2, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0xac}, {.addr=0x7de3, .value=0x24}, {.addr=0x7de4, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x7de3, .value=0x24, .type=IO_READ},
        {.addr=0x7de4, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x9227, .a=0x3e, .x=0x8c, .y=0x72, .sp=0x1a, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xb7}, {.addr=0x9227, .value=0x24}, {.addr=0x9228, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x9229, .a=0x36, .x=0x8c, .y=0x72, .sp=0x1a, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xb7}, {.addr=0x9227, .value=0x24}, {.addr=0x9228, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x9227, .value=0x24, .type=IO_READ},
        {.addr=0x9228, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xfc21, .a=0x21, .x=0x58, .y=0x72, .sp=0x6b, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x65}, {.addr=0xfc21, .value=0x24}, {.addr=0xfc22, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xfc23, .a=0x21, .x=0x58, .y=0x72, .sp=0x6b, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x65}, {.addr=0xfc21, .value=0x24}, {.addr=0xfc22, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc21, .value=0x24, .type=IO_READ},
        {.addr=0xfc22, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xa9f7, .a=0x0a, .x=0xf6, .y=0xce, .sp=0x28, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0xaa}, {.addr=0xa9f7, .value=0x24}, {.addr=0xa9f8, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xa9f9, .a=0x0a, .x=0xf6, .y=0xce, .sp=0x28, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0xaa}, {.addr=0xa9f7, .value=0x24}, {.addr=0xa9f8, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9f7, .value=0x24, .type=IO_READ},
        {.addr=0xa9f8, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x3d87, .a=0x00, .x=0xe4, .y=0x58, .sp=0xf3, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xae}, {.addr=0x3d87, .value=0x24}, {.addr=0x3d88, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x3d89, .a=0x00, .x=0xe4, .y=0x58, .sp=0xf3, .status=0x46};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xae}, {.addr=0x3d87, .value=0x24}, {.addr=0x3d88, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d87, .value=0x24, .type=IO_READ},
        {.addr=0x3d88, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x0e5f, .a=0x38, .x=0x2b, .y=0x43, .sp=0xa3, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0xfb}, {.addr=0x0e5f, .value=0x24}, {.addr=0x0e60, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x0e61, .a=0x38, .x=0x2b, .y=0x43, .sp=0xa3, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0xfb}, {.addr=0x0e5f, .value=0x24}, {.addr=0x0e60, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e5f, .value=0x24, .type=IO_READ},
        {.addr=0x0e60, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x88d1, .a=0x99, .x=0x1d, .y=0xa4, .sp=0x30, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x18}, {.addr=0x88d1, .value=0x24}, {.addr=0x88d2, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x88d3, .a=0x18, .x=0x1d, .y=0xa4, .sp=0x30, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x18}, {.addr=0x88d1, .value=0x24}, {.addr=0x88d2, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x88d1, .value=0x24, .type=IO_READ},
        {.addr=0x88d2, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x08d8, .a=0x06, .x=0xfe, .y=0x90, .sp=0x8c, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x07}, {.addr=0x08d8, .value=0x24}, {.addr=0x08d9, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x08da, .a=0x06, .x=0xfe, .y=0x90, .sp=0x8c, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x07}, {.addr=0x08d8, .value=0x24}, {.addr=0x08d9, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x08d8, .value=0x24, .type=IO_READ},
        {.addr=0x08d9, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xcbd4, .a=0x0d, .x=0x84, .y=0x39, .sp=0x19, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x68}, {.addr=0xcbd4, .value=0x24}, {.addr=0xcbd5, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xcbd6, .a=0x08, .x=0x84, .y=0x39, .sp=0x19, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x68}, {.addr=0xcbd4, .value=0x24}, {.addr=0xcbd5, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbd4, .value=0x24, .type=IO_READ},
        {.addr=0xcbd5, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x7de7, .a=0x8c, .x=0x88, .y=0x30, .sp=0xf3, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xf5}, {.addr=0x7de7, .value=0x24}, {.addr=0x7de8, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x7de9, .a=0x84, .x=0x88, .y=0x30, .sp=0xf3, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xf5}, {.addr=0x7de7, .value=0x24}, {.addr=0x7de8, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x7de7, .value=0x24, .type=IO_READ},
        {.addr=0x7de8, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xfc1e, .a=0x42, .x=0x95, .y=0x1d, .sp=0x42, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xd2}, {.addr=0xfc1e, .value=0x24}, {.addr=0xfc1f, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xfc20, .a=0x42, .x=0x95, .y=0x1d, .sp=0x42, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xd2}, {.addr=0xfc1e, .value=0x24}, {.addr=0xfc1f, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc1e, .value=0x24, .type=IO_READ},
        {.addr=0xfc1f, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x364a, .a=0x7b, .x=0x7d, .y=0x90, .sp=0x3b, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x9d}, {.addr=0x364a, .value=0x24}, {.addr=0x364b, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x364c, .a=0x19, .x=0x7d, .y=0x90, .sp=0x3b, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x9d}, {.addr=0x364a, .value=0x24}, {.addr=0x364b, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x364a, .value=0x24, .type=IO_READ},
        {.addr=0x364b, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xb193, .a=0x23, .x=0x61, .y=0x68, .sp=0x0e, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x8f}, {.addr=0xb193, .value=0x24}, {.addr=0xb194, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xb195, .a=0x03, .x=0x61, .y=0x68, .sp=0x0e, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x8f}, {.addr=0xb193, .value=0x24}, {.addr=0xb194, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb193, .value=0x24, .type=IO_READ},
        {.addr=0xb194, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xc00b, .a=0x2c, .x=0x68, .y=0x8e, .sp=0x6d, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0xd8}, {.addr=0xc00b, .value=0x24}, {.addr=0xc00c, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xc00d, .a=0x08, .x=0x68, .y=0x8e, .sp=0x6d, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0xd8}, {.addr=0xc00b, .value=0x24}, {.addr=0xc00c, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc00b, .value=0x24, .type=IO_READ},
        {.addr=0xc00c, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x600f, .a=0x9c, .x=0xe5, .y=0x18, .sp=0x66, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0xa8}, {.addr=0x600f, .value=0x24}, {.addr=0x6010, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x6011, .a=0x88, .x=0xe5, .y=0x18, .sp=0x66, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0xa8}, {.addr=0x600f, .value=0x24}, {.addr=0x6010, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x600f, .value=0x24, .type=IO_READ},
        {.addr=0x6010, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xbdf9, .a=0x8d, .x=0x31, .y=0x88, .sp=0x8f, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x18}, {.addr=0xbdf9, .value=0x24}, {.addr=0xbdfa, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xbdfb, .a=0x08, .x=0x31, .y=0x88, .sp=0x8f, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x18}, {.addr=0xbdf9, .value=0x24}, {.addr=0xbdfa, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdf9, .value=0x24, .type=IO_READ},
        {.addr=0xbdfa, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xb72d, .a=0xbc, .x=0x2f, .y=0x84, .sp=0xb4, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0xd4}, {.addr=0xb72d, .value=0x24}, {.addr=0xb72e, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xb72f, .a=0x94, .x=0x2f, .y=0x84, .sp=0xb4, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0xd4}, {.addr=0xb72d, .value=0x24}, {.addr=0xb72e, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb72d, .value=0x24, .type=IO_READ},
        {.addr=0xb72e, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x6419, .a=0x81, .x=0xc3, .y=0x74, .sp=0x30, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x98}, {.addr=0x6419, .value=0x24}, {.addr=0x641a, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x641b, .a=0x80, .x=0xc3, .y=0x74, .sp=0x30, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x98}, {.addr=0x6419, .value=0x24}, {.addr=0x641a, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x6419, .value=0x24, .type=IO_READ},
        {.addr=0x641a, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x6225, .a=0x0b, .x=0x25, .y=0xa3, .sp=0x1a, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x63}, {.addr=0x6225, .value=0x24}, {.addr=0x6226, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x6227, .a=0x03, .x=0x25, .y=0xa3, .sp=0x1a, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x63}, {.addr=0x6225, .value=0x24}, {.addr=0x6226, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x6225, .value=0x24, .type=IO_READ},
        {.addr=0x6226, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xdf42, .a=0xb8, .x=0x08, .y=0x15, .sp=0xfd, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x87}, {.addr=0xdf42, .value=0x24}, {.addr=0xdf43, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xdf44, .a=0x80, .x=0x08, .y=0x15, .sp=0xfd, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x87}, {.addr=0xdf42, .value=0x24}, {.addr=0xdf43, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf42, .value=0x24, .type=IO_READ},
        {.addr=0xdf43, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xbd41, .a=0x4a, .x=0x36, .y=0x29, .sp=0x64, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x61}, {.addr=0xbd41, .value=0x24}, {.addr=0xbd42, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xbd43, .a=0x40, .x=0x36, .y=0x29, .sp=0x64, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x61}, {.addr=0xbd41, .value=0x24}, {.addr=0xbd42, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd41, .value=0x24, .type=IO_READ},
        {.addr=0xbd42, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x3e49, .a=0x7b, .x=0x6b, .y=0x65, .sp=0x7b, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0xb4}, {.addr=0x3e49, .value=0x24}, {.addr=0x3e4a, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x3e4b, .a=0x30, .x=0x6b, .y=0x65, .sp=0x7b, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0xb4}, {.addr=0x3e49, .value=0x24}, {.addr=0x3e4a, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e49, .value=0x24, .type=IO_READ},
        {.addr=0x3e4a, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x5aab, .a=0x8a, .x=0xa6, .y=0x8e, .sp=0x5b, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0xd3}, {.addr=0x5aab, .value=0x24}, {.addr=0x5aac, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x5aad, .a=0x82, .x=0xa6, .y=0x8e, .sp=0x5b, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0xd3}, {.addr=0x5aab, .value=0x24}, {.addr=0x5aac, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x5aab, .value=0x24, .type=IO_READ},
        {.addr=0x5aac, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x7a23, .a=0xb7, .x=0x0b, .y=0xf1, .sp=0xc7, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0xcf}, {.addr=0x7a23, .value=0x24}, {.addr=0x7a24, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x7a25, .a=0x87, .x=0x0b, .y=0xf1, .sp=0xc7, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0xcf}, {.addr=0x7a23, .value=0x24}, {.addr=0x7a24, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a23, .value=0x24, .type=IO_READ},
        {.addr=0x7a24, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x0816, .a=0x45, .x=0x21, .y=0x1f, .sp=0xe0, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0xc6}, {.addr=0x0816, .value=0x24}, {.addr=0x0817, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x0818, .a=0x44, .x=0x21, .y=0x1f, .sp=0xe0, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0xc6}, {.addr=0x0816, .value=0x24}, {.addr=0x0817, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x0816, .value=0x24, .type=IO_READ},
        {.addr=0x0817, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x1ebd, .a=0x17, .x=0x02, .y=0x8d, .sp=0x06, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x71}, {.addr=0x1ebd, .value=0x24}, {.addr=0x1ebe, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x1ebf, .a=0x11, .x=0x02, .y=0x8d, .sp=0x06, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x71}, {.addr=0x1ebd, .value=0x24}, {.addr=0x1ebe, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ebd, .value=0x24, .type=IO_READ},
        {.addr=0x1ebe, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xb378, .a=0x3a, .x=0x45, .y=0x29, .sp=0x22, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x84}, {.addr=0xb378, .value=0x24}, {.addr=0xb379, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0xb37a, .a=0x00, .x=0x45, .y=0x29, .sp=0x22, .status=0x6f};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x84}, {.addr=0xb378, .value=0x24}, {.addr=0xb379, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb378, .value=0x24, .type=IO_READ},
        {.addr=0xb379, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x2fc1, .a=0xb4, .x=0xce, .y=0x8a, .sp=0xbd, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x08}, {.addr=0x2fc1, .value=0x24}, {.addr=0x2fc2, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x2fc3, .a=0x00, .x=0xce, .y=0x8a, .sp=0xbd, .status=0x12};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x08}, {.addr=0x2fc1, .value=0x24}, {.addr=0x2fc2, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2fc1, .value=0x24, .type=IO_READ},
        {.addr=0x2fc2, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xbf5b, .a=0xe3, .x=0x97, .y=0x8d, .sp=0xbd, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x09}, {.addr=0xbf5b, .value=0x24}, {.addr=0xbf5c, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xbf5d, .a=0x01, .x=0x97, .y=0x8d, .sp=0xbd, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x09}, {.addr=0xbf5b, .value=0x24}, {.addr=0xbf5c, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf5b, .value=0x24, .type=IO_READ},
        {.addr=0xbf5c, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x38e3, .a=0x4a, .x=0x20, .y=0xa3, .sp=0x68, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xf3}, {.addr=0x38e3, .value=0x24}, {.addr=0x38e4, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x38e5, .a=0x42, .x=0x20, .y=0xa3, .sp=0x68, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xf3}, {.addr=0x38e3, .value=0x24}, {.addr=0x38e4, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x38e3, .value=0x24, .type=IO_READ},
        {.addr=0x38e4, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x9d76, .a=0x3f, .x=0xf4, .y=0xb6, .sp=0x12, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x53}, {.addr=0x9d76, .value=0x24}, {.addr=0x9d77, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x9d78, .a=0x13, .x=0xf4, .y=0xb6, .sp=0x12, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x53}, {.addr=0x9d76, .value=0x24}, {.addr=0x9d77, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d76, .value=0x24, .type=IO_READ},
        {.addr=0x9d77, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x2cfc, .a=0x8d, .x=0x18, .y=0xe1, .sp=0x4f, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x1c}, {.addr=0x2cfc, .value=0x24}, {.addr=0x2cfd, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x2cfe, .a=0x0c, .x=0x18, .y=0xe1, .sp=0x4f, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x1c}, {.addr=0x2cfc, .value=0x24}, {.addr=0x2cfd, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x2cfc, .value=0x24, .type=IO_READ},
        {.addr=0x2cfd, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xbd38, .a=0xa3, .x=0x76, .y=0x40, .sp=0x66, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0xe4}, {.addr=0xbd38, .value=0x24}, {.addr=0xbd39, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xbd3a, .a=0xa0, .x=0x76, .y=0x40, .sp=0x66, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0xe4}, {.addr=0xbd38, .value=0x24}, {.addr=0xbd39, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd38, .value=0x24, .type=IO_READ},
        {.addr=0xbd39, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xbff6, .a=0x51, .x=0xc6, .y=0xc2, .sp=0x13, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x79}, {.addr=0xbff6, .value=0x24}, {.addr=0xbff7, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xbff8, .a=0x51, .x=0xc6, .y=0xc2, .sp=0x13, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x79}, {.addr=0xbff6, .value=0x24}, {.addr=0xbff7, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xbff6, .value=0x24, .type=IO_READ},
        {.addr=0xbff7, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x1ec7, .a=0x4c, .x=0x20, .y=0xd7, .sp=0xcc, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0xed}, {.addr=0x1ec7, .value=0x24}, {.addr=0x1ec8, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x1ec9, .a=0x4c, .x=0x20, .y=0xd7, .sp=0xcc, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0xed}, {.addr=0x1ec7, .value=0x24}, {.addr=0x1ec8, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ec7, .value=0x24, .type=IO_READ},
        {.addr=0x1ec8, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xdb0b, .a=0xe8, .x=0xf9, .y=0xc6, .sp=0x30, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xfa}, {.addr=0xdb0b, .value=0x24}, {.addr=0xdb0c, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xdb0d, .a=0xe8, .x=0xf9, .y=0xc6, .sp=0x30, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xfa}, {.addr=0xdb0b, .value=0x24}, {.addr=0xdb0c, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb0b, .value=0x24, .type=IO_READ},
        {.addr=0xdb0c, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xe3e2, .a=0x1a, .x=0x64, .y=0x03, .sp=0x3a, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x14}, {.addr=0xe3e2, .value=0x24}, {.addr=0xe3e3, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xe3e4, .a=0x10, .x=0x64, .y=0x03, .sp=0x3a, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x14}, {.addr=0xe3e2, .value=0x24}, {.addr=0xe3e3, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3e2, .value=0x24, .type=IO_READ},
        {.addr=0xe3e3, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xaf34, .a=0xea, .x=0x5f, .y=0x1e, .sp=0x51, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x9a}, {.addr=0xaf34, .value=0x24}, {.addr=0xaf35, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0xaf36, .a=0x8a, .x=0x5f, .y=0x1e, .sp=0x51, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x9a}, {.addr=0xaf34, .value=0x24}, {.addr=0xaf35, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf34, .value=0x24, .type=IO_READ},
        {.addr=0xaf35, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xffff, .a=0x4e, .x=0xc7, .y=0x05, .sp=0xc9, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x29}, {.addr=0x0029, .value=0xb3}, {.addr=0xffff, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x0001, .a=0x02, .x=0xc7, .y=0x05, .sp=0xc9, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x29}, {.addr=0x0029, .value=0xb3}, {.addr=0xffff, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xffff, .value=0x24, .type=IO_READ},
        {.addr=0x0000, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x32f8, .a=0xea, .x=0xcf, .y=0xae, .sp=0x78, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x10}, {.addr=0x32f8, .value=0x24}, {.addr=0x32f9, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x32fa, .a=0x00, .x=0xcf, .y=0xae, .sp=0x78, .status=0x6e};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x10}, {.addr=0x32f8, .value=0x24}, {.addr=0x32f9, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x32f8, .value=0x24, .type=IO_READ},
        {.addr=0x32f9, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x8e34, .a=0x12, .x=0xf4, .y=0x3c, .sp=0xe7, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x4a}, {.addr=0x8e34, .value=0x24}, {.addr=0x8e35, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x8e36, .a=0x02, .x=0xf4, .y=0x3c, .sp=0xe7, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x4a}, {.addr=0x8e34, .value=0x24}, {.addr=0x8e35, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e34, .value=0x24, .type=IO_READ},
        {.addr=0x8e35, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x3a16, .a=0x7e, .x=0x2d, .y=0x1d, .sp=0x15, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0xe6}, {.addr=0x3a16, .value=0x24}, {.addr=0x3a17, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x3a18, .a=0x66, .x=0x2d, .y=0x1d, .sp=0x15, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0xe6}, {.addr=0x3a16, .value=0x24}, {.addr=0x3a17, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a16, .value=0x24, .type=IO_READ},
        {.addr=0x3a17, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xf3aa, .a=0x74, .x=0x96, .y=0x33, .sp=0xc9, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x55}, {.addr=0xf3aa, .value=0x24}, {.addr=0xf3ab, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xf3ac, .a=0x54, .x=0x96, .y=0x33, .sp=0xc9, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x55}, {.addr=0xf3aa, .value=0x24}, {.addr=0xf3ab, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3aa, .value=0x24, .type=IO_READ},
        {.addr=0xf3ab, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x98fa, .a=0xd5, .x=0x28, .y=0x82, .sp=0xf0, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xed}, {.addr=0x98fa, .value=0x24}, {.addr=0x98fb, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x98fc, .a=0xc5, .x=0x28, .y=0x82, .sp=0xf0, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xed}, {.addr=0x98fa, .value=0x24}, {.addr=0x98fb, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x98fa, .value=0x24, .type=IO_READ},
        {.addr=0x98fb, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x0c8b, .a=0x9a, .x=0x9c, .y=0x16, .sp=0xd7, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x14}, {.addr=0x0c8b, .value=0x24}, {.addr=0x0c8c, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x0c8d, .a=0x10, .x=0x9c, .y=0x16, .sp=0xd7, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x14}, {.addr=0x0c8b, .value=0x24}, {.addr=0x0c8c, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c8b, .value=0x24, .type=IO_READ},
        {.addr=0x0c8c, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x4144, .a=0xe4, .x=0xc0, .y=0x55, .sp=0xe4, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x4f}, {.addr=0x4144, .value=0x24}, {.addr=0x4145, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x4146, .a=0x44, .x=0xc0, .y=0x55, .sp=0xe4, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x4f}, {.addr=0x4144, .value=0x24}, {.addr=0x4145, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x4144, .value=0x24, .type=IO_READ},
        {.addr=0x4145, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xbe89, .a=0xeb, .x=0x2f, .y=0xe3, .sp=0x40, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0xad}, {.addr=0xbe89, .value=0x24}, {.addr=0xbe8a, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xbe8b, .a=0xa9, .x=0x2f, .y=0xe3, .sp=0x40, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0xad}, {.addr=0xbe89, .value=0x24}, {.addr=0xbe8a, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe89, .value=0x24, .type=IO_READ},
        {.addr=0xbe8a, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xed42, .a=0xd4, .x=0x8f, .y=0x20, .sp=0xc7, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0xed}, {.addr=0xed42, .value=0x24}, {.addr=0xed43, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xed44, .a=0xc4, .x=0x8f, .y=0x20, .sp=0xc7, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0xed}, {.addr=0xed42, .value=0x24}, {.addr=0xed43, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xed42, .value=0x24, .type=IO_READ},
        {.addr=0xed43, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x7be8, .a=0xc5, .x=0x40, .y=0x65, .sp=0xd6, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0xd1}, {.addr=0x7be8, .value=0x24}, {.addr=0x7be9, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x7bea, .a=0xc1, .x=0x40, .y=0x65, .sp=0xd6, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0xd1}, {.addr=0x7be8, .value=0x24}, {.addr=0x7be9, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7be8, .value=0x24, .type=IO_READ},
        {.addr=0x7be9, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x8a49, .a=0x3f, .x=0x0f, .y=0xdb, .sp=0xfb, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x77}, {.addr=0x8a49, .value=0x24}, {.addr=0x8a4a, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x8a4b, .a=0x37, .x=0x0f, .y=0xdb, .sp=0xfb, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x77}, {.addr=0x8a49, .value=0x24}, {.addr=0x8a4a, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a49, .value=0x24, .type=IO_READ},
        {.addr=0x8a4a, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xe9de, .a=0x9d, .x=0xaf, .y=0x64, .sp=0xf9, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0x19}, {.addr=0xe9de, .value=0x24}, {.addr=0xe9df, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xe9e0, .a=0x19, .x=0xaf, .y=0x64, .sp=0xf9, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0x19}, {.addr=0xe9de, .value=0x24}, {.addr=0xe9df, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9de, .value=0x24, .type=IO_READ},
        {.addr=0xe9df, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0101) {
    const struct CPU_State initial_cpu = {.pc=0x18de, .a=0xc1, .x=0xf1, .y=0x97, .sp=0xb6, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0xf5}, {.addr=0x18de, .value=0x24}, {.addr=0x18df, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x18e0, .a=0xc1, .x=0xf1, .y=0x97, .sp=0xb6, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0xf5}, {.addr=0x18de, .value=0x24}, {.addr=0x18df, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x18de, .value=0x24, .type=IO_READ},
        {.addr=0x18df, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0102) {
    const struct CPU_State initial_cpu = {.pc=0x2954, .a=0xdd, .x=0x47, .y=0x56, .sp=0x37, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x9f}, {.addr=0x2954, .value=0x24}, {.addr=0x2955, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x2956, .a=0x9d, .x=0x47, .y=0x56, .sp=0x37, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x9f}, {.addr=0x2954, .value=0x24}, {.addr=0x2955, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x2954, .value=0x24, .type=IO_READ},
        {.addr=0x2955, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0103) {
    const struct CPU_State initial_cpu = {.pc=0x621d, .a=0x28, .x=0x7b, .y=0x22, .sp=0x23, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0xb5}, {.addr=0x621d, .value=0x24}, {.addr=0x621e, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x621f, .a=0x20, .x=0x7b, .y=0x22, .sp=0x23, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0xb5}, {.addr=0x621d, .value=0x24}, {.addr=0x621e, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x621d, .value=0x24, .type=IO_READ},
        {.addr=0x621e, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0104) {
    const struct CPU_State initial_cpu = {.pc=0xe0fb, .a=0xf0, .x=0xae, .y=0x0b, .sp=0x66, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x43}, {.addr=0xe0fb, .value=0x24}, {.addr=0xe0fc, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xe0fd, .a=0x40, .x=0xae, .y=0x0b, .sp=0x66, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x43}, {.addr=0xe0fb, .value=0x24}, {.addr=0xe0fc, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0fb, .value=0x24, .type=IO_READ},
        {.addr=0xe0fc, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0105) {
    const struct CPU_State initial_cpu = {.pc=0x9b4b, .a=0xf6, .x=0x2f, .y=0x39, .sp=0xf8, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x29}, {.addr=0x9b4b, .value=0x24}, {.addr=0x9b4c, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x9b4d, .a=0x20, .x=0x2f, .y=0x39, .sp=0xf8, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x29}, {.addr=0x9b4b, .value=0x24}, {.addr=0x9b4c, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b4b, .value=0x24, .type=IO_READ},
        {.addr=0x9b4c, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0106) {
    const struct CPU_State initial_cpu = {.pc=0x0e83, .a=0x21, .x=0xba, .y=0x72, .sp=0xbb, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x1d}, {.addr=0x0e83, .value=0x24}, {.addr=0x0e84, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x0e85, .a=0x01, .x=0xba, .y=0x72, .sp=0xbb, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x1d}, {.addr=0x0e83, .value=0x24}, {.addr=0x0e84, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e83, .value=0x24, .type=IO_READ},
        {.addr=0x0e84, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0107) {
    const struct CPU_State initial_cpu = {.pc=0x19ac, .a=0xf3, .x=0xb3, .y=0xe3, .sp=0x94, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0xa9}, {.addr=0x19ac, .value=0x24}, {.addr=0x19ad, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x19ae, .a=0xa1, .x=0xb3, .y=0xe3, .sp=0x94, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0xa9}, {.addr=0x19ac, .value=0x24}, {.addr=0x19ad, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x19ac, .value=0x24, .type=IO_READ},
        {.addr=0x19ad, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0108) {
    const struct CPU_State initial_cpu = {.pc=0x388d, .a=0x16, .x=0x34, .y=0x10, .sp=0x94, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xcb}, {.addr=0x388d, .value=0x24}, {.addr=0x388e, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x388f, .a=0x02, .x=0x34, .y=0x10, .sp=0x94, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xcb}, {.addr=0x388d, .value=0x24}, {.addr=0x388e, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x388d, .value=0x24, .type=IO_READ},
        {.addr=0x388e, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0109) {
    const struct CPU_State initial_cpu = {.pc=0xf501, .a=0x4c, .x=0xa5, .y=0xb3, .sp=0x5d, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x5a}, {.addr=0xf501, .value=0x24}, {.addr=0xf502, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xf503, .a=0x48, .x=0xa5, .y=0xb3, .sp=0x5d, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x5a}, {.addr=0xf501, .value=0x24}, {.addr=0xf502, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf501, .value=0x24, .type=IO_READ},
        {.addr=0xf502, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_010A) {
    const struct CPU_State initial_cpu = {.pc=0x8f44, .a=0x3e, .x=0x41, .y=0x8c, .sp=0xb4, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x1c}, {.addr=0x8f44, .value=0x24}, {.addr=0x8f45, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x8f46, .a=0x1c, .x=0x41, .y=0x8c, .sp=0xb4, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x1c}, {.addr=0x8f44, .value=0x24}, {.addr=0x8f45, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f44, .value=0x24, .type=IO_READ},
        {.addr=0x8f45, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_010B) {
    const struct CPU_State initial_cpu = {.pc=0x562d, .a=0x9c, .x=0x97, .y=0xb8, .sp=0x5f, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x7e}, {.addr=0x562d, .value=0x24}, {.addr=0x562e, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x562f, .a=0x1c, .x=0x97, .y=0xb8, .sp=0x5f, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x7e}, {.addr=0x562d, .value=0x24}, {.addr=0x562e, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x562d, .value=0x24, .type=IO_READ},
        {.addr=0x562e, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_010C) {
    const struct CPU_State initial_cpu = {.pc=0xdb48, .a=0x70, .x=0x5e, .y=0x42, .sp=0xd6, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0xe1}, {.addr=0xdb48, .value=0x24}, {.addr=0xdb49, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xdb4a, .a=0x60, .x=0x5e, .y=0x42, .sp=0xd6, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0xe1}, {.addr=0xdb48, .value=0x24}, {.addr=0xdb49, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb48, .value=0x24, .type=IO_READ},
        {.addr=0xdb49, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_010D) {
    const struct CPU_State initial_cpu = {.pc=0xb81b, .a=0x0b, .x=0xad, .y=0x29, .sp=0x95, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x1a}, {.addr=0xb81b, .value=0x24}, {.addr=0xb81c, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xb81d, .a=0x0a, .x=0xad, .y=0x29, .sp=0x95, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x1a}, {.addr=0xb81b, .value=0x24}, {.addr=0xb81c, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xb81b, .value=0x24, .type=IO_READ},
        {.addr=0xb81c, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_010E) {
    const struct CPU_State initial_cpu = {.pc=0xdb62, .a=0x17, .x=0x65, .y=0x7d, .sp=0x22, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xfa}, {.addr=0xdb62, .value=0x24}, {.addr=0xdb63, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xdb64, .a=0x12, .x=0x65, .y=0x7d, .sp=0x22, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xfa}, {.addr=0xdb62, .value=0x24}, {.addr=0xdb63, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb62, .value=0x24, .type=IO_READ},
        {.addr=0xdb63, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_010F) {
    const struct CPU_State initial_cpu = {.pc=0x8b80, .a=0xa6, .x=0x00, .y=0x97, .sp=0x3d, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x93}, {.addr=0x8b80, .value=0x24}, {.addr=0x8b81, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x8b82, .a=0x82, .x=0x00, .y=0x97, .sp=0x3d, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x93}, {.addr=0x8b80, .value=0x24}, {.addr=0x8b81, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b80, .value=0x24, .type=IO_READ},
        {.addr=0x8b81, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0110) {
    const struct CPU_State initial_cpu = {.pc=0xab3b, .a=0x09, .x=0x23, .y=0x7b, .sp=0xd7, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x94}, {.addr=0xab3b, .value=0x24}, {.addr=0xab3c, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xab3d, .a=0x00, .x=0x23, .y=0x7b, .sp=0xd7, .status=0x4e};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x94}, {.addr=0xab3b, .value=0x24}, {.addr=0xab3c, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xab3b, .value=0x24, .type=IO_READ},
        {.addr=0xab3c, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0111) {
    const struct CPU_State initial_cpu = {.pc=0x1454, .a=0xd7, .x=0x77, .y=0xe6, .sp=0xe1, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0xe5}, {.addr=0x1454, .value=0x24}, {.addr=0x1455, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x1456, .a=0xc5, .x=0x77, .y=0xe6, .sp=0xe1, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0xe5}, {.addr=0x1454, .value=0x24}, {.addr=0x1455, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x1454, .value=0x24, .type=IO_READ},
        {.addr=0x1455, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0112) {
    const struct CPU_State initial_cpu = {.pc=0xc07f, .a=0xe2, .x=0x48, .y=0x53, .sp=0x26, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x49}, {.addr=0xc07f, .value=0x24}, {.addr=0xc080, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xc081, .a=0x40, .x=0x48, .y=0x53, .sp=0x26, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x49}, {.addr=0xc07f, .value=0x24}, {.addr=0xc080, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc07f, .value=0x24, .type=IO_READ},
        {.addr=0xc080, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0113) {
    const struct CPU_State initial_cpu = {.pc=0x77d4, .a=0x76, .x=0x48, .y=0x49, .sp=0x5f, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x4d}, {.addr=0x77d4, .value=0x24}, {.addr=0x77d5, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x77d6, .a=0x44, .x=0x48, .y=0x49, .sp=0x5f, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x4d}, {.addr=0x77d4, .value=0x24}, {.addr=0x77d5, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x77d4, .value=0x24, .type=IO_READ},
        {.addr=0x77d5, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0114) {
    const struct CPU_State initial_cpu = {.pc=0x8d58, .a=0xcc, .x=0x94, .y=0x44, .sp=0xb8, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x70}, {.addr=0x8d58, .value=0x24}, {.addr=0x8d59, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x8d5a, .a=0x40, .x=0x94, .y=0x44, .sp=0xb8, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x70}, {.addr=0x8d58, .value=0x24}, {.addr=0x8d59, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d58, .value=0x24, .type=IO_READ},
        {.addr=0x8d59, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0115) {
    const struct CPU_State initial_cpu = {.pc=0x14ba, .a=0x69, .x=0x54, .y=0xe8, .sp=0x6c, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x2c}, {.addr=0x14ba, .value=0x24}, {.addr=0x14bb, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x14bc, .a=0x28, .x=0x54, .y=0xe8, .sp=0x6c, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x2c}, {.addr=0x14ba, .value=0x24}, {.addr=0x14bb, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x14ba, .value=0x24, .type=IO_READ},
        {.addr=0x14bb, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0116) {
    const struct CPU_State initial_cpu = {.pc=0x557f, .a=0xe9, .x=0x5e, .y=0xe7, .sp=0xb1, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x81}, {.addr=0x557f, .value=0x24}, {.addr=0x5580, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x5581, .a=0x81, .x=0x5e, .y=0xe7, .sp=0xb1, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x81}, {.addr=0x557f, .value=0x24}, {.addr=0x5580, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x557f, .value=0x24, .type=IO_READ},
        {.addr=0x5580, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0117) {
    const struct CPU_State initial_cpu = {.pc=0xe0d1, .a=0xbf, .x=0xdc, .y=0xb7, .sp=0x5f, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0xe6}, {.addr=0xe0d1, .value=0x24}, {.addr=0xe0d2, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xe0d3, .a=0xa6, .x=0xdc, .y=0xb7, .sp=0x5f, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0xe6}, {.addr=0xe0d1, .value=0x24}, {.addr=0xe0d2, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0d1, .value=0x24, .type=IO_READ},
        {.addr=0xe0d2, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0118) {
    const struct CPU_State initial_cpu = {.pc=0x087c, .a=0xd4, .x=0x93, .y=0xb9, .sp=0xd1, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x4a}, {.addr=0x087c, .value=0x24}, {.addr=0x087d, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x087e, .a=0x40, .x=0x93, .y=0xb9, .sp=0xd1, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x4a}, {.addr=0x087c, .value=0x24}, {.addr=0x087d, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x087c, .value=0x24, .type=IO_READ},
        {.addr=0x087d, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0119) {
    const struct CPU_State initial_cpu = {.pc=0x0af3, .a=0x6e, .x=0x7b, .y=0x0e, .sp=0x4e, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0x95}, {.addr=0x0af3, .value=0x24}, {.addr=0x0af4, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x0af5, .a=0x04, .x=0x7b, .y=0x0e, .sp=0x4e, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0x95}, {.addr=0x0af3, .value=0x24}, {.addr=0x0af4, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0af3, .value=0x24, .type=IO_READ},
        {.addr=0x0af4, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_011A) {
    const struct CPU_State initial_cpu = {.pc=0xb0a1, .a=0x7c, .x=0x06, .y=0x0c, .sp=0xe4, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x46}, {.addr=0xb0a1, .value=0x24}, {.addr=0xb0a2, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xb0a3, .a=0x44, .x=0x06, .y=0x0c, .sp=0xe4, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x46}, {.addr=0xb0a1, .value=0x24}, {.addr=0xb0a2, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0a1, .value=0x24, .type=IO_READ},
        {.addr=0xb0a2, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_011B) {
    const struct CPU_State initial_cpu = {.pc=0xb468, .a=0x68, .x=0xcc, .y=0x42, .sp=0x45, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x62}, {.addr=0xb468, .value=0x24}, {.addr=0xb469, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xb46a, .a=0x60, .x=0xcc, .y=0x42, .sp=0x45, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x62}, {.addr=0xb468, .value=0x24}, {.addr=0xb469, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb468, .value=0x24, .type=IO_READ},
        {.addr=0xb469, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_011C) {
    const struct CPU_State initial_cpu = {.pc=0x497a, .a=0xfc, .x=0x3a, .y=0x5a, .sp=0xf2, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xfa}, {.addr=0x497a, .value=0x24}, {.addr=0x497b, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x497c, .a=0xf8, .x=0x3a, .y=0x5a, .sp=0xf2, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xfa}, {.addr=0x497a, .value=0x24}, {.addr=0x497b, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x497a, .value=0x24, .type=IO_READ},
        {.addr=0x497b, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_011D) {
    const struct CPU_State initial_cpu = {.pc=0xc52c, .a=0x0b, .x=0x8e, .y=0x6c, .sp=0xb2, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x03}, {.addr=0xc52c, .value=0x24}, {.addr=0xc52d, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xc52e, .a=0x03, .x=0x8e, .y=0x6c, .sp=0xb2, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x03}, {.addr=0xc52c, .value=0x24}, {.addr=0xc52d, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xc52c, .value=0x24, .type=IO_READ},
        {.addr=0xc52d, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_011E) {
    const struct CPU_State initial_cpu = {.pc=0xb404, .a=0x0d, .x=0x02, .y=0xda, .sp=0x2d, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x7e}, {.addr=0xb404, .value=0x24}, {.addr=0xb405, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xb406, .a=0x0c, .x=0x02, .y=0xda, .sp=0x2d, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x7e}, {.addr=0xb404, .value=0x24}, {.addr=0xb405, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb404, .value=0x24, .type=IO_READ},
        {.addr=0xb405, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_011F) {
    const struct CPU_State initial_cpu = {.pc=0x2929, .a=0x34, .x=0x0b, .y=0xa8, .sp=0xb5, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x99}, {.addr=0x2929, .value=0x24}, {.addr=0x292a, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x292b, .a=0x10, .x=0x0b, .y=0xa8, .sp=0xb5, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x99}, {.addr=0x2929, .value=0x24}, {.addr=0x292a, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2929, .value=0x24, .type=IO_READ},
        {.addr=0x292a, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0120) {
    const struct CPU_State initial_cpu = {.pc=0x85da, .a=0xa7, .x=0xe0, .y=0xfd, .sp=0x61, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0xa1}, {.addr=0x85da, .value=0x24}, {.addr=0x85db, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x85dc, .a=0xa1, .x=0xe0, .y=0xfd, .sp=0x61, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0xa1}, {.addr=0x85da, .value=0x24}, {.addr=0x85db, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x85da, .value=0x24, .type=IO_READ},
        {.addr=0x85db, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0121) {
    const struct CPU_State initial_cpu = {.pc=0x3c9e, .a=0xaa, .x=0x63, .y=0x8d, .sp=0xba, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xa4}, {.addr=0x3c9e, .value=0x24}, {.addr=0x3c9f, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x3ca0, .a=0xa0, .x=0x63, .y=0x8d, .sp=0xba, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xa4}, {.addr=0x3c9e, .value=0x24}, {.addr=0x3c9f, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c9e, .value=0x24, .type=IO_READ},
        {.addr=0x3c9f, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0122) {
    const struct CPU_State initial_cpu = {.pc=0xded0, .a=0x12, .x=0xd3, .y=0xbf, .sp=0x71, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x23}, {.addr=0xded0, .value=0x24}, {.addr=0xded1, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xded2, .a=0x02, .x=0xd3, .y=0xbf, .sp=0x71, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x23}, {.addr=0xded0, .value=0x24}, {.addr=0xded1, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xded0, .value=0x24, .type=IO_READ},
        {.addr=0xded1, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0123) {
    const struct CPU_State initial_cpu = {.pc=0x6fd9, .a=0xb9, .x=0x91, .y=0x63, .sp=0x13, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x5d}, {.addr=0x6fd9, .value=0x24}, {.addr=0x6fda, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x6fdb, .a=0x19, .x=0x91, .y=0x63, .sp=0x13, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x5d}, {.addr=0x6fd9, .value=0x24}, {.addr=0x6fda, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fd9, .value=0x24, .type=IO_READ},
        {.addr=0x6fda, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0124) {
    const struct CPU_State initial_cpu = {.pc=0x55f7, .a=0x53, .x=0x94, .y=0x03, .sp=0x5e, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x47}, {.addr=0x55f7, .value=0x24}, {.addr=0x55f8, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x55f9, .a=0x43, .x=0x94, .y=0x03, .sp=0x5e, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x47}, {.addr=0x55f7, .value=0x24}, {.addr=0x55f8, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x55f7, .value=0x24, .type=IO_READ},
        {.addr=0x55f8, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0125) {
    const struct CPU_State initial_cpu = {.pc=0x8f51, .a=0x0c, .x=0x50, .y=0xa5, .sp=0x99, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0xed}, {.addr=0x8f51, .value=0x24}, {.addr=0x8f52, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x8f53, .a=0x0c, .x=0x50, .y=0xa5, .sp=0x99, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0xed}, {.addr=0x8f51, .value=0x24}, {.addr=0x8f52, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f51, .value=0x24, .type=IO_READ},
        {.addr=0x8f52, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0126) {
    const struct CPU_State initial_cpu = {.pc=0xa7c8, .a=0x58, .x=0x14, .y=0xbe, .sp=0xae, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0xc6}, {.addr=0xa7c8, .value=0x24}, {.addr=0xa7c9, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xa7ca, .a=0x40, .x=0x14, .y=0xbe, .sp=0xae, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0xc6}, {.addr=0xa7c8, .value=0x24}, {.addr=0xa7c9, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7c8, .value=0x24, .type=IO_READ},
        {.addr=0xa7c9, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0127) {
    const struct CPU_State initial_cpu = {.pc=0x0159, .a=0xde, .x=0x9a, .y=0x63, .sp=0xec, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x24}, {.addr=0x015a, .value=0x64}, {.addr=0x0164, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x015b, .a=0xd8, .x=0x9a, .y=0x63, .sp=0xec, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x24}, {.addr=0x015a, .value=0x64}, {.addr=0x0164, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0159, .value=0x24, .type=IO_READ},
        {.addr=0x015a, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0128) {
    const struct CPU_State initial_cpu = {.pc=0xc87d, .a=0x42, .x=0x22, .y=0xb0, .sp=0xd7, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x0b}, {.addr=0xc87d, .value=0x24}, {.addr=0xc87e, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xc87f, .a=0x02, .x=0x22, .y=0xb0, .sp=0xd7, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x0b}, {.addr=0xc87d, .value=0x24}, {.addr=0xc87e, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xc87d, .value=0x24, .type=IO_READ},
        {.addr=0xc87e, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0129) {
    const struct CPU_State initial_cpu = {.pc=0x37f8, .a=0x02, .x=0x78, .y=0xd0, .sp=0x89, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x12}, {.addr=0x37f8, .value=0x24}, {.addr=0x37f9, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x37fa, .a=0x02, .x=0x78, .y=0xd0, .sp=0x89, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x12}, {.addr=0x37f8, .value=0x24}, {.addr=0x37f9, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x37f8, .value=0x24, .type=IO_READ},
        {.addr=0x37f9, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_012A) {
    const struct CPU_State initial_cpu = {.pc=0x5c03, .a=0x50, .x=0x12, .y=0x55, .sp=0x27, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x63}, {.addr=0x5c03, .value=0x24}, {.addr=0x5c04, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x5c05, .a=0x40, .x=0x12, .y=0x55, .sp=0x27, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x63}, {.addr=0x5c03, .value=0x24}, {.addr=0x5c04, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c03, .value=0x24, .type=IO_READ},
        {.addr=0x5c04, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_012B) {
    const struct CPU_State initial_cpu = {.pc=0xb77a, .a=0x91, .x=0x12, .y=0x2a, .sp=0xfc, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0xf1}, {.addr=0xb77a, .value=0x24}, {.addr=0xb77b, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xb77c, .a=0x91, .x=0x12, .y=0x2a, .sp=0xfc, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0xf1}, {.addr=0xb77a, .value=0x24}, {.addr=0xb77b, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xb77a, .value=0x24, .type=IO_READ},
        {.addr=0xb77b, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_012C) {
    const struct CPU_State initial_cpu = {.pc=0x018f, .a=0x51, .x=0xaf, .y=0x22, .sp=0x86, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x24}, {.addr=0x0190, .value=0xee}, {.addr=0x01ee, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x0191, .a=0x00, .x=0xaf, .y=0x22, .sp=0x86, .status=0x33};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x24}, {.addr=0x0190, .value=0xee}, {.addr=0x01ee, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x018f, .value=0x24, .type=IO_READ},
        {.addr=0x0190, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_012D) {
    const struct CPU_State initial_cpu = {.pc=0x7d8b, .a=0xee, .x=0xa2, .y=0xca, .sp=0x38, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xca}, {.addr=0x7d8b, .value=0x24}, {.addr=0x7d8c, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x7d8d, .a=0xca, .x=0xa2, .y=0xca, .sp=0x38, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xca}, {.addr=0x7d8b, .value=0x24}, {.addr=0x7d8c, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d8b, .value=0x24, .type=IO_READ},
        {.addr=0x7d8c, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_012E) {
    const struct CPU_State initial_cpu = {.pc=0x3543, .a=0xb7, .x=0x12, .y=0x72, .sp=0xba, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x86}, {.addr=0x3543, .value=0x24}, {.addr=0x3544, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x3545, .a=0x86, .x=0x12, .y=0x72, .sp=0xba, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x86}, {.addr=0x3543, .value=0x24}, {.addr=0x3544, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x3543, .value=0x24, .type=IO_READ},
        {.addr=0x3544, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0130) {
    const struct CPU_State initial_cpu = {.pc=0x4849, .a=0x65, .x=0x2e, .y=0x33, .sp=0x21, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x2e}, {.addr=0x4849, .value=0x24}, {.addr=0x484a, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x484b, .a=0x24, .x=0x2e, .y=0x33, .sp=0x21, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x2e}, {.addr=0x4849, .value=0x24}, {.addr=0x484a, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x4849, .value=0x24, .type=IO_READ},
        {.addr=0x484a, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0131) {
    const struct CPU_State initial_cpu = {.pc=0x649f, .a=0x46, .x=0x1d, .y=0x2a, .sp=0x33, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xb3}, {.addr=0x649f, .value=0x24}, {.addr=0x64a0, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x64a1, .a=0x02, .x=0x1d, .y=0x2a, .sp=0x33, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xb3}, {.addr=0x649f, .value=0x24}, {.addr=0x64a0, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x649f, .value=0x24, .type=IO_READ},
        {.addr=0x64a0, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0132) {
    const struct CPU_State initial_cpu = {.pc=0x3c36, .a=0x76, .x=0xae, .y=0x24, .sp=0x61, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x8a}, {.addr=0x3c36, .value=0x24}, {.addr=0x3c37, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x3c38, .a=0x02, .x=0xae, .y=0x24, .sp=0x61, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x8a}, {.addr=0x3c36, .value=0x24}, {.addr=0x3c37, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c36, .value=0x24, .type=IO_READ},
        {.addr=0x3c37, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0133) {
    const struct CPU_State initial_cpu = {.pc=0xc6d5, .a=0x54, .x=0x48, .y=0x73, .sp=0xe3, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0xc5}, {.addr=0xc6d5, .value=0x24}, {.addr=0xc6d6, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0xc6d7, .a=0x44, .x=0x48, .y=0x73, .sp=0xe3, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0xc5}, {.addr=0xc6d5, .value=0x24}, {.addr=0xc6d6, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6d5, .value=0x24, .type=IO_READ},
        {.addr=0xc6d6, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0134) {
    const struct CPU_State initial_cpu = {.pc=0x20f7, .a=0x42, .x=0x70, .y=0xeb, .sp=0xc8, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0xe0}, {.addr=0x20f7, .value=0x24}, {.addr=0x20f8, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x20f9, .a=0x40, .x=0x70, .y=0xeb, .sp=0xc8, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0xe0}, {.addr=0x20f7, .value=0x24}, {.addr=0x20f8, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x20f7, .value=0x24, .type=IO_READ},
        {.addr=0x20f8, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0135) {
    const struct CPU_State initial_cpu = {.pc=0x429e, .a=0xd5, .x=0xba, .y=0xc0, .sp=0x0b, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xe9}, {.addr=0x429e, .value=0x24}, {.addr=0x429f, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x42a0, .a=0xc1, .x=0xba, .y=0xc0, .sp=0x0b, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xe9}, {.addr=0x429e, .value=0x24}, {.addr=0x429f, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x429e, .value=0x24, .type=IO_READ},
        {.addr=0x429f, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0136) {
    const struct CPU_State initial_cpu = {.pc=0x5695, .a=0xbf, .x=0x9a, .y=0xc5, .sp=0x51, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x05}, {.addr=0x5695, .value=0x24}, {.addr=0x5696, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x5697, .a=0x05, .x=0x9a, .y=0xc5, .sp=0x51, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x05}, {.addr=0x5695, .value=0x24}, {.addr=0x5696, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x5695, .value=0x24, .type=IO_READ},
        {.addr=0x5696, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0137) {
    const struct CPU_State initial_cpu = {.pc=0xdfb9, .a=0x59, .x=0xd4, .y=0x0b, .sp=0x91, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x27}, {.addr=0xdfb9, .value=0x24}, {.addr=0xdfba, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xdfbb, .a=0x01, .x=0xd4, .y=0x0b, .sp=0x91, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x27}, {.addr=0xdfb9, .value=0x24}, {.addr=0xdfba, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfb9, .value=0x24, .type=IO_READ},
        {.addr=0xdfba, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0138) {
    const struct CPU_State initial_cpu = {.pc=0xd308, .a=0xef, .x=0xfe, .y=0x09, .sp=0x02, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xa1}, {.addr=0xd308, .value=0x24}, {.addr=0xd309, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xd30a, .a=0xa1, .x=0xfe, .y=0x09, .sp=0x02, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xa1}, {.addr=0xd308, .value=0x24}, {.addr=0xd309, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xd308, .value=0x24, .type=IO_READ},
        {.addr=0xd309, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0139) {
    const struct CPU_State initial_cpu = {.pc=0x38db, .a=0x84, .x=0xd3, .y=0xb0, .sp=0xe9, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0x80}, {.addr=0x38db, .value=0x24}, {.addr=0x38dc, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x38dd, .a=0x80, .x=0xd3, .y=0xb0, .sp=0xe9, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0x80}, {.addr=0x38db, .value=0x24}, {.addr=0x38dc, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x38db, .value=0x24, .type=IO_READ},
        {.addr=0x38dc, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_013A) {
    const struct CPU_State initial_cpu = {.pc=0x58cd, .a=0x31, .x=0x49, .y=0x2c, .sp=0x43, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0xed}, {.addr=0x58cd, .value=0x24}, {.addr=0x58ce, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x58cf, .a=0x21, .x=0x49, .y=0x2c, .sp=0x43, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0xed}, {.addr=0x58cd, .value=0x24}, {.addr=0x58ce, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x58cd, .value=0x24, .type=IO_READ},
        {.addr=0x58ce, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_013B) {
    const struct CPU_State initial_cpu = {.pc=0xc4c2, .a=0xa1, .x=0xf2, .y=0x62, .sp=0xf7, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x47}, {.addr=0xc4c2, .value=0x24}, {.addr=0xc4c3, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xc4c4, .a=0x01, .x=0xf2, .y=0x62, .sp=0xf7, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x47}, {.addr=0xc4c2, .value=0x24}, {.addr=0xc4c3, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4c2, .value=0x24, .type=IO_READ},
        {.addr=0xc4c3, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_013C) {
    const struct CPU_State initial_cpu = {.pc=0xf6e1, .a=0x34, .x=0x16, .y=0xcf, .sp=0x5e, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x7d}, {.addr=0xf6e1, .value=0x24}, {.addr=0xf6e2, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xf6e3, .a=0x34, .x=0x16, .y=0xcf, .sp=0x5e, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x7d}, {.addr=0xf6e1, .value=0x24}, {.addr=0xf6e2, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6e1, .value=0x24, .type=IO_READ},
        {.addr=0xf6e2, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_013D) {
    const struct CPU_State initial_cpu = {.pc=0xea7c, .a=0xe8, .x=0x4d, .y=0x3b, .sp=0xe1, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x1d}, {.addr=0xea7c, .value=0x24}, {.addr=0xea7d, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xea7e, .a=0x08, .x=0x4d, .y=0x3b, .sp=0xe1, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x1d}, {.addr=0xea7c, .value=0x24}, {.addr=0xea7d, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xea7c, .value=0x24, .type=IO_READ},
        {.addr=0xea7d, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_013E) {
    const struct CPU_State initial_cpu = {.pc=0xf96f, .a=0x66, .x=0x4f, .y=0xb0, .sp=0xd0, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x9e}, {.addr=0xf96f, .value=0x24}, {.addr=0xf970, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xf971, .a=0x06, .x=0x4f, .y=0xb0, .sp=0xd0, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x9e}, {.addr=0xf96f, .value=0x24}, {.addr=0xf970, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf96f, .value=0x24, .type=IO_READ},
        {.addr=0xf970, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_013F) {
    const struct CPU_State initial_cpu = {.pc=0x00e4, .a=0x18, .x=0x7d, .y=0x42, .sp=0xac, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x5b}, {.addr=0x00e4, .value=0x24}, {.addr=0x00e5, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x00e6, .a=0x18, .x=0x7d, .y=0x42, .sp=0xac, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x5b}, {.addr=0x00e4, .value=0x24}, {.addr=0x00e5, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x00e4, .value=0x24, .type=IO_READ},
        {.addr=0x00e5, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0140) {
    const struct CPU_State initial_cpu = {.pc=0x5436, .a=0x01, .x=0xa1, .y=0x8b, .sp=0x2d, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x9a}, {.addr=0x5436, .value=0x24}, {.addr=0x5437, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x5438, .a=0x00, .x=0xa1, .y=0x8b, .sp=0x2d, .status=0x1a};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x9a}, {.addr=0x5436, .value=0x24}, {.addr=0x5437, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5436, .value=0x24, .type=IO_READ},
        {.addr=0x5437, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0142) {
    const struct CPU_State initial_cpu = {.pc=0xe324, .a=0x03, .x=0xa9, .y=0xd3, .sp=0xa6, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x4a}, {.addr=0xe324, .value=0x24}, {.addr=0xe325, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xe326, .a=0x02, .x=0xa9, .y=0xd3, .sp=0xa6, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x4a}, {.addr=0xe324, .value=0x24}, {.addr=0xe325, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xe324, .value=0x24, .type=IO_READ},
        {.addr=0xe325, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0143) {
    const struct CPU_State initial_cpu = {.pc=0xdbcd, .a=0x2a, .x=0x30, .y=0x8c, .sp=0x99, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0xc8}, {.addr=0xdbcd, .value=0x24}, {.addr=0xdbce, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xdbcf, .a=0x08, .x=0x30, .y=0x8c, .sp=0x99, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0xc8}, {.addr=0xdbcd, .value=0x24}, {.addr=0xdbce, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbcd, .value=0x24, .type=IO_READ},
        {.addr=0xdbce, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0144) {
    const struct CPU_State initial_cpu = {.pc=0x390f, .a=0x21, .x=0x60, .y=0xf6, .sp=0x73, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0xe2}, {.addr=0x390f, .value=0x24}, {.addr=0x3910, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x3911, .a=0x20, .x=0x60, .y=0xf6, .sp=0x73, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0xe2}, {.addr=0x390f, .value=0x24}, {.addr=0x3910, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x390f, .value=0x24, .type=IO_READ},
        {.addr=0x3910, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0145) {
    const struct CPU_State initial_cpu = {.pc=0x36e6, .a=0x76, .x=0x1b, .y=0x4d, .sp=0x68, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x26}, {.addr=0x36e6, .value=0x24}, {.addr=0x36e7, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x36e8, .a=0x26, .x=0x1b, .y=0x4d, .sp=0x68, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x26}, {.addr=0x36e6, .value=0x24}, {.addr=0x36e7, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x36e6, .value=0x24, .type=IO_READ},
        {.addr=0x36e7, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0146) {
    const struct CPU_State initial_cpu = {.pc=0x6e7d, .a=0x5e, .x=0x89, .y=0x28, .sp=0x4a, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x7b}, {.addr=0x6e7d, .value=0x24}, {.addr=0x6e7e, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x6e7f, .a=0x5a, .x=0x89, .y=0x28, .sp=0x4a, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x7b}, {.addr=0x6e7d, .value=0x24}, {.addr=0x6e7e, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e7d, .value=0x24, .type=IO_READ},
        {.addr=0x6e7e, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0147) {
    const struct CPU_State initial_cpu = {.pc=0xd5bf, .a=0x8b, .x=0x79, .y=0xbe, .sp=0xa4, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0xd1}, {.addr=0xd5bf, .value=0x24}, {.addr=0xd5c0, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xd5c1, .a=0x81, .x=0x79, .y=0xbe, .sp=0xa4, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0xd1}, {.addr=0xd5bf, .value=0x24}, {.addr=0xd5c0, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xd5bf, .value=0x24, .type=IO_READ},
        {.addr=0xd5c0, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0148) {
    const struct CPU_State initial_cpu = {.pc=0xa502, .a=0x8d, .x=0x69, .y=0x55, .sp=0x62, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x92}, {.addr=0xa502, .value=0x24}, {.addr=0xa503, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xa504, .a=0x80, .x=0x69, .y=0x55, .sp=0x62, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x92}, {.addr=0xa502, .value=0x24}, {.addr=0xa503, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xa502, .value=0x24, .type=IO_READ},
        {.addr=0xa503, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_014A) {
    const struct CPU_State initial_cpu = {.pc=0xee97, .a=0x14, .x=0x8c, .y=0x83, .sp=0x0c, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x2f}, {.addr=0xee97, .value=0x24}, {.addr=0xee98, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xee99, .a=0x04, .x=0x8c, .y=0x83, .sp=0x0c, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x2f}, {.addr=0xee97, .value=0x24}, {.addr=0xee98, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xee97, .value=0x24, .type=IO_READ},
        {.addr=0xee98, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_014B) {
    const struct CPU_State initial_cpu = {.pc=0xba1e, .a=0x68, .x=0x8d, .y=0x12, .sp=0xce, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x34}, {.addr=0xba1e, .value=0x24}, {.addr=0xba1f, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xba20, .a=0x20, .x=0x8d, .y=0x12, .sp=0xce, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x34}, {.addr=0xba1e, .value=0x24}, {.addr=0xba1f, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xba1e, .value=0x24, .type=IO_READ},
        {.addr=0xba1f, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_014C) {
    const struct CPU_State initial_cpu = {.pc=0x4650, .a=0x4e, .x=0x0a, .y=0x86, .sp=0x4d, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x44}, {.addr=0x4650, .value=0x24}, {.addr=0x4651, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x4652, .a=0x44, .x=0x0a, .y=0x86, .sp=0x4d, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x44}, {.addr=0x4650, .value=0x24}, {.addr=0x4651, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x4650, .value=0x24, .type=IO_READ},
        {.addr=0x4651, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_014D) {
    const struct CPU_State initial_cpu = {.pc=0xb1cc, .a=0x67, .x=0x0e, .y=0x07, .sp=0x64, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x6d}, {.addr=0xb1cc, .value=0x24}, {.addr=0xb1cd, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xb1ce, .a=0x65, .x=0x0e, .y=0x07, .sp=0x64, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x6d}, {.addr=0xb1cc, .value=0x24}, {.addr=0xb1cd, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1cc, .value=0x24, .type=IO_READ},
        {.addr=0xb1cd, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_014E) {
    const struct CPU_State initial_cpu = {.pc=0xa720, .a=0xc8, .x=0xce, .y=0x1e, .sp=0x65, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0x72}, {.addr=0xa720, .value=0x24}, {.addr=0xa721, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xa722, .a=0x40, .x=0xce, .y=0x1e, .sp=0x65, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0x72}, {.addr=0xa720, .value=0x24}, {.addr=0xa721, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xa720, .value=0x24, .type=IO_READ},
        {.addr=0xa721, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_014F) {
    const struct CPU_State initial_cpu = {.pc=0x50ed, .a=0xe2, .x=0x0f, .y=0xae, .sp=0xdc, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x88}, {.addr=0x50ed, .value=0x24}, {.addr=0x50ee, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x50ef, .a=0x80, .x=0x0f, .y=0xae, .sp=0xdc, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x88}, {.addr=0x50ed, .value=0x24}, {.addr=0x50ee, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x50ed, .value=0x24, .type=IO_READ},
        {.addr=0x50ee, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0150) {
    const struct CPU_State initial_cpu = {.pc=0x7f59, .a=0xd6, .x=0x69, .y=0x4f, .sp=0x72, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xd9}, {.addr=0x7f59, .value=0x24}, {.addr=0x7f5a, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x7f5b, .a=0xd0, .x=0x69, .y=0x4f, .sp=0x72, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xd9}, {.addr=0x7f59, .value=0x24}, {.addr=0x7f5a, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f59, .value=0x24, .type=IO_READ},
        {.addr=0x7f5a, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0151) {
    const struct CPU_State initial_cpu = {.pc=0xd9b7, .a=0xcc, .x=0x13, .y=0xf7, .sp=0xc1, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0x0c}, {.addr=0xd9b7, .value=0x24}, {.addr=0xd9b8, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xd9b9, .a=0x0c, .x=0x13, .y=0xf7, .sp=0xc1, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0x0c}, {.addr=0xd9b7, .value=0x24}, {.addr=0xd9b8, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9b7, .value=0x24, .type=IO_READ},
        {.addr=0xd9b8, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0152) {
    const struct CPU_State initial_cpu = {.pc=0xbf0e, .a=0x6b, .x=0xd4, .y=0x38, .sp=0xe7, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x9a}, {.addr=0xbf0e, .value=0x24}, {.addr=0xbf0f, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xbf10, .a=0x0a, .x=0xd4, .y=0x38, .sp=0xe7, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x9a}, {.addr=0xbf0e, .value=0x24}, {.addr=0xbf0f, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf0e, .value=0x24, .type=IO_READ},
        {.addr=0xbf0f, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0153) {
    const struct CPU_State initial_cpu = {.pc=0x21ef, .a=0x26, .x=0x8c, .y=0xe9, .sp=0x9c, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0x77}, {.addr=0x21ef, .value=0x24}, {.addr=0x21f0, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x21f1, .a=0x26, .x=0x8c, .y=0xe9, .sp=0x9c, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0x77}, {.addr=0x21ef, .value=0x24}, {.addr=0x21f0, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x21ef, .value=0x24, .type=IO_READ},
        {.addr=0x21f0, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0154) {
    const struct CPU_State initial_cpu = {.pc=0x54ab, .a=0x99, .x=0xe6, .y=0xb7, .sp=0xb3, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x09}, {.addr=0x54ab, .value=0x24}, {.addr=0x54ac, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x54ad, .a=0x09, .x=0xe6, .y=0xb7, .sp=0xb3, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x09}, {.addr=0x54ab, .value=0x24}, {.addr=0x54ac, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x54ab, .value=0x24, .type=IO_READ},
        {.addr=0x54ac, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0155) {
    const struct CPU_State initial_cpu = {.pc=0x2fab, .a=0x35, .x=0x70, .y=0x24, .sp=0x71, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0xa7}, {.addr=0x2fab, .value=0x24}, {.addr=0x2fac, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x2fad, .a=0x25, .x=0x70, .y=0x24, .sp=0x71, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0xa7}, {.addr=0x2fab, .value=0x24}, {.addr=0x2fac, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x2fab, .value=0x24, .type=IO_READ},
        {.addr=0x2fac, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0156) {
    const struct CPU_State initial_cpu = {.pc=0x18b0, .a=0x46, .x=0x8b, .y=0x3c, .sp=0x2e, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xba}, {.addr=0x18b0, .value=0x24}, {.addr=0x18b1, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x18b2, .a=0x02, .x=0x8b, .y=0x3c, .sp=0x2e, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xba}, {.addr=0x18b0, .value=0x24}, {.addr=0x18b1, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x18b0, .value=0x24, .type=IO_READ},
        {.addr=0x18b1, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0157) {
    const struct CPU_State initial_cpu = {.pc=0x0b8d, .a=0xf5, .x=0x48, .y=0xd9, .sp=0x60, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x13}, {.addr=0x0b8d, .value=0x24}, {.addr=0x0b8e, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x0b8f, .a=0x11, .x=0x48, .y=0xd9, .sp=0x60, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x13}, {.addr=0x0b8d, .value=0x24}, {.addr=0x0b8e, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b8d, .value=0x24, .type=IO_READ},
        {.addr=0x0b8e, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0158) {
    const struct CPU_State initial_cpu = {.pc=0x5ada, .a=0x12, .x=0x34, .y=0x8e, .sp=0xd1, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x8d}, {.addr=0x5ada, .value=0x24}, {.addr=0x5adb, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x5adc, .a=0x00, .x=0x34, .y=0x8e, .sp=0xd1, .status=0x5a};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x8d}, {.addr=0x5ada, .value=0x24}, {.addr=0x5adb, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ada, .value=0x24, .type=IO_READ},
        {.addr=0x5adb, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0159) {
    const struct CPU_State initial_cpu = {.pc=0x0dea, .a=0xe5, .x=0x0b, .y=0x58, .sp=0xd7, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x42}, {.addr=0x0dea, .value=0x24}, {.addr=0x0deb, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x0dec, .a=0x40, .x=0x0b, .y=0x58, .sp=0xd7, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x42}, {.addr=0x0dea, .value=0x24}, {.addr=0x0deb, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dea, .value=0x24, .type=IO_READ},
        {.addr=0x0deb, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_015A) {
    const struct CPU_State initial_cpu = {.pc=0x1db6, .a=0xaa, .x=0x6f, .y=0x3d, .sp=0x97, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x9b}, {.addr=0x1db6, .value=0x24}, {.addr=0x1db7, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x1db8, .a=0x8a, .x=0x6f, .y=0x3d, .sp=0x97, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x9b}, {.addr=0x1db6, .value=0x24}, {.addr=0x1db7, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x1db6, .value=0x24, .type=IO_READ},
        {.addr=0x1db7, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_015B) {
    const struct CPU_State initial_cpu = {.pc=0xb5cd, .a=0x54, .x=0x4c, .y=0x9d, .sp=0x06, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0x1d}, {.addr=0xb5cd, .value=0x24}, {.addr=0xb5ce, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xb5cf, .a=0x14, .x=0x4c, .y=0x9d, .sp=0x06, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0x1d}, {.addr=0xb5cd, .value=0x24}, {.addr=0xb5ce, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5cd, .value=0x24, .type=IO_READ},
        {.addr=0xb5ce, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_015C) {
    const struct CPU_State initial_cpu = {.pc=0x118a, .a=0x83, .x=0x46, .y=0x2c, .sp=0xca, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0x11}, {.addr=0x118a, .value=0x24}, {.addr=0x118b, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x118c, .a=0x01, .x=0x46, .y=0x2c, .sp=0xca, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0x11}, {.addr=0x118a, .value=0x24}, {.addr=0x118b, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x118a, .value=0x24, .type=IO_READ},
        {.addr=0x118b, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_015D) {
    const struct CPU_State initial_cpu = {.pc=0x5995, .a=0xfa, .x=0x8a, .y=0xdf, .sp=0xdf, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x48}, {.addr=0x5995, .value=0x24}, {.addr=0x5996, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x5997, .a=0x48, .x=0x8a, .y=0xdf, .sp=0xdf, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x48}, {.addr=0x5995, .value=0x24}, {.addr=0x5996, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x5995, .value=0x24, .type=IO_READ},
        {.addr=0x5996, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_015E) {
    const struct CPU_State initial_cpu = {.pc=0x2ad8, .a=0x71, .x=0xac, .y=0x8e, .sp=0x5c, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xf8}, {.addr=0x2ad8, .value=0x24}, {.addr=0x2ad9, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x2ada, .a=0x70, .x=0xac, .y=0x8e, .sp=0x5c, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xf8}, {.addr=0x2ad8, .value=0x24}, {.addr=0x2ad9, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ad8, .value=0x24, .type=IO_READ},
        {.addr=0x2ad9, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_015F) {
    const struct CPU_State initial_cpu = {.pc=0x9466, .a=0xf6, .x=0x54, .y=0x9b, .sp=0xd7, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0x1f}, {.addr=0x9466, .value=0x24}, {.addr=0x9467, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x9468, .a=0x16, .x=0x54, .y=0x9b, .sp=0xd7, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0x1f}, {.addr=0x9466, .value=0x24}, {.addr=0x9467, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9466, .value=0x24, .type=IO_READ},
        {.addr=0x9467, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0160) {
    const struct CPU_State initial_cpu = {.pc=0xd905, .a=0xec, .x=0x2b, .y=0xd9, .sp=0xd6, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x1d}, {.addr=0xd905, .value=0x24}, {.addr=0xd906, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xd907, .a=0x0c, .x=0x2b, .y=0xd9, .sp=0xd6, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x1d}, {.addr=0xd905, .value=0x24}, {.addr=0xd906, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xd905, .value=0x24, .type=IO_READ},
        {.addr=0xd906, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0161) {
    const struct CPU_State initial_cpu = {.pc=0x396f, .a=0x85, .x=0x1e, .y=0x42, .sp=0xef, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x68}, {.addr=0x396f, .value=0x24}, {.addr=0x3970, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x3971, .a=0x00, .x=0x1e, .y=0x42, .sp=0xef, .status=0x67};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x68}, {.addr=0x396f, .value=0x24}, {.addr=0x3970, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x396f, .value=0x24, .type=IO_READ},
        {.addr=0x3970, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0162) {
    const struct CPU_State initial_cpu = {.pc=0x7bc8, .a=0xec, .x=0xa6, .y=0xf9, .sp=0x70, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x0b}, {.addr=0x7bc8, .value=0x24}, {.addr=0x7bc9, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x7bca, .a=0x08, .x=0xa6, .y=0xf9, .sp=0x70, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x0b}, {.addr=0x7bc8, .value=0x24}, {.addr=0x7bc9, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bc8, .value=0x24, .type=IO_READ},
        {.addr=0x7bc9, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0163) {
    const struct CPU_State initial_cpu = {.pc=0x41ab, .a=0x4e, .x=0x70, .y=0xc1, .sp=0x13, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x8e}, {.addr=0x41ab, .value=0x24}, {.addr=0x41ac, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x41ad, .a=0x0e, .x=0x70, .y=0xc1, .sp=0x13, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x8e}, {.addr=0x41ab, .value=0x24}, {.addr=0x41ac, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x41ab, .value=0x24, .type=IO_READ},
        {.addr=0x41ac, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0164) {
    const struct CPU_State initial_cpu = {.pc=0x86d3, .a=0x67, .x=0x84, .y=0xef, .sp=0x35, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x31}, {.addr=0x86d3, .value=0x24}, {.addr=0x86d4, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x86d5, .a=0x21, .x=0x84, .y=0xef, .sp=0x35, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x31}, {.addr=0x86d3, .value=0x24}, {.addr=0x86d4, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x86d3, .value=0x24, .type=IO_READ},
        {.addr=0x86d4, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0165) {
    const struct CPU_State initial_cpu = {.pc=0x35f0, .a=0x43, .x=0x0c, .y=0x9f, .sp=0xb9, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0xc6}, {.addr=0x35f0, .value=0x24}, {.addr=0x35f1, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x35f2, .a=0x42, .x=0x0c, .y=0x9f, .sp=0xb9, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0xc6}, {.addr=0x35f0, .value=0x24}, {.addr=0x35f1, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x35f0, .value=0x24, .type=IO_READ},
        {.addr=0x35f1, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0166) {
    const struct CPU_State initial_cpu = {.pc=0xdce2, .a=0x6b, .x=0xd6, .y=0xad, .sp=0xf8, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0xb0}, {.addr=0xdce2, .value=0x24}, {.addr=0xdce3, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xdce4, .a=0x20, .x=0xd6, .y=0xad, .sp=0xf8, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0xb0}, {.addr=0xdce2, .value=0x24}, {.addr=0xdce3, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xdce2, .value=0x24, .type=IO_READ},
        {.addr=0xdce3, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0167) {
    const struct CPU_State initial_cpu = {.pc=0x0ce5, .a=0x33, .x=0x11, .y=0x41, .sp=0xa3, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x50}, {.addr=0x0ce5, .value=0x24}, {.addr=0x0ce6, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x0ce7, .a=0x10, .x=0x11, .y=0x41, .sp=0xa3, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x50}, {.addr=0x0ce5, .value=0x24}, {.addr=0x0ce6, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ce5, .value=0x24, .type=IO_READ},
        {.addr=0x0ce6, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0168) {
    const struct CPU_State initial_cpu = {.pc=0x0bbb, .a=0x65, .x=0x39, .y=0xe7, .sp=0xa6, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0x7c}, {.addr=0x0bbb, .value=0x24}, {.addr=0x0bbc, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x0bbd, .a=0x64, .x=0x39, .y=0xe7, .sp=0xa6, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0x7c}, {.addr=0x0bbb, .value=0x24}, {.addr=0x0bbc, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bbb, .value=0x24, .type=IO_READ},
        {.addr=0x0bbc, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0169) {
    const struct CPU_State initial_cpu = {.pc=0x485e, .a=0xdb, .x=0xc3, .y=0xf0, .sp=0xb0, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xd4}, {.addr=0x485e, .value=0x24}, {.addr=0x485f, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x4860, .a=0xd0, .x=0xc3, .y=0xf0, .sp=0xb0, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xd4}, {.addr=0x485e, .value=0x24}, {.addr=0x485f, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x485e, .value=0x24, .type=IO_READ},
        {.addr=0x485f, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_016A) {
    const struct CPU_State initial_cpu = {.pc=0xf891, .a=0xdc, .x=0x23, .y=0x39, .sp=0x6b, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0xbb}, {.addr=0xf891, .value=0x24}, {.addr=0xf892, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xf893, .a=0x98, .x=0x23, .y=0x39, .sp=0x6b, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0xbb}, {.addr=0xf891, .value=0x24}, {.addr=0xf892, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf891, .value=0x24, .type=IO_READ},
        {.addr=0xf892, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_016B) {
    const struct CPU_State initial_cpu = {.pc=0x575f, .a=0x79, .x=0xc2, .y=0xa8, .sp=0xf3, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xef}, {.addr=0x575f, .value=0x24}, {.addr=0x5760, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x5761, .a=0x69, .x=0xc2, .y=0xa8, .sp=0xf3, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xef}, {.addr=0x575f, .value=0x24}, {.addr=0x5760, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x575f, .value=0x24, .type=IO_READ},
        {.addr=0x5760, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_016C) {
    const struct CPU_State initial_cpu = {.pc=0xbac0, .a=0xf8, .x=0x35, .y=0x9a, .sp=0x28, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x8e}, {.addr=0xbac0, .value=0x24}, {.addr=0xbac1, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xbac2, .a=0x88, .x=0x35, .y=0x9a, .sp=0x28, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x8e}, {.addr=0xbac0, .value=0x24}, {.addr=0xbac1, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbac0, .value=0x24, .type=IO_READ},
        {.addr=0xbac1, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_016D) {
    const struct CPU_State initial_cpu = {.pc=0x4956, .a=0x0d, .x=0xf8, .y=0x6b, .sp=0x87, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xe4}, {.addr=0x4956, .value=0x24}, {.addr=0x4957, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x4958, .a=0x04, .x=0xf8, .y=0x6b, .sp=0x87, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xe4}, {.addr=0x4956, .value=0x24}, {.addr=0x4957, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x4956, .value=0x24, .type=IO_READ},
        {.addr=0x4957, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_016E) {
    const struct CPU_State initial_cpu = {.pc=0x9d64, .a=0x72, .x=0x26, .y=0x5c, .sp=0x5c, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x4d}, {.addr=0x9d64, .value=0x24}, {.addr=0x9d65, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x9d66, .a=0x40, .x=0x26, .y=0x5c, .sp=0x5c, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x4d}, {.addr=0x9d64, .value=0x24}, {.addr=0x9d65, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d64, .value=0x24, .type=IO_READ},
        {.addr=0x9d65, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_016F) {
    const struct CPU_State initial_cpu = {.pc=0x9bba, .a=0xcd, .x=0xa6, .y=0xb9, .sp=0x7b, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x27}, {.addr=0x9bba, .value=0x24}, {.addr=0x9bbb, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x9bbc, .a=0x05, .x=0xa6, .y=0xb9, .sp=0x7b, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x27}, {.addr=0x9bba, .value=0x24}, {.addr=0x9bbb, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bba, .value=0x24, .type=IO_READ},
        {.addr=0x9bbb, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0171) {
    const struct CPU_State initial_cpu = {.pc=0x4743, .a=0xb3, .x=0xbe, .y=0x2d, .sp=0x23, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xdf}, {.addr=0x4743, .value=0x24}, {.addr=0x4744, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x4745, .a=0x93, .x=0xbe, .y=0x2d, .sp=0x23, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xdf}, {.addr=0x4743, .value=0x24}, {.addr=0x4744, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4743, .value=0x24, .type=IO_READ},
        {.addr=0x4744, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0172) {
    const struct CPU_State initial_cpu = {.pc=0x9783, .a=0x07, .x=0x8b, .y=0xf5, .sp=0xd9, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x8d}, {.addr=0x9783, .value=0x24}, {.addr=0x9784, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x9785, .a=0x05, .x=0x8b, .y=0xf5, .sp=0xd9, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x8d}, {.addr=0x9783, .value=0x24}, {.addr=0x9784, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x9783, .value=0x24, .type=IO_READ},
        {.addr=0x9784, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0173) {
    const struct CPU_State initial_cpu = {.pc=0x6fce, .a=0xc1, .x=0xe1, .y=0x4d, .sp=0x3e, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x6b}, {.addr=0x6fce, .value=0x24}, {.addr=0x6fcf, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x6fd0, .a=0x41, .x=0xe1, .y=0x4d, .sp=0x3e, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x6b}, {.addr=0x6fce, .value=0x24}, {.addr=0x6fcf, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fce, .value=0x24, .type=IO_READ},
        {.addr=0x6fcf, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0174) {
    const struct CPU_State initial_cpu = {.pc=0x2993, .a=0x49, .x=0xd9, .y=0x0b, .sp=0x6b, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x92}, {.addr=0x2993, .value=0x24}, {.addr=0x2994, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x2995, .a=0x00, .x=0xd9, .y=0x0b, .sp=0x6b, .status=0x1f};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x92}, {.addr=0x2993, .value=0x24}, {.addr=0x2994, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x2993, .value=0x24, .type=IO_READ},
        {.addr=0x2994, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0175) {
    const struct CPU_State initial_cpu = {.pc=0x4a5a, .a=0xb5, .x=0x2f, .y=0x8d, .sp=0x09, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x05}, {.addr=0x4a5a, .value=0x24}, {.addr=0x4a5b, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x4a5c, .a=0x05, .x=0x2f, .y=0x8d, .sp=0x09, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x05}, {.addr=0x4a5a, .value=0x24}, {.addr=0x4a5b, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a5a, .value=0x24, .type=IO_READ},
        {.addr=0x4a5b, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0176) {
    const struct CPU_State initial_cpu = {.pc=0x502e, .a=0x14, .x=0xe2, .y=0x5c, .sp=0x6d, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x72}, {.addr=0x502e, .value=0x24}, {.addr=0x502f, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x5030, .a=0x10, .x=0xe2, .y=0x5c, .sp=0x6d, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x72}, {.addr=0x502e, .value=0x24}, {.addr=0x502f, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x502e, .value=0x24, .type=IO_READ},
        {.addr=0x502f, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0177) {
    const struct CPU_State initial_cpu = {.pc=0x2af5, .a=0x78, .x=0x19, .y=0xf2, .sp=0xa1, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x28}, {.addr=0x2af5, .value=0x24}, {.addr=0x2af6, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x2af7, .a=0x28, .x=0x19, .y=0xf2, .sp=0xa1, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x28}, {.addr=0x2af5, .value=0x24}, {.addr=0x2af6, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x2af5, .value=0x24, .type=IO_READ},
        {.addr=0x2af6, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0178) {
    const struct CPU_State initial_cpu = {.pc=0xd666, .a=0xc6, .x=0xdd, .y=0x8d, .sp=0x77, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x01}, {.addr=0xd666, .value=0x24}, {.addr=0xd667, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xd668, .a=0x00, .x=0xdd, .y=0x8d, .sp=0x77, .status=0x3b};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x01}, {.addr=0xd666, .value=0x24}, {.addr=0xd667, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd666, .value=0x24, .type=IO_READ},
        {.addr=0xd667, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0179) {
    const struct CPU_State initial_cpu = {.pc=0xa2d9, .a=0xe9, .x=0x54, .y=0xab, .sp=0x40, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x98}, {.addr=0xa2d9, .value=0x24}, {.addr=0xa2da, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xa2db, .a=0x88, .x=0x54, .y=0xab, .sp=0x40, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x98}, {.addr=0xa2d9, .value=0x24}, {.addr=0xa2da, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2d9, .value=0x24, .type=IO_READ},
        {.addr=0xa2da, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_017A) {
    const struct CPU_State initial_cpu = {.pc=0xed1b, .a=0xd0, .x=0x43, .y=0x8a, .sp=0x0a, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x80}, {.addr=0xed1b, .value=0x24}, {.addr=0xed1c, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xed1d, .a=0x80, .x=0x43, .y=0x8a, .sp=0x0a, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x80}, {.addr=0xed1b, .value=0x24}, {.addr=0xed1c, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xed1b, .value=0x24, .type=IO_READ},
        {.addr=0xed1c, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_017B) {
    const struct CPU_State initial_cpu = {.pc=0x40e0, .a=0x4d, .x=0xa6, .y=0x05, .sp=0xae, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0xc6}, {.addr=0x40e0, .value=0x24}, {.addr=0x40e1, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x40e2, .a=0x44, .x=0xa6, .y=0x05, .sp=0xae, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0xc6}, {.addr=0x40e0, .value=0x24}, {.addr=0x40e1, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x40e0, .value=0x24, .type=IO_READ},
        {.addr=0x40e1, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_017C) {
    const struct CPU_State initial_cpu = {.pc=0xd3a5, .a=0x5c, .x=0x5a, .y=0x5c, .sp=0x69, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xa3}, {.addr=0xd3a5, .value=0x24}, {.addr=0xd3a6, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xd3a7, .a=0x00, .x=0x5a, .y=0x5c, .sp=0x69, .status=0x62};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xa3}, {.addr=0xd3a5, .value=0x24}, {.addr=0xd3a6, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3a5, .value=0x24, .type=IO_READ},
        {.addr=0xd3a6, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_017D) {
    const struct CPU_State initial_cpu = {.pc=0xd9cb, .a=0xc0, .x=0xa1, .y=0x1d, .sp=0x2e, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0xde}, {.addr=0xd9cb, .value=0x24}, {.addr=0xd9cc, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xd9cd, .a=0xc0, .x=0xa1, .y=0x1d, .sp=0x2e, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0xde}, {.addr=0xd9cb, .value=0x24}, {.addr=0xd9cc, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9cb, .value=0x24, .type=IO_READ},
        {.addr=0xd9cc, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_017F) {
    const struct CPU_State initial_cpu = {.pc=0x5589, .a=0xcc, .x=0x41, .y=0x68, .sp=0x63, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xaa}, {.addr=0x5589, .value=0x24}, {.addr=0x558a, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x558b, .a=0x88, .x=0x41, .y=0x68, .sp=0x63, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xaa}, {.addr=0x5589, .value=0x24}, {.addr=0x558a, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x5589, .value=0x24, .type=IO_READ},
        {.addr=0x558a, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0180) {
    const struct CPU_State initial_cpu = {.pc=0xdef7, .a=0xfc, .x=0x10, .y=0x65, .sp=0xa5, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x7b}, {.addr=0xdef7, .value=0x24}, {.addr=0xdef8, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xdef9, .a=0x78, .x=0x10, .y=0x65, .sp=0xa5, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x7b}, {.addr=0xdef7, .value=0x24}, {.addr=0xdef8, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xdef7, .value=0x24, .type=IO_READ},
        {.addr=0xdef8, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0181) {
    const struct CPU_State initial_cpu = {.pc=0x380d, .a=0x8e, .x=0x74, .y=0xc1, .sp=0x91, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xcc}, {.addr=0x380d, .value=0x24}, {.addr=0x380e, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x380f, .a=0x8c, .x=0x74, .y=0xc1, .sp=0x91, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xcc}, {.addr=0x380d, .value=0x24}, {.addr=0x380e, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x380d, .value=0x24, .type=IO_READ},
        {.addr=0x380e, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0182) {
    const struct CPU_State initial_cpu = {.pc=0x430c, .a=0x74, .x=0x6a, .y=0x0f, .sp=0x25, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xe6}, {.addr=0x430c, .value=0x24}, {.addr=0x430d, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x430e, .a=0x64, .x=0x6a, .y=0x0f, .sp=0x25, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xe6}, {.addr=0x430c, .value=0x24}, {.addr=0x430d, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x430c, .value=0x24, .type=IO_READ},
        {.addr=0x430d, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0184) {
    const struct CPU_State initial_cpu = {.pc=0x5804, .a=0xd1, .x=0xd0, .y=0xfe, .sp=0xec, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0xe3}, {.addr=0x5804, .value=0x24}, {.addr=0x5805, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x5806, .a=0xc1, .x=0xd0, .y=0xfe, .sp=0xec, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0xe3}, {.addr=0x5804, .value=0x24}, {.addr=0x5805, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5804, .value=0x24, .type=IO_READ},
        {.addr=0x5805, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0185) {
    const struct CPU_State initial_cpu = {.pc=0x45a2, .a=0x99, .x=0x9b, .y=0x5d, .sp=0xd2, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xc5}, {.addr=0x45a2, .value=0x24}, {.addr=0x45a3, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x45a4, .a=0x81, .x=0x9b, .y=0x5d, .sp=0xd2, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xc5}, {.addr=0x45a2, .value=0x24}, {.addr=0x45a3, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x45a2, .value=0x24, .type=IO_READ},
        {.addr=0x45a3, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0186) {
    const struct CPU_State initial_cpu = {.pc=0x68e6, .a=0xdf, .x=0x52, .y=0x6b, .sp=0x57, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x89}, {.addr=0x68e6, .value=0x24}, {.addr=0x68e7, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x68e8, .a=0x89, .x=0x52, .y=0x6b, .sp=0x57, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x89}, {.addr=0x68e6, .value=0x24}, {.addr=0x68e7, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x68e6, .value=0x24, .type=IO_READ},
        {.addr=0x68e7, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0187) {
    const struct CPU_State initial_cpu = {.pc=0xe4b5, .a=0x4f, .x=0xcc, .y=0xda, .sp=0xd8, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x22}, {.addr=0xe4b5, .value=0x24}, {.addr=0xe4b6, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xe4b7, .a=0x02, .x=0xcc, .y=0xda, .sp=0xd8, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x22}, {.addr=0xe4b5, .value=0x24}, {.addr=0xe4b6, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4b5, .value=0x24, .type=IO_READ},
        {.addr=0xe4b6, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0188) {
    const struct CPU_State initial_cpu = {.pc=0x99ce, .a=0xff, .x=0xbc, .y=0xcc, .sp=0x68, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x68}, {.addr=0x99ce, .value=0x24}, {.addr=0x99cf, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x99d0, .a=0x68, .x=0xbc, .y=0xcc, .sp=0x68, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x68}, {.addr=0x99ce, .value=0x24}, {.addr=0x99cf, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x99ce, .value=0x24, .type=IO_READ},
        {.addr=0x99cf, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0189) {
    const struct CPU_State initial_cpu = {.pc=0x820d, .a=0xa3, .x=0x88, .y=0x31, .sp=0xe8, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x2a}, {.addr=0x820d, .value=0x24}, {.addr=0x820e, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x820f, .a=0x22, .x=0x88, .y=0x31, .sp=0xe8, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x2a}, {.addr=0x820d, .value=0x24}, {.addr=0x820e, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x820d, .value=0x24, .type=IO_READ},
        {.addr=0x820e, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_018A) {
    const struct CPU_State initial_cpu = {.pc=0x4e72, .a=0x4d, .x=0x66, .y=0x46, .sp=0xa7, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x97}, {.addr=0x4e72, .value=0x24}, {.addr=0x4e73, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x4e74, .a=0x05, .x=0x66, .y=0x46, .sp=0xa7, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x97}, {.addr=0x4e72, .value=0x24}, {.addr=0x4e73, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e72, .value=0x24, .type=IO_READ},
        {.addr=0x4e73, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_018B) {
    const struct CPU_State initial_cpu = {.pc=0x7d53, .a=0x7c, .x=0xb4, .y=0x29, .sp=0x86, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0xd2}, {.addr=0x7d53, .value=0x24}, {.addr=0x7d54, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x7d55, .a=0x50, .x=0xb4, .y=0x29, .sp=0x86, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0xd2}, {.addr=0x7d53, .value=0x24}, {.addr=0x7d54, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d53, .value=0x24, .type=IO_READ},
        {.addr=0x7d54, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_018C) {
    const struct CPU_State initial_cpu = {.pc=0x3caf, .a=0x35, .x=0x64, .y=0x76, .sp=0xb1, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x93}, {.addr=0x3caf, .value=0x24}, {.addr=0x3cb0, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x3cb1, .a=0x11, .x=0x64, .y=0x76, .sp=0xb1, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x93}, {.addr=0x3caf, .value=0x24}, {.addr=0x3cb0, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x3caf, .value=0x24, .type=IO_READ},
        {.addr=0x3cb0, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_018D) {
    const struct CPU_State initial_cpu = {.pc=0x7152, .a=0xbb, .x=0x8c, .y=0xef, .sp=0x3f, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0xed}, {.addr=0x7152, .value=0x24}, {.addr=0x7153, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x7154, .a=0xa9, .x=0x8c, .y=0xef, .sp=0x3f, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0xed}, {.addr=0x7152, .value=0x24}, {.addr=0x7153, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7152, .value=0x24, .type=IO_READ},
        {.addr=0x7153, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_018E) {
    const struct CPU_State initial_cpu = {.pc=0xdeaa, .a=0xdf, .x=0x23, .y=0x5c, .sp=0xb4, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x7b}, {.addr=0xdeaa, .value=0x24}, {.addr=0xdeab, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xdeac, .a=0x5b, .x=0x23, .y=0x5c, .sp=0xb4, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x7b}, {.addr=0xdeaa, .value=0x24}, {.addr=0xdeab, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xdeaa, .value=0x24, .type=IO_READ},
        {.addr=0xdeab, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_018F) {
    const struct CPU_State initial_cpu = {.pc=0x5239, .a=0x47, .x=0x84, .y=0xdf, .sp=0x79, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xec}, {.addr=0x5239, .value=0x24}, {.addr=0x523a, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x523b, .a=0x44, .x=0x84, .y=0xdf, .sp=0x79, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xec}, {.addr=0x5239, .value=0x24}, {.addr=0x523a, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x5239, .value=0x24, .type=IO_READ},
        {.addr=0x523a, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0190) {
    const struct CPU_State initial_cpu = {.pc=0x0ded, .a=0x95, .x=0x43, .y=0x8d, .sp=0xcb, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xd4}, {.addr=0x0ded, .value=0x24}, {.addr=0x0dee, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x0def, .a=0x94, .x=0x43, .y=0x8d, .sp=0xcb, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xd4}, {.addr=0x0ded, .value=0x24}, {.addr=0x0dee, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ded, .value=0x24, .type=IO_READ},
        {.addr=0x0dee, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0191) {
    const struct CPU_State initial_cpu = {.pc=0x5976, .a=0xb2, .x=0xc0, .y=0xd6, .sp=0x2c, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0xed}, {.addr=0x5976, .value=0x24}, {.addr=0x5977, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x5978, .a=0xa0, .x=0xc0, .y=0xd6, .sp=0x2c, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0xed}, {.addr=0x5976, .value=0x24}, {.addr=0x5977, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x5976, .value=0x24, .type=IO_READ},
        {.addr=0x5977, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0193) {
    const struct CPU_State initial_cpu = {.pc=0xb7c7, .a=0xf4, .x=0x86, .y=0xe9, .sp=0x16, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xfd}, {.addr=0xb7c7, .value=0x24}, {.addr=0xb7c8, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xb7c9, .a=0xf4, .x=0x86, .y=0xe9, .sp=0x16, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xfd}, {.addr=0xb7c7, .value=0x24}, {.addr=0xb7c8, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7c7, .value=0x24, .type=IO_READ},
        {.addr=0xb7c8, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0194) {
    const struct CPU_State initial_cpu = {.pc=0x3a10, .a=0x1d, .x=0x43, .y=0xb0, .sp=0xdf, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x5e}, {.addr=0x3a10, .value=0x24}, {.addr=0x3a11, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x3a12, .a=0x1c, .x=0x43, .y=0xb0, .sp=0xdf, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x5e}, {.addr=0x3a10, .value=0x24}, {.addr=0x3a11, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a10, .value=0x24, .type=IO_READ},
        {.addr=0x3a11, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0195) {
    const struct CPU_State initial_cpu = {.pc=0x4d6b, .a=0xdd, .x=0xa1, .y=0xe5, .sp=0xc2, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0xf2}, {.addr=0x4d6b, .value=0x24}, {.addr=0x4d6c, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x4d6d, .a=0xd0, .x=0xa1, .y=0xe5, .sp=0xc2, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0xf2}, {.addr=0x4d6b, .value=0x24}, {.addr=0x4d6c, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d6b, .value=0x24, .type=IO_READ},
        {.addr=0x4d6c, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0196) {
    const struct CPU_State initial_cpu = {.pc=0xa39b, .a=0xd1, .x=0x9f, .y=0xfd, .sp=0x34, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x4e}, {.addr=0xa39b, .value=0x24}, {.addr=0xa39c, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xa39d, .a=0x40, .x=0x9f, .y=0xfd, .sp=0x34, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x4e}, {.addr=0xa39b, .value=0x24}, {.addr=0xa39c, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa39b, .value=0x24, .type=IO_READ},
        {.addr=0xa39c, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0198) {
    const struct CPU_State initial_cpu = {.pc=0x78bd, .a=0xc2, .x=0x14, .y=0xc5, .sp=0x98, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x9e}, {.addr=0x78bd, .value=0x24}, {.addr=0x78be, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x78bf, .a=0x82, .x=0x14, .y=0xc5, .sp=0x98, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x9e}, {.addr=0x78bd, .value=0x24}, {.addr=0x78be, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x78bd, .value=0x24, .type=IO_READ},
        {.addr=0x78be, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0199) {
    const struct CPU_State initial_cpu = {.pc=0xe251, .a=0x6a, .x=0x29, .y=0xf3, .sp=0xfa, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x54}, {.addr=0xe251, .value=0x24}, {.addr=0xe252, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xe253, .a=0x40, .x=0x29, .y=0xf3, .sp=0xfa, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x54}, {.addr=0xe251, .value=0x24}, {.addr=0xe252, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xe251, .value=0x24, .type=IO_READ},
        {.addr=0xe252, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_019A) {
    const struct CPU_State initial_cpu = {.pc=0x82fa, .a=0xc2, .x=0x54, .y=0x06, .sp=0xc4, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x4a}, {.addr=0x82fa, .value=0x24}, {.addr=0x82fb, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x82fc, .a=0x42, .x=0x54, .y=0x06, .sp=0xc4, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x4a}, {.addr=0x82fa, .value=0x24}, {.addr=0x82fb, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x82fa, .value=0x24, .type=IO_READ},
        {.addr=0x82fb, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_019B) {
    const struct CPU_State initial_cpu = {.pc=0x9197, .a=0xab, .x=0x9b, .y=0x0b, .sp=0x24, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x64}, {.addr=0x9197, .value=0x24}, {.addr=0x9198, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x9199, .a=0x20, .x=0x9b, .y=0x0b, .sp=0x24, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x64}, {.addr=0x9197, .value=0x24}, {.addr=0x9198, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9197, .value=0x24, .type=IO_READ},
        {.addr=0x9198, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_019C) {
    const struct CPU_State initial_cpu = {.pc=0x3227, .a=0x86, .x=0xd1, .y=0xb1, .sp=0x20, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x32}, {.addr=0x3227, .value=0x24}, {.addr=0x3228, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x3229, .a=0x02, .x=0xd1, .y=0xb1, .sp=0x20, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x32}, {.addr=0x3227, .value=0x24}, {.addr=0x3228, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x3227, .value=0x24, .type=IO_READ},
        {.addr=0x3228, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_019D) {
    const struct CPU_State initial_cpu = {.pc=0xe353, .a=0x74, .x=0x14, .y=0xa2, .sp=0x69, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x97}, {.addr=0xe353, .value=0x24}, {.addr=0xe354, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xe355, .a=0x14, .x=0x14, .y=0xa2, .sp=0x69, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x97}, {.addr=0xe353, .value=0x24}, {.addr=0xe354, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xe353, .value=0x24, .type=IO_READ},
        {.addr=0xe354, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_019E) {
    const struct CPU_State initial_cpu = {.pc=0xca25, .a=0x97, .x=0xc9, .y=0xbf, .sp=0xf5, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x65}, {.addr=0xca25, .value=0x24}, {.addr=0xca26, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xca27, .a=0x05, .x=0xc9, .y=0xbf, .sp=0xf5, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x65}, {.addr=0xca25, .value=0x24}, {.addr=0xca26, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xca25, .value=0x24, .type=IO_READ},
        {.addr=0xca26, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_019F) {
    const struct CPU_State initial_cpu = {.pc=0xcb8e, .a=0x79, .x=0xba, .y=0x7d, .sp=0x55, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xb2}, {.addr=0xcb8e, .value=0x24}, {.addr=0xcb8f, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xcb90, .a=0x30, .x=0xba, .y=0x7d, .sp=0x55, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xb2}, {.addr=0xcb8e, .value=0x24}, {.addr=0xcb8f, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb8e, .value=0x24, .type=IO_READ},
        {.addr=0xcb8f, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x1faf, .a=0x8f, .x=0x62, .y=0xec, .sp=0x00, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x57}, {.addr=0x1faf, .value=0x24}, {.addr=0x1fb0, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x1fb1, .a=0x07, .x=0x62, .y=0xec, .sp=0x00, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x57}, {.addr=0x1faf, .value=0x24}, {.addr=0x1fb0, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x1faf, .value=0x24, .type=IO_READ},
        {.addr=0x1fb0, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xd12a, .a=0xbd, .x=0x09, .y=0xbd, .sp=0xaf, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x18}, {.addr=0xd12a, .value=0x24}, {.addr=0xd12b, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xd12c, .a=0x18, .x=0x09, .y=0xbd, .sp=0xaf, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x18}, {.addr=0xd12a, .value=0x24}, {.addr=0xd12b, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd12a, .value=0x24, .type=IO_READ},
        {.addr=0xd12b, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xfb89, .a=0xd4, .x=0xbe, .y=0xbe, .sp=0x9c, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0x64}, {.addr=0xfb89, .value=0x24}, {.addr=0xfb8a, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xfb8b, .a=0x44, .x=0xbe, .y=0xbe, .sp=0x9c, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0x64}, {.addr=0xfb89, .value=0x24}, {.addr=0xfb8a, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb89, .value=0x24, .type=IO_READ},
        {.addr=0xfb8a, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xc9ea, .a=0xe5, .x=0x1f, .y=0xc3, .sp=0x69, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0xaa}, {.addr=0xc9ea, .value=0x24}, {.addr=0xc9eb, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xc9ec, .a=0xa0, .x=0x1f, .y=0xc3, .sp=0x69, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0xaa}, {.addr=0xc9ea, .value=0x24}, {.addr=0xc9eb, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9ea, .value=0x24, .type=IO_READ},
        {.addr=0xc9eb, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x20d7, .a=0xd7, .x=0xa9, .y=0x97, .sp=0x2e, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x47}, {.addr=0x20d7, .value=0x24}, {.addr=0x20d8, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x20d9, .a=0x47, .x=0xa9, .y=0x97, .sp=0x2e, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x47}, {.addr=0x20d7, .value=0x24}, {.addr=0x20d8, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x20d7, .value=0x24, .type=IO_READ},
        {.addr=0x20d8, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xdb68, .a=0x7e, .x=0x8a, .y=0x86, .sp=0x5e, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x3a}, {.addr=0xdb68, .value=0x24}, {.addr=0xdb69, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xdb6a, .a=0x3a, .x=0x8a, .y=0x86, .sp=0x5e, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x3a}, {.addr=0xdb68, .value=0x24}, {.addr=0xdb69, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb68, .value=0x24, .type=IO_READ},
        {.addr=0xdb69, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x12da, .a=0x19, .x=0x43, .y=0x10, .sp=0x9b, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x18}, {.addr=0x12da, .value=0x24}, {.addr=0x12db, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x12dc, .a=0x18, .x=0x43, .y=0x10, .sp=0x9b, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x18}, {.addr=0x12da, .value=0x24}, {.addr=0x12db, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x12da, .value=0x24, .type=IO_READ},
        {.addr=0x12db, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x8f68, .a=0x2f, .x=0x87, .y=0x99, .sp=0x6c, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xd8}, {.addr=0x8f68, .value=0x24}, {.addr=0x8f69, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x8f6a, .a=0x08, .x=0x87, .y=0x99, .sp=0x6c, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xd8}, {.addr=0x8f68, .value=0x24}, {.addr=0x8f69, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f68, .value=0x24, .type=IO_READ},
        {.addr=0x8f69, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xd73f, .a=0x1e, .x=0x9f, .y=0xf9, .sp=0x80, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x77}, {.addr=0xd73f, .value=0x24}, {.addr=0xd740, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xd741, .a=0x16, .x=0x9f, .y=0xf9, .sp=0x80, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x77}, {.addr=0xd73f, .value=0x24}, {.addr=0xd740, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xd73f, .value=0x24, .type=IO_READ},
        {.addr=0xd740, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x6c77, .a=0x4c, .x=0x29, .y=0xd6, .sp=0xe8, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x31}, {.addr=0x6c77, .value=0x24}, {.addr=0x6c78, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x6c79, .a=0x00, .x=0x29, .y=0xd6, .sp=0xe8, .status=0x6a};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x31}, {.addr=0x6c77, .value=0x24}, {.addr=0x6c78, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c77, .value=0x24, .type=IO_READ},
        {.addr=0x6c78, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x3840, .a=0x0b, .x=0x6a, .y=0x79, .sp=0xf2, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0xc8}, {.addr=0x3840, .value=0x24}, {.addr=0x3841, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x3842, .a=0x08, .x=0x6a, .y=0x79, .sp=0xf2, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0xc8}, {.addr=0x3840, .value=0x24}, {.addr=0x3841, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3840, .value=0x24, .type=IO_READ},
        {.addr=0x3841, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xc30f, .a=0x21, .x=0xae, .y=0x0e, .sp=0x01, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x93}, {.addr=0xc30f, .value=0x24}, {.addr=0xc310, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xc311, .a=0x01, .x=0xae, .y=0x0e, .sp=0x01, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x93}, {.addr=0xc30f, .value=0x24}, {.addr=0xc310, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc30f, .value=0x24, .type=IO_READ},
        {.addr=0xc310, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x7015, .a=0x92, .x=0xf8, .y=0x32, .sp=0x33, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x36}, {.addr=0x7015, .value=0x24}, {.addr=0x7016, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x7017, .a=0x12, .x=0xf8, .y=0x32, .sp=0x33, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x36}, {.addr=0x7015, .value=0x24}, {.addr=0x7016, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x7015, .value=0x24, .type=IO_READ},
        {.addr=0x7016, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x7a78, .a=0xfd, .x=0xdf, .y=0x97, .sp=0x4d, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0xdc}, {.addr=0x7a78, .value=0x24}, {.addr=0x7a79, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x7a7a, .a=0xdc, .x=0xdf, .y=0x97, .sp=0x4d, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0xdc}, {.addr=0x7a78, .value=0x24}, {.addr=0x7a79, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a78, .value=0x24, .type=IO_READ},
        {.addr=0x7a79, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x4154, .a=0xe0, .x=0x88, .y=0xd0, .sp=0xa1, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x91}, {.addr=0x4154, .value=0x24}, {.addr=0x4155, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x4156, .a=0x80, .x=0x88, .y=0xd0, .sp=0xa1, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x91}, {.addr=0x4154, .value=0x24}, {.addr=0x4155, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x4154, .value=0x24, .type=IO_READ},
        {.addr=0x4155, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xc297, .a=0x68, .x=0x11, .y=0x25, .sp=0x1e, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0x65}, {.addr=0xc297, .value=0x24}, {.addr=0xc298, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xc299, .a=0x60, .x=0x11, .y=0x25, .sp=0x1e, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0x65}, {.addr=0xc297, .value=0x24}, {.addr=0xc298, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc297, .value=0x24, .type=IO_READ},
        {.addr=0xc298, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xd655, .a=0xa7, .x=0xa5, .y=0x5c, .sp=0x0d, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x36}, {.addr=0xd655, .value=0x24}, {.addr=0xd656, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xd657, .a=0x26, .x=0xa5, .y=0x5c, .sp=0x0d, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x36}, {.addr=0xd655, .value=0x24}, {.addr=0xd656, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xd655, .value=0x24, .type=IO_READ},
        {.addr=0xd656, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xd12d, .a=0x3b, .x=0x1f, .y=0x3b, .sp=0x95, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x64}, {.addr=0xd12d, .value=0x24}, {.addr=0xd12e, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xd12f, .a=0x20, .x=0x1f, .y=0x3b, .sp=0x95, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x64}, {.addr=0xd12d, .value=0x24}, {.addr=0xd12e, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xd12d, .value=0x24, .type=IO_READ},
        {.addr=0xd12e, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x5b32, .a=0xf7, .x=0x3a, .y=0x01, .sp=0xcc, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0xc0}, {.addr=0x5b32, .value=0x24}, {.addr=0x5b33, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x5b34, .a=0xc0, .x=0x3a, .y=0x01, .sp=0xcc, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0xc0}, {.addr=0x5b32, .value=0x24}, {.addr=0x5b33, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b32, .value=0x24, .type=IO_READ},
        {.addr=0x5b33, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xdf5c, .a=0x6e, .x=0xb2, .y=0xc2, .sp=0x90, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x16}, {.addr=0xdf5c, .value=0x24}, {.addr=0xdf5d, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xdf5e, .a=0x06, .x=0xb2, .y=0xc2, .sp=0x90, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x16}, {.addr=0xdf5c, .value=0x24}, {.addr=0xdf5d, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf5c, .value=0x24, .type=IO_READ},
        {.addr=0xdf5d, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xd9d6, .a=0x64, .x=0xf9, .y=0x53, .sp=0x58, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xfb}, {.addr=0xd9d6, .value=0x24}, {.addr=0xd9d7, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xd9d8, .a=0x60, .x=0xf9, .y=0x53, .sp=0x58, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xfb}, {.addr=0xd9d6, .value=0x24}, {.addr=0xd9d7, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9d6, .value=0x24, .type=IO_READ},
        {.addr=0xd9d7, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xab55, .a=0xfc, .x=0x5e, .y=0xf2, .sp=0x43, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xa8}, {.addr=0xab55, .value=0x24}, {.addr=0xab56, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xab57, .a=0xa8, .x=0x5e, .y=0xf2, .sp=0x43, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xa8}, {.addr=0xab55, .value=0x24}, {.addr=0xab56, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xab55, .value=0x24, .type=IO_READ},
        {.addr=0xab56, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x9c63, .a=0xf9, .x=0xe1, .y=0x43, .sp=0x02, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x6f}, {.addr=0x9c63, .value=0x24}, {.addr=0x9c64, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x9c65, .a=0x69, .x=0xe1, .y=0x43, .sp=0x02, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x6f}, {.addr=0x9c63, .value=0x24}, {.addr=0x9c64, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c63, .value=0x24, .type=IO_READ},
        {.addr=0x9c64, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xca66, .a=0x88, .x=0x91, .y=0xd5, .sp=0xd4, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xa6}, {.addr=0xca66, .value=0x24}, {.addr=0xca67, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xca68, .a=0x80, .x=0x91, .y=0xd5, .sp=0xd4, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xa6}, {.addr=0xca66, .value=0x24}, {.addr=0xca67, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xca66, .value=0x24, .type=IO_READ},
        {.addr=0xca67, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x4e6f, .a=0x06, .x=0x3a, .y=0xd4, .sp=0xff, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x62}, {.addr=0x4e6f, .value=0x24}, {.addr=0x4e70, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x4e71, .a=0x02, .x=0x3a, .y=0xd4, .sp=0xff, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x62}, {.addr=0x4e6f, .value=0x24}, {.addr=0x4e70, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e6f, .value=0x24, .type=IO_READ},
        {.addr=0x4e70, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x2eff, .a=0x42, .x=0xfe, .y=0x2f, .sp=0x75, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x81}, {.addr=0x2eff, .value=0x24}, {.addr=0x2f00, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x2f01, .a=0x00, .x=0xfe, .y=0x2f, .sp=0x75, .status=0x2f};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x81}, {.addr=0x2eff, .value=0x24}, {.addr=0x2f00, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2eff, .value=0x24, .type=IO_READ},
        {.addr=0x2f00, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xf87a, .a=0x3d, .x=0x73, .y=0x9d, .sp=0x87, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0xcd}, {.addr=0xf87a, .value=0x24}, {.addr=0xf87b, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xf87c, .a=0x0d, .x=0x73, .y=0x9d, .sp=0x87, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0xcd}, {.addr=0xf87a, .value=0x24}, {.addr=0xf87b, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf87a, .value=0x24, .type=IO_READ},
        {.addr=0xf87b, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x82b5, .a=0xbf, .x=0xa2, .y=0xc4, .sp=0xc1, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x36}, {.addr=0x82b5, .value=0x24}, {.addr=0x82b6, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x82b7, .a=0x36, .x=0xa2, .y=0xc4, .sp=0xc1, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x36}, {.addr=0x82b5, .value=0x24}, {.addr=0x82b6, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x82b5, .value=0x24, .type=IO_READ},
        {.addr=0x82b6, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xcc82, .a=0x9e, .x=0xb4, .y=0x13, .sp=0x89, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x89}, {.addr=0xcc82, .value=0x24}, {.addr=0xcc83, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xcc84, .a=0x88, .x=0xb4, .y=0x13, .sp=0x89, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x89}, {.addr=0xcc82, .value=0x24}, {.addr=0xcc83, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc82, .value=0x24, .type=IO_READ},
        {.addr=0xcc83, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x037c, .a=0x5a, .x=0x8a, .y=0xcd, .sp=0x48, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x46}, {.addr=0x037c, .value=0x24}, {.addr=0x037d, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x037e, .a=0x42, .x=0x8a, .y=0xcd, .sp=0x48, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x46}, {.addr=0x037c, .value=0x24}, {.addr=0x037d, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x037c, .value=0x24, .type=IO_READ},
        {.addr=0x037d, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xa2c8, .a=0x67, .x=0xe6, .y=0xa2, .sp=0x8f, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x2b}, {.addr=0xa2c8, .value=0x24}, {.addr=0xa2c9, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xa2ca, .a=0x23, .x=0xe6, .y=0xa2, .sp=0x8f, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x2b}, {.addr=0xa2c8, .value=0x24}, {.addr=0xa2c9, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2c8, .value=0x24, .type=IO_READ},
        {.addr=0xa2c9, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x8789, .a=0xb7, .x=0x83, .y=0x74, .sp=0x46, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x08}, {.addr=0x8789, .value=0x24}, {.addr=0x878a, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x878b, .a=0x00, .x=0x83, .y=0x74, .sp=0x46, .status=0x76};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x08}, {.addr=0x8789, .value=0x24}, {.addr=0x878a, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x8789, .value=0x24, .type=IO_READ},
        {.addr=0x878a, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xe92b, .a=0xa1, .x=0xeb, .y=0x13, .sp=0x30, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x30}, {.addr=0xe92b, .value=0x24}, {.addr=0xe92c, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xe92d, .a=0x20, .x=0xeb, .y=0x13, .sp=0x30, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x30}, {.addr=0xe92b, .value=0x24}, {.addr=0xe92c, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xe92b, .value=0x24, .type=IO_READ},
        {.addr=0xe92c, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xc6a5, .a=0x79, .x=0x84, .y=0x8d, .sp=0x3f, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0xce}, {.addr=0xc6a5, .value=0x24}, {.addr=0xc6a6, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xc6a7, .a=0x48, .x=0x84, .y=0x8d, .sp=0x3f, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0xce}, {.addr=0xc6a5, .value=0x24}, {.addr=0xc6a6, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6a5, .value=0x24, .type=IO_READ},
        {.addr=0xc6a6, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xa684, .a=0x93, .x=0x1f, .y=0x7a, .sp=0x2e, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x97}, {.addr=0xa684, .value=0x24}, {.addr=0xa685, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xa686, .a=0x93, .x=0x1f, .y=0x7a, .sp=0x2e, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x97}, {.addr=0xa684, .value=0x24}, {.addr=0xa685, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xa684, .value=0x24, .type=IO_READ},
        {.addr=0xa685, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x3905, .a=0x41, .x=0x25, .y=0x13, .sp=0x96, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0xaa}, {.addr=0x3905, .value=0x24}, {.addr=0x3906, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x3907, .a=0x00, .x=0x25, .y=0x13, .sp=0x96, .status=0x02};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0xaa}, {.addr=0x3905, .value=0x24}, {.addr=0x3906, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x3905, .value=0x24, .type=IO_READ},
        {.addr=0x3906, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xe052, .a=0x8e, .x=0xdd, .y=0x2a, .sp=0x60, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x2e}, {.addr=0xe052, .value=0x24}, {.addr=0xe053, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xe054, .a=0x0e, .x=0xdd, .y=0x2a, .sp=0x60, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x2e}, {.addr=0xe052, .value=0x24}, {.addr=0xe053, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe052, .value=0x24, .type=IO_READ},
        {.addr=0xe053, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xf2a6, .a=0x9d, .x=0x8d, .y=0xc6, .sp=0xec, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x7d}, {.addr=0xf2a6, .value=0x24}, {.addr=0xf2a7, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xf2a8, .a=0x1d, .x=0x8d, .y=0xc6, .sp=0xec, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x7d}, {.addr=0xf2a6, .value=0x24}, {.addr=0xf2a7, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2a6, .value=0x24, .type=IO_READ},
        {.addr=0xf2a7, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xba1d, .a=0xce, .x=0x8c, .y=0x2c, .sp=0xbe, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xb2}, {.addr=0xba1d, .value=0x24}, {.addr=0xba1e, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xba1f, .a=0x82, .x=0x8c, .y=0x2c, .sp=0xbe, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xb2}, {.addr=0xba1d, .value=0x24}, {.addr=0xba1e, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xba1d, .value=0x24, .type=IO_READ},
        {.addr=0xba1e, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x31e0, .a=0xa7, .x=0xd2, .y=0x37, .sp=0x54, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0xad}, {.addr=0x31e0, .value=0x24}, {.addr=0x31e1, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x31e2, .a=0xa5, .x=0xd2, .y=0x37, .sp=0x54, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0xad}, {.addr=0x31e0, .value=0x24}, {.addr=0x31e1, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x31e0, .value=0x24, .type=IO_READ},
        {.addr=0x31e1, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x28d6, .a=0x90, .x=0x82, .y=0xfa, .sp=0xa0, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x96}, {.addr=0x28d6, .value=0x24}, {.addr=0x28d7, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x28d8, .a=0x90, .x=0x82, .y=0xfa, .sp=0xa0, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x96}, {.addr=0x28d6, .value=0x24}, {.addr=0x28d7, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x28d6, .value=0x24, .type=IO_READ},
        {.addr=0x28d7, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x2953, .a=0xfa, .x=0x88, .y=0xa0, .sp=0x8d, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x83}, {.addr=0x2953, .value=0x24}, {.addr=0x2954, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x2955, .a=0x82, .x=0x88, .y=0xa0, .sp=0x8d, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x83}, {.addr=0x2953, .value=0x24}, {.addr=0x2954, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2953, .value=0x24, .type=IO_READ},
        {.addr=0x2954, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x012b, .a=0xdb, .x=0x3d, .y=0xc8, .sp=0x46, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x2c}, {.addr=0x012b, .value=0x24}, {.addr=0x012c, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x012d, .a=0x08, .x=0x3d, .y=0xc8, .sp=0x46, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x2c}, {.addr=0x012b, .value=0x24}, {.addr=0x012c, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x012b, .value=0x24, .type=IO_READ},
        {.addr=0x012c, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xf411, .a=0xd8, .x=0xaa, .y=0xcd, .sp=0xbe, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0xee}, {.addr=0xf411, .value=0x24}, {.addr=0xf412, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xf413, .a=0xc8, .x=0xaa, .y=0xcd, .sp=0xbe, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0xee}, {.addr=0xf411, .value=0x24}, {.addr=0xf412, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xf411, .value=0x24, .type=IO_READ},
        {.addr=0xf412, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xc84f, .a=0x11, .x=0x1b, .y=0xc6, .sp=0xf8, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x09}, {.addr=0xc84f, .value=0x24}, {.addr=0xc850, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xc851, .a=0x01, .x=0x1b, .y=0xc6, .sp=0xf8, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x09}, {.addr=0xc84f, .value=0x24}, {.addr=0xc850, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xc84f, .value=0x24, .type=IO_READ},
        {.addr=0xc850, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x9c30, .a=0x21, .x=0xe2, .y=0x40, .sp=0x09, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x77}, {.addr=0x9c30, .value=0x24}, {.addr=0x9c31, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x9c32, .a=0x21, .x=0xe2, .y=0x40, .sp=0x09, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x77}, {.addr=0x9c30, .value=0x24}, {.addr=0x9c31, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c30, .value=0x24, .type=IO_READ},
        {.addr=0x9c31, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x1d3a, .a=0x6d, .x=0xfe, .y=0x15, .sp=0x66, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x35}, {.addr=0x1d3a, .value=0x24}, {.addr=0x1d3b, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x1d3c, .a=0x25, .x=0xfe, .y=0x15, .sp=0x66, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x35}, {.addr=0x1d3a, .value=0x24}, {.addr=0x1d3b, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d3a, .value=0x24, .type=IO_READ},
        {.addr=0x1d3b, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xccea, .a=0xfe, .x=0xff, .y=0x5a, .sp=0xc6, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0xdc}, {.addr=0xccea, .value=0x24}, {.addr=0xcceb, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xccec, .a=0xdc, .x=0xff, .y=0x5a, .sp=0xc6, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0xdc}, {.addr=0xccea, .value=0x24}, {.addr=0xcceb, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xccea, .value=0x24, .type=IO_READ},
        {.addr=0xcceb, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xb312, .a=0xae, .x=0xad, .y=0x40, .sp=0x56, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0xb5}, {.addr=0xb312, .value=0x24}, {.addr=0xb313, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xb314, .a=0xa4, .x=0xad, .y=0x40, .sp=0x56, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0xb5}, {.addr=0xb312, .value=0x24}, {.addr=0xb313, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb312, .value=0x24, .type=IO_READ},
        {.addr=0xb313, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x2d04, .a=0x45, .x=0xe4, .y=0xeb, .sp=0xfb, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x5b}, {.addr=0x2d04, .value=0x24}, {.addr=0x2d05, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x2d06, .a=0x41, .x=0xe4, .y=0xeb, .sp=0xfb, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x5b}, {.addr=0x2d04, .value=0x24}, {.addr=0x2d05, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d04, .value=0x24, .type=IO_READ},
        {.addr=0x2d05, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xbda1, .a=0x48, .x=0xdc, .y=0x3c, .sp=0x9e, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x19}, {.addr=0xbda1, .value=0x24}, {.addr=0xbda2, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xbda3, .a=0x08, .x=0xdc, .y=0x3c, .sp=0x9e, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x19}, {.addr=0xbda1, .value=0x24}, {.addr=0xbda2, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xbda1, .value=0x24, .type=IO_READ},
        {.addr=0xbda2, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x6e76, .a=0xeb, .x=0x28, .y=0xc5, .sp=0xa4, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x65}, {.addr=0x6e76, .value=0x24}, {.addr=0x6e77, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x6e78, .a=0x61, .x=0x28, .y=0xc5, .sp=0xa4, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x65}, {.addr=0x6e76, .value=0x24}, {.addr=0x6e77, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e76, .value=0x24, .type=IO_READ},
        {.addr=0x6e77, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xbcb3, .a=0xb7, .x=0x1e, .y=0xfd, .sp=0x42, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0xc4}, {.addr=0xbcb3, .value=0x24}, {.addr=0xbcb4, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xbcb5, .a=0x84, .x=0x1e, .y=0xfd, .sp=0x42, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0xc4}, {.addr=0xbcb3, .value=0x24}, {.addr=0xbcb4, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xbcb3, .value=0x24, .type=IO_READ},
        {.addr=0xbcb4, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x832a, .a=0x67, .x=0xca, .y=0xef, .sp=0x73, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x2a}, {.addr=0x832a, .value=0x24}, {.addr=0x832b, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x832c, .a=0x22, .x=0xca, .y=0xef, .sp=0x73, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x2a}, {.addr=0x832a, .value=0x24}, {.addr=0x832b, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x832a, .value=0x24, .type=IO_READ},
        {.addr=0x832b, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x8e71, .a=0xec, .x=0x9a, .y=0x3c, .sp=0x11, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x99}, {.addr=0x8e71, .value=0x24}, {.addr=0x8e72, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x8e73, .a=0x88, .x=0x9a, .y=0x3c, .sp=0x11, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x99}, {.addr=0x8e71, .value=0x24}, {.addr=0x8e72, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e71, .value=0x24, .type=IO_READ},
        {.addr=0x8e72, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xbe71, .a=0xa5, .x=0x5c, .y=0xb8, .sp=0xb6, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x9e}, {.addr=0xbe71, .value=0x24}, {.addr=0xbe72, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xbe73, .a=0x84, .x=0x5c, .y=0xb8, .sp=0xb6, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x9e}, {.addr=0xbe71, .value=0x24}, {.addr=0xbe72, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe71, .value=0x24, .type=IO_READ},
        {.addr=0xbe72, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x3c21, .a=0xbc, .x=0x31, .y=0x15, .sp=0xa1, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x97}, {.addr=0x3c21, .value=0x24}, {.addr=0x3c22, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x3c23, .a=0x94, .x=0x31, .y=0x15, .sp=0xa1, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x97}, {.addr=0x3c21, .value=0x24}, {.addr=0x3c22, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c21, .value=0x24, .type=IO_READ},
        {.addr=0x3c22, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x0124, .a=0xc9, .x=0x04, .y=0x0a, .sp=0xcc, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x24}, {.addr=0x0125, .value=0x80}, {.addr=0x0180, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x0126, .a=0x41, .x=0x04, .y=0x0a, .sp=0xcc, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x24}, {.addr=0x0125, .value=0x80}, {.addr=0x0180, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x0124, .value=0x24, .type=IO_READ},
        {.addr=0x0125, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xad4e, .a=0xfc, .x=0xcc, .y=0x9b, .sp=0xd5, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0x8f}, {.addr=0xad4e, .value=0x24}, {.addr=0xad4f, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xad50, .a=0x8c, .x=0xcc, .y=0x9b, .sp=0xd5, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0x8f}, {.addr=0xad4e, .value=0x24}, {.addr=0xad4f, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xad4e, .value=0x24, .type=IO_READ},
        {.addr=0xad4f, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xd76b, .a=0x69, .x=0x69, .y=0x48, .sp=0x00, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0xae}, {.addr=0xd76b, .value=0x24}, {.addr=0xd76c, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xd76d, .a=0x28, .x=0x69, .y=0x48, .sp=0x00, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0xae}, {.addr=0xd76b, .value=0x24}, {.addr=0xd76c, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd76b, .value=0x24, .type=IO_READ},
        {.addr=0xd76c, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x00c0, .a=0x84, .x=0xdc, .y=0x8d, .sp=0x39, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x8f}, {.addr=0x00c0, .value=0x24}, {.addr=0x00c1, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x00c2, .a=0x84, .x=0xdc, .y=0x8d, .sp=0x39, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x8f}, {.addr=0x00c0, .value=0x24}, {.addr=0x00c1, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x00c0, .value=0x24, .type=IO_READ},
        {.addr=0x00c1, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xaf44, .a=0xca, .x=0x2d, .y=0x7b, .sp=0x8e, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x92}, {.addr=0xaf44, .value=0x24}, {.addr=0xaf45, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xaf46, .a=0x82, .x=0x2d, .y=0x7b, .sp=0x8e, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x92}, {.addr=0xaf44, .value=0x24}, {.addr=0xaf45, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf44, .value=0x24, .type=IO_READ},
        {.addr=0xaf45, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xd2f8, .a=0xf9, .x=0x5e, .y=0x69, .sp=0x66, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0x57}, {.addr=0xd2f8, .value=0x24}, {.addr=0xd2f9, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0xd2fa, .a=0x51, .x=0x5e, .y=0x69, .sp=0x66, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0x57}, {.addr=0xd2f8, .value=0x24}, {.addr=0xd2f9, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2f8, .value=0x24, .type=IO_READ},
        {.addr=0xd2f9, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xd03b, .a=0xcb, .x=0x69, .y=0x51, .sp=0x09, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xca}, {.addr=0xd03b, .value=0x24}, {.addr=0xd03c, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xd03d, .a=0xca, .x=0x69, .y=0x51, .sp=0x09, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xca}, {.addr=0xd03b, .value=0x24}, {.addr=0xd03c, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xd03b, .value=0x24, .type=IO_READ},
        {.addr=0xd03c, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xf282, .a=0x42, .x=0x26, .y=0x6a, .sp=0x7c, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x74}, {.addr=0xf282, .value=0x24}, {.addr=0xf283, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xf284, .a=0x40, .x=0x26, .y=0x6a, .sp=0x7c, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x74}, {.addr=0xf282, .value=0x24}, {.addr=0xf283, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xf282, .value=0x24, .type=IO_READ},
        {.addr=0xf283, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x1520, .a=0x3b, .x=0x8e, .y=0x5e, .sp=0xb8, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0xc2}, {.addr=0x1520, .value=0x24}, {.addr=0x1521, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x1522, .a=0x02, .x=0x8e, .y=0x5e, .sp=0xb8, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0xc2}, {.addr=0x1520, .value=0x24}, {.addr=0x1521, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1520, .value=0x24, .type=IO_READ},
        {.addr=0x1521, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x8949, .a=0xb6, .x=0x46, .y=0x2a, .sp=0xaa, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x51}, {.addr=0x8949, .value=0x24}, {.addr=0x894a, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x894b, .a=0x10, .x=0x46, .y=0x2a, .sp=0xaa, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x51}, {.addr=0x8949, .value=0x24}, {.addr=0x894a, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x8949, .value=0x24, .type=IO_READ},
        {.addr=0x894a, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xb110, .a=0x50, .x=0x2b, .y=0x09, .sp=0x00, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0xab}, {.addr=0xb110, .value=0x24}, {.addr=0xb111, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xb112, .a=0x00, .x=0x2b, .y=0x09, .sp=0x00, .status=0x7b};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0xab}, {.addr=0xb110, .value=0x24}, {.addr=0xb111, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb110, .value=0x24, .type=IO_READ},
        {.addr=0xb111, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xe426, .a=0x5c, .x=0xad, .y=0xb6, .sp=0x7c, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0xcb}, {.addr=0xe426, .value=0x24}, {.addr=0xe427, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xe428, .a=0x48, .x=0xad, .y=0xb6, .sp=0x7c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0xcb}, {.addr=0xe426, .value=0x24}, {.addr=0xe427, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xe426, .value=0x24, .type=IO_READ},
        {.addr=0xe427, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xc000, .a=0x06, .x=0xa6, .y=0xaa, .sp=0xd2, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0xfd}, {.addr=0xc000, .value=0x24}, {.addr=0xc001, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xc002, .a=0x04, .x=0xa6, .y=0xaa, .sp=0xd2, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0xfd}, {.addr=0xc000, .value=0x24}, {.addr=0xc001, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xc000, .value=0x24, .type=IO_READ},
        {.addr=0xc001, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xcaec, .a=0x4c, .x=0x8d, .y=0x20, .sp=0x2f, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x9e}, {.addr=0xcaec, .value=0x24}, {.addr=0xcaed, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xcaee, .a=0x0c, .x=0x8d, .y=0x20, .sp=0x2f, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x9e}, {.addr=0xcaec, .value=0x24}, {.addr=0xcaed, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xcaec, .value=0x24, .type=IO_READ},
        {.addr=0xcaed, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x4f30, .a=0xb1, .x=0xef, .y=0xb2, .sp=0x86, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x9a}, {.addr=0x4f30, .value=0x24}, {.addr=0x4f31, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x4f32, .a=0x90, .x=0xef, .y=0xb2, .sp=0x86, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x9a}, {.addr=0x4f30, .value=0x24}, {.addr=0x4f31, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f30, .value=0x24, .type=IO_READ},
        {.addr=0x4f31, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xf4db, .a=0x1a, .x=0xd5, .y=0x53, .sp=0xfa, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x32}, {.addr=0xf4db, .value=0x24}, {.addr=0xf4dc, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xf4dd, .a=0x12, .x=0xd5, .y=0x53, .sp=0xfa, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x32}, {.addr=0xf4db, .value=0x24}, {.addr=0xf4dc, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4db, .value=0x24, .type=IO_READ},
        {.addr=0xf4dc, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x8db1, .a=0xb8, .x=0x49, .y=0xd7, .sp=0x5c, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0xdd}, {.addr=0x8db1, .value=0x24}, {.addr=0x8db2, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x8db3, .a=0x98, .x=0x49, .y=0xd7, .sp=0x5c, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0xdd}, {.addr=0x8db1, .value=0x24}, {.addr=0x8db2, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8db1, .value=0x24, .type=IO_READ},
        {.addr=0x8db2, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x420e, .a=0x83, .x=0xa3, .y=0x89, .sp=0xf4, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0xbf}, {.addr=0x420e, .value=0x24}, {.addr=0x420f, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x4210, .a=0x83, .x=0xa3, .y=0x89, .sp=0xf4, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0xbf}, {.addr=0x420e, .value=0x24}, {.addr=0x420f, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x420e, .value=0x24, .type=IO_READ},
        {.addr=0x420f, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x4994, .a=0xd8, .x=0xee, .y=0xb2, .sp=0xe7, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xc6}, {.addr=0x4994, .value=0x24}, {.addr=0x4995, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x4996, .a=0xc0, .x=0xee, .y=0xb2, .sp=0xe7, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xc6}, {.addr=0x4994, .value=0x24}, {.addr=0x4995, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x4994, .value=0x24, .type=IO_READ},
        {.addr=0x4995, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xa1d6, .a=0x20, .x=0x5c, .y=0x83, .sp=0x33, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x3e}, {.addr=0xa1d6, .value=0x24}, {.addr=0xa1d7, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xa1d8, .a=0x20, .x=0x5c, .y=0x83, .sp=0x33, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x3e}, {.addr=0xa1d6, .value=0x24}, {.addr=0xa1d7, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xa1d6, .value=0x24, .type=IO_READ},
        {.addr=0xa1d7, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x6427, .a=0x0b, .x=0xfe, .y=0x79, .sp=0x8b, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x20}, {.addr=0x6427, .value=0x24}, {.addr=0x6428, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x6429, .a=0x00, .x=0xfe, .y=0x79, .sp=0x8b, .status=0x1f};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x20}, {.addr=0x6427, .value=0x24}, {.addr=0x6428, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x6427, .value=0x24, .type=IO_READ},
        {.addr=0x6428, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x3ecf, .a=0xc2, .x=0x65, .y=0x3f, .sp=0xf5, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0xa1}, {.addr=0x3ecf, .value=0x24}, {.addr=0x3ed0, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x3ed1, .a=0x80, .x=0x65, .y=0x3f, .sp=0xf5, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0xa1}, {.addr=0x3ecf, .value=0x24}, {.addr=0x3ed0, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ecf, .value=0x24, .type=IO_READ},
        {.addr=0x3ed0, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x3826, .a=0x31, .x=0x75, .y=0xc7, .sp=0x03, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x1c}, {.addr=0x3826, .value=0x24}, {.addr=0x3827, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x3828, .a=0x10, .x=0x75, .y=0xc7, .sp=0x03, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x1c}, {.addr=0x3826, .value=0x24}, {.addr=0x3827, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x3826, .value=0x24, .type=IO_READ},
        {.addr=0x3827, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xc558, .a=0x11, .x=0x5c, .y=0x83, .sp=0x69, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0xc7}, {.addr=0xc558, .value=0x24}, {.addr=0xc559, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0xc55a, .a=0x01, .x=0x5c, .y=0x83, .sp=0x69, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0xc7}, {.addr=0xc558, .value=0x24}, {.addr=0xc559, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0xc558, .value=0x24, .type=IO_READ},
        {.addr=0xc559, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xfe9a, .a=0x0a, .x=0x31, .y=0x23, .sp=0x33, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x31}, {.addr=0xfe9a, .value=0x24}, {.addr=0xfe9b, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xfe9c, .a=0x00, .x=0x31, .y=0x23, .sp=0x33, .status=0x43};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x31}, {.addr=0xfe9a, .value=0x24}, {.addr=0xfe9b, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe9a, .value=0x24, .type=IO_READ},
        {.addr=0xfe9b, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x717a, .a=0xe0, .x=0x0c, .y=0x72, .sp=0x69, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xb9}, {.addr=0x717a, .value=0x24}, {.addr=0x717b, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x717c, .a=0xa0, .x=0x0c, .y=0x72, .sp=0x69, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xb9}, {.addr=0x717a, .value=0x24}, {.addr=0x717b, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x717a, .value=0x24, .type=IO_READ},
        {.addr=0x717b, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x5093, .a=0xb7, .x=0x55, .y=0x4a, .sp=0x1c, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0x11}, {.addr=0x5093, .value=0x24}, {.addr=0x5094, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x5095, .a=0x11, .x=0x55, .y=0x4a, .sp=0x1c, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0x11}, {.addr=0x5093, .value=0x24}, {.addr=0x5094, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5093, .value=0x24, .type=IO_READ},
        {.addr=0x5094, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xd2ad, .a=0xf3, .x=0xc4, .y=0xfe, .sp=0xc2, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xb5}, {.addr=0xd2ad, .value=0x24}, {.addr=0xd2ae, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xd2af, .a=0xb1, .x=0xc4, .y=0xfe, .sp=0xc2, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xb5}, {.addr=0xd2ad, .value=0x24}, {.addr=0xd2ae, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2ad, .value=0x24, .type=IO_READ},
        {.addr=0xd2ae, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xe5c0, .a=0xea, .x=0xef, .y=0xa7, .sp=0xfc, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x70}, {.addr=0xe5c0, .value=0x24}, {.addr=0xe5c1, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xe5c2, .a=0x60, .x=0xef, .y=0xa7, .sp=0xfc, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x70}, {.addr=0xe5c0, .value=0x24}, {.addr=0xe5c1, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5c0, .value=0x24, .type=IO_READ},
        {.addr=0xe5c1, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x9be4, .a=0x3b, .x=0x98, .y=0x81, .sp=0x97, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x7e}, {.addr=0x9be4, .value=0x24}, {.addr=0x9be5, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x9be6, .a=0x3a, .x=0x98, .y=0x81, .sp=0x97, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x7e}, {.addr=0x9be4, .value=0x24}, {.addr=0x9be5, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x9be4, .value=0x24, .type=IO_READ},
        {.addr=0x9be5, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x0d69, .a=0x1d, .x=0x25, .y=0xc5, .sp=0xa4, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0xb9}, {.addr=0x0d69, .value=0x24}, {.addr=0x0d6a, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x0d6b, .a=0x19, .x=0x25, .y=0xc5, .sp=0xa4, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0xb9}, {.addr=0x0d69, .value=0x24}, {.addr=0x0d6a, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d69, .value=0x24, .type=IO_READ},
        {.addr=0x0d6a, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x800c, .a=0x3d, .x=0xd3, .y=0x17, .sp=0xad, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x8f}, {.addr=0x800c, .value=0x24}, {.addr=0x800d, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x800e, .a=0x0d, .x=0xd3, .y=0x17, .sp=0xad, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x8f}, {.addr=0x800c, .value=0x24}, {.addr=0x800d, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x800c, .value=0x24, .type=IO_READ},
        {.addr=0x800d, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x743d, .a=0xd7, .x=0xb6, .y=0xd8, .sp=0x4a, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0xe9}, {.addr=0x743d, .value=0x24}, {.addr=0x743e, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x743f, .a=0xc1, .x=0xb6, .y=0xd8, .sp=0x4a, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0xe9}, {.addr=0x743d, .value=0x24}, {.addr=0x743e, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x743d, .value=0x24, .type=IO_READ},
        {.addr=0x743e, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xcbfe, .a=0x02, .x=0x37, .y=0x51, .sp=0xa1, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xa3}, {.addr=0xcbfe, .value=0x24}, {.addr=0xcbff, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xcc00, .a=0x02, .x=0x37, .y=0x51, .sp=0xa1, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xa3}, {.addr=0xcbfe, .value=0x24}, {.addr=0xcbff, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbfe, .value=0x24, .type=IO_READ},
        {.addr=0xcbff, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x7c53, .a=0x96, .x=0x0c, .y=0xaa, .sp=0x7f, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xc1}, {.addr=0x7c53, .value=0x24}, {.addr=0x7c54, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x7c55, .a=0x80, .x=0x0c, .y=0xaa, .sp=0x7f, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xc1}, {.addr=0x7c53, .value=0x24}, {.addr=0x7c54, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c53, .value=0x24, .type=IO_READ},
        {.addr=0x7c54, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x3aa6, .a=0xb8, .x=0x3a, .y=0x91, .sp=0xeb, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xb3}, {.addr=0x3aa6, .value=0x24}, {.addr=0x3aa7, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x3aa8, .a=0xb0, .x=0x3a, .y=0x91, .sp=0xeb, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xb3}, {.addr=0x3aa6, .value=0x24}, {.addr=0x3aa7, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x3aa6, .value=0x24, .type=IO_READ},
        {.addr=0x3aa7, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x7f8b, .a=0x28, .x=0x04, .y=0xba, .sp=0xb5, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x97}, {.addr=0x7f8b, .value=0x24}, {.addr=0x7f8c, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x7f8d, .a=0x00, .x=0x04, .y=0xba, .sp=0xb5, .status=0x4a};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x97}, {.addr=0x7f8b, .value=0x24}, {.addr=0x7f8c, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f8b, .value=0x24, .type=IO_READ},
        {.addr=0x7f8c, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0200) {
    const struct CPU_State initial_cpu = {.pc=0x5d1e, .a=0x14, .x=0xe6, .y=0xe8, .sp=0xbe, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x8d}, {.addr=0x5d1e, .value=0x24}, {.addr=0x5d1f, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x5d20, .a=0x04, .x=0xe6, .y=0xe8, .sp=0xbe, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x8d}, {.addr=0x5d1e, .value=0x24}, {.addr=0x5d1f, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d1e, .value=0x24, .type=IO_READ},
        {.addr=0x5d1f, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0201) {
    const struct CPU_State initial_cpu = {.pc=0xcfb3, .a=0x9c, .x=0x7d, .y=0x0b, .sp=0x8c, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0xd7}, {.addr=0xcfb3, .value=0x24}, {.addr=0xcfb4, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xcfb5, .a=0x94, .x=0x7d, .y=0x0b, .sp=0x8c, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0xd7}, {.addr=0xcfb3, .value=0x24}, {.addr=0xcfb4, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xcfb3, .value=0x24, .type=IO_READ},
        {.addr=0xcfb4, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0202) {
    const struct CPU_State initial_cpu = {.pc=0x916e, .a=0x51, .x=0x5b, .y=0x5e, .sp=0x19, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x43}, {.addr=0x916e, .value=0x24}, {.addr=0x916f, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x9170, .a=0x41, .x=0x5b, .y=0x5e, .sp=0x19, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x43}, {.addr=0x916e, .value=0x24}, {.addr=0x916f, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x916e, .value=0x24, .type=IO_READ},
        {.addr=0x916f, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0203) {
    const struct CPU_State initial_cpu = {.pc=0x978d, .a=0x53, .x=0xfb, .y=0xfc, .sp=0x98, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0xa9}, {.addr=0x978d, .value=0x24}, {.addr=0x978e, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x978f, .a=0x01, .x=0xfb, .y=0xfc, .sp=0x98, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0xa9}, {.addr=0x978d, .value=0x24}, {.addr=0x978e, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x978d, .value=0x24, .type=IO_READ},
        {.addr=0x978e, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0204) {
    const struct CPU_State initial_cpu = {.pc=0xff3d, .a=0x73, .x=0x66, .y=0xd4, .sp=0x22, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x5f}, {.addr=0xff3d, .value=0x24}, {.addr=0xff3e, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xff3f, .a=0x53, .x=0x66, .y=0xd4, .sp=0x22, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x5f}, {.addr=0xff3d, .value=0x24}, {.addr=0xff3e, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xff3d, .value=0x24, .type=IO_READ},
        {.addr=0xff3e, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0205) {
    const struct CPU_State initial_cpu = {.pc=0xd54b, .a=0x63, .x=0x91, .y=0x57, .sp=0xaf, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xbb}, {.addr=0xd54b, .value=0x24}, {.addr=0xd54c, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xd54d, .a=0x23, .x=0x91, .y=0x57, .sp=0xaf, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xbb}, {.addr=0xd54b, .value=0x24}, {.addr=0xd54c, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xd54b, .value=0x24, .type=IO_READ},
        {.addr=0xd54c, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0206) {
    const struct CPU_State initial_cpu = {.pc=0xa3f6, .a=0xbd, .x=0x1e, .y=0xbd, .sp=0xc2, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0x1a}, {.addr=0xa3f6, .value=0x24}, {.addr=0xa3f7, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xa3f8, .a=0x18, .x=0x1e, .y=0xbd, .sp=0xc2, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0x1a}, {.addr=0xa3f6, .value=0x24}, {.addr=0xa3f7, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3f6, .value=0x24, .type=IO_READ},
        {.addr=0xa3f7, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0207) {
    const struct CPU_State initial_cpu = {.pc=0x15e2, .a=0x24, .x=0xe5, .y=0x84, .sp=0xc3, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x7f}, {.addr=0x15e2, .value=0x24}, {.addr=0x15e3, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x15e4, .a=0x24, .x=0xe5, .y=0x84, .sp=0xc3, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x7f}, {.addr=0x15e2, .value=0x24}, {.addr=0x15e3, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x15e2, .value=0x24, .type=IO_READ},
        {.addr=0x15e3, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0208) {
    const struct CPU_State initial_cpu = {.pc=0x43a9, .a=0x4b, .x=0x66, .y=0x43, .sp=0x50, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x11}, {.addr=0x43a9, .value=0x24}, {.addr=0x43aa, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x43ab, .a=0x01, .x=0x66, .y=0x43, .sp=0x50, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x11}, {.addr=0x43a9, .value=0x24}, {.addr=0x43aa, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x43a9, .value=0x24, .type=IO_READ},
        {.addr=0x43aa, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0209) {
    const struct CPU_State initial_cpu = {.pc=0x540b, .a=0x25, .x=0x8f, .y=0x40, .sp=0x55, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0x3f}, {.addr=0x540b, .value=0x24}, {.addr=0x540c, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x540d, .a=0x25, .x=0x8f, .y=0x40, .sp=0x55, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0x3f}, {.addr=0x540b, .value=0x24}, {.addr=0x540c, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x540b, .value=0x24, .type=IO_READ},
        {.addr=0x540c, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_020A) {
    const struct CPU_State initial_cpu = {.pc=0x5dbb, .a=0x7f, .x=0x3b, .y=0x0b, .sp=0x24, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x25}, {.addr=0x5dbb, .value=0x24}, {.addr=0x5dbc, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x5dbd, .a=0x25, .x=0x3b, .y=0x0b, .sp=0x24, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x25}, {.addr=0x5dbb, .value=0x24}, {.addr=0x5dbc, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dbb, .value=0x24, .type=IO_READ},
        {.addr=0x5dbc, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_020B) {
    const struct CPU_State initial_cpu = {.pc=0xf692, .a=0xe4, .x=0xfd, .y=0xe0, .sp=0x47, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x5d}, {.addr=0xf692, .value=0x24}, {.addr=0xf693, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xf694, .a=0x44, .x=0xfd, .y=0xe0, .sp=0x47, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x5d}, {.addr=0xf692, .value=0x24}, {.addr=0xf693, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf692, .value=0x24, .type=IO_READ},
        {.addr=0xf693, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_020C) {
    const struct CPU_State initial_cpu = {.pc=0x8254, .a=0xd1, .x=0x0a, .y=0x15, .sp=0x7f, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0x30}, {.addr=0x8254, .value=0x24}, {.addr=0x8255, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x8256, .a=0x10, .x=0x0a, .y=0x15, .sp=0x7f, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0x30}, {.addr=0x8254, .value=0x24}, {.addr=0x8255, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x8254, .value=0x24, .type=IO_READ},
        {.addr=0x8255, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_020D) {
    const struct CPU_State initial_cpu = {.pc=0xd812, .a=0xc9, .x=0x69, .y=0x21, .sp=0x6c, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x26}, {.addr=0xd812, .value=0x24}, {.addr=0xd813, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xd814, .a=0x00, .x=0x69, .y=0x21, .sp=0x6c, .status=0x02};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x26}, {.addr=0xd812, .value=0x24}, {.addr=0xd813, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xd812, .value=0x24, .type=IO_READ},
        {.addr=0xd813, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_020E) {
    const struct CPU_State initial_cpu = {.pc=0x0864, .a=0xbf, .x=0xc5, .y=0x29, .sp=0x85, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x94}, {.addr=0x0864, .value=0x24}, {.addr=0x0865, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x0866, .a=0x94, .x=0xc5, .y=0x29, .sp=0x85, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x94}, {.addr=0x0864, .value=0x24}, {.addr=0x0865, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0864, .value=0x24, .type=IO_READ},
        {.addr=0x0865, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_020F) {
    const struct CPU_State initial_cpu = {.pc=0x5e1e, .a=0x9c, .x=0x6a, .y=0x5e, .sp=0x73, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x5e}, {.addr=0x5e1e, .value=0x24}, {.addr=0x5e1f, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x5e20, .a=0x1c, .x=0x6a, .y=0x5e, .sp=0x73, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x5e}, {.addr=0x5e1e, .value=0x24}, {.addr=0x5e1f, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e1e, .value=0x24, .type=IO_READ},
        {.addr=0x5e1f, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0210) {
    const struct CPU_State initial_cpu = {.pc=0x54de, .a=0xa6, .x=0xe6, .y=0x4e, .sp=0xdb, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x8b}, {.addr=0x54de, .value=0x24}, {.addr=0x54df, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x54e0, .a=0x82, .x=0xe6, .y=0x4e, .sp=0xdb, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x8b}, {.addr=0x54de, .value=0x24}, {.addr=0x54df, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x54de, .value=0x24, .type=IO_READ},
        {.addr=0x54df, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0211) {
    const struct CPU_State initial_cpu = {.pc=0xc1c9, .a=0xbe, .x=0x23, .y=0xee, .sp=0xa7, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x8d}, {.addr=0xc1c9, .value=0x24}, {.addr=0xc1ca, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xc1cb, .a=0x8c, .x=0x23, .y=0xee, .sp=0xa7, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x8d}, {.addr=0xc1c9, .value=0x24}, {.addr=0xc1ca, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1c9, .value=0x24, .type=IO_READ},
        {.addr=0xc1ca, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0212) {
    const struct CPU_State initial_cpu = {.pc=0x3182, .a=0x9d, .x=0x0f, .y=0x1c, .sp=0x23, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x4e}, {.addr=0x3182, .value=0x24}, {.addr=0x3183, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x3184, .a=0x0c, .x=0x0f, .y=0x1c, .sp=0x23, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x4e}, {.addr=0x3182, .value=0x24}, {.addr=0x3183, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x3182, .value=0x24, .type=IO_READ},
        {.addr=0x3183, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0213) {
    const struct CPU_State initial_cpu = {.pc=0x9c56, .a=0x01, .x=0x74, .y=0xce, .sp=0xb9, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xbe}, {.addr=0x9c56, .value=0x24}, {.addr=0x9c57, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x9c58, .a=0x00, .x=0x74, .y=0xce, .sp=0xb9, .status=0x72};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xbe}, {.addr=0x9c56, .value=0x24}, {.addr=0x9c57, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c56, .value=0x24, .type=IO_READ},
        {.addr=0x9c57, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0214) {
    const struct CPU_State initial_cpu = {.pc=0x96bf, .a=0x48, .x=0x9f, .y=0xd9, .sp=0xac, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0xc4}, {.addr=0x96bf, .value=0x24}, {.addr=0x96c0, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x96c1, .a=0x40, .x=0x9f, .y=0xd9, .sp=0xac, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0xc4}, {.addr=0x96bf, .value=0x24}, {.addr=0x96c0, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x96bf, .value=0x24, .type=IO_READ},
        {.addr=0x96c0, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0215) {
    const struct CPU_State initial_cpu = {.pc=0xc1df, .a=0x67, .x=0x7c, .y=0xd0, .sp=0x82, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x44}, {.addr=0xc1df, .value=0x24}, {.addr=0xc1e0, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xc1e1, .a=0x44, .x=0x7c, .y=0xd0, .sp=0x82, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x44}, {.addr=0xc1df, .value=0x24}, {.addr=0xc1e0, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1df, .value=0x24, .type=IO_READ},
        {.addr=0xc1e0, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0216) {
    const struct CPU_State initial_cpu = {.pc=0x69dc, .a=0xc4, .x=0x6d, .y=0xb3, .sp=0x9c, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x6b}, {.addr=0x69dc, .value=0x24}, {.addr=0x69dd, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x69de, .a=0x40, .x=0x6d, .y=0xb3, .sp=0x9c, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x6b}, {.addr=0x69dc, .value=0x24}, {.addr=0x69dd, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x69dc, .value=0x24, .type=IO_READ},
        {.addr=0x69dd, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0217) {
    const struct CPU_State initial_cpu = {.pc=0x6362, .a=0x03, .x=0xe4, .y=0xcc, .sp=0xd2, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x57}, {.addr=0x6362, .value=0x24}, {.addr=0x6363, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x6364, .a=0x03, .x=0xe4, .y=0xcc, .sp=0xd2, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x57}, {.addr=0x6362, .value=0x24}, {.addr=0x6363, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6362, .value=0x24, .type=IO_READ},
        {.addr=0x6363, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0218) {
    const struct CPU_State initial_cpu = {.pc=0xa32e, .a=0xd9, .x=0x12, .y=0x80, .sp=0x91, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0xcf}, {.addr=0xa32e, .value=0x24}, {.addr=0xa32f, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xa330, .a=0xc9, .x=0x12, .y=0x80, .sp=0x91, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0xcf}, {.addr=0xa32e, .value=0x24}, {.addr=0xa32f, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xa32e, .value=0x24, .type=IO_READ},
        {.addr=0xa32f, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0219) {
    const struct CPU_State initial_cpu = {.pc=0x552a, .a=0x58, .x=0x95, .y=0xa0, .sp=0x2e, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x80}, {.addr=0x552a, .value=0x24}, {.addr=0x552b, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x552c, .a=0x00, .x=0x95, .y=0xa0, .sp=0x2e, .status=0x1b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x80}, {.addr=0x552a, .value=0x24}, {.addr=0x552b, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x552a, .value=0x24, .type=IO_READ},
        {.addr=0x552b, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_021A) {
    const struct CPU_State initial_cpu = {.pc=0x3ffc, .a=0x63, .x=0x40, .y=0x1a, .sp=0xc9, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0xcb}, {.addr=0x3ffc, .value=0x24}, {.addr=0x3ffd, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x3ffe, .a=0x43, .x=0x40, .y=0x1a, .sp=0xc9, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0xcb}, {.addr=0x3ffc, .value=0x24}, {.addr=0x3ffd, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ffc, .value=0x24, .type=IO_READ},
        {.addr=0x3ffd, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_021B) {
    const struct CPU_State initial_cpu = {.pc=0x569b, .a=0x65, .x=0x3f, .y=0x7b, .sp=0x13, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x3b}, {.addr=0x569b, .value=0x24}, {.addr=0x569c, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x569d, .a=0x21, .x=0x3f, .y=0x7b, .sp=0x13, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x3b}, {.addr=0x569b, .value=0x24}, {.addr=0x569c, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x569b, .value=0x24, .type=IO_READ},
        {.addr=0x569c, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_021C) {
    const struct CPU_State initial_cpu = {.pc=0x9be1, .a=0x08, .x=0xc4, .y=0xd0, .sp=0x34, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0xd4}, {.addr=0x9be1, .value=0x24}, {.addr=0x9be2, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x9be3, .a=0x00, .x=0xc4, .y=0xd0, .sp=0x34, .status=0x42};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0xd4}, {.addr=0x9be1, .value=0x24}, {.addr=0x9be2, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9be1, .value=0x24, .type=IO_READ},
        {.addr=0x9be2, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_021D) {
    const struct CPU_State initial_cpu = {.pc=0x95f6, .a=0xd7, .x=0xd3, .y=0x2a, .sp=0xc2, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x98}, {.addr=0x95f6, .value=0x24}, {.addr=0x95f7, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x95f8, .a=0x90, .x=0xd3, .y=0x2a, .sp=0xc2, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x98}, {.addr=0x95f6, .value=0x24}, {.addr=0x95f7, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x95f6, .value=0x24, .type=IO_READ},
        {.addr=0x95f7, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_021E) {
    const struct CPU_State initial_cpu = {.pc=0x076d, .a=0x8f, .x=0x5b, .y=0xe8, .sp=0xb1, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xfb}, {.addr=0x076d, .value=0x24}, {.addr=0x076e, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x076f, .a=0x8b, .x=0x5b, .y=0xe8, .sp=0xb1, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xfb}, {.addr=0x076d, .value=0x24}, {.addr=0x076e, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x076d, .value=0x24, .type=IO_READ},
        {.addr=0x076e, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_021F) {
    const struct CPU_State initial_cpu = {.pc=0x97d6, .a=0x4b, .x=0x3d, .y=0xaf, .sp=0xfc, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x47}, {.addr=0x97d6, .value=0x24}, {.addr=0x97d7, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x97d8, .a=0x43, .x=0x3d, .y=0xaf, .sp=0xfc, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x47}, {.addr=0x97d6, .value=0x24}, {.addr=0x97d7, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x97d6, .value=0x24, .type=IO_READ},
        {.addr=0x97d7, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0220) {
    const struct CPU_State initial_cpu = {.pc=0x3b2b, .a=0xd3, .x=0x76, .y=0x26, .sp=0x2c, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x69}, {.addr=0x3b2b, .value=0x24}, {.addr=0x3b2c, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x3b2d, .a=0x41, .x=0x76, .y=0x26, .sp=0x2c, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x69}, {.addr=0x3b2b, .value=0x24}, {.addr=0x3b2c, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b2b, .value=0x24, .type=IO_READ},
        {.addr=0x3b2c, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0221) {
    const struct CPU_State initial_cpu = {.pc=0xb474, .a=0x9d, .x=0x88, .y=0x96, .sp=0xeb, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0xf7}, {.addr=0xb474, .value=0x24}, {.addr=0xb475, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xb476, .a=0x95, .x=0x88, .y=0x96, .sp=0xeb, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0xf7}, {.addr=0xb474, .value=0x24}, {.addr=0xb475, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb474, .value=0x24, .type=IO_READ},
        {.addr=0xb475, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0222) {
    const struct CPU_State initial_cpu = {.pc=0xf5b5, .a=0x9a, .x=0xa5, .y=0xd1, .sp=0xd2, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x31}, {.addr=0xf5b5, .value=0x24}, {.addr=0xf5b6, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xf5b7, .a=0x10, .x=0xa5, .y=0xd1, .sp=0xd2, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x31}, {.addr=0xf5b5, .value=0x24}, {.addr=0xf5b6, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5b5, .value=0x24, .type=IO_READ},
        {.addr=0xf5b6, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0223) {
    const struct CPU_State initial_cpu = {.pc=0xdbcb, .a=0xd1, .x=0x11, .y=0x98, .sp=0xc6, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xdc}, {.addr=0xdbcb, .value=0x24}, {.addr=0xdbcc, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xdbcd, .a=0xd0, .x=0x11, .y=0x98, .sp=0xc6, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xdc}, {.addr=0xdbcb, .value=0x24}, {.addr=0xdbcc, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbcb, .value=0x24, .type=IO_READ},
        {.addr=0xdbcc, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0224) {
    const struct CPU_State initial_cpu = {.pc=0x4352, .a=0x16, .x=0x9d, .y=0x42, .sp=0xb9, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xac}, {.addr=0x4352, .value=0x24}, {.addr=0x4353, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x4354, .a=0x04, .x=0x9d, .y=0x42, .sp=0xb9, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xac}, {.addr=0x4352, .value=0x24}, {.addr=0x4353, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x4352, .value=0x24, .type=IO_READ},
        {.addr=0x4353, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0225) {
    const struct CPU_State initial_cpu = {.pc=0xc4ab, .a=0xfe, .x=0x86, .y=0xcb, .sp=0x6d, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xc3}, {.addr=0xc4ab, .value=0x24}, {.addr=0xc4ac, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xc4ad, .a=0xc2, .x=0x86, .y=0xcb, .sp=0x6d, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xc3}, {.addr=0xc4ab, .value=0x24}, {.addr=0xc4ac, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4ab, .value=0x24, .type=IO_READ},
        {.addr=0xc4ac, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0226) {
    const struct CPU_State initial_cpu = {.pc=0x03a2, .a=0x43, .x=0x35, .y=0x13, .sp=0x8f, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x40}, {.addr=0x03a2, .value=0x24}, {.addr=0x03a3, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x03a4, .a=0x40, .x=0x35, .y=0x13, .sp=0x8f, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x40}, {.addr=0x03a2, .value=0x24}, {.addr=0x03a3, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x03a2, .value=0x24, .type=IO_READ},
        {.addr=0x03a3, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0227) {
    const struct CPU_State initial_cpu = {.pc=0x5446, .a=0x58, .x=0xe8, .y=0xed, .sp=0x5b, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0xfb}, {.addr=0x5446, .value=0x24}, {.addr=0x5447, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x5448, .a=0x58, .x=0xe8, .y=0xed, .sp=0x5b, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0xfb}, {.addr=0x5446, .value=0x24}, {.addr=0x5447, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5446, .value=0x24, .type=IO_READ},
        {.addr=0x5447, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0228) {
    const struct CPU_State initial_cpu = {.pc=0x2d46, .a=0x04, .x=0x85, .y=0x12, .sp=0x66, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0x5d}, {.addr=0x2d46, .value=0x24}, {.addr=0x2d47, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x2d48, .a=0x04, .x=0x85, .y=0x12, .sp=0x66, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0x5d}, {.addr=0x2d46, .value=0x24}, {.addr=0x2d47, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d46, .value=0x24, .type=IO_READ},
        {.addr=0x2d47, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0229) {
    const struct CPU_State initial_cpu = {.pc=0x5779, .a=0x22, .x=0x0e, .y=0xf7, .sp=0x74, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x5f}, {.addr=0x5779, .value=0x24}, {.addr=0x577a, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x577b, .a=0x02, .x=0x0e, .y=0xf7, .sp=0x74, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x5f}, {.addr=0x5779, .value=0x24}, {.addr=0x577a, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x5779, .value=0x24, .type=IO_READ},
        {.addr=0x577a, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_022A) {
    const struct CPU_State initial_cpu = {.pc=0x3610, .a=0x9d, .x=0x3e, .y=0x7e, .sp=0x53, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0x04}, {.addr=0x3610, .value=0x24}, {.addr=0x3611, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x3612, .a=0x04, .x=0x3e, .y=0x7e, .sp=0x53, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0x04}, {.addr=0x3610, .value=0x24}, {.addr=0x3611, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x3610, .value=0x24, .type=IO_READ},
        {.addr=0x3611, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_022B) {
    const struct CPU_State initial_cpu = {.pc=0x4852, .a=0xeb, .x=0xd2, .y=0x4c, .sp=0x5f, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x23}, {.addr=0x4852, .value=0x24}, {.addr=0x4853, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x4854, .a=0x23, .x=0xd2, .y=0x4c, .sp=0x5f, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x23}, {.addr=0x4852, .value=0x24}, {.addr=0x4853, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x4852, .value=0x24, .type=IO_READ},
        {.addr=0x4853, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_022C) {
    const struct CPU_State initial_cpu = {.pc=0xd0a6, .a=0x41, .x=0x4a, .y=0xac, .sp=0x01, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xc3}, {.addr=0xd0a6, .value=0x24}, {.addr=0xd0a7, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xd0a8, .a=0x41, .x=0x4a, .y=0xac, .sp=0x01, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xc3}, {.addr=0xd0a6, .value=0x24}, {.addr=0xd0a7, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0a6, .value=0x24, .type=IO_READ},
        {.addr=0xd0a7, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_022D) {
    const struct CPU_State initial_cpu = {.pc=0xd221, .a=0x1a, .x=0x10, .y=0x91, .sp=0xba, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0xfe}, {.addr=0xd221, .value=0x24}, {.addr=0xd222, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xd223, .a=0x1a, .x=0x10, .y=0x91, .sp=0xba, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0xfe}, {.addr=0xd221, .value=0x24}, {.addr=0xd222, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xd221, .value=0x24, .type=IO_READ},
        {.addr=0xd222, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_022E) {
    const struct CPU_State initial_cpu = {.pc=0x5061, .a=0x8c, .x=0x4c, .y=0x30, .sp=0x42, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x03}, {.addr=0x5061, .value=0x24}, {.addr=0x5062, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x5063, .a=0x00, .x=0x4c, .y=0x30, .sp=0x42, .status=0x0b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x03}, {.addr=0x5061, .value=0x24}, {.addr=0x5062, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x5061, .value=0x24, .type=IO_READ},
        {.addr=0x5062, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_022F) {
    const struct CPU_State initial_cpu = {.pc=0xead2, .a=0xc6, .x=0x50, .y=0xb0, .sp=0x37, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0xba}, {.addr=0xead2, .value=0x24}, {.addr=0xead3, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xead4, .a=0x82, .x=0x50, .y=0xb0, .sp=0x37, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0xba}, {.addr=0xead2, .value=0x24}, {.addr=0xead3, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xead2, .value=0x24, .type=IO_READ},
        {.addr=0xead3, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0230) {
    const struct CPU_State initial_cpu = {.pc=0x8932, .a=0x5e, .x=0x9d, .y=0xde, .sp=0x04, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0xc4}, {.addr=0x8932, .value=0x24}, {.addr=0x8933, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x8934, .a=0x44, .x=0x9d, .y=0xde, .sp=0x04, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0xc4}, {.addr=0x8932, .value=0x24}, {.addr=0x8933, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8932, .value=0x24, .type=IO_READ},
        {.addr=0x8933, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0231) {
    const struct CPU_State initial_cpu = {.pc=0xe82f, .a=0x4d, .x=0x64, .y=0xb7, .sp=0x7c, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x2c}, {.addr=0xe82f, .value=0x24}, {.addr=0xe830, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xe831, .a=0x0c, .x=0x64, .y=0xb7, .sp=0x7c, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x2c}, {.addr=0xe82f, .value=0x24}, {.addr=0xe830, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe82f, .value=0x24, .type=IO_READ},
        {.addr=0xe830, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0232) {
    const struct CPU_State initial_cpu = {.pc=0xbaca, .a=0x1d, .x=0x2b, .y=0xb8, .sp=0xb1, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0xd6}, {.addr=0xbaca, .value=0x24}, {.addr=0xbacb, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xbacc, .a=0x14, .x=0x2b, .y=0xb8, .sp=0xb1, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0xd6}, {.addr=0xbaca, .value=0x24}, {.addr=0xbacb, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xbaca, .value=0x24, .type=IO_READ},
        {.addr=0xbacb, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0233) {
    const struct CPU_State initial_cpu = {.pc=0xec87, .a=0x07, .x=0xd4, .y=0xd8, .sp=0xc2, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x3f}, {.addr=0xec87, .value=0x24}, {.addr=0xec88, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xec89, .a=0x07, .x=0xd4, .y=0xd8, .sp=0xc2, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x3f}, {.addr=0xec87, .value=0x24}, {.addr=0xec88, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xec87, .value=0x24, .type=IO_READ},
        {.addr=0xec88, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0234) {
    const struct CPU_State initial_cpu = {.pc=0x72c5, .a=0x30, .x=0x3e, .y=0xc7, .sp=0xe5, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0x15}, {.addr=0x72c5, .value=0x24}, {.addr=0x72c6, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x72c7, .a=0x10, .x=0x3e, .y=0xc7, .sp=0xe5, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0x15}, {.addr=0x72c5, .value=0x24}, {.addr=0x72c6, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x72c5, .value=0x24, .type=IO_READ},
        {.addr=0x72c6, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0235) {
    const struct CPU_State initial_cpu = {.pc=0x5600, .a=0x03, .x=0x1c, .y=0xa2, .sp=0x01, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xb2}, {.addr=0x5600, .value=0x24}, {.addr=0x5601, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x5602, .a=0x02, .x=0x1c, .y=0xa2, .sp=0x01, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xb2}, {.addr=0x5600, .value=0x24}, {.addr=0x5601, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5600, .value=0x24, .type=IO_READ},
        {.addr=0x5601, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0236) {
    const struct CPU_State initial_cpu = {.pc=0xcd0b, .a=0x5f, .x=0x07, .y=0xcb, .sp=0xaa, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0xbc}, {.addr=0xcd0b, .value=0x24}, {.addr=0xcd0c, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0xcd0d, .a=0x1c, .x=0x07, .y=0xcb, .sp=0xaa, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0xbc}, {.addr=0xcd0b, .value=0x24}, {.addr=0xcd0c, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd0b, .value=0x24, .type=IO_READ},
        {.addr=0xcd0c, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0237) {
    const struct CPU_State initial_cpu = {.pc=0xa2d6, .a=0x9b, .x=0x0a, .y=0x64, .sp=0xb1, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x67}, {.addr=0xa2d6, .value=0x24}, {.addr=0xa2d7, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xa2d8, .a=0x03, .x=0x0a, .y=0x64, .sp=0xb1, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x67}, {.addr=0xa2d6, .value=0x24}, {.addr=0xa2d7, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2d6, .value=0x24, .type=IO_READ},
        {.addr=0xa2d7, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0238) {
    const struct CPU_State initial_cpu = {.pc=0xe8dc, .a=0x82, .x=0xc1, .y=0xed, .sp=0x60, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0xa0}, {.addr=0xe8dc, .value=0x24}, {.addr=0xe8dd, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xe8de, .a=0x80, .x=0xc1, .y=0xed, .sp=0x60, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0xa0}, {.addr=0xe8dc, .value=0x24}, {.addr=0xe8dd, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8dc, .value=0x24, .type=IO_READ},
        {.addr=0xe8dd, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0239) {
    const struct CPU_State initial_cpu = {.pc=0x8106, .a=0x47, .x=0x32, .y=0x23, .sp=0x0a, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xe1}, {.addr=0x8106, .value=0x24}, {.addr=0x8107, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x8108, .a=0x41, .x=0x32, .y=0x23, .sp=0x0a, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xe1}, {.addr=0x8106, .value=0x24}, {.addr=0x8107, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8106, .value=0x24, .type=IO_READ},
        {.addr=0x8107, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_023A) {
    const struct CPU_State initial_cpu = {.pc=0x4173, .a=0x2c, .x=0xcf, .y=0x1a, .sp=0x37, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xfb}, {.addr=0x4173, .value=0x24}, {.addr=0x4174, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x4175, .a=0x28, .x=0xcf, .y=0x1a, .sp=0x37, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xfb}, {.addr=0x4173, .value=0x24}, {.addr=0x4174, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x4173, .value=0x24, .type=IO_READ},
        {.addr=0x4174, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_023B) {
    const struct CPU_State initial_cpu = {.pc=0x523c, .a=0xf4, .x=0x1c, .y=0x77, .sp=0xb2, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xa8}, {.addr=0x523c, .value=0x24}, {.addr=0x523d, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x523e, .a=0xa0, .x=0x1c, .y=0x77, .sp=0xb2, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xa8}, {.addr=0x523c, .value=0x24}, {.addr=0x523d, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x523c, .value=0x24, .type=IO_READ},
        {.addr=0x523d, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_023C) {
    const struct CPU_State initial_cpu = {.pc=0x808c, .a=0xc1, .x=0x1c, .y=0x62, .sp=0x6d, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0xdc}, {.addr=0x808c, .value=0x24}, {.addr=0x808d, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x808e, .a=0xc0, .x=0x1c, .y=0x62, .sp=0x6d, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0xdc}, {.addr=0x808c, .value=0x24}, {.addr=0x808d, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x808c, .value=0x24, .type=IO_READ},
        {.addr=0x808d, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_023D) {
    const struct CPU_State initial_cpu = {.pc=0x3999, .a=0x83, .x=0x86, .y=0xf7, .sp=0xae, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0xca}, {.addr=0x3999, .value=0x24}, {.addr=0x399a, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x399b, .a=0x82, .x=0x86, .y=0xf7, .sp=0xae, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0xca}, {.addr=0x3999, .value=0x24}, {.addr=0x399a, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x3999, .value=0x24, .type=IO_READ},
        {.addr=0x399a, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_023E) {
    const struct CPU_State initial_cpu = {.pc=0xb5bb, .a=0x7a, .x=0xf3, .y=0x41, .sp=0x09, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x39}, {.addr=0xb5bb, .value=0x24}, {.addr=0xb5bc, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xb5bd, .a=0x38, .x=0xf3, .y=0x41, .sp=0x09, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x39}, {.addr=0xb5bb, .value=0x24}, {.addr=0xb5bc, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5bb, .value=0x24, .type=IO_READ},
        {.addr=0xb5bc, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_023F) {
    const struct CPU_State initial_cpu = {.pc=0xab7a, .a=0x92, .x=0xef, .y=0xae, .sp=0x2f, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x27}, {.addr=0xab7a, .value=0x24}, {.addr=0xab7b, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xab7c, .a=0x02, .x=0xef, .y=0xae, .sp=0x2f, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x27}, {.addr=0xab7a, .value=0x24}, {.addr=0xab7b, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xab7a, .value=0x24, .type=IO_READ},
        {.addr=0xab7b, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0240) {
    const struct CPU_State initial_cpu = {.pc=0x3a12, .a=0xc7, .x=0x35, .y=0x97, .sp=0x0f, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xad}, {.addr=0x3a12, .value=0x24}, {.addr=0x3a13, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x3a14, .a=0x85, .x=0x35, .y=0x97, .sp=0x0f, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xad}, {.addr=0x3a12, .value=0x24}, {.addr=0x3a13, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a12, .value=0x24, .type=IO_READ},
        {.addr=0x3a13, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0241) {
    const struct CPU_State initial_cpu = {.pc=0xacc6, .a=0x55, .x=0xf9, .y=0xda, .sp=0xc4, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xb0}, {.addr=0xacc6, .value=0x24}, {.addr=0xacc7, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xacc8, .a=0x10, .x=0xf9, .y=0xda, .sp=0xc4, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xb0}, {.addr=0xacc6, .value=0x24}, {.addr=0xacc7, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xacc6, .value=0x24, .type=IO_READ},
        {.addr=0xacc7, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0242) {
    const struct CPU_State initial_cpu = {.pc=0xa2cd, .a=0x2a, .x=0x12, .y=0x08, .sp=0xab, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x44}, {.addr=0xa2cd, .value=0x24}, {.addr=0xa2ce, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xa2cf, .a=0x00, .x=0x12, .y=0x08, .sp=0xab, .status=0x17};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x44}, {.addr=0xa2cd, .value=0x24}, {.addr=0xa2ce, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2cd, .value=0x24, .type=IO_READ},
        {.addr=0xa2ce, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0243) {
    const struct CPU_State initial_cpu = {.pc=0x18b2, .a=0x3c, .x=0x5b, .y=0x44, .sp=0x6e, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x1e}, {.addr=0x18b2, .value=0x24}, {.addr=0x18b3, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x18b4, .a=0x1c, .x=0x5b, .y=0x44, .sp=0x6e, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x1e}, {.addr=0x18b2, .value=0x24}, {.addr=0x18b3, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x18b2, .value=0x24, .type=IO_READ},
        {.addr=0x18b3, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0244) {
    const struct CPU_State initial_cpu = {.pc=0x9289, .a=0xe8, .x=0x29, .y=0xc8, .sp=0x0f, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0x2e}, {.addr=0x9289, .value=0x24}, {.addr=0x928a, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x928b, .a=0x28, .x=0x29, .y=0xc8, .sp=0x0f, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0x2e}, {.addr=0x9289, .value=0x24}, {.addr=0x928a, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9289, .value=0x24, .type=IO_READ},
        {.addr=0x928a, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0245) {
    const struct CPU_State initial_cpu = {.pc=0xe753, .a=0x9b, .x=0x89, .y=0xe5, .sp=0xd2, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x35}, {.addr=0xe753, .value=0x24}, {.addr=0xe754, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xe755, .a=0x11, .x=0x89, .y=0xe5, .sp=0xd2, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x35}, {.addr=0xe753, .value=0x24}, {.addr=0xe754, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe753, .value=0x24, .type=IO_READ},
        {.addr=0xe754, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0246) {
    const struct CPU_State initial_cpu = {.pc=0x22e0, .a=0x0c, .x=0xf0, .y=0x01, .sp=0x52, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x9a}, {.addr=0x22e0, .value=0x24}, {.addr=0x22e1, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x22e2, .a=0x08, .x=0xf0, .y=0x01, .sp=0x52, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x9a}, {.addr=0x22e0, .value=0x24}, {.addr=0x22e1, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x22e0, .value=0x24, .type=IO_READ},
        {.addr=0x22e1, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0247) {
    const struct CPU_State initial_cpu = {.pc=0xe5f3, .a=0x5e, .x=0xe1, .y=0x7e, .sp=0x58, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x0f}, {.addr=0xe5f3, .value=0x24}, {.addr=0xe5f4, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xe5f5, .a=0x0e, .x=0xe1, .y=0x7e, .sp=0x58, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x0f}, {.addr=0xe5f3, .value=0x24}, {.addr=0xe5f4, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5f3, .value=0x24, .type=IO_READ},
        {.addr=0xe5f4, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0249) {
    const struct CPU_State initial_cpu = {.pc=0x0c99, .a=0x3d, .x=0xb8, .y=0x6b, .sp=0xc9, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x30}, {.addr=0x0c99, .value=0x24}, {.addr=0x0c9a, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x0c9b, .a=0x30, .x=0xb8, .y=0x6b, .sp=0xc9, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x30}, {.addr=0x0c99, .value=0x24}, {.addr=0x0c9a, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c99, .value=0x24, .type=IO_READ},
        {.addr=0x0c9a, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_024B) {
    const struct CPU_State initial_cpu = {.pc=0x1241, .a=0x03, .x=0x8e, .y=0x92, .sp=0xe7, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0xc6}, {.addr=0x1241, .value=0x24}, {.addr=0x1242, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x1243, .a=0x02, .x=0x8e, .y=0x92, .sp=0xe7, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0xc6}, {.addr=0x1241, .value=0x24}, {.addr=0x1242, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1241, .value=0x24, .type=IO_READ},
        {.addr=0x1242, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_024C) {
    const struct CPU_State initial_cpu = {.pc=0x5a60, .a=0xd1, .x=0x49, .y=0x0f, .sp=0x61, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x0d}, {.addr=0x5a60, .value=0x24}, {.addr=0x5a61, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x5a62, .a=0x01, .x=0x49, .y=0x0f, .sp=0x61, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x0d}, {.addr=0x5a60, .value=0x24}, {.addr=0x5a61, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a60, .value=0x24, .type=IO_READ},
        {.addr=0x5a61, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_024D) {
    const struct CPU_State initial_cpu = {.pc=0xced1, .a=0x37, .x=0xc4, .y=0x75, .sp=0x71, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xc6}, {.addr=0xced1, .value=0x24}, {.addr=0xced2, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xced3, .a=0x06, .x=0xc4, .y=0x75, .sp=0x71, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xc6}, {.addr=0xced1, .value=0x24}, {.addr=0xced2, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xced1, .value=0x24, .type=IO_READ},
        {.addr=0xced2, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_024E) {
    const struct CPU_State initial_cpu = {.pc=0xad15, .a=0x0e, .x=0x4d, .y=0x50, .sp=0x2b, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x27}, {.addr=0xad15, .value=0x24}, {.addr=0xad16, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xad17, .a=0x06, .x=0x4d, .y=0x50, .sp=0x2b, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x27}, {.addr=0xad15, .value=0x24}, {.addr=0xad16, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xad15, .value=0x24, .type=IO_READ},
        {.addr=0xad16, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_024F) {
    const struct CPU_State initial_cpu = {.pc=0x9295, .a=0xaf, .x=0x95, .y=0x15, .sp=0xa4, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x63}, {.addr=0x9295, .value=0x24}, {.addr=0x9296, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x9297, .a=0x23, .x=0x95, .y=0x15, .sp=0xa4, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x63}, {.addr=0x9295, .value=0x24}, {.addr=0x9296, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x9295, .value=0x24, .type=IO_READ},
        {.addr=0x9296, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0250) {
    const struct CPU_State initial_cpu = {.pc=0xb71b, .a=0x1b, .x=0x17, .y=0x15, .sp=0xc9, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x48}, {.addr=0xb71b, .value=0x24}, {.addr=0xb71c, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xb71d, .a=0x08, .x=0x17, .y=0x15, .sp=0xc9, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x48}, {.addr=0xb71b, .value=0x24}, {.addr=0xb71c, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb71b, .value=0x24, .type=IO_READ},
        {.addr=0xb71c, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0251) {
    const struct CPU_State initial_cpu = {.pc=0x24e4, .a=0x31, .x=0x52, .y=0x41, .sp=0x83, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x6a}, {.addr=0x24e4, .value=0x24}, {.addr=0x24e5, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x24e6, .a=0x20, .x=0x52, .y=0x41, .sp=0x83, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x6a}, {.addr=0x24e4, .value=0x24}, {.addr=0x24e5, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x24e4, .value=0x24, .type=IO_READ},
        {.addr=0x24e5, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0252) {
    const struct CPU_State initial_cpu = {.pc=0xbe61, .a=0x5a, .x=0x09, .y=0xfe, .sp=0xda, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x9c}, {.addr=0xbe61, .value=0x24}, {.addr=0xbe62, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xbe63, .a=0x18, .x=0x09, .y=0xfe, .sp=0xda, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x9c}, {.addr=0xbe61, .value=0x24}, {.addr=0xbe62, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe61, .value=0x24, .type=IO_READ},
        {.addr=0xbe62, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0254) {
    const struct CPU_State initial_cpu = {.pc=0x7f53, .a=0xc3, .x=0x3f, .y=0x20, .sp=0xb2, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0xdf}, {.addr=0x7f53, .value=0x24}, {.addr=0x7f54, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x7f55, .a=0xc3, .x=0x3f, .y=0x20, .sp=0xb2, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0xdf}, {.addr=0x7f53, .value=0x24}, {.addr=0x7f54, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f53, .value=0x24, .type=IO_READ},
        {.addr=0x7f54, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0255) {
    const struct CPU_State initial_cpu = {.pc=0x4552, .a=0x89, .x=0x5a, .y=0x1b, .sp=0x79, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xf2}, {.addr=0x4552, .value=0x24}, {.addr=0x4553, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x4554, .a=0x80, .x=0x5a, .y=0x1b, .sp=0x79, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xf2}, {.addr=0x4552, .value=0x24}, {.addr=0x4553, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x4552, .value=0x24, .type=IO_READ},
        {.addr=0x4553, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0256) {
    const struct CPU_State initial_cpu = {.pc=0x59f1, .a=0x2a, .x=0xa6, .y=0x6b, .sp=0xc4, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x04}, {.addr=0x59f1, .value=0x24}, {.addr=0x59f2, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x59f3, .a=0x00, .x=0xa6, .y=0x6b, .sp=0xc4, .status=0x26};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x04}, {.addr=0x59f1, .value=0x24}, {.addr=0x59f2, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x59f1, .value=0x24, .type=IO_READ},
        {.addr=0x59f2, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0257) {
    const struct CPU_State initial_cpu = {.pc=0xbad2, .a=0xe5, .x=0x53, .y=0x9e, .sp=0xd3, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0xd9}, {.addr=0xbad2, .value=0x24}, {.addr=0xbad3, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xbad4, .a=0xc1, .x=0x53, .y=0x9e, .sp=0xd3, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0xd9}, {.addr=0xbad2, .value=0x24}, {.addr=0xbad3, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xbad2, .value=0x24, .type=IO_READ},
        {.addr=0xbad3, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0258) {
    const struct CPU_State initial_cpu = {.pc=0xb029, .a=0x88, .x=0x60, .y=0xd2, .sp=0xa9, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x5c}, {.addr=0xb029, .value=0x24}, {.addr=0xb02a, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xb02b, .a=0x08, .x=0x60, .y=0xd2, .sp=0xa9, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x5c}, {.addr=0xb029, .value=0x24}, {.addr=0xb02a, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb029, .value=0x24, .type=IO_READ},
        {.addr=0xb02a, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0259) {
    const struct CPU_State initial_cpu = {.pc=0x1ead, .a=0x3c, .x=0x0b, .y=0x9e, .sp=0xc1, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0xcb}, {.addr=0x1ead, .value=0x24}, {.addr=0x1eae, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x1eaf, .a=0x08, .x=0x0b, .y=0x9e, .sp=0xc1, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0xcb}, {.addr=0x1ead, .value=0x24}, {.addr=0x1eae, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ead, .value=0x24, .type=IO_READ},
        {.addr=0x1eae, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_025A) {
    const struct CPU_State initial_cpu = {.pc=0x7e41, .a=0x5c, .x=0x30, .y=0x06, .sp=0xa4, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xea}, {.addr=0x7e41, .value=0x24}, {.addr=0x7e42, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x7e43, .a=0x48, .x=0x30, .y=0x06, .sp=0xa4, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xea}, {.addr=0x7e41, .value=0x24}, {.addr=0x7e42, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e41, .value=0x24, .type=IO_READ},
        {.addr=0x7e42, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_025B) {
    const struct CPU_State initial_cpu = {.pc=0x70b0, .a=0x3f, .x=0x20, .y=0x99, .sp=0x36, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x89}, {.addr=0x70b0, .value=0x24}, {.addr=0x70b1, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x70b2, .a=0x09, .x=0x20, .y=0x99, .sp=0x36, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x89}, {.addr=0x70b0, .value=0x24}, {.addr=0x70b1, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x70b0, .value=0x24, .type=IO_READ},
        {.addr=0x70b1, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_025C) {
    const struct CPU_State initial_cpu = {.pc=0x522c, .a=0x7f, .x=0xe5, .y=0x6a, .sp=0x0a, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xed}, {.addr=0x522c, .value=0x24}, {.addr=0x522d, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x522e, .a=0x6d, .x=0xe5, .y=0x6a, .sp=0x0a, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xed}, {.addr=0x522c, .value=0x24}, {.addr=0x522d, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x522c, .value=0x24, .type=IO_READ},
        {.addr=0x522d, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_025D) {
    const struct CPU_State initial_cpu = {.pc=0x313c, .a=0xfe, .x=0x4f, .y=0xd8, .sp=0xd4, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x3f}, {.addr=0x313c, .value=0x24}, {.addr=0x313d, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x313e, .a=0x3e, .x=0x4f, .y=0xd8, .sp=0xd4, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x3f}, {.addr=0x313c, .value=0x24}, {.addr=0x313d, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x313c, .value=0x24, .type=IO_READ},
        {.addr=0x313d, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_025E) {
    const struct CPU_State initial_cpu = {.pc=0x88cd, .a=0xe7, .x=0x47, .y=0x10, .sp=0xe8, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x60}, {.addr=0x88cd, .value=0x24}, {.addr=0x88ce, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x88cf, .a=0x60, .x=0x47, .y=0x10, .sp=0xe8, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x60}, {.addr=0x88cd, .value=0x24}, {.addr=0x88ce, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x88cd, .value=0x24, .type=IO_READ},
        {.addr=0x88ce, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_025F) {
    const struct CPU_State initial_cpu = {.pc=0xfe12, .a=0x75, .x=0x52, .y=0x24, .sp=0x36, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x32}, {.addr=0xfe12, .value=0x24}, {.addr=0xfe13, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xfe14, .a=0x30, .x=0x52, .y=0x24, .sp=0x36, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x32}, {.addr=0xfe12, .value=0x24}, {.addr=0xfe13, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe12, .value=0x24, .type=IO_READ},
        {.addr=0xfe13, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0260) {
    const struct CPU_State initial_cpu = {.pc=0xe5dc, .a=0xf3, .x=0x2c, .y=0xea, .sp=0x9a, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x29}, {.addr=0xe5dc, .value=0x24}, {.addr=0xe5dd, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xe5de, .a=0x21, .x=0x2c, .y=0xea, .sp=0x9a, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x29}, {.addr=0xe5dc, .value=0x24}, {.addr=0xe5dd, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5dc, .value=0x24, .type=IO_READ},
        {.addr=0xe5dd, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0261) {
    const struct CPU_State initial_cpu = {.pc=0x5f09, .a=0xd9, .x=0x7a, .y=0x73, .sp=0x4c, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x70}, {.addr=0x5f09, .value=0x24}, {.addr=0x5f0a, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x5f0b, .a=0x50, .x=0x7a, .y=0x73, .sp=0x4c, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x70}, {.addr=0x5f09, .value=0x24}, {.addr=0x5f0a, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f09, .value=0x24, .type=IO_READ},
        {.addr=0x5f0a, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0262) {
    const struct CPU_State initial_cpu = {.pc=0x6249, .a=0xc1, .x=0xa6, .y=0x3c, .sp=0xaa, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0xb9}, {.addr=0x6249, .value=0x24}, {.addr=0x624a, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x624b, .a=0x81, .x=0xa6, .y=0x3c, .sp=0xaa, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0xb9}, {.addr=0x6249, .value=0x24}, {.addr=0x624a, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6249, .value=0x24, .type=IO_READ},
        {.addr=0x624a, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0263) {
    const struct CPU_State initial_cpu = {.pc=0x471e, .a=0x15, .x=0xd9, .y=0x4b, .sp=0x6a, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x2e}, {.addr=0x471e, .value=0x24}, {.addr=0x471f, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x4720, .a=0x04, .x=0xd9, .y=0x4b, .sp=0x6a, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x2e}, {.addr=0x471e, .value=0x24}, {.addr=0x471f, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x471e, .value=0x24, .type=IO_READ},
        {.addr=0x471f, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0264) {
    const struct CPU_State initial_cpu = {.pc=0x4682, .a=0x2a, .x=0x76, .y=0xed, .sp=0x19, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x7d}, {.addr=0x4682, .value=0x24}, {.addr=0x4683, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x4684, .a=0x28, .x=0x76, .y=0xed, .sp=0x19, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x7d}, {.addr=0x4682, .value=0x24}, {.addr=0x4683, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x4682, .value=0x24, .type=IO_READ},
        {.addr=0x4683, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0265) {
    const struct CPU_State initial_cpu = {.pc=0x6b42, .a=0xc0, .x=0x1b, .y=0x36, .sp=0x88, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x3a}, {.addr=0x6b42, .value=0x24}, {.addr=0x6b43, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x6b44, .a=0x00, .x=0x1b, .y=0x36, .sp=0x88, .status=0x4f};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x3a}, {.addr=0x6b42, .value=0x24}, {.addr=0x6b43, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b42, .value=0x24, .type=IO_READ},
        {.addr=0x6b43, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0266) {
    const struct CPU_State initial_cpu = {.pc=0x9790, .a=0x57, .x=0xa1, .y=0x3c, .sp=0x29, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xb8}, {.addr=0x9790, .value=0x24}, {.addr=0x9791, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x9792, .a=0x10, .x=0xa1, .y=0x3c, .sp=0x29, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xb8}, {.addr=0x9790, .value=0x24}, {.addr=0x9791, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x9790, .value=0x24, .type=IO_READ},
        {.addr=0x9791, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0267) {
    const struct CPU_State initial_cpu = {.pc=0xa9db, .a=0x6e, .x=0xe2, .y=0x1a, .sp=0x78, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0x29}, {.addr=0xa9db, .value=0x24}, {.addr=0xa9dc, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xa9dd, .a=0x28, .x=0xe2, .y=0x1a, .sp=0x78, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0x29}, {.addr=0xa9db, .value=0x24}, {.addr=0xa9dc, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9db, .value=0x24, .type=IO_READ},
        {.addr=0xa9dc, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0269) {
    const struct CPU_State initial_cpu = {.pc=0xf2b4, .a=0xd0, .x=0x61, .y=0xc7, .sp=0x89, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x61}, {.addr=0xf2b4, .value=0x24}, {.addr=0xf2b5, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xf2b6, .a=0x40, .x=0x61, .y=0xc7, .sp=0x89, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x61}, {.addr=0xf2b4, .value=0x24}, {.addr=0xf2b5, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2b4, .value=0x24, .type=IO_READ},
        {.addr=0xf2b5, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_026B) {
    const struct CPU_State initial_cpu = {.pc=0x7754, .a=0xd6, .x=0x5c, .y=0xd9, .sp=0xac, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x76}, {.addr=0x7754, .value=0x24}, {.addr=0x7755, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x7756, .a=0x56, .x=0x5c, .y=0xd9, .sp=0xac, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x76}, {.addr=0x7754, .value=0x24}, {.addr=0x7755, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7754, .value=0x24, .type=IO_READ},
        {.addr=0x7755, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_026C) {
    const struct CPU_State initial_cpu = {.pc=0xd959, .a=0x5d, .x=0x10, .y=0xa4, .sp=0xb3, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x7c}, {.addr=0xd959, .value=0x24}, {.addr=0xd95a, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xd95b, .a=0x5c, .x=0x10, .y=0xa4, .sp=0xb3, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x7c}, {.addr=0xd959, .value=0x24}, {.addr=0xd95a, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xd959, .value=0x24, .type=IO_READ},
        {.addr=0xd95a, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_026E) {
    const struct CPU_State initial_cpu = {.pc=0x0bda, .a=0x6a, .x=0x28, .y=0xf5, .sp=0x01, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xca}, {.addr=0x0bda, .value=0x24}, {.addr=0x0bdb, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x0bdc, .a=0x4a, .x=0x28, .y=0xf5, .sp=0x01, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xca}, {.addr=0x0bda, .value=0x24}, {.addr=0x0bdb, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bda, .value=0x24, .type=IO_READ},
        {.addr=0x0bdb, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_026F) {
    const struct CPU_State initial_cpu = {.pc=0xa504, .a=0xac, .x=0xa6, .y=0xcb, .sp=0x1a, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0xce}, {.addr=0xa504, .value=0x24}, {.addr=0xa505, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xa506, .a=0x8c, .x=0xa6, .y=0xcb, .sp=0x1a, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0xce}, {.addr=0xa504, .value=0x24}, {.addr=0xa505, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xa504, .value=0x24, .type=IO_READ},
        {.addr=0xa505, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0270) {
    const struct CPU_State initial_cpu = {.pc=0xf164, .a=0x36, .x=0xd5, .y=0x1a, .sp=0x41, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x1a}, {.addr=0xf164, .value=0x24}, {.addr=0xf165, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0xf166, .a=0x12, .x=0xd5, .y=0x1a, .sp=0x41, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x1a}, {.addr=0xf164, .value=0x24}, {.addr=0xf165, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0xf164, .value=0x24, .type=IO_READ},
        {.addr=0xf165, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0271) {
    const struct CPU_State initial_cpu = {.pc=0xf1f2, .a=0x7a, .x=0xce, .y=0xdd, .sp=0xdb, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xf3}, {.addr=0xf1f2, .value=0x24}, {.addr=0xf1f3, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xf1f4, .a=0x72, .x=0xce, .y=0xdd, .sp=0xdb, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xf3}, {.addr=0xf1f2, .value=0x24}, {.addr=0xf1f3, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1f2, .value=0x24, .type=IO_READ},
        {.addr=0xf1f3, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0272) {
    const struct CPU_State initial_cpu = {.pc=0x3803, .a=0x3c, .x=0x20, .y=0x57, .sp=0xde, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xa3}, {.addr=0x3803, .value=0x24}, {.addr=0x3804, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x3805, .a=0x20, .x=0x20, .y=0x57, .sp=0xde, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xa3}, {.addr=0x3803, .value=0x24}, {.addr=0x3804, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x3803, .value=0x24, .type=IO_READ},
        {.addr=0x3804, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0273) {
    const struct CPU_State initial_cpu = {.pc=0x91cf, .a=0x3a, .x=0x69, .y=0x47, .sp=0x07, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x20}, {.addr=0x91cf, .value=0x24}, {.addr=0x91d0, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x91d1, .a=0x20, .x=0x69, .y=0x47, .sp=0x07, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x20}, {.addr=0x91cf, .value=0x24}, {.addr=0x91d0, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x91cf, .value=0x24, .type=IO_READ},
        {.addr=0x91d0, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0274) {
    const struct CPU_State initial_cpu = {.pc=0x7980, .a=0x41, .x=0xa0, .y=0x44, .sp=0x35, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0x42}, {.addr=0x7980, .value=0x24}, {.addr=0x7981, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x7982, .a=0x40, .x=0xa0, .y=0x44, .sp=0x35, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0x42}, {.addr=0x7980, .value=0x24}, {.addr=0x7981, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7980, .value=0x24, .type=IO_READ},
        {.addr=0x7981, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0275) {
    const struct CPU_State initial_cpu = {.pc=0xe843, .a=0xb9, .x=0x86, .y=0x52, .sp=0xe3, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x05}, {.addr=0xe843, .value=0x24}, {.addr=0xe844, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xe845, .a=0x01, .x=0x86, .y=0x52, .sp=0xe3, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x05}, {.addr=0xe843, .value=0x24}, {.addr=0xe844, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe843, .value=0x24, .type=IO_READ},
        {.addr=0xe844, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0276) {
    const struct CPU_State initial_cpu = {.pc=0x02a9, .a=0x14, .x=0xcc, .y=0x81, .sp=0xad, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0xa8}, {.addr=0x02a9, .value=0x24}, {.addr=0x02aa, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x02ab, .a=0x00, .x=0xcc, .y=0x81, .sp=0xad, .status=0x0b};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0xa8}, {.addr=0x02a9, .value=0x24}, {.addr=0x02aa, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x02a9, .value=0x24, .type=IO_READ},
        {.addr=0x02aa, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0277) {
    const struct CPU_State initial_cpu = {.pc=0x6be4, .a=0x68, .x=0x8d, .y=0xa3, .sp=0x08, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0xb4}, {.addr=0x6be4, .value=0x24}, {.addr=0x6be5, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x6be6, .a=0x20, .x=0x8d, .y=0xa3, .sp=0x08, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0xb4}, {.addr=0x6be4, .value=0x24}, {.addr=0x6be5, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6be4, .value=0x24, .type=IO_READ},
        {.addr=0x6be5, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0278) {
    const struct CPU_State initial_cpu = {.pc=0x0f98, .a=0xa4, .x=0x0c, .y=0x8f, .sp=0xb7, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x7a}, {.addr=0x0f98, .value=0x24}, {.addr=0x0f99, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x0f9a, .a=0x20, .x=0x0c, .y=0x8f, .sp=0xb7, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x7a}, {.addr=0x0f98, .value=0x24}, {.addr=0x0f99, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f98, .value=0x24, .type=IO_READ},
        {.addr=0x0f99, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0279) {
    const struct CPU_State initial_cpu = {.pc=0x2a64, .a=0xa1, .x=0xae, .y=0xfd, .sp=0x58, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xaa}, {.addr=0x2a64, .value=0x24}, {.addr=0x2a65, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x2a66, .a=0xa0, .x=0xae, .y=0xfd, .sp=0x58, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xaa}, {.addr=0x2a64, .value=0x24}, {.addr=0x2a65, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a64, .value=0x24, .type=IO_READ},
        {.addr=0x2a65, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_027A) {
    const struct CPU_State initial_cpu = {.pc=0xa240, .a=0xdc, .x=0x3f, .y=0x71, .sp=0xe8, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x6c}, {.addr=0xa240, .value=0x24}, {.addr=0xa241, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xa242, .a=0x4c, .x=0x3f, .y=0x71, .sp=0xe8, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x6c}, {.addr=0xa240, .value=0x24}, {.addr=0xa241, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa240, .value=0x24, .type=IO_READ},
        {.addr=0xa241, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_027B) {
    const struct CPU_State initial_cpu = {.pc=0xf96c, .a=0xc7, .x=0x05, .y=0x0d, .sp=0xbb, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x70}, {.addr=0xf96c, .value=0x24}, {.addr=0xf96d, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xf96e, .a=0x40, .x=0x05, .y=0x0d, .sp=0xbb, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x70}, {.addr=0xf96c, .value=0x24}, {.addr=0xf96d, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xf96c, .value=0x24, .type=IO_READ},
        {.addr=0xf96d, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_027C) {
    const struct CPU_State initial_cpu = {.pc=0x7294, .a=0xb0, .x=0x06, .y=0x67, .sp=0xa5, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xc8}, {.addr=0x7294, .value=0x24}, {.addr=0x7295, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x7296, .a=0x80, .x=0x06, .y=0x67, .sp=0xa5, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xc8}, {.addr=0x7294, .value=0x24}, {.addr=0x7295, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x7294, .value=0x24, .type=IO_READ},
        {.addr=0x7295, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_027D) {
    const struct CPU_State initial_cpu = {.pc=0xa296, .a=0x2c, .x=0x6c, .y=0xc9, .sp=0x0c, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x3a}, {.addr=0xa296, .value=0x24}, {.addr=0xa297, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xa298, .a=0x28, .x=0x6c, .y=0xc9, .sp=0x0c, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x3a}, {.addr=0xa296, .value=0x24}, {.addr=0xa297, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xa296, .value=0x24, .type=IO_READ},
        {.addr=0xa297, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_027E) {
    const struct CPU_State initial_cpu = {.pc=0x2ed0, .a=0x26, .x=0x25, .y=0xda, .sp=0xb8, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x62}, {.addr=0x2ed0, .value=0x24}, {.addr=0x2ed1, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x2ed2, .a=0x22, .x=0x25, .y=0xda, .sp=0xb8, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x62}, {.addr=0x2ed0, .value=0x24}, {.addr=0x2ed1, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ed0, .value=0x24, .type=IO_READ},
        {.addr=0x2ed1, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_027F) {
    const struct CPU_State initial_cpu = {.pc=0x16c1, .a=0x79, .x=0x9e, .y=0x03, .sp=0x64, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x0f}, {.addr=0x16c1, .value=0x24}, {.addr=0x16c2, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x16c3, .a=0x09, .x=0x9e, .y=0x03, .sp=0x64, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x0f}, {.addr=0x16c1, .value=0x24}, {.addr=0x16c2, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x16c1, .value=0x24, .type=IO_READ},
        {.addr=0x16c2, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0281) {
    const struct CPU_State initial_cpu = {.pc=0x4a52, .a=0x8e, .x=0x39, .y=0x53, .sp=0x3d, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x03}, {.addr=0x4a52, .value=0x24}, {.addr=0x4a53, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x4a54, .a=0x02, .x=0x39, .y=0x53, .sp=0x3d, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x03}, {.addr=0x4a52, .value=0x24}, {.addr=0x4a53, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a52, .value=0x24, .type=IO_READ},
        {.addr=0x4a53, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0282) {
    const struct CPU_State initial_cpu = {.pc=0xa81c, .a=0x23, .x=0x54, .y=0x42, .sp=0x67, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0xe8}, {.addr=0xa81c, .value=0x24}, {.addr=0xa81d, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xa81e, .a=0x20, .x=0x54, .y=0x42, .sp=0x67, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0xe8}, {.addr=0xa81c, .value=0x24}, {.addr=0xa81d, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xa81c, .value=0x24, .type=IO_READ},
        {.addr=0xa81d, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0283) {
    const struct CPU_State initial_cpu = {.pc=0x9c2f, .a=0x7d, .x=0x20, .y=0x13, .sp=0x9f, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x91}, {.addr=0x9c2f, .value=0x24}, {.addr=0x9c30, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x9c31, .a=0x11, .x=0x20, .y=0x13, .sp=0x9f, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x91}, {.addr=0x9c2f, .value=0x24}, {.addr=0x9c30, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c2f, .value=0x24, .type=IO_READ},
        {.addr=0x9c30, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0284) {
    const struct CPU_State initial_cpu = {.pc=0x44fc, .a=0xe7, .x=0xc2, .y=0x1f, .sp=0x14, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0xa5}, {.addr=0x44fc, .value=0x24}, {.addr=0x44fd, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x44fe, .a=0xa5, .x=0xc2, .y=0x1f, .sp=0x14, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0xa5}, {.addr=0x44fc, .value=0x24}, {.addr=0x44fd, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x44fc, .value=0x24, .type=IO_READ},
        {.addr=0x44fd, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0285) {
    const struct CPU_State initial_cpu = {.pc=0xdd9d, .a=0x6b, .x=0x66, .y=0xbe, .sp=0xb9, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0xed}, {.addr=0xdd9d, .value=0x24}, {.addr=0xdd9e, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0xdd9f, .a=0x69, .x=0x66, .y=0xbe, .sp=0xb9, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0xed}, {.addr=0xdd9d, .value=0x24}, {.addr=0xdd9e, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd9d, .value=0x24, .type=IO_READ},
        {.addr=0xdd9e, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0286) {
    const struct CPU_State initial_cpu = {.pc=0x5728, .a=0x78, .x=0xb2, .y=0x57, .sp=0x07, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0xbe}, {.addr=0x5728, .value=0x24}, {.addr=0x5729, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x572a, .a=0x38, .x=0xb2, .y=0x57, .sp=0x07, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0xbe}, {.addr=0x5728, .value=0x24}, {.addr=0x5729, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5728, .value=0x24, .type=IO_READ},
        {.addr=0x5729, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0287) {
    const struct CPU_State initial_cpu = {.pc=0xfe0b, .a=0x6d, .x=0x50, .y=0xcb, .sp=0x2e, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0xad}, {.addr=0xfe0b, .value=0x24}, {.addr=0xfe0c, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xfe0d, .a=0x2d, .x=0x50, .y=0xcb, .sp=0x2e, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0xad}, {.addr=0xfe0b, .value=0x24}, {.addr=0xfe0c, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe0b, .value=0x24, .type=IO_READ},
        {.addr=0xfe0c, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0288) {
    const struct CPU_State initial_cpu = {.pc=0xd6c3, .a=0xe7, .x=0xdc, .y=0x1f, .sp=0x68, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0xfd}, {.addr=0xd6c3, .value=0x24}, {.addr=0xd6c4, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xd6c5, .a=0xe5, .x=0xdc, .y=0x1f, .sp=0x68, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0xfd}, {.addr=0xd6c3, .value=0x24}, {.addr=0xd6c4, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6c3, .value=0x24, .type=IO_READ},
        {.addr=0xd6c4, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0289) {
    const struct CPU_State initial_cpu = {.pc=0x3101, .a=0xf6, .x=0xc1, .y=0xbb, .sp=0x07, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xc6}, {.addr=0x3101, .value=0x24}, {.addr=0x3102, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x3103, .a=0xc6, .x=0xc1, .y=0xbb, .sp=0x07, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xc6}, {.addr=0x3101, .value=0x24}, {.addr=0x3102, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3101, .value=0x24, .type=IO_READ},
        {.addr=0x3102, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_028A) {
    const struct CPU_State initial_cpu = {.pc=0xdc2d, .a=0xac, .x=0x7c, .y=0x9f, .sp=0x10, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0xfa}, {.addr=0xdc2d, .value=0x24}, {.addr=0xdc2e, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xdc2f, .a=0xa8, .x=0x7c, .y=0x9f, .sp=0x10, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0xfa}, {.addr=0xdc2d, .value=0x24}, {.addr=0xdc2e, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc2d, .value=0x24, .type=IO_READ},
        {.addr=0xdc2e, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_028B) {
    const struct CPU_State initial_cpu = {.pc=0xd633, .a=0x83, .x=0x8f, .y=0x35, .sp=0x6b, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x08}, {.addr=0xd633, .value=0x24}, {.addr=0xd634, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xd635, .a=0x00, .x=0x8f, .y=0x35, .sp=0x6b, .status=0x2f};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x08}, {.addr=0xd633, .value=0x24}, {.addr=0xd634, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd633, .value=0x24, .type=IO_READ},
        {.addr=0xd634, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_028C) {
    const struct CPU_State initial_cpu = {.pc=0x8da7, .a=0xf5, .x=0xe0, .y=0x2c, .sp=0x0a, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0xaf}, {.addr=0x8da7, .value=0x24}, {.addr=0x8da8, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x8da9, .a=0xa5, .x=0xe0, .y=0x2c, .sp=0x0a, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0xaf}, {.addr=0x8da7, .value=0x24}, {.addr=0x8da8, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8da7, .value=0x24, .type=IO_READ},
        {.addr=0x8da8, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_028D) {
    const struct CPU_State initial_cpu = {.pc=0x40e2, .a=0x5d, .x=0xab, .y=0xa8, .sp=0xa6, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0xd9}, {.addr=0x40e2, .value=0x24}, {.addr=0x40e3, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x40e4, .a=0x59, .x=0xab, .y=0xa8, .sp=0xa6, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0xd9}, {.addr=0x40e2, .value=0x24}, {.addr=0x40e3, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x40e2, .value=0x24, .type=IO_READ},
        {.addr=0x40e3, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_028E) {
    const struct CPU_State initial_cpu = {.pc=0x48a5, .a=0x91, .x=0xbd, .y=0xea, .sp=0xf3, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x21}, {.addr=0x48a5, .value=0x24}, {.addr=0x48a6, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x48a7, .a=0x01, .x=0xbd, .y=0xea, .sp=0xf3, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x21}, {.addr=0x48a5, .value=0x24}, {.addr=0x48a6, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x48a5, .value=0x24, .type=IO_READ},
        {.addr=0x48a6, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_028F) {
    const struct CPU_State initial_cpu = {.pc=0xbdc7, .a=0x8e, .x=0xa3, .y=0x70, .sp=0x8d, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0xc2}, {.addr=0xbdc7, .value=0x24}, {.addr=0xbdc8, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xbdc9, .a=0x82, .x=0xa3, .y=0x70, .sp=0x8d, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0xc2}, {.addr=0xbdc7, .value=0x24}, {.addr=0xbdc8, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdc7, .value=0x24, .type=IO_READ},
        {.addr=0xbdc8, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0290) {
    const struct CPU_State initial_cpu = {.pc=0xb61d, .a=0x18, .x=0x7f, .y=0x2c, .sp=0x78, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xa6}, {.addr=0xb61d, .value=0x24}, {.addr=0xb61e, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xb61f, .a=0x00, .x=0x7f, .y=0x2c, .sp=0x78, .status=0x06};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xa6}, {.addr=0xb61d, .value=0x24}, {.addr=0xb61e, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xb61d, .value=0x24, .type=IO_READ},
        {.addr=0xb61e, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0291) {
    const struct CPU_State initial_cpu = {.pc=0x05b4, .a=0xae, .x=0xf7, .y=0xbd, .sp=0x36, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0xfc}, {.addr=0x05b4, .value=0x24}, {.addr=0x05b5, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x05b6, .a=0xac, .x=0xf7, .y=0xbd, .sp=0x36, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0xfc}, {.addr=0x05b4, .value=0x24}, {.addr=0x05b5, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x05b4, .value=0x24, .type=IO_READ},
        {.addr=0x05b5, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0292) {
    const struct CPU_State initial_cpu = {.pc=0xb355, .a=0x98, .x=0x58, .y=0x50, .sp=0xe9, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x65}, {.addr=0xb355, .value=0x24}, {.addr=0xb356, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xb357, .a=0x00, .x=0x58, .y=0x50, .sp=0xe9, .status=0x4e};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x65}, {.addr=0xb355, .value=0x24}, {.addr=0xb356, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb355, .value=0x24, .type=IO_READ},
        {.addr=0xb356, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0293) {
    const struct CPU_State initial_cpu = {.pc=0x88e9, .a=0xd0, .x=0x1f, .y=0xd6, .sp=0xfa, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0xd4}, {.addr=0x88e9, .value=0x24}, {.addr=0x88ea, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x88eb, .a=0xd0, .x=0x1f, .y=0xd6, .sp=0xfa, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0xd4}, {.addr=0x88e9, .value=0x24}, {.addr=0x88ea, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x88e9, .value=0x24, .type=IO_READ},
        {.addr=0x88ea, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0294) {
    const struct CPU_State initial_cpu = {.pc=0xac05, .a=0x22, .x=0x8e, .y=0x9d, .sp=0x36, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x42}, {.addr=0xac05, .value=0x24}, {.addr=0xac06, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xac07, .a=0x02, .x=0x8e, .y=0x9d, .sp=0x36, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x42}, {.addr=0xac05, .value=0x24}, {.addr=0xac06, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xac05, .value=0x24, .type=IO_READ},
        {.addr=0xac06, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0295) {
    const struct CPU_State initial_cpu = {.pc=0x95b0, .a=0x47, .x=0xf0, .y=0x71, .sp=0xb6, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0x8a}, {.addr=0x95b0, .value=0x24}, {.addr=0x95b1, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x95b2, .a=0x02, .x=0xf0, .y=0x71, .sp=0xb6, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0x8a}, {.addr=0x95b0, .value=0x24}, {.addr=0x95b1, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x95b0, .value=0x24, .type=IO_READ},
        {.addr=0x95b1, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0296) {
    const struct CPU_State initial_cpu = {.pc=0x2b05, .a=0x8e, .x=0x4c, .y=0xfd, .sp=0x98, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x2a}, {.addr=0x2b05, .value=0x24}, {.addr=0x2b06, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x2b07, .a=0x0a, .x=0x4c, .y=0xfd, .sp=0x98, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x2a}, {.addr=0x2b05, .value=0x24}, {.addr=0x2b06, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b05, .value=0x24, .type=IO_READ},
        {.addr=0x2b06, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0297) {
    const struct CPU_State initial_cpu = {.pc=0x1871, .a=0xe1, .x=0xc7, .y=0x93, .sp=0xd2, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x5d}, {.addr=0x1871, .value=0x24}, {.addr=0x1872, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x1873, .a=0x41, .x=0xc7, .y=0x93, .sp=0xd2, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x5d}, {.addr=0x1871, .value=0x24}, {.addr=0x1872, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x1871, .value=0x24, .type=IO_READ},
        {.addr=0x1872, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0298) {
    const struct CPU_State initial_cpu = {.pc=0x50eb, .a=0x19, .x=0x3d, .y=0xc9, .sp=0x11, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0xe0}, {.addr=0x50eb, .value=0x24}, {.addr=0x50ec, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x50ed, .a=0x00, .x=0x3d, .y=0xc9, .sp=0x11, .status=0x4a};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0xe0}, {.addr=0x50eb, .value=0x24}, {.addr=0x50ec, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x50eb, .value=0x24, .type=IO_READ},
        {.addr=0x50ec, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0299) {
    const struct CPU_State initial_cpu = {.pc=0x586c, .a=0x5a, .x=0x45, .y=0xb0, .sp=0x19, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xad}, {.addr=0x586c, .value=0x24}, {.addr=0x586d, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x586e, .a=0x08, .x=0x45, .y=0xb0, .sp=0x19, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xad}, {.addr=0x586c, .value=0x24}, {.addr=0x586d, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x586c, .value=0x24, .type=IO_READ},
        {.addr=0x586d, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_029A) {
    const struct CPU_State initial_cpu = {.pc=0xbbbb, .a=0xfe, .x=0xb2, .y=0x93, .sp=0xc7, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0xce}, {.addr=0xbbbb, .value=0x24}, {.addr=0xbbbc, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xbbbd, .a=0xce, .x=0xb2, .y=0x93, .sp=0xc7, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0xce}, {.addr=0xbbbb, .value=0x24}, {.addr=0xbbbc, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbbb, .value=0x24, .type=IO_READ},
        {.addr=0xbbbc, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_029B) {
    const struct CPU_State initial_cpu = {.pc=0x3ac0, .a=0x5f, .x=0x39, .y=0x88, .sp=0x67, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0xcb}, {.addr=0x3ac0, .value=0x24}, {.addr=0x3ac1, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x3ac2, .a=0x4b, .x=0x39, .y=0x88, .sp=0x67, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0xcb}, {.addr=0x3ac0, .value=0x24}, {.addr=0x3ac1, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ac0, .value=0x24, .type=IO_READ},
        {.addr=0x3ac1, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_029C) {
    const struct CPU_State initial_cpu = {.pc=0x26ad, .a=0x5f, .x=0xe2, .y=0xfa, .sp=0x6f, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x2b}, {.addr=0x26ad, .value=0x24}, {.addr=0x26ae, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x26af, .a=0x0b, .x=0xe2, .y=0xfa, .sp=0x6f, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x2b}, {.addr=0x26ad, .value=0x24}, {.addr=0x26ae, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x26ad, .value=0x24, .type=IO_READ},
        {.addr=0x26ae, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_029D) {
    const struct CPU_State initial_cpu = {.pc=0xe1be, .a=0x0d, .x=0x81, .y=0xd3, .sp=0x33, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x5b}, {.addr=0xe1be, .value=0x24}, {.addr=0xe1bf, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0xe1c0, .a=0x09, .x=0x81, .y=0xd3, .sp=0x33, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x5b}, {.addr=0xe1be, .value=0x24}, {.addr=0xe1bf, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1be, .value=0x24, .type=IO_READ},
        {.addr=0xe1bf, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_029E) {
    const struct CPU_State initial_cpu = {.pc=0x9074, .a=0xf5, .x=0xa6, .y=0xc5, .sp=0xcf, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xda}, {.addr=0x9074, .value=0x24}, {.addr=0x9075, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x9076, .a=0xd0, .x=0xa6, .y=0xc5, .sp=0xcf, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xda}, {.addr=0x9074, .value=0x24}, {.addr=0x9075, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x9074, .value=0x24, .type=IO_READ},
        {.addr=0x9075, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_029F) {
    const struct CPU_State initial_cpu = {.pc=0x77e8, .a=0x26, .x=0x71, .y=0x1d, .sp=0xd6, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x18}, {.addr=0x77e8, .value=0x24}, {.addr=0x77e9, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x77ea, .a=0x00, .x=0x71, .y=0x1d, .sp=0xd6, .status=0x02};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x18}, {.addr=0x77e8, .value=0x24}, {.addr=0x77e9, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x77e8, .value=0x24, .type=IO_READ},
        {.addr=0x77e9, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xbc58, .a=0x4b, .x=0x4b, .y=0x25, .sp=0xd3, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x8c}, {.addr=0xbc58, .value=0x24}, {.addr=0xbc59, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xbc5a, .a=0x08, .x=0x4b, .y=0x25, .sp=0xd3, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x8c}, {.addr=0xbc58, .value=0x24}, {.addr=0xbc59, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc58, .value=0x24, .type=IO_READ},
        {.addr=0xbc59, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xdf60, .a=0x77, .x=0xfd, .y=0x6c, .sp=0x79, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x84}, {.addr=0xdf60, .value=0x24}, {.addr=0xdf61, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xdf62, .a=0x04, .x=0xfd, .y=0x6c, .sp=0x79, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x84}, {.addr=0xdf60, .value=0x24}, {.addr=0xdf61, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf60, .value=0x24, .type=IO_READ},
        {.addr=0xdf61, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xad17, .a=0xb5, .x=0x4a, .y=0xb4, .sp=0xac, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x84}, {.addr=0xad17, .value=0x24}, {.addr=0xad18, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xad19, .a=0x84, .x=0x4a, .y=0xb4, .sp=0xac, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x84}, {.addr=0xad17, .value=0x24}, {.addr=0xad18, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xad17, .value=0x24, .type=IO_READ},
        {.addr=0xad18, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x3299, .a=0x84, .x=0x2d, .y=0xa4, .sp=0xf8, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x58}, {.addr=0x3299, .value=0x24}, {.addr=0x329a, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x329b, .a=0x00, .x=0x2d, .y=0xa4, .sp=0xf8, .status=0x17};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x58}, {.addr=0x3299, .value=0x24}, {.addr=0x329a, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x3299, .value=0x24, .type=IO_READ},
        {.addr=0x329a, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xbb26, .a=0x74, .x=0x1c, .y=0xd5, .sp=0x73, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x20}, {.addr=0xbb26, .value=0x24}, {.addr=0xbb27, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xbb28, .a=0x20, .x=0x1c, .y=0xd5, .sp=0x73, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x20}, {.addr=0xbb26, .value=0x24}, {.addr=0xbb27, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb26, .value=0x24, .type=IO_READ},
        {.addr=0xbb27, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x11b7, .a=0x8f, .x=0x7b, .y=0x02, .sp=0xd5, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x32}, {.addr=0x11b7, .value=0x24}, {.addr=0x11b8, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x11b9, .a=0x02, .x=0x7b, .y=0x02, .sp=0xd5, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x32}, {.addr=0x11b7, .value=0x24}, {.addr=0x11b8, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x11b7, .value=0x24, .type=IO_READ},
        {.addr=0x11b8, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x6ff2, .a=0x37, .x=0xb9, .y=0x88, .sp=0x76, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x47}, {.addr=0x6ff2, .value=0x24}, {.addr=0x6ff3, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x6ff4, .a=0x07, .x=0xb9, .y=0x88, .sp=0x76, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x47}, {.addr=0x6ff2, .value=0x24}, {.addr=0x6ff3, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ff2, .value=0x24, .type=IO_READ},
        {.addr=0x6ff3, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xfe11, .a=0x84, .x=0x56, .y=0x46, .sp=0xeb, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0xc2}, {.addr=0xfe11, .value=0x24}, {.addr=0xfe12, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xfe13, .a=0x80, .x=0x56, .y=0x46, .sp=0xeb, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0xc2}, {.addr=0xfe11, .value=0x24}, {.addr=0xfe12, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe11, .value=0x24, .type=IO_READ},
        {.addr=0xfe12, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xa9aa, .a=0x8f, .x=0x2a, .y=0xb8, .sp=0xdb, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xe8}, {.addr=0xa9aa, .value=0x24}, {.addr=0xa9ab, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xa9ac, .a=0x88, .x=0x2a, .y=0xb8, .sp=0xdb, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xe8}, {.addr=0xa9aa, .value=0x24}, {.addr=0xa9ab, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9aa, .value=0x24, .type=IO_READ},
        {.addr=0xa9ab, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xbdaf, .a=0x74, .x=0x6f, .y=0x9e, .sp=0xc1, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x78}, {.addr=0xbdaf, .value=0x24}, {.addr=0xbdb0, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xbdb1, .a=0x70, .x=0x6f, .y=0x9e, .sp=0xc1, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x78}, {.addr=0xbdaf, .value=0x24}, {.addr=0xbdb0, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdaf, .value=0x24, .type=IO_READ},
        {.addr=0xbdb0, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xac65, .a=0x24, .x=0xc7, .y=0x75, .sp=0x44, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xa4}, {.addr=0xac65, .value=0x24}, {.addr=0xac66, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xac67, .a=0x24, .x=0xc7, .y=0x75, .sp=0x44, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xa4}, {.addr=0xac65, .value=0x24}, {.addr=0xac66, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xac65, .value=0x24, .type=IO_READ},
        {.addr=0xac66, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x7bc9, .a=0x12, .x=0xfa, .y=0x6f, .sp=0xa4, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x92}, {.addr=0x7bc9, .value=0x24}, {.addr=0x7bca, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x7bcb, .a=0x12, .x=0xfa, .y=0x6f, .sp=0xa4, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x92}, {.addr=0x7bc9, .value=0x24}, {.addr=0x7bca, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bc9, .value=0x24, .type=IO_READ},
        {.addr=0x7bca, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x3377, .a=0xe1, .x=0xb0, .y=0x4e, .sp=0xfb, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x00}, {.addr=0x3377, .value=0x24}, {.addr=0x3378, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x3379, .a=0x00, .x=0xb0, .y=0x4e, .sp=0xfb, .status=0x1b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x00}, {.addr=0x3377, .value=0x24}, {.addr=0x3378, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x3377, .value=0x24, .type=IO_READ},
        {.addr=0x3378, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x8bce, .a=0x80, .x=0x33, .y=0x46, .sp=0x57, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x4e}, {.addr=0x8bce, .value=0x24}, {.addr=0x8bcf, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x8bd0, .a=0x00, .x=0x33, .y=0x46, .sp=0x57, .status=0x1b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x4e}, {.addr=0x8bce, .value=0x24}, {.addr=0x8bcf, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bce, .value=0x24, .type=IO_READ},
        {.addr=0x8bcf, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x2448, .a=0xcd, .x=0xe3, .y=0xea, .sp=0x42, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x62}, {.addr=0x2448, .value=0x24}, {.addr=0x2449, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x244a, .a=0x40, .x=0xe3, .y=0xea, .sp=0x42, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x62}, {.addr=0x2448, .value=0x24}, {.addr=0x2449, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x2448, .value=0x24, .type=IO_READ},
        {.addr=0x2449, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x4a07, .a=0x82, .x=0xbb, .y=0xb1, .sp=0x31, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0xb9}, {.addr=0x4a07, .value=0x24}, {.addr=0x4a08, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x4a09, .a=0x80, .x=0xbb, .y=0xb1, .sp=0x31, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0xb9}, {.addr=0x4a07, .value=0x24}, {.addr=0x4a08, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a07, .value=0x24, .type=IO_READ},
        {.addr=0x4a08, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xe2e6, .a=0x21, .x=0xfc, .y=0xce, .sp=0xdd, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0xe5}, {.addr=0xe2e6, .value=0x24}, {.addr=0xe2e7, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xe2e8, .a=0x21, .x=0xfc, .y=0xce, .sp=0xdd, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0xe5}, {.addr=0xe2e6, .value=0x24}, {.addr=0xe2e7, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2e6, .value=0x24, .type=IO_READ},
        {.addr=0xe2e7, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x15e9, .a=0xd9, .x=0x48, .y=0x39, .sp=0xd4, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x28}, {.addr=0x15e9, .value=0x24}, {.addr=0x15ea, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x15eb, .a=0x08, .x=0x48, .y=0x39, .sp=0xd4, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x28}, {.addr=0x15e9, .value=0x24}, {.addr=0x15ea, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x15e9, .value=0x24, .type=IO_READ},
        {.addr=0x15ea, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x953c, .a=0x60, .x=0x5e, .y=0x2a, .sp=0xc5, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x15}, {.addr=0x953c, .value=0x24}, {.addr=0x953d, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x953e, .a=0x00, .x=0x5e, .y=0x2a, .sp=0xc5, .status=0x3a};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x15}, {.addr=0x953c, .value=0x24}, {.addr=0x953d, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x953c, .value=0x24, .type=IO_READ},
        {.addr=0x953d, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x2713, .a=0xf7, .x=0xc7, .y=0x43, .sp=0xd6, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x35}, {.addr=0x2713, .value=0x24}, {.addr=0x2714, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x2715, .a=0x35, .x=0xc7, .y=0x43, .sp=0xd6, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x35}, {.addr=0x2713, .value=0x24}, {.addr=0x2714, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x2713, .value=0x24, .type=IO_READ},
        {.addr=0x2714, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x73af, .a=0xa6, .x=0x97, .y=0x80, .sp=0xcf, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xac}, {.addr=0x73af, .value=0x24}, {.addr=0x73b0, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x73b1, .a=0xa4, .x=0x97, .y=0x80, .sp=0xcf, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xac}, {.addr=0x73af, .value=0x24}, {.addr=0x73b0, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x73af, .value=0x24, .type=IO_READ},
        {.addr=0x73b0, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xad0b, .a=0xb6, .x=0xa1, .y=0x47, .sp=0x13, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0xd5}, {.addr=0xad0b, .value=0x24}, {.addr=0xad0c, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xad0d, .a=0x94, .x=0xa1, .y=0x47, .sp=0x13, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0xd5}, {.addr=0xad0b, .value=0x24}, {.addr=0xad0c, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xad0b, .value=0x24, .type=IO_READ},
        {.addr=0xad0c, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x3c74, .a=0x2a, .x=0x4d, .y=0x19, .sp=0xac, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x1d}, {.addr=0x3c74, .value=0x24}, {.addr=0x3c75, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x3c76, .a=0x08, .x=0x4d, .y=0x19, .sp=0xac, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x1d}, {.addr=0x3c74, .value=0x24}, {.addr=0x3c75, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c74, .value=0x24, .type=IO_READ},
        {.addr=0x3c75, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xe9c5, .a=0x68, .x=0x4d, .y=0xdc, .sp=0xdf, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x68}, {.addr=0xe9c5, .value=0x24}, {.addr=0xe9c6, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xe9c7, .a=0x68, .x=0x4d, .y=0xdc, .sp=0xdf, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x68}, {.addr=0xe9c5, .value=0x24}, {.addr=0xe9c6, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9c5, .value=0x24, .type=IO_READ},
        {.addr=0xe9c6, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xe516, .a=0x2b, .x=0xae, .y=0x0c, .sp=0x54, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xf5}, {.addr=0xe516, .value=0x24}, {.addr=0xe517, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xe518, .a=0x21, .x=0xae, .y=0x0c, .sp=0x54, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xf5}, {.addr=0xe516, .value=0x24}, {.addr=0xe517, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xe516, .value=0x24, .type=IO_READ},
        {.addr=0xe517, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xd82d, .a=0x09, .x=0x5b, .y=0xb8, .sp=0xcc, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xdc}, {.addr=0xd82d, .value=0x24}, {.addr=0xd82e, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xd82f, .a=0x08, .x=0x5b, .y=0xb8, .sp=0xcc, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xdc}, {.addr=0xd82d, .value=0x24}, {.addr=0xd82e, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xd82d, .value=0x24, .type=IO_READ},
        {.addr=0xd82e, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x979f, .a=0xa0, .x=0x09, .y=0x20, .sp=0x80, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x08}, {.addr=0x979f, .value=0x24}, {.addr=0x97a0, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x97a1, .a=0x00, .x=0x09, .y=0x20, .sp=0x80, .status=0x0f};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x08}, {.addr=0x979f, .value=0x24}, {.addr=0x97a0, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x979f, .value=0x24, .type=IO_READ},
        {.addr=0x97a0, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x945d, .a=0x76, .x=0x89, .y=0x0a, .sp=0x1e, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xa0}, {.addr=0x945d, .value=0x24}, {.addr=0x945e, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x945f, .a=0x20, .x=0x89, .y=0x0a, .sp=0x1e, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xa0}, {.addr=0x945d, .value=0x24}, {.addr=0x945e, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x945d, .value=0x24, .type=IO_READ},
        {.addr=0x945e, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xdcac, .a=0x29, .x=0x9e, .y=0x2a, .sp=0x56, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x0c}, {.addr=0xdcac, .value=0x24}, {.addr=0xdcad, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xdcae, .a=0x08, .x=0x9e, .y=0x2a, .sp=0x56, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x0c}, {.addr=0xdcac, .value=0x24}, {.addr=0xdcad, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcac, .value=0x24, .type=IO_READ},
        {.addr=0xdcad, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x9be1, .a=0x12, .x=0x32, .y=0x3f, .sp=0xc3, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x0c}, {.addr=0x9be1, .value=0x24}, {.addr=0x9be2, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x9be3, .a=0x00, .x=0x32, .y=0x3f, .sp=0xc3, .status=0x22};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x0c}, {.addr=0x9be1, .value=0x24}, {.addr=0x9be2, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x9be1, .value=0x24, .type=IO_READ},
        {.addr=0x9be2, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xef02, .a=0x0b, .x=0x00, .y=0x25, .sp=0x30, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x82}, {.addr=0xef02, .value=0x24}, {.addr=0xef03, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xef04, .a=0x02, .x=0x00, .y=0x25, .sp=0x30, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x82}, {.addr=0xef02, .value=0x24}, {.addr=0xef03, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xef02, .value=0x24, .type=IO_READ},
        {.addr=0xef03, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xdc19, .a=0xe1, .x=0x92, .y=0x13, .sp=0x8b, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0xd3}, {.addr=0xdc19, .value=0x24}, {.addr=0xdc1a, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xdc1b, .a=0xc1, .x=0x92, .y=0x13, .sp=0x8b, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0xd3}, {.addr=0xdc19, .value=0x24}, {.addr=0xdc1a, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc19, .value=0x24, .type=IO_READ},
        {.addr=0xdc1a, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x4333, .a=0xe6, .x=0x97, .y=0xb8, .sp=0xe5, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0x97}, {.addr=0x4333, .value=0x24}, {.addr=0x4334, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x4335, .a=0x86, .x=0x97, .y=0xb8, .sp=0xe5, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0x97}, {.addr=0x4333, .value=0x24}, {.addr=0x4334, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4333, .value=0x24, .type=IO_READ},
        {.addr=0x4334, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x2a9a, .a=0xd2, .x=0x63, .y=0xee, .sp=0x51, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0xc6}, {.addr=0x2a9a, .value=0x24}, {.addr=0x2a9b, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x2a9c, .a=0xc2, .x=0x63, .y=0xee, .sp=0x51, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0xc6}, {.addr=0x2a9a, .value=0x24}, {.addr=0x2a9b, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a9a, .value=0x24, .type=IO_READ},
        {.addr=0x2a9b, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xe857, .a=0xa2, .x=0x31, .y=0x71, .sp=0xa7, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0xf2}, {.addr=0xe857, .value=0x24}, {.addr=0xe858, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xe859, .a=0xa2, .x=0x31, .y=0x71, .sp=0xa7, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0xf2}, {.addr=0xe857, .value=0x24}, {.addr=0xe858, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xe857, .value=0x24, .type=IO_READ},
        {.addr=0xe858, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xa441, .a=0xa9, .x=0xe2, .y=0xc2, .sp=0xea, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x74}, {.addr=0xa441, .value=0x24}, {.addr=0xa442, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xa443, .a=0x20, .x=0xe2, .y=0xc2, .sp=0xea, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x74}, {.addr=0xa441, .value=0x24}, {.addr=0xa442, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xa441, .value=0x24, .type=IO_READ},
        {.addr=0xa442, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x6b37, .a=0xc4, .x=0xa0, .y=0x77, .sp=0xa1, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0x48}, {.addr=0x6b37, .value=0x24}, {.addr=0x6b38, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x6b39, .a=0x40, .x=0xa0, .y=0x77, .sp=0xa1, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0x48}, {.addr=0x6b37, .value=0x24}, {.addr=0x6b38, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b37, .value=0x24, .type=IO_READ},
        {.addr=0x6b38, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x510d, .a=0x4e, .x=0x9e, .y=0xa5, .sp=0x79, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x5b}, {.addr=0x510d, .value=0x24}, {.addr=0x510e, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x510f, .a=0x4a, .x=0x9e, .y=0xa5, .sp=0x79, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x5b}, {.addr=0x510d, .value=0x24}, {.addr=0x510e, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x510d, .value=0x24, .type=IO_READ},
        {.addr=0x510e, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x93d4, .a=0x4a, .x=0xeb, .y=0x24, .sp=0x4d, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0xf8}, {.addr=0x93d4, .value=0x24}, {.addr=0x93d5, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x93d6, .a=0x48, .x=0xeb, .y=0x24, .sp=0x4d, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0xf8}, {.addr=0x93d4, .value=0x24}, {.addr=0x93d5, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x93d4, .value=0x24, .type=IO_READ},
        {.addr=0x93d5, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xbf07, .a=0xe5, .x=0xc2, .y=0xfb, .sp=0x8d, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x9b}, {.addr=0xbf07, .value=0x24}, {.addr=0xbf08, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xbf09, .a=0x81, .x=0xc2, .y=0xfb, .sp=0x8d, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x9b}, {.addr=0xbf07, .value=0x24}, {.addr=0xbf08, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf07, .value=0x24, .type=IO_READ},
        {.addr=0xbf08, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x2770, .a=0x60, .x=0xc6, .y=0x10, .sp=0xf3, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x27}, {.addr=0x2770, .value=0x24}, {.addr=0x2771, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x2772, .a=0x20, .x=0xc6, .y=0x10, .sp=0xf3, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x27}, {.addr=0x2770, .value=0x24}, {.addr=0x2771, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x2770, .value=0x24, .type=IO_READ},
        {.addr=0x2771, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x6be3, .a=0x97, .x=0xec, .y=0x20, .sp=0xcb, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x19}, {.addr=0x6be3, .value=0x24}, {.addr=0x6be4, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x6be5, .a=0x11, .x=0xec, .y=0x20, .sp=0xcb, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x19}, {.addr=0x6be3, .value=0x24}, {.addr=0x6be4, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x6be3, .value=0x24, .type=IO_READ},
        {.addr=0x6be4, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x8a78, .a=0x64, .x=0x53, .y=0x6f, .sp=0x76, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x01}, {.addr=0x8a78, .value=0x24}, {.addr=0x8a79, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x8a7a, .a=0x00, .x=0x53, .y=0x6f, .sp=0x76, .status=0x0e};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x01}, {.addr=0x8a78, .value=0x24}, {.addr=0x8a79, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a78, .value=0x24, .type=IO_READ},
        {.addr=0x8a79, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x2170, .a=0x04, .x=0xc1, .y=0x62, .sp=0xdc, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x82}, {.addr=0x2170, .value=0x24}, {.addr=0x2171, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x2172, .a=0x00, .x=0xc1, .y=0x62, .sp=0xdc, .status=0x4e};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x82}, {.addr=0x2170, .value=0x24}, {.addr=0x2171, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2170, .value=0x24, .type=IO_READ},
        {.addr=0x2171, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xf504, .a=0xce, .x=0x37, .y=0x71, .sp=0x80, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x20}, {.addr=0xf504, .value=0x24}, {.addr=0xf505, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xf506, .a=0x00, .x=0x37, .y=0x71, .sp=0x80, .status=0x67};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x20}, {.addr=0xf504, .value=0x24}, {.addr=0xf505, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xf504, .value=0x24, .type=IO_READ},
        {.addr=0xf505, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xc899, .a=0x39, .x=0xf8, .y=0x8a, .sp=0x46, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x1d}, {.addr=0xc899, .value=0x24}, {.addr=0xc89a, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xc89b, .a=0x19, .x=0xf8, .y=0x8a, .sp=0x46, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x1d}, {.addr=0xc899, .value=0x24}, {.addr=0xc89a, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xc899, .value=0x24, .type=IO_READ},
        {.addr=0xc89a, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x5b97, .a=0x8d, .x=0x53, .y=0x3e, .sp=0x29, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xce}, {.addr=0x5b97, .value=0x24}, {.addr=0x5b98, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x5b99, .a=0x8c, .x=0x53, .y=0x3e, .sp=0x29, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xce}, {.addr=0x5b97, .value=0x24}, {.addr=0x5b98, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b97, .value=0x24, .type=IO_READ},
        {.addr=0x5b98, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x39a3, .a=0x37, .x=0xc3, .y=0xf2, .sp=0x1e, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0x74}, {.addr=0x39a3, .value=0x24}, {.addr=0x39a4, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x39a5, .a=0x34, .x=0xc3, .y=0xf2, .sp=0x1e, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0x74}, {.addr=0x39a3, .value=0x24}, {.addr=0x39a4, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x39a3, .value=0x24, .type=IO_READ},
        {.addr=0x39a4, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x7687, .a=0xc9, .x=0x0b, .y=0xe7, .sp=0xe2, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xd7}, {.addr=0x7687, .value=0x24}, {.addr=0x7688, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x7689, .a=0xc1, .x=0x0b, .y=0xe7, .sp=0xe2, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xd7}, {.addr=0x7687, .value=0x24}, {.addr=0x7688, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7687, .value=0x24, .type=IO_READ},
        {.addr=0x7688, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xa30c, .a=0xa5, .x=0x39, .y=0x0f, .sp=0xe9, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x11}, {.addr=0xa30c, .value=0x24}, {.addr=0xa30d, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xa30e, .a=0x01, .x=0x39, .y=0x0f, .sp=0xe9, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x11}, {.addr=0xa30c, .value=0x24}, {.addr=0xa30d, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa30c, .value=0x24, .type=IO_READ},
        {.addr=0xa30d, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x57d1, .a=0x51, .x=0xc3, .y=0x91, .sp=0x7a, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x61}, {.addr=0x57d1, .value=0x24}, {.addr=0x57d2, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x57d3, .a=0x41, .x=0xc3, .y=0x91, .sp=0x7a, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x61}, {.addr=0x57d1, .value=0x24}, {.addr=0x57d2, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x57d1, .value=0x24, .type=IO_READ},
        {.addr=0x57d2, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xc9ae, .a=0xb5, .x=0xab, .y=0xbf, .sp=0x6d, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x53}, {.addr=0xc9ae, .value=0x24}, {.addr=0xc9af, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xc9b0, .a=0x11, .x=0xab, .y=0xbf, .sp=0x6d, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x53}, {.addr=0xc9ae, .value=0x24}, {.addr=0xc9af, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9ae, .value=0x24, .type=IO_READ},
        {.addr=0xc9af, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x83fa, .a=0x18, .x=0xa6, .y=0x4b, .sp=0x0b, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0xa9}, {.addr=0x83fa, .value=0x24}, {.addr=0x83fb, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x83fc, .a=0x08, .x=0xa6, .y=0x4b, .sp=0x0b, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0xa9}, {.addr=0x83fa, .value=0x24}, {.addr=0x83fb, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x83fa, .value=0x24, .type=IO_READ},
        {.addr=0x83fb, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x75a5, .a=0xa0, .x=0xf9, .y=0x2e, .sp=0xc9, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xbc}, {.addr=0x75a5, .value=0x24}, {.addr=0x75a6, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x75a7, .a=0xa0, .x=0xf9, .y=0x2e, .sp=0xc9, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xbc}, {.addr=0x75a5, .value=0x24}, {.addr=0x75a6, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x75a5, .value=0x24, .type=IO_READ},
        {.addr=0x75a6, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x987f, .a=0x32, .x=0x74, .y=0x43, .sp=0x12, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0xcd}, {.addr=0x987f, .value=0x24}, {.addr=0x9880, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x9881, .a=0x00, .x=0x74, .y=0x43, .sp=0x12, .status=0x07};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0xcd}, {.addr=0x987f, .value=0x24}, {.addr=0x9880, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x987f, .value=0x24, .type=IO_READ},
        {.addr=0x9880, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x4f72, .a=0x79, .x=0x3f, .y=0x69, .sp=0x1a, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x97}, {.addr=0x4f72, .value=0x24}, {.addr=0x4f73, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x4f74, .a=0x11, .x=0x3f, .y=0x69, .sp=0x1a, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x97}, {.addr=0x4f72, .value=0x24}, {.addr=0x4f73, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f72, .value=0x24, .type=IO_READ},
        {.addr=0x4f73, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xee83, .a=0x78, .x=0x03, .y=0x6e, .sp=0x88, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x09}, {.addr=0xee83, .value=0x24}, {.addr=0xee84, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xee85, .a=0x08, .x=0x03, .y=0x6e, .sp=0x88, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x09}, {.addr=0xee83, .value=0x24}, {.addr=0xee84, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xee83, .value=0x24, .type=IO_READ},
        {.addr=0xee84, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xcc19, .a=0x55, .x=0xef, .y=0x0c, .sp=0x7d, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x94}, {.addr=0xcc19, .value=0x24}, {.addr=0xcc1a, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xcc1b, .a=0x14, .x=0xef, .y=0x0c, .sp=0x7d, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x94}, {.addr=0xcc19, .value=0x24}, {.addr=0xcc1a, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc19, .value=0x24, .type=IO_READ},
        {.addr=0xcc1a, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x176e, .a=0x23, .x=0x28, .y=0x90, .sp=0xe1, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0xc7}, {.addr=0x176e, .value=0x24}, {.addr=0x176f, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x1770, .a=0x03, .x=0x28, .y=0x90, .sp=0xe1, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0xc7}, {.addr=0x176e, .value=0x24}, {.addr=0x176f, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x176e, .value=0x24, .type=IO_READ},
        {.addr=0x176f, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xfa28, .a=0x15, .x=0xf9, .y=0xe0, .sp=0x9a, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x4b}, {.addr=0xfa28, .value=0x24}, {.addr=0xfa29, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xfa2a, .a=0x01, .x=0xf9, .y=0xe0, .sp=0x9a, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x4b}, {.addr=0xfa28, .value=0x24}, {.addr=0xfa29, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa28, .value=0x24, .type=IO_READ},
        {.addr=0xfa29, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x816f, .a=0xd2, .x=0x9a, .y=0xd3, .sp=0xfd, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0xf9}, {.addr=0x816f, .value=0x24}, {.addr=0x8170, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x8171, .a=0xd0, .x=0x9a, .y=0xd3, .sp=0xfd, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0xf9}, {.addr=0x816f, .value=0x24}, {.addr=0x8170, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x816f, .value=0x24, .type=IO_READ},
        {.addr=0x8170, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x5782, .a=0x24, .x=0xe6, .y=0x49, .sp=0x2e, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x4a}, {.addr=0x5782, .value=0x24}, {.addr=0x5783, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x5784, .a=0x00, .x=0xe6, .y=0x49, .sp=0x2e, .status=0x4a};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x4a}, {.addr=0x5782, .value=0x24}, {.addr=0x5783, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5782, .value=0x24, .type=IO_READ},
        {.addr=0x5783, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x3175, .a=0x5f, .x=0x37, .y=0x2d, .sp=0x94, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x47}, {.addr=0x3175, .value=0x24}, {.addr=0x3176, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x3177, .a=0x47, .x=0x37, .y=0x2d, .sp=0x94, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x47}, {.addr=0x3175, .value=0x24}, {.addr=0x3176, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x3175, .value=0x24, .type=IO_READ},
        {.addr=0x3176, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xf5b4, .a=0x30, .x=0xa4, .y=0x72, .sp=0x0a, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x52}, {.addr=0xf5b4, .value=0x24}, {.addr=0xf5b5, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xf5b6, .a=0x10, .x=0xa4, .y=0x72, .sp=0x0a, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x52}, {.addr=0xf5b4, .value=0x24}, {.addr=0xf5b5, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5b4, .value=0x24, .type=IO_READ},
        {.addr=0xf5b5, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xfa05, .a=0x0b, .x=0x56, .y=0x4f, .sp=0xf6, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xa5}, {.addr=0xfa05, .value=0x24}, {.addr=0xfa06, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xfa07, .a=0x01, .x=0x56, .y=0x4f, .sp=0xf6, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xa5}, {.addr=0xfa05, .value=0x24}, {.addr=0xfa06, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa05, .value=0x24, .type=IO_READ},
        {.addr=0xfa06, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xcb87, .a=0x38, .x=0x89, .y=0x69, .sp=0xad, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0xd7}, {.addr=0xcb87, .value=0x24}, {.addr=0xcb88, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xcb89, .a=0x10, .x=0x89, .y=0x69, .sp=0xad, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0xd7}, {.addr=0xcb87, .value=0x24}, {.addr=0xcb88, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb87, .value=0x24, .type=IO_READ},
        {.addr=0xcb88, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xcb82, .a=0x17, .x=0x03, .y=0x20, .sp=0x90, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0xa5}, {.addr=0xcb82, .value=0x24}, {.addr=0xcb83, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xcb84, .a=0x05, .x=0x03, .y=0x20, .sp=0x90, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0xa5}, {.addr=0xcb82, .value=0x24}, {.addr=0xcb83, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb82, .value=0x24, .type=IO_READ},
        {.addr=0xcb83, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xe346, .a=0x9a, .x=0x02, .y=0xaf, .sp=0x04, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xa6}, {.addr=0xe346, .value=0x24}, {.addr=0xe347, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xe348, .a=0x82, .x=0x02, .y=0xaf, .sp=0x04, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xa6}, {.addr=0xe346, .value=0x24}, {.addr=0xe347, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe346, .value=0x24, .type=IO_READ},
        {.addr=0xe347, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x05ac, .a=0x43, .x=0x0e, .y=0x6a, .sp=0xe8, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x0c}, {.addr=0x05ac, .value=0x24}, {.addr=0x05ad, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x05ae, .a=0x00, .x=0x0e, .y=0x6a, .sp=0xe8, .status=0x27};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x0c}, {.addr=0x05ac, .value=0x24}, {.addr=0x05ad, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x05ac, .value=0x24, .type=IO_READ},
        {.addr=0x05ad, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x3906, .a=0xd0, .x=0xfc, .y=0x04, .sp=0x40, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0xc7}, {.addr=0x3906, .value=0x24}, {.addr=0x3907, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x3908, .a=0xc0, .x=0xfc, .y=0x04, .sp=0x40, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0xc7}, {.addr=0x3906, .value=0x24}, {.addr=0x3907, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3906, .value=0x24, .type=IO_READ},
        {.addr=0x3907, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x9dff, .a=0x81, .x=0x21, .y=0x00, .sp=0x4a, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0xc2}, {.addr=0x9dff, .value=0x24}, {.addr=0x9e00, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x9e01, .a=0x80, .x=0x21, .y=0x00, .sp=0x4a, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0xc2}, {.addr=0x9dff, .value=0x24}, {.addr=0x9e00, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x9dff, .value=0x24, .type=IO_READ},
        {.addr=0x9e00, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xab54, .a=0x96, .x=0x31, .y=0x92, .sp=0x16, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x3e}, {.addr=0xab54, .value=0x24}, {.addr=0xab55, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xab56, .a=0x16, .x=0x31, .y=0x92, .sp=0x16, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x3e}, {.addr=0xab54, .value=0x24}, {.addr=0xab55, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xab54, .value=0x24, .type=IO_READ},
        {.addr=0xab55, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xbdaa, .a=0x82, .x=0xa6, .y=0x13, .sp=0x00, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x3c}, {.addr=0xbdaa, .value=0x24}, {.addr=0xbdab, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xbdac, .a=0x00, .x=0xa6, .y=0x13, .sp=0x00, .status=0x53};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x3c}, {.addr=0xbdaa, .value=0x24}, {.addr=0xbdab, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdaa, .value=0x24, .type=IO_READ},
        {.addr=0xbdab, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xd83d, .a=0xf9, .x=0xde, .y=0x86, .sp=0xaf, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xc7}, {.addr=0xd83d, .value=0x24}, {.addr=0xd83e, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xd83f, .a=0xc1, .x=0xde, .y=0x86, .sp=0xaf, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xc7}, {.addr=0xd83d, .value=0x24}, {.addr=0xd83e, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xd83d, .value=0x24, .type=IO_READ},
        {.addr=0xd83e, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x0a23, .a=0x82, .x=0x8d, .y=0x29, .sp=0xa7, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0xb4}, {.addr=0x0a23, .value=0x24}, {.addr=0x0a24, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x0a25, .a=0x80, .x=0x8d, .y=0x29, .sp=0xa7, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0xb4}, {.addr=0x0a23, .value=0x24}, {.addr=0x0a24, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a23, .value=0x24, .type=IO_READ},
        {.addr=0x0a24, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x0487, .a=0x36, .x=0xa7, .y=0xd1, .sp=0xb2, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0xe2}, {.addr=0x0487, .value=0x24}, {.addr=0x0488, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x0489, .a=0x22, .x=0xa7, .y=0xd1, .sp=0xb2, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0xe2}, {.addr=0x0487, .value=0x24}, {.addr=0x0488, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0487, .value=0x24, .type=IO_READ},
        {.addr=0x0488, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x39db, .a=0xc2, .x=0xea, .y=0xeb, .sp=0xe9, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0xe6}, {.addr=0x39db, .value=0x24}, {.addr=0x39dc, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x39dd, .a=0xc2, .x=0xea, .y=0xeb, .sp=0xe9, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0xe6}, {.addr=0x39db, .value=0x24}, {.addr=0x39dc, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x39db, .value=0x24, .type=IO_READ},
        {.addr=0x39dc, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x3687, .a=0x0f, .x=0xca, .y=0x28, .sp=0x2d, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x6b}, {.addr=0x3687, .value=0x24}, {.addr=0x3688, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x3689, .a=0x0b, .x=0xca, .y=0x28, .sp=0x2d, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x6b}, {.addr=0x3687, .value=0x24}, {.addr=0x3688, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x3687, .value=0x24, .type=IO_READ},
        {.addr=0x3688, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xef85, .a=0xe8, .x=0xc0, .y=0x40, .sp=0x26, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x6c}, {.addr=0xef85, .value=0x24}, {.addr=0xef86, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xef87, .a=0x68, .x=0xc0, .y=0x40, .sp=0x26, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x6c}, {.addr=0xef85, .value=0x24}, {.addr=0xef86, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xef85, .value=0x24, .type=IO_READ},
        {.addr=0xef86, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x7bda, .a=0x07, .x=0xb8, .y=0x48, .sp=0x9b, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x78}, {.addr=0x7bda, .value=0x24}, {.addr=0x7bdb, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x7bdc, .a=0x00, .x=0xb8, .y=0x48, .sp=0x9b, .status=0x43};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x78}, {.addr=0x7bda, .value=0x24}, {.addr=0x7bdb, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bda, .value=0x24, .type=IO_READ},
        {.addr=0x7bdb, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x72f3, .a=0x72, .x=0xbb, .y=0x55, .sp=0xd4, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0x1a}, {.addr=0x72f3, .value=0x24}, {.addr=0x72f4, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x72f5, .a=0x12, .x=0xbb, .y=0x55, .sp=0xd4, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0x1a}, {.addr=0x72f3, .value=0x24}, {.addr=0x72f4, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x72f3, .value=0x24, .type=IO_READ},
        {.addr=0x72f4, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x8aba, .a=0x13, .x=0x66, .y=0xb1, .sp=0x12, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0x24}, {.addr=0x8aba, .value=0x24}, {.addr=0x8abb, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x8abc, .a=0x00, .x=0x66, .y=0xb1, .sp=0x12, .status=0x2b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0x24}, {.addr=0x8aba, .value=0x24}, {.addr=0x8abb, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x8aba, .value=0x24, .type=IO_READ},
        {.addr=0x8abb, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x4dcc, .a=0x06, .x=0x3f, .y=0x3a, .sp=0xd6, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x69}, {.addr=0x4dcc, .value=0x24}, {.addr=0x4dcd, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x4dce, .a=0x00, .x=0x3f, .y=0x3a, .sp=0xd6, .status=0x4f};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x69}, {.addr=0x4dcc, .value=0x24}, {.addr=0x4dcd, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x4dcc, .value=0x24, .type=IO_READ},
        {.addr=0x4dcd, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x0e03, .a=0xd4, .x=0xb5, .y=0xb3, .sp=0x08, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0xc9}, {.addr=0x0e03, .value=0x24}, {.addr=0x0e04, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x0e05, .a=0xc0, .x=0xb5, .y=0xb3, .sp=0x08, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0xc9}, {.addr=0x0e03, .value=0x24}, {.addr=0x0e04, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e03, .value=0x24, .type=IO_READ},
        {.addr=0x0e04, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x42d6, .a=0x65, .x=0xa1, .y=0x89, .sp=0x76, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0xd6}, {.addr=0x42d6, .value=0x24}, {.addr=0x42d7, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x42d8, .a=0x44, .x=0xa1, .y=0x89, .sp=0x76, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0xd6}, {.addr=0x42d6, .value=0x24}, {.addr=0x42d7, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x42d6, .value=0x24, .type=IO_READ},
        {.addr=0x42d7, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xe027, .a=0xe9, .x=0x95, .y=0xf1, .sp=0xb1, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x9b}, {.addr=0xe027, .value=0x24}, {.addr=0xe028, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xe029, .a=0x89, .x=0x95, .y=0xf1, .sp=0xb1, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x9b}, {.addr=0xe027, .value=0x24}, {.addr=0xe028, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe027, .value=0x24, .type=IO_READ},
        {.addr=0xe028, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x0085, .a=0xa5, .x=0xe7, .y=0x93, .sp=0x4f, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x82}, {.addr=0x0085, .value=0x24}, {.addr=0x0086, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x0087, .a=0x80, .x=0xe7, .y=0x93, .sp=0x4f, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x82}, {.addr=0x0085, .value=0x24}, {.addr=0x0086, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0085, .value=0x24, .type=IO_READ},
        {.addr=0x0086, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xd3fa, .a=0x34, .x=0xef, .y=0x66, .sp=0xf9, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x39}, {.addr=0xd3fa, .value=0x24}, {.addr=0xd3fb, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xd3fc, .a=0x30, .x=0xef, .y=0x66, .sp=0xf9, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x39}, {.addr=0xd3fa, .value=0x24}, {.addr=0xd3fb, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3fa, .value=0x24, .type=IO_READ},
        {.addr=0xd3fb, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xacd7, .a=0xa2, .x=0x07, .y=0x8a, .sp=0x95, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0xa7}, {.addr=0xacd7, .value=0x24}, {.addr=0xacd8, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xacd9, .a=0xa2, .x=0x07, .y=0x8a, .sp=0x95, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0xa7}, {.addr=0xacd7, .value=0x24}, {.addr=0xacd8, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xacd7, .value=0x24, .type=IO_READ},
        {.addr=0xacd8, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x47ca, .a=0x37, .x=0xe0, .y=0x27, .sp=0xa1, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x66}, {.addr=0x47ca, .value=0x24}, {.addr=0x47cb, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x47cc, .a=0x26, .x=0xe0, .y=0x27, .sp=0xa1, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x66}, {.addr=0x47ca, .value=0x24}, {.addr=0x47cb, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x47ca, .value=0x24, .type=IO_READ},
        {.addr=0x47cb, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x54a6, .a=0x61, .x=0x5f, .y=0x55, .sp=0xfc, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x31}, {.addr=0x54a6, .value=0x24}, {.addr=0x54a7, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x54a8, .a=0x21, .x=0x5f, .y=0x55, .sp=0xfc, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x31}, {.addr=0x54a6, .value=0x24}, {.addr=0x54a7, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x54a6, .value=0x24, .type=IO_READ},
        {.addr=0x54a7, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xa75d, .a=0x27, .x=0xde, .y=0xc1, .sp=0x5b, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xb2}, {.addr=0xa75d, .value=0x24}, {.addr=0xa75e, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xa75f, .a=0x22, .x=0xde, .y=0xc1, .sp=0x5b, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xb2}, {.addr=0xa75d, .value=0x24}, {.addr=0xa75e, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xa75d, .value=0x24, .type=IO_READ},
        {.addr=0xa75e, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x2bb2, .a=0xf6, .x=0xa3, .y=0xfb, .sp=0xf3, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xe6}, {.addr=0x2bb2, .value=0x24}, {.addr=0x2bb3, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x2bb4, .a=0xe6, .x=0xa3, .y=0xfb, .sp=0xf3, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xe6}, {.addr=0x2bb2, .value=0x24}, {.addr=0x2bb3, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bb2, .value=0x24, .type=IO_READ},
        {.addr=0x2bb3, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x4e75, .a=0x61, .x=0x26, .y=0x3c, .sp=0xd4, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0xd9}, {.addr=0x4e75, .value=0x24}, {.addr=0x4e76, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x4e77, .a=0x41, .x=0x26, .y=0x3c, .sp=0xd4, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0xd9}, {.addr=0x4e75, .value=0x24}, {.addr=0x4e76, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e75, .value=0x24, .type=IO_READ},
        {.addr=0x4e76, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x2e2a, .a=0x23, .x=0x41, .y=0xd3, .sp=0x4a, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0xca}, {.addr=0x2e2a, .value=0x24}, {.addr=0x2e2b, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x2e2c, .a=0x02, .x=0x41, .y=0xd3, .sp=0x4a, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0xca}, {.addr=0x2e2a, .value=0x24}, {.addr=0x2e2b, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e2a, .value=0x24, .type=IO_READ},
        {.addr=0x2e2b, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x823c, .a=0xdc, .x=0x95, .y=0xd5, .sp=0x03, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0xc1}, {.addr=0x823c, .value=0x24}, {.addr=0x823d, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x823e, .a=0xc0, .x=0x95, .y=0xd5, .sp=0x03, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0xc1}, {.addr=0x823c, .value=0x24}, {.addr=0x823d, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x823c, .value=0x24, .type=IO_READ},
        {.addr=0x823d, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0300) {
    const struct CPU_State initial_cpu = {.pc=0xdd22, .a=0x31, .x=0xc6, .y=0x7f, .sp=0xf1, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x61}, {.addr=0xdd22, .value=0x24}, {.addr=0xdd23, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xdd24, .a=0x21, .x=0xc6, .y=0x7f, .sp=0xf1, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x61}, {.addr=0xdd22, .value=0x24}, {.addr=0xdd23, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd22, .value=0x24, .type=IO_READ},
        {.addr=0xdd23, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0301) {
    const struct CPU_State initial_cpu = {.pc=0x5300, .a=0x52, .x=0x20, .y=0xec, .sp=0xed, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x02}, {.addr=0x5300, .value=0x24}, {.addr=0x5301, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x5302, .a=0x02, .x=0x20, .y=0xec, .sp=0xed, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x02}, {.addr=0x5300, .value=0x24}, {.addr=0x5301, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x5300, .value=0x24, .type=IO_READ},
        {.addr=0x5301, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0302) {
    const struct CPU_State initial_cpu = {.pc=0x2ae3, .a=0x44, .x=0xfd, .y=0x6f, .sp=0x1f, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x0d}, {.addr=0x2ae3, .value=0x24}, {.addr=0x2ae4, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x2ae5, .a=0x04, .x=0xfd, .y=0x6f, .sp=0x1f, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x0d}, {.addr=0x2ae3, .value=0x24}, {.addr=0x2ae4, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ae3, .value=0x24, .type=IO_READ},
        {.addr=0x2ae4, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0303) {
    const struct CPU_State initial_cpu = {.pc=0x6f80, .a=0x37, .x=0x29, .y=0x5f, .sp=0x97, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x5e}, {.addr=0x6f80, .value=0x24}, {.addr=0x6f81, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x6f82, .a=0x16, .x=0x29, .y=0x5f, .sp=0x97, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x5e}, {.addr=0x6f80, .value=0x24}, {.addr=0x6f81, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f80, .value=0x24, .type=IO_READ},
        {.addr=0x6f81, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0304) {
    const struct CPU_State initial_cpu = {.pc=0xea87, .a=0xc8, .x=0x6b, .y=0x07, .sp=0x2d, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x01}, {.addr=0xea87, .value=0x24}, {.addr=0xea88, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xea89, .a=0x00, .x=0x6b, .y=0x07, .sp=0x2d, .status=0x3a};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x01}, {.addr=0xea87, .value=0x24}, {.addr=0xea88, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xea87, .value=0x24, .type=IO_READ},
        {.addr=0xea88, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0305) {
    const struct CPU_State initial_cpu = {.pc=0xe114, .a=0xf3, .x=0xb1, .y=0x72, .sp=0x56, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x2d}, {.addr=0xe114, .value=0x24}, {.addr=0xe115, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xe116, .a=0x21, .x=0xb1, .y=0x72, .sp=0x56, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x2d}, {.addr=0xe114, .value=0x24}, {.addr=0xe115, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe114, .value=0x24, .type=IO_READ},
        {.addr=0xe115, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0306) {
    const struct CPU_State initial_cpu = {.pc=0x63bc, .a=0x70, .x=0x1d, .y=0x31, .sp=0x04, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0xb6}, {.addr=0x63bc, .value=0x24}, {.addr=0x63bd, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x63be, .a=0x30, .x=0x1d, .y=0x31, .sp=0x04, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0xb6}, {.addr=0x63bc, .value=0x24}, {.addr=0x63bd, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x63bc, .value=0x24, .type=IO_READ},
        {.addr=0x63bd, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0307) {
    const struct CPU_State initial_cpu = {.pc=0xee23, .a=0x70, .x=0xbb, .y=0x91, .sp=0x36, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xdd}, {.addr=0xee23, .value=0x24}, {.addr=0xee24, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xee25, .a=0x50, .x=0xbb, .y=0x91, .sp=0x36, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xdd}, {.addr=0xee23, .value=0x24}, {.addr=0xee24, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xee23, .value=0x24, .type=IO_READ},
        {.addr=0xee24, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0308) {
    const struct CPU_State initial_cpu = {.pc=0xa8d6, .a=0xc8, .x=0x45, .y=0x60, .sp=0xde, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0xce}, {.addr=0xa8d6, .value=0x24}, {.addr=0xa8d7, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xa8d8, .a=0xc8, .x=0x45, .y=0x60, .sp=0xde, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0xce}, {.addr=0xa8d6, .value=0x24}, {.addr=0xa8d7, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8d6, .value=0x24, .type=IO_READ},
        {.addr=0xa8d7, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_030A) {
    const struct CPU_State initial_cpu = {.pc=0xad1b, .a=0xd7, .x=0xea, .y=0xd2, .sp=0x97, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x04}, {.addr=0xad1b, .value=0x24}, {.addr=0xad1c, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xad1d, .a=0x04, .x=0xea, .y=0xd2, .sp=0x97, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x04}, {.addr=0xad1b, .value=0x24}, {.addr=0xad1c, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xad1b, .value=0x24, .type=IO_READ},
        {.addr=0xad1c, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_030B) {
    const struct CPU_State initial_cpu = {.pc=0xa053, .a=0xaa, .x=0xea, .y=0xb4, .sp=0x2a, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0xf6}, {.addr=0xa053, .value=0x24}, {.addr=0xa054, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xa055, .a=0xa2, .x=0xea, .y=0xb4, .sp=0x2a, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0xf6}, {.addr=0xa053, .value=0x24}, {.addr=0xa054, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa053, .value=0x24, .type=IO_READ},
        {.addr=0xa054, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_030C) {
    const struct CPU_State initial_cpu = {.pc=0x46ac, .a=0x18, .x=0x67, .y=0x1d, .sp=0x0a, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x73}, {.addr=0x46ac, .value=0x24}, {.addr=0x46ad, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x46ae, .a=0x10, .x=0x67, .y=0x1d, .sp=0x0a, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x73}, {.addr=0x46ac, .value=0x24}, {.addr=0x46ad, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x46ac, .value=0x24, .type=IO_READ},
        {.addr=0x46ad, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_030D) {
    const struct CPU_State initial_cpu = {.pc=0xde52, .a=0x18, .x=0x71, .y=0x85, .sp=0x90, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x73}, {.addr=0xde52, .value=0x24}, {.addr=0xde53, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xde54, .a=0x10, .x=0x71, .y=0x85, .sp=0x90, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x73}, {.addr=0xde52, .value=0x24}, {.addr=0xde53, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xde52, .value=0x24, .type=IO_READ},
        {.addr=0xde53, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_030E) {
    const struct CPU_State initial_cpu = {.pc=0x8337, .a=0xdd, .x=0x56, .y=0x6b, .sp=0x10, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x98}, {.addr=0x8337, .value=0x24}, {.addr=0x8338, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x8339, .a=0x98, .x=0x56, .y=0x6b, .sp=0x10, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x98}, {.addr=0x8337, .value=0x24}, {.addr=0x8338, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x8337, .value=0x24, .type=IO_READ},
        {.addr=0x8338, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_030F) {
    const struct CPU_State initial_cpu = {.pc=0x2346, .a=0xa5, .x=0x01, .y=0x18, .sp=0x96, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xad}, {.addr=0x2346, .value=0x24}, {.addr=0x2347, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x2348, .a=0xa5, .x=0x01, .y=0x18, .sp=0x96, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xad}, {.addr=0x2346, .value=0x24}, {.addr=0x2347, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2346, .value=0x24, .type=IO_READ},
        {.addr=0x2347, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0310) {
    const struct CPU_State initial_cpu = {.pc=0x184b, .a=0x36, .x=0x0c, .y=0xae, .sp=0x3f, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xd0}, {.addr=0x184b, .value=0x24}, {.addr=0x184c, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x184d, .a=0x10, .x=0x0c, .y=0xae, .sp=0x3f, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xd0}, {.addr=0x184b, .value=0x24}, {.addr=0x184c, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x184b, .value=0x24, .type=IO_READ},
        {.addr=0x184c, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0311) {
    const struct CPU_State initial_cpu = {.pc=0x42a4, .a=0x6c, .x=0x7c, .y=0x2e, .sp=0x1d, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0x51}, {.addr=0x42a4, .value=0x24}, {.addr=0x42a5, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x42a6, .a=0x40, .x=0x7c, .y=0x2e, .sp=0x1d, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0x51}, {.addr=0x42a4, .value=0x24}, {.addr=0x42a5, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x42a4, .value=0x24, .type=IO_READ},
        {.addr=0x42a5, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0312) {
    const struct CPU_State initial_cpu = {.pc=0x0800, .a=0xee, .x=0x1b, .y=0xa7, .sp=0x68, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0xe4}, {.addr=0x0800, .value=0x24}, {.addr=0x0801, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x0802, .a=0xe4, .x=0x1b, .y=0xa7, .sp=0x68, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0xe4}, {.addr=0x0800, .value=0x24}, {.addr=0x0801, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0800, .value=0x24, .type=IO_READ},
        {.addr=0x0801, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0313) {
    const struct CPU_State initial_cpu = {.pc=0x18f4, .a=0xce, .x=0x61, .y=0xd5, .sp=0x4b, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xf5}, {.addr=0x18f4, .value=0x24}, {.addr=0x18f5, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x18f6, .a=0xc4, .x=0x61, .y=0xd5, .sp=0x4b, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xf5}, {.addr=0x18f4, .value=0x24}, {.addr=0x18f5, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x18f4, .value=0x24, .type=IO_READ},
        {.addr=0x18f5, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0314) {
    const struct CPU_State initial_cpu = {.pc=0xc77d, .a=0xe2, .x=0x47, .y=0xed, .sp=0x2e, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0xed}, {.addr=0xc77d, .value=0x24}, {.addr=0xc77e, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xc77f, .a=0xe0, .x=0x47, .y=0xed, .sp=0x2e, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0xed}, {.addr=0xc77d, .value=0x24}, {.addr=0xc77e, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc77d, .value=0x24, .type=IO_READ},
        {.addr=0xc77e, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0315) {
    const struct CPU_State initial_cpu = {.pc=0x9417, .a=0xf7, .x=0x3d, .y=0x9a, .sp=0x5d, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x53}, {.addr=0x9417, .value=0x24}, {.addr=0x9418, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x9419, .a=0x53, .x=0x3d, .y=0x9a, .sp=0x5d, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x53}, {.addr=0x9417, .value=0x24}, {.addr=0x9418, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x9417, .value=0x24, .type=IO_READ},
        {.addr=0x9418, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0316) {
    const struct CPU_State initial_cpu = {.pc=0xa06f, .a=0x10, .x=0x45, .y=0x6f, .sp=0xa3, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x2a}, {.addr=0xa06f, .value=0x24}, {.addr=0xa070, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xa071, .a=0x00, .x=0x45, .y=0x6f, .sp=0xa3, .status=0x3e};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x2a}, {.addr=0xa06f, .value=0x24}, {.addr=0xa070, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xa06f, .value=0x24, .type=IO_READ},
        {.addr=0xa070, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0317) {
    const struct CPU_State initial_cpu = {.pc=0x36b9, .a=0xe6, .x=0xb4, .y=0x63, .sp=0xe0, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x6f}, {.addr=0x36b9, .value=0x24}, {.addr=0x36ba, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x36bb, .a=0x66, .x=0xb4, .y=0x63, .sp=0xe0, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x6f}, {.addr=0x36b9, .value=0x24}, {.addr=0x36ba, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x36b9, .value=0x24, .type=IO_READ},
        {.addr=0x36ba, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0318) {
    const struct CPU_State initial_cpu = {.pc=0xfe1c, .a=0xaf, .x=0xb5, .y=0xa3, .sp=0xc7, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xcd}, {.addr=0xfe1c, .value=0x24}, {.addr=0xfe1d, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xfe1e, .a=0x8d, .x=0xb5, .y=0xa3, .sp=0xc7, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xcd}, {.addr=0xfe1c, .value=0x24}, {.addr=0xfe1d, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe1c, .value=0x24, .type=IO_READ},
        {.addr=0xfe1d, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0319) {
    const struct CPU_State initial_cpu = {.pc=0x7035, .a=0x33, .x=0x6e, .y=0x2b, .sp=0xdb, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xaa}, {.addr=0x7035, .value=0x24}, {.addr=0x7036, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x7037, .a=0x22, .x=0x6e, .y=0x2b, .sp=0xdb, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xaa}, {.addr=0x7035, .value=0x24}, {.addr=0x7036, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x7035, .value=0x24, .type=IO_READ},
        {.addr=0x7036, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_031A) {
    const struct CPU_State initial_cpu = {.pc=0x9c95, .a=0xd2, .x=0x1b, .y=0x9d, .sp=0x55, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x78}, {.addr=0x9c95, .value=0x24}, {.addr=0x9c96, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x9c97, .a=0x50, .x=0x1b, .y=0x9d, .sp=0x55, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x78}, {.addr=0x9c95, .value=0x24}, {.addr=0x9c96, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c95, .value=0x24, .type=IO_READ},
        {.addr=0x9c96, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_031B) {
    const struct CPU_State initial_cpu = {.pc=0xf2af, .a=0x9c, .x=0x6a, .y=0x47, .sp=0xe0, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x24}, {.addr=0xf2af, .value=0x24}, {.addr=0xf2b0, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xf2b1, .a=0x04, .x=0x6a, .y=0x47, .sp=0xe0, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x24}, {.addr=0xf2af, .value=0x24}, {.addr=0xf2b0, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2af, .value=0x24, .type=IO_READ},
        {.addr=0xf2b0, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_031C) {
    const struct CPU_State initial_cpu = {.pc=0xdc2e, .a=0x88, .x=0x81, .y=0xf9, .sp=0x1f, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x3f}, {.addr=0xdc2e, .value=0x24}, {.addr=0xdc2f, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xdc30, .a=0x08, .x=0x81, .y=0xf9, .sp=0x1f, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x3f}, {.addr=0xdc2e, .value=0x24}, {.addr=0xdc2f, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc2e, .value=0x24, .type=IO_READ},
        {.addr=0xdc2f, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_031D) {
    const struct CPU_State initial_cpu = {.pc=0xb56d, .a=0xce, .x=0x71, .y=0xc1, .sp=0x71, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0x7d}, {.addr=0xb56d, .value=0x24}, {.addr=0xb56e, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xb56f, .a=0x4c, .x=0x71, .y=0xc1, .sp=0x71, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0x7d}, {.addr=0xb56d, .value=0x24}, {.addr=0xb56e, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xb56d, .value=0x24, .type=IO_READ},
        {.addr=0xb56e, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_031F) {
    const struct CPU_State initial_cpu = {.pc=0x3f37, .a=0xd9, .x=0x49, .y=0x96, .sp=0x7f, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x8d}, {.addr=0x3f37, .value=0x24}, {.addr=0x3f38, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x3f39, .a=0x89, .x=0x49, .y=0x96, .sp=0x7f, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x8d}, {.addr=0x3f37, .value=0x24}, {.addr=0x3f38, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f37, .value=0x24, .type=IO_READ},
        {.addr=0x3f38, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0320) {
    const struct CPU_State initial_cpu = {.pc=0xcd41, .a=0x0b, .x=0x85, .y=0x4d, .sp=0xa6, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x93}, {.addr=0xcd41, .value=0x24}, {.addr=0xcd42, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xcd43, .a=0x03, .x=0x85, .y=0x4d, .sp=0xa6, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x93}, {.addr=0xcd41, .value=0x24}, {.addr=0xcd42, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd41, .value=0x24, .type=IO_READ},
        {.addr=0xcd42, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0321) {
    const struct CPU_State initial_cpu = {.pc=0x6f4c, .a=0xb7, .x=0x98, .y=0x0e, .sp=0x14, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0xb3}, {.addr=0x6f4c, .value=0x24}, {.addr=0x6f4d, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x6f4e, .a=0xb3, .x=0x98, .y=0x0e, .sp=0x14, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0xb3}, {.addr=0x6f4c, .value=0x24}, {.addr=0x6f4d, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f4c, .value=0x24, .type=IO_READ},
        {.addr=0x6f4d, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0322) {
    const struct CPU_State initial_cpu = {.pc=0x69ce, .a=0xa5, .x=0x0b, .y=0x1e, .sp=0xae, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x4a}, {.addr=0x69ce, .value=0x24}, {.addr=0x69cf, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x69d0, .a=0x00, .x=0x0b, .y=0x1e, .sp=0xae, .status=0x76};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x4a}, {.addr=0x69ce, .value=0x24}, {.addr=0x69cf, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x69ce, .value=0x24, .type=IO_READ},
        {.addr=0x69cf, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0323) {
    const struct CPU_State initial_cpu = {.pc=0x9efa, .a=0xd8, .x=0x2a, .y=0x03, .sp=0xc9, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x9a}, {.addr=0x9efa, .value=0x24}, {.addr=0x9efb, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x9efc, .a=0x98, .x=0x2a, .y=0x03, .sp=0xc9, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x9a}, {.addr=0x9efa, .value=0x24}, {.addr=0x9efb, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x9efa, .value=0x24, .type=IO_READ},
        {.addr=0x9efb, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0324) {
    const struct CPU_State initial_cpu = {.pc=0x1287, .a=0x83, .x=0x16, .y=0xa0, .sp=0xe9, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x65}, {.addr=0x1287, .value=0x24}, {.addr=0x1288, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x1289, .a=0x01, .x=0x16, .y=0xa0, .sp=0xe9, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x65}, {.addr=0x1287, .value=0x24}, {.addr=0x1288, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x1287, .value=0x24, .type=IO_READ},
        {.addr=0x1288, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0325) {
    const struct CPU_State initial_cpu = {.pc=0x43b1, .a=0x99, .x=0xea, .y=0x4e, .sp=0xda, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0x02}, {.addr=0x43b1, .value=0x24}, {.addr=0x43b2, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x43b3, .a=0x00, .x=0xea, .y=0x4e, .sp=0xda, .status=0x7b};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0x02}, {.addr=0x43b1, .value=0x24}, {.addr=0x43b2, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x43b1, .value=0x24, .type=IO_READ},
        {.addr=0x43b2, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0326) {
    const struct CPU_State initial_cpu = {.pc=0xaa77, .a=0x22, .x=0x24, .y=0x09, .sp=0x71, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x92}, {.addr=0xaa77, .value=0x24}, {.addr=0xaa78, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xaa79, .a=0x02, .x=0x24, .y=0x09, .sp=0x71, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x92}, {.addr=0xaa77, .value=0x24}, {.addr=0xaa78, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa77, .value=0x24, .type=IO_READ},
        {.addr=0xaa78, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0327) {
    const struct CPU_State initial_cpu = {.pc=0x455d, .a=0x21, .x=0x95, .y=0x0c, .sp=0x88, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0x58}, {.addr=0x455d, .value=0x24}, {.addr=0x455e, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x455f, .a=0x00, .x=0x95, .y=0x0c, .sp=0x88, .status=0x32};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0x58}, {.addr=0x455d, .value=0x24}, {.addr=0x455e, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x455d, .value=0x24, .type=IO_READ},
        {.addr=0x455e, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0329) {
    const struct CPU_State initial_cpu = {.pc=0xb012, .a=0xd3, .x=0x6e, .y=0x40, .sp=0xd0, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xc5}, {.addr=0xb012, .value=0x24}, {.addr=0xb013, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xb014, .a=0xc1, .x=0x6e, .y=0x40, .sp=0xd0, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xc5}, {.addr=0xb012, .value=0x24}, {.addr=0xb013, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xb012, .value=0x24, .type=IO_READ},
        {.addr=0xb013, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_032A) {
    const struct CPU_State initial_cpu = {.pc=0x4560, .a=0x7c, .x=0x96, .y=0xcc, .sp=0xe0, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0xfd}, {.addr=0x4560, .value=0x24}, {.addr=0x4561, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x4562, .a=0x7c, .x=0x96, .y=0xcc, .sp=0xe0, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0xfd}, {.addr=0x4560, .value=0x24}, {.addr=0x4561, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x4560, .value=0x24, .type=IO_READ},
        {.addr=0x4561, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_032B) {
    const struct CPU_State initial_cpu = {.pc=0xd923, .a=0xe8, .x=0x9f, .y=0xe7, .sp=0x36, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0xc8}, {.addr=0xd923, .value=0x24}, {.addr=0xd924, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xd925, .a=0xc8, .x=0x9f, .y=0xe7, .sp=0x36, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0xc8}, {.addr=0xd923, .value=0x24}, {.addr=0xd924, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xd923, .value=0x24, .type=IO_READ},
        {.addr=0xd924, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_032C) {
    const struct CPU_State initial_cpu = {.pc=0xdb41, .a=0xea, .x=0x49, .y=0x0a, .sp=0xe4, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x35}, {.addr=0xdb41, .value=0x24}, {.addr=0xdb42, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xdb43, .a=0x20, .x=0x49, .y=0x0a, .sp=0xe4, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x35}, {.addr=0xdb41, .value=0x24}, {.addr=0xdb42, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb41, .value=0x24, .type=IO_READ},
        {.addr=0xdb42, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_032D) {
    const struct CPU_State initial_cpu = {.pc=0x05d3, .a=0x72, .x=0x87, .y=0xe4, .sp=0x7a, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0x9c}, {.addr=0x05d3, .value=0x24}, {.addr=0x05d4, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x05d5, .a=0x10, .x=0x87, .y=0xe4, .sp=0x7a, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0x9c}, {.addr=0x05d3, .value=0x24}, {.addr=0x05d4, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x05d3, .value=0x24, .type=IO_READ},
        {.addr=0x05d4, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_032E) {
    const struct CPU_State initial_cpu = {.pc=0xfb20, .a=0x58, .x=0xe3, .y=0x98, .sp=0x3a, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0xcf}, {.addr=0xfb20, .value=0x24}, {.addr=0xfb21, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xfb22, .a=0x48, .x=0xe3, .y=0x98, .sp=0x3a, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0xcf}, {.addr=0xfb20, .value=0x24}, {.addr=0xfb21, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb20, .value=0x24, .type=IO_READ},
        {.addr=0xfb21, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_032F) {
    const struct CPU_State initial_cpu = {.pc=0x2d2d, .a=0x06, .x=0xfc, .y=0x5f, .sp=0xc8, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x69}, {.addr=0x2d2d, .value=0x24}, {.addr=0x2d2e, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x2d2f, .a=0x00, .x=0xfc, .y=0x5f, .sp=0xc8, .status=0x33};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x69}, {.addr=0x2d2d, .value=0x24}, {.addr=0x2d2e, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d2d, .value=0x24, .type=IO_READ},
        {.addr=0x2d2e, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0330) {
    const struct CPU_State initial_cpu = {.pc=0x401d, .a=0x7e, .x=0xf3, .y=0xde, .sp=0xbf, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x2e}, {.addr=0x401d, .value=0x24}, {.addr=0x401e, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x401f, .a=0x2e, .x=0xf3, .y=0xde, .sp=0xbf, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x2e}, {.addr=0x401d, .value=0x24}, {.addr=0x401e, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x401d, .value=0x24, .type=IO_READ},
        {.addr=0x401e, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0331) {
    const struct CPU_State initial_cpu = {.pc=0xa6a7, .a=0x98, .x=0x95, .y=0x28, .sp=0x26, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xd9}, {.addr=0xa6a7, .value=0x24}, {.addr=0xa6a8, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xa6a9, .a=0x98, .x=0x95, .y=0x28, .sp=0x26, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xd9}, {.addr=0xa6a7, .value=0x24}, {.addr=0xa6a8, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6a7, .value=0x24, .type=IO_READ},
        {.addr=0xa6a8, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0332) {
    const struct CPU_State initial_cpu = {.pc=0xb871, .a=0x63, .x=0x1e, .y=0x97, .sp=0xe2, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x6f}, {.addr=0xb871, .value=0x24}, {.addr=0xb872, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xb873, .a=0x63, .x=0x1e, .y=0x97, .sp=0xe2, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x6f}, {.addr=0xb871, .value=0x24}, {.addr=0xb872, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xb871, .value=0x24, .type=IO_READ},
        {.addr=0xb872, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0333) {
    const struct CPU_State initial_cpu = {.pc=0x487d, .a=0x86, .x=0x56, .y=0x82, .sp=0x76, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x02}, {.addr=0x487d, .value=0x24}, {.addr=0x487e, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x487f, .a=0x02, .x=0x56, .y=0x82, .sp=0x76, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x02}, {.addr=0x487d, .value=0x24}, {.addr=0x487e, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x487d, .value=0x24, .type=IO_READ},
        {.addr=0x487e, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0334) {
    const struct CPU_State initial_cpu = {.pc=0xc92f, .a=0x63, .x=0x02, .y=0x7f, .sp=0x59, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x58}, {.addr=0xc92f, .value=0x24}, {.addr=0xc930, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xc931, .a=0x40, .x=0x02, .y=0x7f, .sp=0x59, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x58}, {.addr=0xc92f, .value=0x24}, {.addr=0xc930, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xc92f, .value=0x24, .type=IO_READ},
        {.addr=0xc930, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0335) {
    const struct CPU_State initial_cpu = {.pc=0xa4df, .a=0x6b, .x=0x7f, .y=0xae, .sp=0xe0, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x16}, {.addr=0xa4df, .value=0x24}, {.addr=0xa4e0, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xa4e1, .a=0x02, .x=0x7f, .y=0xae, .sp=0xe0, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x16}, {.addr=0xa4df, .value=0x24}, {.addr=0xa4e0, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4df, .value=0x24, .type=IO_READ},
        {.addr=0xa4e0, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0336) {
    const struct CPU_State initial_cpu = {.pc=0x8387, .a=0xfe, .x=0x06, .y=0x80, .sp=0x1d, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xf2}, {.addr=0x8387, .value=0x24}, {.addr=0x8388, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x8389, .a=0xf2, .x=0x06, .y=0x80, .sp=0x1d, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xf2}, {.addr=0x8387, .value=0x24}, {.addr=0x8388, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8387, .value=0x24, .type=IO_READ},
        {.addr=0x8388, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0337) {
    const struct CPU_State initial_cpu = {.pc=0xc54a, .a=0xb1, .x=0xc7, .y=0x37, .sp=0xf7, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xb0}, {.addr=0xc54a, .value=0x24}, {.addr=0xc54b, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xc54c, .a=0xb0, .x=0xc7, .y=0x37, .sp=0xf7, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xb0}, {.addr=0xc54a, .value=0x24}, {.addr=0xc54b, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xc54a, .value=0x24, .type=IO_READ},
        {.addr=0xc54b, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0338) {
    const struct CPU_State initial_cpu = {.pc=0x4020, .a=0x41, .x=0xee, .y=0x9b, .sp=0xd7, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x81}, {.addr=0x4020, .value=0x24}, {.addr=0x4021, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x4022, .a=0x01, .x=0xee, .y=0x9b, .sp=0xd7, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x81}, {.addr=0x4020, .value=0x24}, {.addr=0x4021, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4020, .value=0x24, .type=IO_READ},
        {.addr=0x4021, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0339) {
    const struct CPU_State initial_cpu = {.pc=0xbd1a, .a=0x77, .x=0x8a, .y=0x05, .sp=0xbc, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x3e}, {.addr=0xbd1a, .value=0x24}, {.addr=0xbd1b, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xbd1c, .a=0x36, .x=0x8a, .y=0x05, .sp=0xbc, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x3e}, {.addr=0xbd1a, .value=0x24}, {.addr=0xbd1b, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd1a, .value=0x24, .type=IO_READ},
        {.addr=0xbd1b, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_033A) {
    const struct CPU_State initial_cpu = {.pc=0xd8f4, .a=0x32, .x=0xea, .y=0xdf, .sp=0xcc, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x52}, {.addr=0xd8f4, .value=0x24}, {.addr=0xd8f5, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xd8f6, .a=0x12, .x=0xea, .y=0xdf, .sp=0xcc, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x52}, {.addr=0xd8f4, .value=0x24}, {.addr=0xd8f5, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8f4, .value=0x24, .type=IO_READ},
        {.addr=0xd8f5, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_033B) {
    const struct CPU_State initial_cpu = {.pc=0x515c, .a=0xd5, .x=0x2b, .y=0x2f, .sp=0x4b, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x73}, {.addr=0x515c, .value=0x24}, {.addr=0x515d, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x515e, .a=0x51, .x=0x2b, .y=0x2f, .sp=0x4b, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x73}, {.addr=0x515c, .value=0x24}, {.addr=0x515d, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x515c, .value=0x24, .type=IO_READ},
        {.addr=0x515d, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_033C) {
    const struct CPU_State initial_cpu = {.pc=0xd85d, .a=0xe8, .x=0xe4, .y=0xec, .sp=0xe3, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x82}, {.addr=0xd85d, .value=0x24}, {.addr=0xd85e, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xd85f, .a=0x80, .x=0xe4, .y=0xec, .sp=0xe3, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x82}, {.addr=0xd85d, .value=0x24}, {.addr=0xd85e, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xd85d, .value=0x24, .type=IO_READ},
        {.addr=0xd85e, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_033D) {
    const struct CPU_State initial_cpu = {.pc=0x8254, .a=0x8d, .x=0xee, .y=0xaa, .sp=0xb1, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0xff}, {.addr=0x8254, .value=0x24}, {.addr=0x8255, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x8256, .a=0x8d, .x=0xee, .y=0xaa, .sp=0xb1, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0xff}, {.addr=0x8254, .value=0x24}, {.addr=0x8255, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x8254, .value=0x24, .type=IO_READ},
        {.addr=0x8255, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc025, .a=0x41, .x=0x3e, .y=0xe3, .sp=0x0f, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x85}, {.addr=0xc025, .value=0x24}, {.addr=0xc026, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xc027, .a=0x01, .x=0x3e, .y=0xe3, .sp=0x0f, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x85}, {.addr=0xc025, .value=0x24}, {.addr=0xc026, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc025, .value=0x24, .type=IO_READ},
        {.addr=0xc026, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_033F) {
    const struct CPU_State initial_cpu = {.pc=0x0883, .a=0xf5, .x=0x7c, .y=0x2f, .sp=0x8d, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x57}, {.addr=0x0883, .value=0x24}, {.addr=0x0884, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x0885, .a=0x55, .x=0x7c, .y=0x2f, .sp=0x8d, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x57}, {.addr=0x0883, .value=0x24}, {.addr=0x0884, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0883, .value=0x24, .type=IO_READ},
        {.addr=0x0884, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0340) {
    const struct CPU_State initial_cpu = {.pc=0x63e2, .a=0x46, .x=0x2f, .y=0x76, .sp=0xdb, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x59}, {.addr=0x63e2, .value=0x24}, {.addr=0x63e3, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x63e4, .a=0x40, .x=0x2f, .y=0x76, .sp=0xdb, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x59}, {.addr=0x63e2, .value=0x24}, {.addr=0x63e3, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x63e2, .value=0x24, .type=IO_READ},
        {.addr=0x63e3, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0341) {
    const struct CPU_State initial_cpu = {.pc=0x7dd1, .a=0xd4, .x=0x54, .y=0x7a, .sp=0x5a, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xba}, {.addr=0x7dd1, .value=0x24}, {.addr=0x7dd2, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x7dd3, .a=0x90, .x=0x54, .y=0x7a, .sp=0x5a, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xba}, {.addr=0x7dd1, .value=0x24}, {.addr=0x7dd2, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x7dd1, .value=0x24, .type=IO_READ},
        {.addr=0x7dd2, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0342) {
    const struct CPU_State initial_cpu = {.pc=0xb525, .a=0x6d, .x=0x6f, .y=0xf9, .sp=0x43, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x15}, {.addr=0xb525, .value=0x24}, {.addr=0xb526, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xb527, .a=0x05, .x=0x6f, .y=0xf9, .sp=0x43, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x15}, {.addr=0xb525, .value=0x24}, {.addr=0xb526, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb525, .value=0x24, .type=IO_READ},
        {.addr=0xb526, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0343) {
    const struct CPU_State initial_cpu = {.pc=0x68c8, .a=0xbf, .x=0x63, .y=0xe1, .sp=0x35, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x17}, {.addr=0x68c8, .value=0x24}, {.addr=0x68c9, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x68ca, .a=0x17, .x=0x63, .y=0xe1, .sp=0x35, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x17}, {.addr=0x68c8, .value=0x24}, {.addr=0x68c9, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x68c8, .value=0x24, .type=IO_READ},
        {.addr=0x68c9, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0344) {
    const struct CPU_State initial_cpu = {.pc=0x7f95, .a=0xc9, .x=0x5e, .y=0x1e, .sp=0xdc, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0xff}, {.addr=0x7f95, .value=0x24}, {.addr=0x7f96, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x7f97, .a=0xc9, .x=0x5e, .y=0x1e, .sp=0xdc, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0xff}, {.addr=0x7f95, .value=0x24}, {.addr=0x7f96, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f95, .value=0x24, .type=IO_READ},
        {.addr=0x7f96, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0345) {
    const struct CPU_State initial_cpu = {.pc=0xdac3, .a=0xde, .x=0x53, .y=0x37, .sp=0xad, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x3f}, {.addr=0xdac3, .value=0x24}, {.addr=0xdac4, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xdac5, .a=0x1e, .x=0x53, .y=0x37, .sp=0xad, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x3f}, {.addr=0xdac3, .value=0x24}, {.addr=0xdac4, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xdac3, .value=0x24, .type=IO_READ},
        {.addr=0xdac4, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0347) {
    const struct CPU_State initial_cpu = {.pc=0xfce6, .a=0xa3, .x=0x93, .y=0x00, .sp=0x7f, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x09}, {.addr=0xfce6, .value=0x24}, {.addr=0xfce7, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xfce8, .a=0x01, .x=0x93, .y=0x00, .sp=0x7f, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x09}, {.addr=0xfce6, .value=0x24}, {.addr=0xfce7, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xfce6, .value=0x24, .type=IO_READ},
        {.addr=0xfce7, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0348) {
    const struct CPU_State initial_cpu = {.pc=0x59de, .a=0x0f, .x=0x8a, .y=0xbe, .sp=0xb5, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x02}, {.addr=0x59de, .value=0x24}, {.addr=0x59df, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x59e0, .a=0x02, .x=0x8a, .y=0xbe, .sp=0xb5, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x02}, {.addr=0x59de, .value=0x24}, {.addr=0x59df, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x59de, .value=0x24, .type=IO_READ},
        {.addr=0x59df, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0349) {
    const struct CPU_State initial_cpu = {.pc=0x4cff, .a=0xcc, .x=0x1e, .y=0x99, .sp=0x5f, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x3a}, {.addr=0x4cff, .value=0x24}, {.addr=0x4d00, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x4d01, .a=0x08, .x=0x1e, .y=0x99, .sp=0x5f, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x3a}, {.addr=0x4cff, .value=0x24}, {.addr=0x4d00, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4cff, .value=0x24, .type=IO_READ},
        {.addr=0x4d00, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_034A) {
    const struct CPU_State initial_cpu = {.pc=0x5354, .a=0x4a, .x=0x49, .y=0x63, .sp=0xab, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x20}, {.addr=0x5354, .value=0x24}, {.addr=0x5355, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x5356, .a=0x00, .x=0x49, .y=0x63, .sp=0xab, .status=0x2b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x20}, {.addr=0x5354, .value=0x24}, {.addr=0x5355, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x5354, .value=0x24, .type=IO_READ},
        {.addr=0x5355, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_034B) {
    const struct CPU_State initial_cpu = {.pc=0x05aa, .a=0xa3, .x=0xea, .y=0x6d, .sp=0x5a, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x67}, {.addr=0x05aa, .value=0x24}, {.addr=0x05ab, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x05ac, .a=0x23, .x=0xea, .y=0x6d, .sp=0x5a, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x67}, {.addr=0x05aa, .value=0x24}, {.addr=0x05ab, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x05aa, .value=0x24, .type=IO_READ},
        {.addr=0x05ab, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_034C) {
    const struct CPU_State initial_cpu = {.pc=0x7170, .a=0x2f, .x=0x06, .y=0x36, .sp=0x9d, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xa7}, {.addr=0x7170, .value=0x24}, {.addr=0x7171, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x7172, .a=0x27, .x=0x06, .y=0x36, .sp=0x9d, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xa7}, {.addr=0x7170, .value=0x24}, {.addr=0x7171, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x7170, .value=0x24, .type=IO_READ},
        {.addr=0x7171, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_034D) {
    const struct CPU_State initial_cpu = {.pc=0xb3fe, .a=0x71, .x=0x83, .y=0xad, .sp=0x1c, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x7a}, {.addr=0xb3fe, .value=0x24}, {.addr=0xb3ff, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xb400, .a=0x70, .x=0x83, .y=0xad, .sp=0x1c, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x7a}, {.addr=0xb3fe, .value=0x24}, {.addr=0xb3ff, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3fe, .value=0x24, .type=IO_READ},
        {.addr=0xb3ff, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_034E) {
    const struct CPU_State initial_cpu = {.pc=0xfcd4, .a=0xd6, .x=0xb2, .y=0x7f, .sp=0xa7, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x0a}, {.addr=0xfcd4, .value=0x24}, {.addr=0xfcd5, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xfcd6, .a=0x02, .x=0xb2, .y=0x7f, .sp=0xa7, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x0a}, {.addr=0xfcd4, .value=0x24}, {.addr=0xfcd5, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcd4, .value=0x24, .type=IO_READ},
        {.addr=0xfcd5, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_034F) {
    const struct CPU_State initial_cpu = {.pc=0x1d7f, .a=0xd8, .x=0xda, .y=0xf0, .sp=0xeb, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x4d}, {.addr=0x1d7f, .value=0x24}, {.addr=0x1d80, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x1d81, .a=0x48, .x=0xda, .y=0xf0, .sp=0xeb, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x4d}, {.addr=0x1d7f, .value=0x24}, {.addr=0x1d80, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d7f, .value=0x24, .type=IO_READ},
        {.addr=0x1d80, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0350) {
    const struct CPU_State initial_cpu = {.pc=0x0de8, .a=0x8f, .x=0x5a, .y=0x9a, .sp=0x54, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0xa9}, {.addr=0x0de8, .value=0x24}, {.addr=0x0de9, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x0dea, .a=0x89, .x=0x5a, .y=0x9a, .sp=0x54, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0xa9}, {.addr=0x0de8, .value=0x24}, {.addr=0x0de9, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0de8, .value=0x24, .type=IO_READ},
        {.addr=0x0de9, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0351) {
    const struct CPU_State initial_cpu = {.pc=0x6c64, .a=0x99, .x=0x57, .y=0x94, .sp=0x34, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0x8c}, {.addr=0x6c64, .value=0x24}, {.addr=0x6c65, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x6c66, .a=0x88, .x=0x57, .y=0x94, .sp=0x34, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0x8c}, {.addr=0x6c64, .value=0x24}, {.addr=0x6c65, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c64, .value=0x24, .type=IO_READ},
        {.addr=0x6c65, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0352) {
    const struct CPU_State initial_cpu = {.pc=0xc429, .a=0xfc, .x=0xfe, .y=0x85, .sp=0xd5, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x42}, {.addr=0xc429, .value=0x24}, {.addr=0xc42a, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xc42b, .a=0x40, .x=0xfe, .y=0x85, .sp=0xd5, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x42}, {.addr=0xc429, .value=0x24}, {.addr=0xc42a, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xc429, .value=0x24, .type=IO_READ},
        {.addr=0xc42a, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0353) {
    const struct CPU_State initial_cpu = {.pc=0x5f96, .a=0xbe, .x=0xa2, .y=0xf2, .sp=0x33, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xd6}, {.addr=0x5f96, .value=0x24}, {.addr=0x5f97, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x5f98, .a=0x96, .x=0xa2, .y=0xf2, .sp=0x33, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xd6}, {.addr=0x5f96, .value=0x24}, {.addr=0x5f97, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f96, .value=0x24, .type=IO_READ},
        {.addr=0x5f97, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0354) {
    const struct CPU_State initial_cpu = {.pc=0xd16f, .a=0x43, .x=0x49, .y=0x68, .sp=0x8d, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x17}, {.addr=0xd16f, .value=0x24}, {.addr=0xd170, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xd171, .a=0x03, .x=0x49, .y=0x68, .sp=0x8d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x17}, {.addr=0xd16f, .value=0x24}, {.addr=0xd170, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xd16f, .value=0x24, .type=IO_READ},
        {.addr=0xd170, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0355) {
    const struct CPU_State initial_cpu = {.pc=0xb4da, .a=0xeb, .x=0x3e, .y=0x6f, .sp=0xb2, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x53}, {.addr=0xb4da, .value=0x24}, {.addr=0xb4db, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xb4dc, .a=0x43, .x=0x3e, .y=0x6f, .sp=0xb2, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x53}, {.addr=0xb4da, .value=0x24}, {.addr=0xb4db, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4da, .value=0x24, .type=IO_READ},
        {.addr=0xb4db, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0356) {
    const struct CPU_State initial_cpu = {.pc=0xf64a, .a=0x32, .x=0x41, .y=0x8e, .sp=0xbb, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xb8}, {.addr=0xf64a, .value=0x24}, {.addr=0xf64b, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xf64c, .a=0x30, .x=0x41, .y=0x8e, .sp=0xbb, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xb8}, {.addr=0xf64a, .value=0x24}, {.addr=0xf64b, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xf64a, .value=0x24, .type=IO_READ},
        {.addr=0xf64b, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0357) {
    const struct CPU_State initial_cpu = {.pc=0xa00b, .a=0xe8, .x=0xb9, .y=0xd8, .sp=0x4d, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x25}, {.addr=0xa00b, .value=0x24}, {.addr=0xa00c, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xa00d, .a=0x20, .x=0xb9, .y=0xd8, .sp=0x4d, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x25}, {.addr=0xa00b, .value=0x24}, {.addr=0xa00c, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xa00b, .value=0x24, .type=IO_READ},
        {.addr=0xa00c, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0358) {
    const struct CPU_State initial_cpu = {.pc=0x8609, .a=0x8d, .x=0x0f, .y=0xda, .sp=0x08, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x47}, {.addr=0x8609, .value=0x24}, {.addr=0x860a, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x860b, .a=0x05, .x=0x0f, .y=0xda, .sp=0x08, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x47}, {.addr=0x8609, .value=0x24}, {.addr=0x860a, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x8609, .value=0x24, .type=IO_READ},
        {.addr=0x860a, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0359) {
    const struct CPU_State initial_cpu = {.pc=0xb0e7, .a=0xc0, .x=0xaa, .y=0x59, .sp=0x0a, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x71}, {.addr=0xb0e7, .value=0x24}, {.addr=0xb0e8, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xb0e9, .a=0x40, .x=0xaa, .y=0x59, .sp=0x0a, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x71}, {.addr=0xb0e7, .value=0x24}, {.addr=0xb0e8, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0e7, .value=0x24, .type=IO_READ},
        {.addr=0xb0e8, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_035A) {
    const struct CPU_State initial_cpu = {.pc=0x05b3, .a=0x79, .x=0x73, .y=0x85, .sp=0x53, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xe9}, {.addr=0x05b3, .value=0x24}, {.addr=0x05b4, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x05b5, .a=0x69, .x=0x73, .y=0x85, .sp=0x53, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xe9}, {.addr=0x05b3, .value=0x24}, {.addr=0x05b4, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x05b3, .value=0x24, .type=IO_READ},
        {.addr=0x05b4, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_035B) {
    const struct CPU_State initial_cpu = {.pc=0xd0b8, .a=0xe6, .x=0xd1, .y=0x9b, .sp=0x74, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x6e}, {.addr=0xd0b8, .value=0x24}, {.addr=0xd0b9, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xd0ba, .a=0x66, .x=0xd1, .y=0x9b, .sp=0x74, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x6e}, {.addr=0xd0b8, .value=0x24}, {.addr=0xd0b9, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0b8, .value=0x24, .type=IO_READ},
        {.addr=0xd0b9, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_035C) {
    const struct CPU_State initial_cpu = {.pc=0x0b1b, .a=0x02, .x=0x97, .y=0xef, .sp=0xdc, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x84}, {.addr=0x0b1b, .value=0x24}, {.addr=0x0b1c, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x0b1d, .a=0x00, .x=0x97, .y=0xef, .sp=0xdc, .status=0x22};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x84}, {.addr=0x0b1b, .value=0x24}, {.addr=0x0b1c, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b1b, .value=0x24, .type=IO_READ},
        {.addr=0x0b1c, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_035D) {
    const struct CPU_State initial_cpu = {.pc=0xc795, .a=0x10, .x=0xd0, .y=0xfa, .sp=0xc8, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0xad}, {.addr=0xc795, .value=0x24}, {.addr=0xc796, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xc797, .a=0x00, .x=0xd0, .y=0xfa, .sp=0xc8, .status=0x03};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0xad}, {.addr=0xc795, .value=0x24}, {.addr=0xc796, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xc795, .value=0x24, .type=IO_READ},
        {.addr=0xc796, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_035E) {
    const struct CPU_State initial_cpu = {.pc=0xb965, .a=0x5f, .x=0x30, .y=0xad, .sp=0xcd, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x4c}, {.addr=0xb965, .value=0x24}, {.addr=0xb966, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xb967, .a=0x4c, .x=0x30, .y=0xad, .sp=0xcd, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x4c}, {.addr=0xb965, .value=0x24}, {.addr=0xb966, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xb965, .value=0x24, .type=IO_READ},
        {.addr=0xb966, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_035F) {
    const struct CPU_State initial_cpu = {.pc=0x7d44, .a=0x44, .x=0xe8, .y=0x00, .sp=0x2f, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0x84}, {.addr=0x7d44, .value=0x24}, {.addr=0x7d45, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x7d46, .a=0x04, .x=0xe8, .y=0x00, .sp=0x2f, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0x84}, {.addr=0x7d44, .value=0x24}, {.addr=0x7d45, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d44, .value=0x24, .type=IO_READ},
        {.addr=0x7d45, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0360) {
    const struct CPU_State initial_cpu = {.pc=0x95cd, .a=0xbe, .x=0x4d, .y=0xf4, .sp=0x21, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0xe7}, {.addr=0x95cd, .value=0x24}, {.addr=0x95ce, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x95cf, .a=0xa6, .x=0x4d, .y=0xf4, .sp=0x21, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0xe7}, {.addr=0x95cd, .value=0x24}, {.addr=0x95ce, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x95cd, .value=0x24, .type=IO_READ},
        {.addr=0x95ce, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0361) {
    const struct CPU_State initial_cpu = {.pc=0xa544, .a=0x98, .x=0x8a, .y=0xd0, .sp=0xa3, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0xfd}, {.addr=0xa544, .value=0x24}, {.addr=0xa545, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xa546, .a=0x98, .x=0x8a, .y=0xd0, .sp=0xa3, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0xfd}, {.addr=0xa544, .value=0x24}, {.addr=0xa545, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa544, .value=0x24, .type=IO_READ},
        {.addr=0xa545, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0362) {
    const struct CPU_State initial_cpu = {.pc=0x15b6, .a=0xb3, .x=0xa9, .y=0x06, .sp=0xbd, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x5c}, {.addr=0x15b6, .value=0x24}, {.addr=0x15b7, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x15b8, .a=0x10, .x=0xa9, .y=0x06, .sp=0xbd, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x5c}, {.addr=0x15b6, .value=0x24}, {.addr=0x15b7, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x15b6, .value=0x24, .type=IO_READ},
        {.addr=0x15b7, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0363) {
    const struct CPU_State initial_cpu = {.pc=0x84c3, .a=0xad, .x=0x44, .y=0xa0, .sp=0x06, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0xd6}, {.addr=0x84c3, .value=0x24}, {.addr=0x84c4, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x84c5, .a=0x84, .x=0x44, .y=0xa0, .sp=0x06, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0xd6}, {.addr=0x84c3, .value=0x24}, {.addr=0x84c4, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x84c3, .value=0x24, .type=IO_READ},
        {.addr=0x84c4, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0364) {
    const struct CPU_State initial_cpu = {.pc=0x6e46, .a=0x18, .x=0x37, .y=0x8f, .sp=0xca, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x9b}, {.addr=0x6e46, .value=0x24}, {.addr=0x6e47, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x6e48, .a=0x18, .x=0x37, .y=0x8f, .sp=0xca, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x9b}, {.addr=0x6e46, .value=0x24}, {.addr=0x6e47, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e46, .value=0x24, .type=IO_READ},
        {.addr=0x6e47, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0365) {
    const struct CPU_State initial_cpu = {.pc=0x493f, .a=0xdd, .x=0xb3, .y=0x22, .sp=0x71, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x09}, {.addr=0x493f, .value=0x24}, {.addr=0x4940, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x4941, .a=0x09, .x=0xb3, .y=0x22, .sp=0x71, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x09}, {.addr=0x493f, .value=0x24}, {.addr=0x4940, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x493f, .value=0x24, .type=IO_READ},
        {.addr=0x4940, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0366) {
    const struct CPU_State initial_cpu = {.pc=0x7974, .a=0xd0, .x=0xbb, .y=0x27, .sp=0x98, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0x10}, {.addr=0x7974, .value=0x24}, {.addr=0x7975, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x7976, .a=0x10, .x=0xbb, .y=0x27, .sp=0x98, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0x10}, {.addr=0x7974, .value=0x24}, {.addr=0x7975, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x7974, .value=0x24, .type=IO_READ},
        {.addr=0x7975, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0367) {
    const struct CPU_State initial_cpu = {.pc=0xdea6, .a=0x44, .x=0x97, .y=0x04, .sp=0xa8, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x01}, {.addr=0xdea6, .value=0x24}, {.addr=0xdea7, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xdea8, .a=0x00, .x=0x97, .y=0x04, .sp=0xa8, .status=0x13};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x01}, {.addr=0xdea6, .value=0x24}, {.addr=0xdea7, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xdea6, .value=0x24, .type=IO_READ},
        {.addr=0xdea7, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0368) {
    const struct CPU_State initial_cpu = {.pc=0x4fca, .a=0xad, .x=0x69, .y=0x72, .sp=0x27, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0xf3}, {.addr=0x4fca, .value=0x24}, {.addr=0x4fcb, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x4fcc, .a=0xa1, .x=0x69, .y=0x72, .sp=0x27, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0xf3}, {.addr=0x4fca, .value=0x24}, {.addr=0x4fcb, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x4fca, .value=0x24, .type=IO_READ},
        {.addr=0x4fcb, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0369) {
    const struct CPU_State initial_cpu = {.pc=0xa33a, .a=0x06, .x=0x4f, .y=0xb3, .sp=0x57, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x0f}, {.addr=0xa33a, .value=0x24}, {.addr=0xa33b, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xa33c, .a=0x06, .x=0x4f, .y=0xb3, .sp=0x57, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x0f}, {.addr=0xa33a, .value=0x24}, {.addr=0xa33b, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa33a, .value=0x24, .type=IO_READ},
        {.addr=0xa33b, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_036A) {
    const struct CPU_State initial_cpu = {.pc=0xf10b, .a=0x2b, .x=0x53, .y=0x4b, .sp=0xa1, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xd2}, {.addr=0xf10b, .value=0x24}, {.addr=0xf10c, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xf10d, .a=0x02, .x=0x53, .y=0x4b, .sp=0xa1, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xd2}, {.addr=0xf10b, .value=0x24}, {.addr=0xf10c, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf10b, .value=0x24, .type=IO_READ},
        {.addr=0xf10c, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_036B) {
    const struct CPU_State initial_cpu = {.pc=0x7dcc, .a=0xb6, .x=0x75, .y=0x9b, .sp=0x10, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0xf5}, {.addr=0x7dcc, .value=0x24}, {.addr=0x7dcd, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x7dce, .a=0xb4, .x=0x75, .y=0x9b, .sp=0x10, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0xf5}, {.addr=0x7dcc, .value=0x24}, {.addr=0x7dcd, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7dcc, .value=0x24, .type=IO_READ},
        {.addr=0x7dcd, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_036C) {
    const struct CPU_State initial_cpu = {.pc=0xfd91, .a=0x44, .x=0xe1, .y=0xfc, .sp=0xa8, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xb7}, {.addr=0xfd91, .value=0x24}, {.addr=0xfd92, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xfd93, .a=0x04, .x=0xe1, .y=0xfc, .sp=0xa8, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xb7}, {.addr=0xfd91, .value=0x24}, {.addr=0xfd92, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd91, .value=0x24, .type=IO_READ},
        {.addr=0xfd92, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_036D) {
    const struct CPU_State initial_cpu = {.pc=0xd65d, .a=0x2e, .x=0x7d, .y=0xa6, .sp=0x97, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0xa5}, {.addr=0xd65d, .value=0x24}, {.addr=0xd65e, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xd65f, .a=0x24, .x=0x7d, .y=0xa6, .sp=0x97, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0xa5}, {.addr=0xd65d, .value=0x24}, {.addr=0xd65e, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd65d, .value=0x24, .type=IO_READ},
        {.addr=0xd65e, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_036E) {
    const struct CPU_State initial_cpu = {.pc=0x71e7, .a=0x27, .x=0x54, .y=0xec, .sp=0x43, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x96}, {.addr=0x71e7, .value=0x24}, {.addr=0x71e8, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x71e9, .a=0x06, .x=0x54, .y=0xec, .sp=0x43, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x96}, {.addr=0x71e7, .value=0x24}, {.addr=0x71e8, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x71e7, .value=0x24, .type=IO_READ},
        {.addr=0x71e8, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_036F) {
    const struct CPU_State initial_cpu = {.pc=0x72ec, .a=0x0d, .x=0xc2, .y=0x94, .sp=0x40, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xca}, {.addr=0x72ec, .value=0x24}, {.addr=0x72ed, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x72ee, .a=0x08, .x=0xc2, .y=0x94, .sp=0x40, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xca}, {.addr=0x72ec, .value=0x24}, {.addr=0x72ed, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x72ec, .value=0x24, .type=IO_READ},
        {.addr=0x72ed, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0370) {
    const struct CPU_State initial_cpu = {.pc=0x5546, .a=0x1f, .x=0x9b, .y=0x4a, .sp=0x81, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xc5}, {.addr=0x5546, .value=0x24}, {.addr=0x5547, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x5548, .a=0x05, .x=0x9b, .y=0x4a, .sp=0x81, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xc5}, {.addr=0x5546, .value=0x24}, {.addr=0x5547, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5546, .value=0x24, .type=IO_READ},
        {.addr=0x5547, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0371) {
    const struct CPU_State initial_cpu = {.pc=0xcc76, .a=0x91, .x=0x17, .y=0x89, .sp=0x79, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xc2}, {.addr=0xcc76, .value=0x24}, {.addr=0xcc77, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xcc78, .a=0x80, .x=0x17, .y=0x89, .sp=0x79, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xc2}, {.addr=0xcc76, .value=0x24}, {.addr=0xcc77, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc76, .value=0x24, .type=IO_READ},
        {.addr=0xcc77, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0372) {
    const struct CPU_State initial_cpu = {.pc=0xe637, .a=0x8a, .x=0x95, .y=0xec, .sp=0xba, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0xef}, {.addr=0xe637, .value=0x24}, {.addr=0xe638, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xe639, .a=0x8a, .x=0x95, .y=0xec, .sp=0xba, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0xef}, {.addr=0xe637, .value=0x24}, {.addr=0xe638, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xe637, .value=0x24, .type=IO_READ},
        {.addr=0xe638, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0373) {
    const struct CPU_State initial_cpu = {.pc=0x0987, .a=0xa5, .x=0x00, .y=0xae, .sp=0x95, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xd8}, {.addr=0x0987, .value=0x24}, {.addr=0x0988, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x0989, .a=0x80, .x=0x00, .y=0xae, .sp=0x95, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xd8}, {.addr=0x0987, .value=0x24}, {.addr=0x0988, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x0987, .value=0x24, .type=IO_READ},
        {.addr=0x0988, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0374) {
    const struct CPU_State initial_cpu = {.pc=0x6388, .a=0xf4, .x=0x11, .y=0x58, .sp=0x22, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0x92}, {.addr=0x6388, .value=0x24}, {.addr=0x6389, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x638a, .a=0x90, .x=0x11, .y=0x58, .sp=0x22, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0x92}, {.addr=0x6388, .value=0x24}, {.addr=0x6389, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6388, .value=0x24, .type=IO_READ},
        {.addr=0x6389, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0375) {
    const struct CPU_State initial_cpu = {.pc=0x6a3a, .a=0x7c, .x=0xc5, .y=0xed, .sp=0x1b, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x87}, {.addr=0x6a3a, .value=0x24}, {.addr=0x6a3b, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x6a3c, .a=0x04, .x=0xc5, .y=0xed, .sp=0x1b, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x87}, {.addr=0x6a3a, .value=0x24}, {.addr=0x6a3b, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a3a, .value=0x24, .type=IO_READ},
        {.addr=0x6a3b, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0376) {
    const struct CPU_State initial_cpu = {.pc=0x942a, .a=0x15, .x=0xc2, .y=0xdb, .sp=0xf7, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x34}, {.addr=0x942a, .value=0x24}, {.addr=0x942b, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x942c, .a=0x14, .x=0xc2, .y=0xdb, .sp=0xf7, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x34}, {.addr=0x942a, .value=0x24}, {.addr=0x942b, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x942a, .value=0x24, .type=IO_READ},
        {.addr=0x942b, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0377) {
    const struct CPU_State initial_cpu = {.pc=0x4d03, .a=0xb7, .x=0xf2, .y=0x31, .sp=0x35, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0xa2}, {.addr=0x4d03, .value=0x24}, {.addr=0x4d04, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x4d05, .a=0xa2, .x=0xf2, .y=0x31, .sp=0x35, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0xa2}, {.addr=0x4d03, .value=0x24}, {.addr=0x4d04, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d03, .value=0x24, .type=IO_READ},
        {.addr=0x4d04, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0378) {
    const struct CPU_State initial_cpu = {.pc=0x0ca6, .a=0x24, .x=0xe8, .y=0xf0, .sp=0x48, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0xfe}, {.addr=0x0ca6, .value=0x24}, {.addr=0x0ca7, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x0ca8, .a=0x24, .x=0xe8, .y=0xf0, .sp=0x48, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0xfe}, {.addr=0x0ca6, .value=0x24}, {.addr=0x0ca7, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ca6, .value=0x24, .type=IO_READ},
        {.addr=0x0ca7, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0379) {
    const struct CPU_State initial_cpu = {.pc=0xac6a, .a=0xca, .x=0xa6, .y=0xca, .sp=0xaf, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0xcc}, {.addr=0xac6a, .value=0x24}, {.addr=0xac6b, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0xac6c, .a=0xc8, .x=0xa6, .y=0xca, .sp=0xaf, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0xcc}, {.addr=0xac6a, .value=0x24}, {.addr=0xac6b, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0xac6a, .value=0x24, .type=IO_READ},
        {.addr=0xac6b, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_037A) {
    const struct CPU_State initial_cpu = {.pc=0xc1d3, .a=0x1d, .x=0x60, .y=0x33, .sp=0xd0, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xa7}, {.addr=0xc1d3, .value=0x24}, {.addr=0xc1d4, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xc1d5, .a=0x05, .x=0x60, .y=0x33, .sp=0xd0, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xa7}, {.addr=0xc1d3, .value=0x24}, {.addr=0xc1d4, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1d3, .value=0x24, .type=IO_READ},
        {.addr=0xc1d4, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_037B) {
    const struct CPU_State initial_cpu = {.pc=0xcbdf, .a=0xd5, .x=0x40, .y=0x04, .sp=0xb1, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xf7}, {.addr=0xcbdf, .value=0x24}, {.addr=0xcbe0, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xcbe1, .a=0xd5, .x=0x40, .y=0x04, .sp=0xb1, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xf7}, {.addr=0xcbdf, .value=0x24}, {.addr=0xcbe0, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbdf, .value=0x24, .type=IO_READ},
        {.addr=0xcbe0, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_037C) {
    const struct CPU_State initial_cpu = {.pc=0x76c8, .a=0x5b, .x=0xde, .y=0x3a, .sp=0x57, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0xbd}, {.addr=0x76c8, .value=0x24}, {.addr=0x76c9, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x76ca, .a=0x19, .x=0xde, .y=0x3a, .sp=0x57, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0xbd}, {.addr=0x76c8, .value=0x24}, {.addr=0x76c9, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x76c8, .value=0x24, .type=IO_READ},
        {.addr=0x76c9, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_037D) {
    const struct CPU_State initial_cpu = {.pc=0x17f6, .a=0x2e, .x=0xe0, .y=0xfe, .sp=0x78, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xec}, {.addr=0x17f6, .value=0x24}, {.addr=0x17f7, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x17f8, .a=0x2c, .x=0xe0, .y=0xfe, .sp=0x78, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xec}, {.addr=0x17f6, .value=0x24}, {.addr=0x17f7, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x17f6, .value=0x24, .type=IO_READ},
        {.addr=0x17f7, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_037E) {
    const struct CPU_State initial_cpu = {.pc=0x2385, .a=0x42, .x=0x8f, .y=0x7b, .sp=0x25, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0x29}, {.addr=0x2385, .value=0x24}, {.addr=0x2386, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x2387, .a=0x00, .x=0x8f, .y=0x7b, .sp=0x25, .status=0x26};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0x29}, {.addr=0x2385, .value=0x24}, {.addr=0x2386, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2385, .value=0x24, .type=IO_READ},
        {.addr=0x2386, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_037F) {
    const struct CPU_State initial_cpu = {.pc=0x5a5b, .a=0x0d, .x=0x40, .y=0x2f, .sp=0xc9, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x3f}, {.addr=0x5a5b, .value=0x24}, {.addr=0x5a5c, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x5a5d, .a=0x0d, .x=0x40, .y=0x2f, .sp=0xc9, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x3f}, {.addr=0x5a5b, .value=0x24}, {.addr=0x5a5c, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a5b, .value=0x24, .type=IO_READ},
        {.addr=0x5a5c, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0380) {
    const struct CPU_State initial_cpu = {.pc=0x16ba, .a=0x33, .x=0x3e, .y=0x17, .sp=0xc9, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0xa2}, {.addr=0x16ba, .value=0x24}, {.addr=0x16bb, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x16bc, .a=0x22, .x=0x3e, .y=0x17, .sp=0xc9, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0xa2}, {.addr=0x16ba, .value=0x24}, {.addr=0x16bb, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x16ba, .value=0x24, .type=IO_READ},
        {.addr=0x16bb, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0381) {
    const struct CPU_State initial_cpu = {.pc=0xfc6a, .a=0x28, .x=0x14, .y=0x49, .sp=0x71, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x12}, {.addr=0xfc6a, .value=0x24}, {.addr=0xfc6b, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xfc6c, .a=0x00, .x=0x14, .y=0x49, .sp=0x71, .status=0x53};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x12}, {.addr=0xfc6a, .value=0x24}, {.addr=0xfc6b, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc6a, .value=0x24, .type=IO_READ},
        {.addr=0xfc6b, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0382) {
    const struct CPU_State initial_cpu = {.pc=0x571c, .a=0x7a, .x=0xed, .y=0x10, .sp=0xf9, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x2f}, {.addr=0x571c, .value=0x24}, {.addr=0x571d, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x571e, .a=0x2a, .x=0xed, .y=0x10, .sp=0xf9, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x2f}, {.addr=0x571c, .value=0x24}, {.addr=0x571d, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x571c, .value=0x24, .type=IO_READ},
        {.addr=0x571d, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0383) {
    const struct CPU_State initial_cpu = {.pc=0x732d, .a=0x43, .x=0x32, .y=0x6b, .sp=0x55, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x59}, {.addr=0x732d, .value=0x24}, {.addr=0x732e, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x732f, .a=0x41, .x=0x32, .y=0x6b, .sp=0x55, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x59}, {.addr=0x732d, .value=0x24}, {.addr=0x732e, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x732d, .value=0x24, .type=IO_READ},
        {.addr=0x732e, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0384) {
    const struct CPU_State initial_cpu = {.pc=0xf51f, .a=0xc3, .x=0x9c, .y=0x7f, .sp=0x72, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x0f}, {.addr=0xf51f, .value=0x24}, {.addr=0xf520, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xf521, .a=0x03, .x=0x9c, .y=0x7f, .sp=0x72, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x0f}, {.addr=0xf51f, .value=0x24}, {.addr=0xf520, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xf51f, .value=0x24, .type=IO_READ},
        {.addr=0xf520, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0385) {
    const struct CPU_State initial_cpu = {.pc=0x0c1b, .a=0x30, .x=0x4c, .y=0x77, .sp=0x39, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x0a}, {.addr=0x0c1b, .value=0x24}, {.addr=0x0c1c, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x0c1d, .a=0x00, .x=0x4c, .y=0x77, .sp=0x39, .status=0x46};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x0a}, {.addr=0x0c1b, .value=0x24}, {.addr=0x0c1c, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c1b, .value=0x24, .type=IO_READ},
        {.addr=0x0c1c, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0386) {
    const struct CPU_State initial_cpu = {.pc=0x3eae, .a=0xbb, .x=0x2c, .y=0xdc, .sp=0x9e, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x81}, {.addr=0x3eae, .value=0x24}, {.addr=0x3eaf, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x3eb0, .a=0x81, .x=0x2c, .y=0xdc, .sp=0x9e, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x81}, {.addr=0x3eae, .value=0x24}, {.addr=0x3eaf, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3eae, .value=0x24, .type=IO_READ},
        {.addr=0x3eaf, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0387) {
    const struct CPU_State initial_cpu = {.pc=0xc6f8, .a=0x19, .x=0x09, .y=0x6b, .sp=0x2d, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x3a}, {.addr=0xc6f8, .value=0x24}, {.addr=0xc6f9, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xc6fa, .a=0x18, .x=0x09, .y=0x6b, .sp=0x2d, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x3a}, {.addr=0xc6f8, .value=0x24}, {.addr=0xc6f9, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6f8, .value=0x24, .type=IO_READ},
        {.addr=0xc6f9, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0388) {
    const struct CPU_State initial_cpu = {.pc=0xc235, .a=0x14, .x=0x78, .y=0x39, .sp=0x89, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x5e}, {.addr=0xc235, .value=0x24}, {.addr=0xc236, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xc237, .a=0x14, .x=0x78, .y=0x39, .sp=0x89, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x5e}, {.addr=0xc235, .value=0x24}, {.addr=0xc236, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc235, .value=0x24, .type=IO_READ},
        {.addr=0xc236, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0389) {
    const struct CPU_State initial_cpu = {.pc=0x1c07, .a=0x40, .x=0x67, .y=0x2f, .sp=0xf7, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xe8}, {.addr=0x1c07, .value=0x24}, {.addr=0x1c08, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x1c09, .a=0x40, .x=0x67, .y=0x2f, .sp=0xf7, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xe8}, {.addr=0x1c07, .value=0x24}, {.addr=0x1c08, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c07, .value=0x24, .type=IO_READ},
        {.addr=0x1c08, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_038A) {
    const struct CPU_State initial_cpu = {.pc=0x3cff, .a=0x4b, .x=0xb2, .y=0xe9, .sp=0x48, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x87}, {.addr=0x3cff, .value=0x24}, {.addr=0x3d00, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x3d01, .a=0x03, .x=0xb2, .y=0xe9, .sp=0x48, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x87}, {.addr=0x3cff, .value=0x24}, {.addr=0x3d00, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cff, .value=0x24, .type=IO_READ},
        {.addr=0x3d00, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_038B) {
    const struct CPU_State initial_cpu = {.pc=0xf505, .a=0x91, .x=0x08, .y=0x1e, .sp=0x5b, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0x47}, {.addr=0xf505, .value=0x24}, {.addr=0xf506, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xf507, .a=0x01, .x=0x08, .y=0x1e, .sp=0x5b, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0x47}, {.addr=0xf505, .value=0x24}, {.addr=0xf506, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf505, .value=0x24, .type=IO_READ},
        {.addr=0xf506, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_038C) {
    const struct CPU_State initial_cpu = {.pc=0x59a2, .a=0x42, .x=0xfb, .y=0xbe, .sp=0x6a, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x82}, {.addr=0x59a2, .value=0x24}, {.addr=0x59a3, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x59a4, .a=0x02, .x=0xfb, .y=0xbe, .sp=0x6a, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x82}, {.addr=0x59a2, .value=0x24}, {.addr=0x59a3, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x59a2, .value=0x24, .type=IO_READ},
        {.addr=0x59a3, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_038D) {
    const struct CPU_State initial_cpu = {.pc=0xdd19, .a=0x54, .x=0xf4, .y=0x24, .sp=0xd6, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0xd6}, {.addr=0xdd19, .value=0x24}, {.addr=0xdd1a, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xdd1b, .a=0x54, .x=0xf4, .y=0x24, .sp=0xd6, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0xd6}, {.addr=0xdd19, .value=0x24}, {.addr=0xdd1a, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd19, .value=0x24, .type=IO_READ},
        {.addr=0xdd1a, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_038E) {
    const struct CPU_State initial_cpu = {.pc=0x4121, .a=0x33, .x=0xde, .y=0x05, .sp=0x50, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x4c}, {.addr=0x4121, .value=0x24}, {.addr=0x4122, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x4123, .a=0x00, .x=0xde, .y=0x05, .sp=0x50, .status=0x52};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x4c}, {.addr=0x4121, .value=0x24}, {.addr=0x4122, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4121, .value=0x24, .type=IO_READ},
        {.addr=0x4122, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_038F) {
    const struct CPU_State initial_cpu = {.pc=0xa887, .a=0x96, .x=0x6e, .y=0x5a, .sp=0x93, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0xb8}, {.addr=0xa887, .value=0x24}, {.addr=0xa888, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xa889, .a=0x90, .x=0x6e, .y=0x5a, .sp=0x93, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0xb8}, {.addr=0xa887, .value=0x24}, {.addr=0xa888, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xa887, .value=0x24, .type=IO_READ},
        {.addr=0xa888, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0390) {
    const struct CPU_State initial_cpu = {.pc=0xc833, .a=0x00, .x=0xcc, .y=0x05, .sp=0xdb, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x7b}, {.addr=0xc833, .value=0x24}, {.addr=0xc834, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xc835, .a=0x00, .x=0xcc, .y=0x05, .sp=0xdb, .status=0x36};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x7b}, {.addr=0xc833, .value=0x24}, {.addr=0xc834, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xc833, .value=0x24, .type=IO_READ},
        {.addr=0xc834, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0391) {
    const struct CPU_State initial_cpu = {.pc=0x5c0a, .a=0xc3, .x=0x49, .y=0xdb, .sp=0x02, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x15}, {.addr=0x5c0a, .value=0x24}, {.addr=0x5c0b, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x5c0c, .a=0x01, .x=0x49, .y=0xdb, .sp=0x02, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x15}, {.addr=0x5c0a, .value=0x24}, {.addr=0x5c0b, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c0a, .value=0x24, .type=IO_READ},
        {.addr=0x5c0b, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0392) {
    const struct CPU_State initial_cpu = {.pc=0x817f, .a=0x20, .x=0xd8, .y=0x99, .sp=0x73, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x98}, {.addr=0x817f, .value=0x24}, {.addr=0x8180, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x8181, .a=0x00, .x=0xd8, .y=0x99, .sp=0x73, .status=0x13};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x98}, {.addr=0x817f, .value=0x24}, {.addr=0x8180, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x817f, .value=0x24, .type=IO_READ},
        {.addr=0x8180, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0393) {
    const struct CPU_State initial_cpu = {.pc=0x837d, .a=0x17, .x=0x3e, .y=0x59, .sp=0x3a, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x0b}, {.addr=0x837d, .value=0x24}, {.addr=0x837e, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x837f, .a=0x03, .x=0x3e, .y=0x59, .sp=0x3a, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x0b}, {.addr=0x837d, .value=0x24}, {.addr=0x837e, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x837d, .value=0x24, .type=IO_READ},
        {.addr=0x837e, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0394) {
    const struct CPU_State initial_cpu = {.pc=0xe479, .a=0x70, .x=0xbd, .y=0xb4, .sp=0x19, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0xc4}, {.addr=0xe479, .value=0x24}, {.addr=0xe47a, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xe47b, .a=0x40, .x=0xbd, .y=0xb4, .sp=0x19, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0xc4}, {.addr=0xe479, .value=0x24}, {.addr=0xe47a, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xe479, .value=0x24, .type=IO_READ},
        {.addr=0xe47a, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0395) {
    const struct CPU_State initial_cpu = {.pc=0xdb65, .a=0xaa, .x=0xc7, .y=0x82, .sp=0xa6, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x9a}, {.addr=0xdb65, .value=0x24}, {.addr=0xdb66, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xdb67, .a=0x8a, .x=0xc7, .y=0x82, .sp=0xa6, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x9a}, {.addr=0xdb65, .value=0x24}, {.addr=0xdb66, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb65, .value=0x24, .type=IO_READ},
        {.addr=0xdb66, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0396) {
    const struct CPU_State initial_cpu = {.pc=0x8e1f, .a=0xc7, .x=0xa4, .y=0x4f, .sp=0x9a, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xfd}, {.addr=0x8e1f, .value=0x24}, {.addr=0x8e20, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x8e21, .a=0xc5, .x=0xa4, .y=0x4f, .sp=0x9a, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xfd}, {.addr=0x8e1f, .value=0x24}, {.addr=0x8e20, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e1f, .value=0x24, .type=IO_READ},
        {.addr=0x8e20, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0397) {
    const struct CPU_State initial_cpu = {.pc=0x86f2, .a=0x7d, .x=0xc4, .y=0x94, .sp=0xdf, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0x1a}, {.addr=0x86f2, .value=0x24}, {.addr=0x86f3, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x86f4, .a=0x18, .x=0xc4, .y=0x94, .sp=0xdf, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0x1a}, {.addr=0x86f2, .value=0x24}, {.addr=0x86f3, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x86f2, .value=0x24, .type=IO_READ},
        {.addr=0x86f3, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0398) {
    const struct CPU_State initial_cpu = {.pc=0x4fa0, .a=0x30, .x=0xf9, .y=0x36, .sp=0x52, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xf9}, {.addr=0x4fa0, .value=0x24}, {.addr=0x4fa1, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x4fa2, .a=0x30, .x=0xf9, .y=0x36, .sp=0x52, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xf9}, {.addr=0x4fa0, .value=0x24}, {.addr=0x4fa1, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4fa0, .value=0x24, .type=IO_READ},
        {.addr=0x4fa1, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_0399) {
    const struct CPU_State initial_cpu = {.pc=0x48f8, .a=0x67, .x=0xf3, .y=0x4a, .sp=0x40, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x72}, {.addr=0x48f8, .value=0x24}, {.addr=0x48f9, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x48fa, .a=0x62, .x=0xf3, .y=0x4a, .sp=0x40, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x72}, {.addr=0x48f8, .value=0x24}, {.addr=0x48f9, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x48f8, .value=0x24, .type=IO_READ},
        {.addr=0x48f9, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_039A) {
    const struct CPU_State initial_cpu = {.pc=0xe384, .a=0x6f, .x=0x0f, .y=0x02, .sp=0xe2, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x77}, {.addr=0xe384, .value=0x24}, {.addr=0xe385, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xe386, .a=0x67, .x=0x0f, .y=0x02, .sp=0xe2, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x77}, {.addr=0xe384, .value=0x24}, {.addr=0xe385, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe384, .value=0x24, .type=IO_READ},
        {.addr=0xe385, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_039B) {
    const struct CPU_State initial_cpu = {.pc=0x4f9d, .a=0xeb, .x=0xd5, .y=0x5f, .sp=0x27, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x82}, {.addr=0x4f9d, .value=0x24}, {.addr=0x4f9e, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x4f9f, .a=0x82, .x=0xd5, .y=0x5f, .sp=0x27, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x82}, {.addr=0x4f9d, .value=0x24}, {.addr=0x4f9e, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f9d, .value=0x24, .type=IO_READ},
        {.addr=0x4f9e, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_039C) {
    const struct CPU_State initial_cpu = {.pc=0xa257, .a=0x7e, .x=0xab, .y=0x6a, .sp=0xd4, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0xae}, {.addr=0xa257, .value=0x24}, {.addr=0xa258, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xa259, .a=0x2e, .x=0xab, .y=0x6a, .sp=0xd4, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0xae}, {.addr=0xa257, .value=0x24}, {.addr=0xa258, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa257, .value=0x24, .type=IO_READ},
        {.addr=0xa258, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_039D) {
    const struct CPU_State initial_cpu = {.pc=0x4835, .a=0x80, .x=0x6e, .y=0xc1, .sp=0x26, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x9b}, {.addr=0x4835, .value=0x24}, {.addr=0x4836, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x4837, .a=0x80, .x=0x6e, .y=0xc1, .sp=0x26, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x9b}, {.addr=0x4835, .value=0x24}, {.addr=0x4836, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4835, .value=0x24, .type=IO_READ},
        {.addr=0x4836, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_039E) {
    const struct CPU_State initial_cpu = {.pc=0x270d, .a=0x01, .x=0xde, .y=0xdd, .sp=0x6c, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x52}, {.addr=0x270d, .value=0x24}, {.addr=0x270e, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x270f, .a=0x00, .x=0xde, .y=0xdd, .sp=0x6c, .status=0x3a};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x52}, {.addr=0x270d, .value=0x24}, {.addr=0x270e, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x270d, .value=0x24, .type=IO_READ},
        {.addr=0x270e, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_039F) {
    const struct CPU_State initial_cpu = {.pc=0x1d54, .a=0x6e, .x=0x71, .y=0xef, .sp=0x50, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xe3}, {.addr=0x1d54, .value=0x24}, {.addr=0x1d55, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x1d56, .a=0x62, .x=0x71, .y=0xef, .sp=0x50, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xe3}, {.addr=0x1d54, .value=0x24}, {.addr=0x1d55, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d54, .value=0x24, .type=IO_READ},
        {.addr=0x1d55, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x6bea, .a=0x3b, .x=0x97, .y=0xd5, .sp=0x51, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0x19}, {.addr=0x6bea, .value=0x24}, {.addr=0x6beb, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x6bec, .a=0x19, .x=0x97, .y=0xd5, .sp=0x51, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0x19}, {.addr=0x6bea, .value=0x24}, {.addr=0x6beb, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6bea, .value=0x24, .type=IO_READ},
        {.addr=0x6beb, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xc140, .a=0x26, .x=0x98, .y=0xfd, .sp=0x72, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0xfb}, {.addr=0xc140, .value=0x24}, {.addr=0xc141, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0xc142, .a=0x22, .x=0x98, .y=0xfd, .sp=0x72, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0xfb}, {.addr=0xc140, .value=0x24}, {.addr=0xc141, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0xc140, .value=0x24, .type=IO_READ},
        {.addr=0xc141, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xbeaf, .a=0x72, .x=0x1b, .y=0xe5, .sp=0xe0, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0xea}, {.addr=0xbeaf, .value=0x24}, {.addr=0xbeb0, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xbeb1, .a=0x62, .x=0x1b, .y=0xe5, .sp=0xe0, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0xea}, {.addr=0xbeaf, .value=0x24}, {.addr=0xbeb0, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xbeaf, .value=0x24, .type=IO_READ},
        {.addr=0xbeb0, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xe603, .a=0xdd, .x=0x2d, .y=0x6f, .sp=0xc8, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x47}, {.addr=0xe603, .value=0x24}, {.addr=0xe604, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xe605, .a=0x45, .x=0x2d, .y=0x6f, .sp=0xc8, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x47}, {.addr=0xe603, .value=0x24}, {.addr=0xe604, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe603, .value=0x24, .type=IO_READ},
        {.addr=0xe604, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xc2d5, .a=0xfa, .x=0x7d, .y=0x40, .sp=0xa9, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0x71}, {.addr=0xc2d5, .value=0x24}, {.addr=0xc2d6, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xc2d7, .a=0x70, .x=0x7d, .y=0x40, .sp=0xa9, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0x71}, {.addr=0xc2d5, .value=0x24}, {.addr=0xc2d6, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2d5, .value=0x24, .type=IO_READ},
        {.addr=0xc2d6, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x4c5c, .a=0xca, .x=0x6d, .y=0x94, .sp=0x2c, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x66}, {.addr=0x4c5c, .value=0x24}, {.addr=0x4c5d, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x4c5e, .a=0x42, .x=0x6d, .y=0x94, .sp=0x2c, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x66}, {.addr=0x4c5c, .value=0x24}, {.addr=0x4c5d, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c5c, .value=0x24, .type=IO_READ},
        {.addr=0x4c5d, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x6cea, .a=0xfd, .x=0x8b, .y=0x17, .sp=0xe2, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x8a}, {.addr=0x6cea, .value=0x24}, {.addr=0x6ceb, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x6cec, .a=0x88, .x=0x8b, .y=0x17, .sp=0xe2, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x8a}, {.addr=0x6cea, .value=0x24}, {.addr=0x6ceb, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cea, .value=0x24, .type=IO_READ},
        {.addr=0x6ceb, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x50f6, .a=0x4d, .x=0x6d, .y=0xad, .sp=0xe4, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x9e}, {.addr=0x50f6, .value=0x24}, {.addr=0x50f7, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x50f8, .a=0x0c, .x=0x6d, .y=0xad, .sp=0xe4, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x9e}, {.addr=0x50f6, .value=0x24}, {.addr=0x50f7, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x50f6, .value=0x24, .type=IO_READ},
        {.addr=0x50f7, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xfc2c, .a=0xec, .x=0xf6, .y=0x38, .sp=0x9a, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0xfd}, {.addr=0xfc2c, .value=0x24}, {.addr=0xfc2d, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xfc2e, .a=0xec, .x=0xf6, .y=0x38, .sp=0x9a, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0xfd}, {.addr=0xfc2c, .value=0x24}, {.addr=0xfc2d, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc2c, .value=0x24, .type=IO_READ},
        {.addr=0xfc2d, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xd24f, .a=0x70, .x=0xe6, .y=0xde, .sp=0x5a, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0xa3}, {.addr=0xd24f, .value=0x24}, {.addr=0xd250, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xd251, .a=0x20, .x=0xe6, .y=0xde, .sp=0x5a, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0xa3}, {.addr=0xd24f, .value=0x24}, {.addr=0xd250, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xd24f, .value=0x24, .type=IO_READ},
        {.addr=0xd250, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xd9b0, .a=0x5a, .x=0x16, .y=0x02, .sp=0xfd, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0x25}, {.addr=0xd9b0, .value=0x24}, {.addr=0xd9b1, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xd9b2, .a=0x00, .x=0x16, .y=0x02, .sp=0xfd, .status=0x22};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0x25}, {.addr=0xd9b0, .value=0x24}, {.addr=0xd9b1, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9b0, .value=0x24, .type=IO_READ},
        {.addr=0xd9b1, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xbb06, .a=0xc3, .x=0xeb, .y=0x2d, .sp=0xbf, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x35}, {.addr=0xbb06, .value=0x24}, {.addr=0xbb07, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xbb08, .a=0x01, .x=0xeb, .y=0x2d, .sp=0xbf, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x35}, {.addr=0xbb06, .value=0x24}, {.addr=0xbb07, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb06, .value=0x24, .type=IO_READ},
        {.addr=0xbb07, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x11a2, .a=0x7c, .x=0x15, .y=0xce, .sp=0x58, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x5d}, {.addr=0x11a2, .value=0x24}, {.addr=0x11a3, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x11a4, .a=0x5c, .x=0x15, .y=0xce, .sp=0x58, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x5d}, {.addr=0x11a2, .value=0x24}, {.addr=0x11a3, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x11a2, .value=0x24, .type=IO_READ},
        {.addr=0x11a3, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x254e, .a=0x1a, .x=0x99, .y=0xdf, .sp=0x44, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0xff}, {.addr=0x254e, .value=0x24}, {.addr=0x254f, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x2550, .a=0x1a, .x=0x99, .y=0xdf, .sp=0x44, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0xff}, {.addr=0x254e, .value=0x24}, {.addr=0x254f, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x254e, .value=0x24, .type=IO_READ},
        {.addr=0x254f, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x7b8d, .a=0x44, .x=0x1f, .y=0xf0, .sp=0x30, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0xa2}, {.addr=0x7b8d, .value=0x24}, {.addr=0x7b8e, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x7b8f, .a=0x00, .x=0x1f, .y=0xf0, .sp=0x30, .status=0x0b};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0xa2}, {.addr=0x7b8d, .value=0x24}, {.addr=0x7b8e, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b8d, .value=0x24, .type=IO_READ},
        {.addr=0x7b8e, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x1703, .a=0x31, .x=0xc7, .y=0xa3, .sp=0x8e, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0xd0}, {.addr=0x1703, .value=0x24}, {.addr=0x1704, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x1705, .a=0x10, .x=0xc7, .y=0xa3, .sp=0x8e, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0xd0}, {.addr=0x1703, .value=0x24}, {.addr=0x1704, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x1703, .value=0x24, .type=IO_READ},
        {.addr=0x1704, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xebe8, .a=0x5b, .x=0x8e, .y=0xfe, .sp=0x61, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0xab}, {.addr=0xebe8, .value=0x24}, {.addr=0xebe9, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xebea, .a=0x0b, .x=0x8e, .y=0xfe, .sp=0x61, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0xab}, {.addr=0xebe8, .value=0x24}, {.addr=0xebe9, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xebe8, .value=0x24, .type=IO_READ},
        {.addr=0xebe9, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x6be4, .a=0xfe, .x=0x58, .y=0x26, .sp=0xe1, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x0a}, {.addr=0x6be4, .value=0x24}, {.addr=0x6be5, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x6be6, .a=0x0a, .x=0x58, .y=0x26, .sp=0xe1, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x0a}, {.addr=0x6be4, .value=0x24}, {.addr=0x6be5, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6be4, .value=0x24, .type=IO_READ},
        {.addr=0x6be5, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x8159, .a=0xc1, .x=0x58, .y=0xed, .sp=0x98, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0xd8}, {.addr=0x8159, .value=0x24}, {.addr=0x815a, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x815b, .a=0xc0, .x=0x58, .y=0xed, .sp=0x98, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0xd8}, {.addr=0x8159, .value=0x24}, {.addr=0x815a, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x8159, .value=0x24, .type=IO_READ},
        {.addr=0x815a, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x94ef, .a=0x64, .x=0x00, .y=0xaa, .sp=0xb9, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x6a}, {.addr=0x94ef, .value=0x24}, {.addr=0x94f0, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x94f1, .a=0x60, .x=0x00, .y=0xaa, .sp=0xb9, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x6a}, {.addr=0x94ef, .value=0x24}, {.addr=0x94f0, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x94ef, .value=0x24, .type=IO_READ},
        {.addr=0x94f0, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x9349, .a=0x1f, .x=0x90, .y=0x7e, .sp=0x1b, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x5a}, {.addr=0x9349, .value=0x24}, {.addr=0x934a, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x934b, .a=0x1a, .x=0x90, .y=0x7e, .sp=0x1b, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x5a}, {.addr=0x9349, .value=0x24}, {.addr=0x934a, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9349, .value=0x24, .type=IO_READ},
        {.addr=0x934a, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x2bb6, .a=0x63, .x=0x6c, .y=0x63, .sp=0xdb, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x6b}, {.addr=0x2bb6, .value=0x24}, {.addr=0x2bb7, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x2bb8, .a=0x63, .x=0x6c, .y=0x63, .sp=0xdb, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x6b}, {.addr=0x2bb6, .value=0x24}, {.addr=0x2bb7, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bb6, .value=0x24, .type=IO_READ},
        {.addr=0x2bb7, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xd023, .a=0x02, .x=0x12, .y=0x42, .sp=0x23, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x9c}, {.addr=0xd023, .value=0x24}, {.addr=0xd024, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xd025, .a=0x00, .x=0x12, .y=0x42, .sp=0x23, .status=0x0b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x9c}, {.addr=0xd023, .value=0x24}, {.addr=0xd024, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xd023, .value=0x24, .type=IO_READ},
        {.addr=0xd024, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xf880, .a=0xd6, .x=0x6a, .y=0x70, .sp=0x04, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x91}, {.addr=0xf880, .value=0x24}, {.addr=0xf881, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xf882, .a=0x90, .x=0x6a, .y=0x70, .sp=0x04, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x91}, {.addr=0xf880, .value=0x24}, {.addr=0xf881, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xf880, .value=0x24, .type=IO_READ},
        {.addr=0xf881, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x7bde, .a=0x98, .x=0xed, .y=0x53, .sp=0x1a, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xf8}, {.addr=0x7bde, .value=0x24}, {.addr=0x7bdf, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x7be0, .a=0x98, .x=0xed, .y=0x53, .sp=0x1a, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xf8}, {.addr=0x7bde, .value=0x24}, {.addr=0x7bdf, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bde, .value=0x24, .type=IO_READ},
        {.addr=0x7bdf, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x2225, .a=0xdc, .x=0x18, .y=0x90, .sp=0x15, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x2a}, {.addr=0x2225, .value=0x24}, {.addr=0x2226, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x2227, .a=0x08, .x=0x18, .y=0x90, .sp=0x15, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x2a}, {.addr=0x2225, .value=0x24}, {.addr=0x2226, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x2225, .value=0x24, .type=IO_READ},
        {.addr=0x2226, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x7ee6, .a=0xd6, .x=0xe0, .y=0x86, .sp=0x0c, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0x04}, {.addr=0x7ee6, .value=0x24}, {.addr=0x7ee7, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x7ee8, .a=0x04, .x=0xe0, .y=0x86, .sp=0x0c, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0x04}, {.addr=0x7ee6, .value=0x24}, {.addr=0x7ee7, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ee6, .value=0x24, .type=IO_READ},
        {.addr=0x7ee7, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xe3b3, .a=0xe1, .x=0x4c, .y=0x8b, .sp=0xb4, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x31}, {.addr=0xe3b3, .value=0x24}, {.addr=0xe3b4, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xe3b5, .a=0x21, .x=0x4c, .y=0x8b, .sp=0xb4, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x31}, {.addr=0xe3b3, .value=0x24}, {.addr=0xe3b4, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3b3, .value=0x24, .type=IO_READ},
        {.addr=0xe3b4, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x1e21, .a=0x01, .x=0x75, .y=0x3e, .sp=0x14, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0xde}, {.addr=0x1e21, .value=0x24}, {.addr=0x1e22, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x1e23, .a=0x00, .x=0x75, .y=0x3e, .sp=0x14, .status=0x3e};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0xde}, {.addr=0x1e21, .value=0x24}, {.addr=0x1e22, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e21, .value=0x24, .type=IO_READ},
        {.addr=0x1e22, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xb5f0, .a=0xbc, .x=0xd2, .y=0x73, .sp=0xab, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0xd9}, {.addr=0xb5f0, .value=0x24}, {.addr=0xb5f1, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xb5f2, .a=0x98, .x=0xd2, .y=0x73, .sp=0xab, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0xd9}, {.addr=0xb5f0, .value=0x24}, {.addr=0xb5f1, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5f0, .value=0x24, .type=IO_READ},
        {.addr=0xb5f1, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x265f, .a=0x44, .x=0x0c, .y=0x38, .sp=0x3b, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x7e}, {.addr=0x265f, .value=0x24}, {.addr=0x2660, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x2661, .a=0x44, .x=0x0c, .y=0x38, .sp=0x3b, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x7e}, {.addr=0x265f, .value=0x24}, {.addr=0x2660, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x265f, .value=0x24, .type=IO_READ},
        {.addr=0x2660, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xef79, .a=0xe0, .x=0xd7, .y=0xec, .sp=0xa5, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x39}, {.addr=0xef79, .value=0x24}, {.addr=0xef7a, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xef7b, .a=0x20, .x=0xd7, .y=0xec, .sp=0xa5, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x39}, {.addr=0xef79, .value=0x24}, {.addr=0xef7a, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xef79, .value=0x24, .type=IO_READ},
        {.addr=0xef7a, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xef0a, .a=0xad, .x=0xa3, .y=0xf4, .sp=0x24, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x3c}, {.addr=0xef0a, .value=0x24}, {.addr=0xef0b, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xef0c, .a=0x2c, .x=0xa3, .y=0xf4, .sp=0x24, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x3c}, {.addr=0xef0a, .value=0x24}, {.addr=0xef0b, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xef0a, .value=0x24, .type=IO_READ},
        {.addr=0xef0b, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x684c, .a=0x5e, .x=0x37, .y=0x05, .sp=0x33, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0xac}, {.addr=0x684c, .value=0x24}, {.addr=0x684d, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x684e, .a=0x0c, .x=0x37, .y=0x05, .sp=0x33, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0xac}, {.addr=0x684c, .value=0x24}, {.addr=0x684d, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x684c, .value=0x24, .type=IO_READ},
        {.addr=0x684d, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xf5a6, .a=0xa1, .x=0x1c, .y=0x8b, .sp=0xbc, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xa9}, {.addr=0xf5a6, .value=0x24}, {.addr=0xf5a7, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xf5a8, .a=0xa1, .x=0x1c, .y=0x8b, .sp=0xbc, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xa9}, {.addr=0xf5a6, .value=0x24}, {.addr=0xf5a7, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5a6, .value=0x24, .type=IO_READ},
        {.addr=0xf5a7, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xdc33, .a=0xe7, .x=0x7a, .y=0xcd, .sp=0xfc, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xa7}, {.addr=0xdc33, .value=0x24}, {.addr=0xdc34, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xdc35, .a=0xa7, .x=0x7a, .y=0xcd, .sp=0xfc, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xa7}, {.addr=0xdc33, .value=0x24}, {.addr=0xdc34, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc33, .value=0x24, .type=IO_READ},
        {.addr=0xdc34, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x036f, .a=0xbd, .x=0x08, .y=0xf9, .sp=0x73, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xbe}, {.addr=0x036f, .value=0x24}, {.addr=0x0370, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x0371, .a=0xbc, .x=0x08, .y=0xf9, .sp=0x73, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xbe}, {.addr=0x036f, .value=0x24}, {.addr=0x0370, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x036f, .value=0x24, .type=IO_READ},
        {.addr=0x0370, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x6b6c, .a=0x64, .x=0x2d, .y=0x4b, .sp=0xcc, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xa4}, {.addr=0x6b6c, .value=0x24}, {.addr=0x6b6d, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x6b6e, .a=0x24, .x=0x2d, .y=0x4b, .sp=0xcc, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xa4}, {.addr=0x6b6c, .value=0x24}, {.addr=0x6b6d, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b6c, .value=0x24, .type=IO_READ},
        {.addr=0x6b6d, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x80f9, .a=0xc9, .x=0x63, .y=0xbc, .sp=0x53, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x0b}, {.addr=0x80f9, .value=0x24}, {.addr=0x80fa, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x80fb, .a=0x09, .x=0x63, .y=0xbc, .sp=0x53, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x0b}, {.addr=0x80f9, .value=0x24}, {.addr=0x80fa, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x80f9, .value=0x24, .type=IO_READ},
        {.addr=0x80fa, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xb2e0, .a=0x23, .x=0x02, .y=0xdf, .sp=0xc6, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x7c}, {.addr=0xb2e0, .value=0x24}, {.addr=0xb2e1, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xb2e2, .a=0x20, .x=0x02, .y=0xdf, .sp=0xc6, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x7c}, {.addr=0xb2e0, .value=0x24}, {.addr=0xb2e1, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2e0, .value=0x24, .type=IO_READ},
        {.addr=0xb2e1, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x5de8, .a=0xd2, .x=0xb3, .y=0x16, .sp=0x7e, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0x24}, {.addr=0x5de8, .value=0x24}, {.addr=0x5de9, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x5dea, .a=0x00, .x=0xb3, .y=0x16, .sp=0x7e, .status=0x6a};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0x24}, {.addr=0x5de8, .value=0x24}, {.addr=0x5de9, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x5de8, .value=0x24, .type=IO_READ},
        {.addr=0x5de9, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x3e09, .a=0x19, .x=0xc7, .y=0xaf, .sp=0x96, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xf1}, {.addr=0x3e09, .value=0x24}, {.addr=0x3e0a, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x3e0b, .a=0x11, .x=0xc7, .y=0xaf, .sp=0x96, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xf1}, {.addr=0x3e09, .value=0x24}, {.addr=0x3e0a, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e09, .value=0x24, .type=IO_READ},
        {.addr=0x3e0a, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xa028, .a=0xe9, .x=0x21, .y=0x04, .sp=0x12, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x02}, {.addr=0xa028, .value=0x24}, {.addr=0xa029, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xa02a, .a=0x00, .x=0x21, .y=0x04, .sp=0x12, .status=0x47};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x02}, {.addr=0xa028, .value=0x24}, {.addr=0xa029, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xa028, .value=0x24, .type=IO_READ},
        {.addr=0xa029, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x992a, .a=0xa1, .x=0xed, .y=0xc4, .sp=0xfc, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x95}, {.addr=0x992a, .value=0x24}, {.addr=0x992b, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x992c, .a=0x81, .x=0xed, .y=0xc4, .sp=0xfc, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x95}, {.addr=0x992a, .value=0x24}, {.addr=0x992b, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x992a, .value=0x24, .type=IO_READ},
        {.addr=0x992b, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x1882, .a=0x0d, .x=0x98, .y=0xdf, .sp=0xdf, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x91}, {.addr=0x1882, .value=0x24}, {.addr=0x1883, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x1884, .a=0x01, .x=0x98, .y=0xdf, .sp=0xdf, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x91}, {.addr=0x1882, .value=0x24}, {.addr=0x1883, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x1882, .value=0x24, .type=IO_READ},
        {.addr=0x1883, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x55dc, .a=0x1c, .x=0xb9, .y=0x9d, .sp=0xb2, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0xde}, {.addr=0x55dc, .value=0x24}, {.addr=0x55dd, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x55de, .a=0x1c, .x=0xb9, .y=0x9d, .sp=0xb2, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0xde}, {.addr=0x55dc, .value=0x24}, {.addr=0x55dd, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x55dc, .value=0x24, .type=IO_READ},
        {.addr=0x55dd, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x9833, .a=0x4b, .x=0x42, .y=0xc8, .sp=0x63, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x35}, {.addr=0x9833, .value=0x24}, {.addr=0x9834, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x9835, .a=0x01, .x=0x42, .y=0xc8, .sp=0x63, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x35}, {.addr=0x9833, .value=0x24}, {.addr=0x9834, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x9833, .value=0x24, .type=IO_READ},
        {.addr=0x9834, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x46ca, .a=0x81, .x=0x44, .y=0xae, .sp=0x95, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0xef}, {.addr=0x46ca, .value=0x24}, {.addr=0x46cb, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x46cc, .a=0x81, .x=0x44, .y=0xae, .sp=0x95, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0xef}, {.addr=0x46ca, .value=0x24}, {.addr=0x46cb, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x46ca, .value=0x24, .type=IO_READ},
        {.addr=0x46cb, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x6756, .a=0x1d, .x=0x68, .y=0xc8, .sp=0xb5, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x12}, {.addr=0x6756, .value=0x24}, {.addr=0x6757, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x6758, .a=0x10, .x=0x68, .y=0xc8, .sp=0xb5, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x12}, {.addr=0x6756, .value=0x24}, {.addr=0x6757, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6756, .value=0x24, .type=IO_READ},
        {.addr=0x6757, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x3b02, .a=0x2f, .x=0x2e, .y=0xe0, .sp=0x92, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0x99}, {.addr=0x3b02, .value=0x24}, {.addr=0x3b03, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x3b04, .a=0x09, .x=0x2e, .y=0xe0, .sp=0x92, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0x99}, {.addr=0x3b02, .value=0x24}, {.addr=0x3b03, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b02, .value=0x24, .type=IO_READ},
        {.addr=0x3b03, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x2b64, .a=0xa2, .x=0x4a, .y=0xa6, .sp=0xb1, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0xc1}, {.addr=0x2b64, .value=0x24}, {.addr=0x2b65, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x2b66, .a=0x80, .x=0x4a, .y=0xa6, .sp=0xb1, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0xc1}, {.addr=0x2b64, .value=0x24}, {.addr=0x2b65, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b64, .value=0x24, .type=IO_READ},
        {.addr=0x2b65, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xc4b2, .a=0x8d, .x=0x4a, .y=0x4f, .sp=0x52, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x68}, {.addr=0xc4b2, .value=0x24}, {.addr=0xc4b3, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xc4b4, .a=0x08, .x=0x4a, .y=0x4f, .sp=0x52, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x68}, {.addr=0xc4b2, .value=0x24}, {.addr=0xc4b3, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4b2, .value=0x24, .type=IO_READ},
        {.addr=0xc4b3, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xbbd2, .a=0xf0, .x=0xcb, .y=0x38, .sp=0xeb, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0xe5}, {.addr=0xbbd2, .value=0x24}, {.addr=0xbbd3, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0xbbd4, .a=0xe0, .x=0xcb, .y=0x38, .sp=0xeb, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0xe5}, {.addr=0xbbd2, .value=0x24}, {.addr=0xbbd3, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbd2, .value=0x24, .type=IO_READ},
        {.addr=0xbbd3, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xf004, .a=0x3a, .x=0xe6, .y=0xe3, .sp=0x2c, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x81}, {.addr=0xf004, .value=0x24}, {.addr=0xf005, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xf006, .a=0x00, .x=0xe6, .y=0xe3, .sp=0x2c, .status=0x77};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x81}, {.addr=0xf004, .value=0x24}, {.addr=0xf005, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xf004, .value=0x24, .type=IO_READ},
        {.addr=0xf005, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xc6bc, .a=0x48, .x=0x73, .y=0x85, .sp=0xcc, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0xed}, {.addr=0xc6bc, .value=0x24}, {.addr=0xc6bd, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xc6be, .a=0x48, .x=0x73, .y=0x85, .sp=0xcc, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0xed}, {.addr=0xc6bc, .value=0x24}, {.addr=0xc6bd, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6bc, .value=0x24, .type=IO_READ},
        {.addr=0xc6bd, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x5c6e, .a=0x72, .x=0xbf, .y=0x77, .sp=0xaa, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x62}, {.addr=0x5c6e, .value=0x24}, {.addr=0x5c6f, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x5c70, .a=0x62, .x=0xbf, .y=0x77, .sp=0xaa, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x62}, {.addr=0x5c6e, .value=0x24}, {.addr=0x5c6f, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c6e, .value=0x24, .type=IO_READ},
        {.addr=0x5c6f, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xb183, .a=0x59, .x=0xf8, .y=0x18, .sp=0xed, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x8a}, {.addr=0xb183, .value=0x24}, {.addr=0xb184, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xb185, .a=0x08, .x=0xf8, .y=0x18, .sp=0xed, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x8a}, {.addr=0xb183, .value=0x24}, {.addr=0xb184, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xb183, .value=0x24, .type=IO_READ},
        {.addr=0xb184, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x2eff, .a=0xde, .x=0xa7, .y=0x11, .sp=0x13, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0xeb}, {.addr=0x2eff, .value=0x24}, {.addr=0x2f00, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x2f01, .a=0xca, .x=0xa7, .y=0x11, .sp=0x13, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0xeb}, {.addr=0x2eff, .value=0x24}, {.addr=0x2f00, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x2eff, .value=0x24, .type=IO_READ},
        {.addr=0x2f00, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xdefa, .a=0x5f, .x=0x28, .y=0x37, .sp=0xee, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xe6}, {.addr=0xdefa, .value=0x24}, {.addr=0xdefb, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xdefc, .a=0x46, .x=0x28, .y=0x37, .sp=0xee, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xe6}, {.addr=0xdefa, .value=0x24}, {.addr=0xdefb, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xdefa, .value=0x24, .type=IO_READ},
        {.addr=0xdefb, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x46b9, .a=0xae, .x=0x78, .y=0x3a, .sp=0xba, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x41}, {.addr=0x46b9, .value=0x24}, {.addr=0x46ba, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x46bb, .a=0x00, .x=0x78, .y=0x3a, .sp=0xba, .status=0x2f};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x41}, {.addr=0x46b9, .value=0x24}, {.addr=0x46ba, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x46b9, .value=0x24, .type=IO_READ},
        {.addr=0x46ba, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x9661, .a=0xcd, .x=0x7e, .y=0x0c, .sp=0xd6, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x71}, {.addr=0x9661, .value=0x24}, {.addr=0x9662, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x9663, .a=0x41, .x=0x7e, .y=0x0c, .sp=0xd6, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x71}, {.addr=0x9661, .value=0x24}, {.addr=0x9662, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x9661, .value=0x24, .type=IO_READ},
        {.addr=0x9662, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xb0f9, .a=0xf5, .x=0xb2, .y=0x0a, .sp=0xa6, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x13}, {.addr=0xb0f9, .value=0x24}, {.addr=0xb0fa, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xb0fb, .a=0x11, .x=0xb2, .y=0x0a, .sp=0xa6, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x13}, {.addr=0xb0f9, .value=0x24}, {.addr=0xb0fa, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0f9, .value=0x24, .type=IO_READ},
        {.addr=0xb0fa, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x0a16, .a=0xbc, .x=0x1b, .y=0x69, .sp=0x6a, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x86}, {.addr=0x0a16, .value=0x24}, {.addr=0x0a17, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x0a18, .a=0x84, .x=0x1b, .y=0x69, .sp=0x6a, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x86}, {.addr=0x0a16, .value=0x24}, {.addr=0x0a17, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a16, .value=0x24, .type=IO_READ},
        {.addr=0x0a17, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xe092, .a=0xa8, .x=0x90, .y=0x3d, .sp=0xaf, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x95}, {.addr=0xe092, .value=0x24}, {.addr=0xe093, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xe094, .a=0x80, .x=0x90, .y=0x3d, .sp=0xaf, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x95}, {.addr=0xe092, .value=0x24}, {.addr=0xe093, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xe092, .value=0x24, .type=IO_READ},
        {.addr=0xe093, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xfef6, .a=0x7b, .x=0x50, .y=0x3b, .sp=0x5b, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x3c}, {.addr=0xfef6, .value=0x24}, {.addr=0xfef7, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0xfef8, .a=0x38, .x=0x50, .y=0x3b, .sp=0x5b, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x3c}, {.addr=0xfef6, .value=0x24}, {.addr=0xfef7, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0xfef6, .value=0x24, .type=IO_READ},
        {.addr=0xfef7, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x1dd4, .a=0x45, .x=0x6d, .y=0xa4, .sp=0x66, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x69}, {.addr=0x1dd4, .value=0x24}, {.addr=0x1dd5, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x1dd6, .a=0x41, .x=0x6d, .y=0xa4, .sp=0x66, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x69}, {.addr=0x1dd4, .value=0x24}, {.addr=0x1dd5, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x1dd4, .value=0x24, .type=IO_READ},
        {.addr=0x1dd5, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xc973, .a=0xf8, .x=0x2e, .y=0x58, .sp=0x89, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x65}, {.addr=0xc973, .value=0x24}, {.addr=0xc974, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xc975, .a=0x60, .x=0x2e, .y=0x58, .sp=0x89, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x65}, {.addr=0xc973, .value=0x24}, {.addr=0xc974, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xc973, .value=0x24, .type=IO_READ},
        {.addr=0xc974, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x2a6a, .a=0xf9, .x=0xfa, .y=0x74, .sp=0x41, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x0a}, {.addr=0x2a6a, .value=0x24}, {.addr=0x2a6b, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x2a6c, .a=0x08, .x=0xfa, .y=0x74, .sp=0x41, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x0a}, {.addr=0x2a6a, .value=0x24}, {.addr=0x2a6b, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a6a, .value=0x24, .type=IO_READ},
        {.addr=0x2a6b, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x38cd, .a=0x18, .x=0x12, .y=0x73, .sp=0xd1, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0x37}, {.addr=0x38cd, .value=0x24}, {.addr=0x38ce, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x38cf, .a=0x10, .x=0x12, .y=0x73, .sp=0xd1, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0x37}, {.addr=0x38cd, .value=0x24}, {.addr=0x38ce, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x38cd, .value=0x24, .type=IO_READ},
        {.addr=0x38ce, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x4052, .a=0x52, .x=0x6d, .y=0xa4, .sp=0x3f, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x9b}, {.addr=0x4052, .value=0x24}, {.addr=0x4053, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x4054, .a=0x12, .x=0x6d, .y=0xa4, .sp=0x3f, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x9b}, {.addr=0x4052, .value=0x24}, {.addr=0x4053, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x4052, .value=0x24, .type=IO_READ},
        {.addr=0x4053, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_24, _24_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x5253, .a=0x45, .x=0x4f, .y=0x3f, .sp=0xee, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x9f}, {.addr=0x5253, .value=0x24}, {.addr=0x5254, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x5255, .a=0x05, .x=0x4f, .y=0x3f, .sp=0xee, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x9f}, {.addr=0x5253, .value=0x24}, {.addr=0x5254, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5253, .value=0x24, .type=IO_READ},
        {.addr=0x5254, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("24 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
