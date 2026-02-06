#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_AF, _AF_0000) {
    const struct CPU_State initial_cpu = {.pc=0xc7e5, .a=0xf3, .x=0x39, .y=0xb2, .sp=0xf3, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0xc7e5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc7e6, .a=0xf3, .x=0x3a, .y=0xb2, .sp=0xf3, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xf3}, {.addr=0xc7e5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc7e5, .value=0xaf, .type=IO_READ},
        {.addr=0xc7e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0001) {
    const struct CPU_State initial_cpu = {.pc=0x0245, .a=0xf7, .x=0xa1, .y=0x0f, .sp=0xe1, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x0245, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0246, .a=0xf7, .x=0xa2, .y=0x0f, .sp=0xe1, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xf7}, {.addr=0x0245, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0245, .value=0xaf, .type=IO_READ},
        {.addr=0x0246, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xf7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0002) {
    const struct CPU_State initial_cpu = {.pc=0xe848, .a=0xb4, .x=0x41, .y=0x98, .sp=0xd6, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0xe848, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe849, .a=0xb4, .x=0x42, .y=0x98, .sp=0xd6, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xb4}, {.addr=0xe848, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe848, .value=0xaf, .type=IO_READ},
        {.addr=0xe849, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0003) {
    const struct CPU_State initial_cpu = {.pc=0x4138, .a=0x76, .x=0x3d, .y=0xf1, .sp=0xb1, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x4138, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4139, .a=0x76, .x=0x3e, .y=0xf1, .sp=0xb1, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x76}, {.addr=0x4138, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4138, .value=0xaf, .type=IO_READ},
        {.addr=0x4139, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0x76, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0004) {
    const struct CPU_State initial_cpu = {.pc=0x7278, .a=0xc7, .x=0x78, .y=0x3f, .sp=0x6c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x7278, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7279, .a=0xc7, .x=0x79, .y=0x3f, .sp=0x6c, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xc7}, {.addr=0x7278, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7278, .value=0xaf, .type=IO_READ},
        {.addr=0x7279, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0006) {
    const struct CPU_State initial_cpu = {.pc=0xca6f, .a=0xe5, .x=0x0c, .y=0xb8, .sp=0xbe, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0xca6f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xca70, .a=0xe5, .x=0x0d, .y=0xb8, .sp=0xbe, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xe5}, {.addr=0xca6f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xca6f, .value=0xaf, .type=IO_READ},
        {.addr=0xca70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0007) {
    const struct CPU_State initial_cpu = {.pc=0x2143, .a=0x20, .x=0x16, .y=0x5b, .sp=0x43, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x2143, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2144, .a=0x20, .x=0x17, .y=0x5b, .sp=0x43, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x20}, {.addr=0x2143, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2143, .value=0xaf, .type=IO_READ},
        {.addr=0x2144, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x20, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0008) {
    const struct CPU_State initial_cpu = {.pc=0x010b, .a=0x48, .x=0xc6, .y=0x8e, .sp=0x51, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xaf}, {.addr=0x01c6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x010c, .a=0x48, .x=0xc7, .y=0x8e, .sp=0x51, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xaf}, {.addr=0x01c6, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x010b, .value=0xaf, .type=IO_READ},
        {.addr=0x010c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c6, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0009) {
    const struct CPU_State initial_cpu = {.pc=0xc588, .a=0x9c, .x=0xa7, .y=0xfe, .sp=0x46, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x00}, {.addr=0xc588, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc589, .a=0x9c, .x=0xa8, .y=0xfe, .sp=0x46, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x9c}, {.addr=0xc588, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc588, .value=0xaf, .type=IO_READ},
        {.addr=0xc589, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a7, .value=0x9c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_000A) {
    const struct CPU_State initial_cpu = {.pc=0xc81e, .a=0xbc, .x=0xe5, .y=0xdc, .sp=0xf5, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0xc81e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc81f, .a=0xbc, .x=0xe6, .y=0xdc, .sp=0xf5, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xbc}, {.addr=0xc81e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc81e, .value=0xaf, .type=IO_READ},
        {.addr=0xc81f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e5, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_000B) {
    const struct CPU_State initial_cpu = {.pc=0x459a, .a=0xfc, .x=0xca, .y=0x0b, .sp=0x34, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x459a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x459b, .a=0xfc, .x=0xcb, .y=0x0b, .sp=0x34, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xfc}, {.addr=0x459a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x459a, .value=0xaf, .type=IO_READ},
        {.addr=0x459b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0xfc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_000C) {
    const struct CPU_State initial_cpu = {.pc=0x58be, .a=0xbe, .x=0x00, .y=0x75, .sp=0xa3, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x00}, {.addr=0x58be, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x58bf, .a=0xbe, .x=0x01, .y=0x75, .sp=0xa3, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0xbe}, {.addr=0x58be, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x58be, .value=0xaf, .type=IO_READ},
        {.addr=0x58bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0000, .value=0xbe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_000D) {
    const struct CPU_State initial_cpu = {.pc=0x4c6e, .a=0x64, .x=0x19, .y=0x41, .sp=0xcb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x4c6e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4c6f, .a=0x64, .x=0x1a, .y=0x41, .sp=0xcb, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x64}, {.addr=0x4c6e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4c6e, .value=0xaf, .type=IO_READ},
        {.addr=0x4c6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_000E) {
    const struct CPU_State initial_cpu = {.pc=0x314d, .a=0xc3, .x=0x70, .y=0x55, .sp=0x99, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x00}, {.addr=0x314d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x314e, .a=0xc3, .x=0x71, .y=0x55, .sp=0x99, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0xc3}, {.addr=0x314d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x314d, .value=0xaf, .type=IO_READ},
        {.addr=0x314e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0070, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_000F) {
    const struct CPU_State initial_cpu = {.pc=0x34b3, .a=0xdd, .x=0xac, .y=0x49, .sp=0x36, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x00}, {.addr=0x34b3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x34b4, .a=0xdd, .x=0xad, .y=0x49, .sp=0x36, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0xdd}, {.addr=0x34b3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x34b3, .value=0xaf, .type=IO_READ},
        {.addr=0x34b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ac, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0010) {
    const struct CPU_State initial_cpu = {.pc=0xf930, .a=0xd1, .x=0x76, .y=0x3b, .sp=0xcd, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0xf930, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf931, .a=0xd1, .x=0x77, .y=0x3b, .sp=0xcd, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xd1}, {.addr=0xf930, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf930, .value=0xaf, .type=IO_READ},
        {.addr=0xf931, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0xd1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0011) {
    const struct CPU_State initial_cpu = {.pc=0x73ea, .a=0xcb, .x=0xd4, .y=0x5f, .sp=0xcd, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x73ea, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x73eb, .a=0xcb, .x=0xd5, .y=0x5f, .sp=0xcd, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xcb}, {.addr=0x73ea, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x73ea, .value=0xaf, .type=IO_READ},
        {.addr=0x73eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0012) {
    const struct CPU_State initial_cpu = {.pc=0x142f, .a=0xf9, .x=0x28, .y=0x8b, .sp=0xf2, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x00}, {.addr=0x142f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1430, .a=0xf9, .x=0x29, .y=0x8b, .sp=0xf2, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xf9}, {.addr=0x142f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x142f, .value=0xaf, .type=IO_READ},
        {.addr=0x1430, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0028, .value=0xf9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0013) {
    const struct CPU_State initial_cpu = {.pc=0xe504, .a=0x52, .x=0xb7, .y=0xf2, .sp=0xc3, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x00}, {.addr=0xe504, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe505, .a=0x52, .x=0xb8, .y=0xf2, .sp=0xc3, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x52}, {.addr=0xe504, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe504, .value=0xaf, .type=IO_READ},
        {.addr=0xe505, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b7, .value=0x52, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0014) {
    const struct CPU_State initial_cpu = {.pc=0xefeb, .a=0x79, .x=0xe5, .y=0xab, .sp=0xcc, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x00}, {.addr=0xefeb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xefec, .a=0x79, .x=0xe6, .y=0xab, .sp=0xcc, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x79}, {.addr=0xefeb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xefeb, .value=0xaf, .type=IO_READ},
        {.addr=0xefec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e5, .value=0x79, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0015) {
    const struct CPU_State initial_cpu = {.pc=0x5665, .a=0x98, .x=0x2b, .y=0x03, .sp=0xdc, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x00}, {.addr=0x5665, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5666, .a=0x98, .x=0x2c, .y=0x03, .sp=0xdc, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x98}, {.addr=0x5665, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5665, .value=0xaf, .type=IO_READ},
        {.addr=0x5666, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002b, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0016) {
    const struct CPU_State initial_cpu = {.pc=0x9b6d, .a=0xf2, .x=0x9a, .y=0x86, .sp=0xaf, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x9b6d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9b6e, .a=0xf2, .x=0x9b, .y=0x86, .sp=0xaf, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xf2}, {.addr=0x9b6d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9b6d, .value=0xaf, .type=IO_READ},
        {.addr=0x9b6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0017) {
    const struct CPU_State initial_cpu = {.pc=0x834a, .a=0x12, .x=0xb2, .y=0xe8, .sp=0x5a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x00}, {.addr=0x834a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x834b, .a=0x12, .x=0xb3, .y=0xe8, .sp=0x5a, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x12}, {.addr=0x834a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x834a, .value=0xaf, .type=IO_READ},
        {.addr=0x834b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b2, .value=0x12, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0018) {
    const struct CPU_State initial_cpu = {.pc=0x73c3, .a=0x89, .x=0x87, .y=0xc2, .sp=0x60, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x73c3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x73c4, .a=0x89, .x=0x88, .y=0xc2, .sp=0x60, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x89}, {.addr=0x73c3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x73c3, .value=0xaf, .type=IO_READ},
        {.addr=0x73c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x89, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0019) {
    const struct CPU_State initial_cpu = {.pc=0x4c77, .a=0xb0, .x=0x92, .y=0xda, .sp=0x2b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x00}, {.addr=0x4c77, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4c78, .a=0xb0, .x=0x93, .y=0xda, .sp=0x2b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0xb0}, {.addr=0x4c77, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4c77, .value=0xaf, .type=IO_READ},
        {.addr=0x4c78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0092, .value=0xb0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_001A) {
    const struct CPU_State initial_cpu = {.pc=0x0d0e, .a=0xd5, .x=0x80, .y=0x72, .sp=0x13, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x00}, {.addr=0x0d0e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0d0f, .a=0xd5, .x=0x81, .y=0x72, .sp=0x13, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0xd5}, {.addr=0x0d0e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0d0e, .value=0xaf, .type=IO_READ},
        {.addr=0x0d0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0080, .value=0xd5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_001B) {
    const struct CPU_State initial_cpu = {.pc=0x5de4, .a=0x72, .x=0xcc, .y=0x5f, .sp=0x57, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x00}, {.addr=0x5de4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5de5, .a=0x72, .x=0xcd, .y=0x5f, .sp=0x57, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x72}, {.addr=0x5de4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5de4, .value=0xaf, .type=IO_READ},
        {.addr=0x5de5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00cc, .value=0x72, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_001C) {
    const struct CPU_State initial_cpu = {.pc=0xbe43, .a=0x14, .x=0x24, .y=0xec, .sp=0xdb, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0xbe43, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbe44, .a=0x14, .x=0x25, .y=0xec, .sp=0xdb, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x14}, {.addr=0xbe43, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbe43, .value=0xaf, .type=IO_READ},
        {.addr=0xbe44, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x14, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_001D) {
    const struct CPU_State initial_cpu = {.pc=0xfca2, .a=0x04, .x=0x3a, .y=0x2d, .sp=0x38, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0xfca2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfca3, .a=0x04, .x=0x3b, .y=0x2d, .sp=0x38, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x04}, {.addr=0xfca2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfca2, .value=0xaf, .type=IO_READ},
        {.addr=0xfca3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x04, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_001E) {
    const struct CPU_State initial_cpu = {.pc=0x50fe, .a=0xd8, .x=0x8e, .y=0x51, .sp=0xf8, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x00}, {.addr=0x50fe, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x50ff, .a=0xd8, .x=0x8f, .y=0x51, .sp=0xf8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0xd8}, {.addr=0x50fe, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x50fe, .value=0xaf, .type=IO_READ},
        {.addr=0x50ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x008e, .value=0xd8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_001F) {
    const struct CPU_State initial_cpu = {.pc=0xb786, .a=0xa6, .x=0x7f, .y=0xa9, .sp=0xb5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x00}, {.addr=0xb786, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb787, .a=0xa6, .x=0x80, .y=0xa9, .sp=0xb5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xa6}, {.addr=0xb786, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb786, .value=0xaf, .type=IO_READ},
        {.addr=0xb787, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007f, .value=0xa6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0020) {
    const struct CPU_State initial_cpu = {.pc=0x9a7f, .a=0x84, .x=0x49, .y=0xc0, .sp=0x9a, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x00}, {.addr=0x9a7f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9a80, .a=0x84, .x=0x4a, .y=0xc0, .sp=0x9a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x84}, {.addr=0x9a7f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9a7f, .value=0xaf, .type=IO_READ},
        {.addr=0x9a80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0049, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0021) {
    const struct CPU_State initial_cpu = {.pc=0x3383, .a=0x41, .x=0xfb, .y=0xa3, .sp=0x82, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x3383, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3384, .a=0x41, .x=0xfc, .y=0xa3, .sp=0x82, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x41}, {.addr=0x3383, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3383, .value=0xaf, .type=IO_READ},
        {.addr=0x3384, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x41, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0022) {
    const struct CPU_State initial_cpu = {.pc=0x2594, .a=0xff, .x=0xaa, .y=0x67, .sp=0x63, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x00}, {.addr=0x2594, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2595, .a=0xff, .x=0xab, .y=0x67, .sp=0x63, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0xff}, {.addr=0x2594, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2594, .value=0xaf, .type=IO_READ},
        {.addr=0x2595, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00aa, .value=0xff, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0024) {
    const struct CPU_State initial_cpu = {.pc=0xddbc, .a=0xc5, .x=0xcd, .y=0xf1, .sp=0x19, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x00}, {.addr=0xddbc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xddbd, .a=0xc5, .x=0xce, .y=0xf1, .sp=0x19, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0xc5}, {.addr=0xddbc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xddbc, .value=0xaf, .type=IO_READ},
        {.addr=0xddbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00cd, .value=0xc5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0025) {
    const struct CPU_State initial_cpu = {.pc=0x3d59, .a=0x87, .x=0xee, .y=0xd4, .sp=0xd6, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x00}, {.addr=0x3d59, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3d5a, .a=0x87, .x=0xef, .y=0xd4, .sp=0xd6, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x87}, {.addr=0x3d59, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3d59, .value=0xaf, .type=IO_READ},
        {.addr=0x3d5a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ee, .value=0x87, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0026) {
    const struct CPU_State initial_cpu = {.pc=0x4418, .a=0x46, .x=0xed, .y=0x85, .sp=0x8d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x00}, {.addr=0x4418, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4419, .a=0x46, .x=0xee, .y=0x85, .sp=0x8d, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x46}, {.addr=0x4418, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4418, .value=0xaf, .type=IO_READ},
        {.addr=0x4419, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ed, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0027) {
    const struct CPU_State initial_cpu = {.pc=0x1f64, .a=0xfb, .x=0x7f, .y=0xca, .sp=0x78, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x00}, {.addr=0x1f64, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1f65, .a=0xfb, .x=0x80, .y=0xca, .sp=0x78, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xfb}, {.addr=0x1f64, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1f64, .value=0xaf, .type=IO_READ},
        {.addr=0x1f65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007f, .value=0xfb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0028) {
    const struct CPU_State initial_cpu = {.pc=0x91da, .a=0x86, .x=0x81, .y=0xc0, .sp=0x9a, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x91da, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x91db, .a=0x86, .x=0x82, .y=0xc0, .sp=0x9a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x86}, {.addr=0x91da, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x91da, .value=0xaf, .type=IO_READ},
        {.addr=0x91db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0029) {
    const struct CPU_State initial_cpu = {.pc=0xbe33, .a=0x6c, .x=0xfc, .y=0xf7, .sp=0xfc, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xbe33, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbe34, .a=0x6c, .x=0xfd, .y=0xf7, .sp=0xfc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x6c}, {.addr=0xbe33, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbe33, .value=0xaf, .type=IO_READ},
        {.addr=0xbe34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x6c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_002A) {
    const struct CPU_State initial_cpu = {.pc=0x7b92, .a=0x79, .x=0x9f, .y=0x40, .sp=0xc8, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x00}, {.addr=0x7b92, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7b93, .a=0x79, .x=0xa0, .y=0x40, .sp=0xc8, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x79}, {.addr=0x7b92, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7b92, .value=0xaf, .type=IO_READ},
        {.addr=0x7b93, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009f, .value=0x79, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_002B) {
    const struct CPU_State initial_cpu = {.pc=0xd1c3, .a=0x13, .x=0x5b, .y=0x4f, .sp=0x3f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x00}, {.addr=0xd1c3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd1c4, .a=0x13, .x=0x5c, .y=0x4f, .sp=0x3f, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x13}, {.addr=0xd1c3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd1c3, .value=0xaf, .type=IO_READ},
        {.addr=0xd1c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005b, .value=0x13, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_002C) {
    const struct CPU_State initial_cpu = {.pc=0xeac6, .a=0x09, .x=0xff, .y=0xfb, .sp=0x13, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0xeac6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xeac7, .a=0x09, .x=0x00, .y=0xfb, .sp=0x13, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x09}, {.addr=0xeac6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xeac6, .value=0xaf, .type=IO_READ},
        {.addr=0xeac7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_002D) {
    const struct CPU_State initial_cpu = {.pc=0x8ee5, .a=0x75, .x=0x71, .y=0x12, .sp=0x0c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x00}, {.addr=0x8ee5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8ee6, .a=0x75, .x=0x72, .y=0x12, .sp=0x0c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x75}, {.addr=0x8ee5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8ee5, .value=0xaf, .type=IO_READ},
        {.addr=0x8ee6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0071, .value=0x75, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_002E) {
    const struct CPU_State initial_cpu = {.pc=0x9983, .a=0x96, .x=0xd9, .y=0x99, .sp=0x20, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x00}, {.addr=0x9983, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9984, .a=0x96, .x=0xda, .y=0x99, .sp=0x20, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x96}, {.addr=0x9983, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9983, .value=0xaf, .type=IO_READ},
        {.addr=0x9984, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d9, .value=0x96, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_002F) {
    const struct CPU_State initial_cpu = {.pc=0xca2a, .a=0x6f, .x=0x35, .y=0x99, .sp=0x81, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xca2a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xca2b, .a=0x6f, .x=0x36, .y=0x99, .sp=0x81, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x6f}, {.addr=0xca2a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xca2a, .value=0xaf, .type=IO_READ},
        {.addr=0xca2b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0030) {
    const struct CPU_State initial_cpu = {.pc=0x8edd, .a=0x4b, .x=0x07, .y=0xf4, .sp=0x69, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x00}, {.addr=0x8edd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8ede, .a=0x4b, .x=0x08, .y=0xf4, .sp=0x69, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x4b}, {.addr=0x8edd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8edd, .value=0xaf, .type=IO_READ},
        {.addr=0x8ede, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0007, .value=0x4b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0031) {
    const struct CPU_State initial_cpu = {.pc=0x98ad, .a=0xa3, .x=0x9c, .y=0x96, .sp=0x84, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0x98ad, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x98ae, .a=0xa3, .x=0x9d, .y=0x96, .sp=0x84, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xa3}, {.addr=0x98ad, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x98ad, .value=0xaf, .type=IO_READ},
        {.addr=0x98ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xa3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0032) {
    const struct CPU_State initial_cpu = {.pc=0x3e54, .a=0xa0, .x=0x12, .y=0xc9, .sp=0xa6, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x3e54, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3e55, .a=0xa0, .x=0x13, .y=0xc9, .sp=0xa6, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xa0}, {.addr=0x3e54, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3e54, .value=0xaf, .type=IO_READ},
        {.addr=0x3e55, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0033) {
    const struct CPU_State initial_cpu = {.pc=0x5e5e, .a=0x35, .x=0x27, .y=0x1e, .sp=0x5b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x5e5e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5e5f, .a=0x35, .x=0x28, .y=0x1e, .sp=0x5b, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x35}, {.addr=0x5e5e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5e5e, .value=0xaf, .type=IO_READ},
        {.addr=0x5e5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0127, .value=0x35, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0034) {
    const struct CPU_State initial_cpu = {.pc=0xbc1a, .a=0xc1, .x=0xc5, .y=0x0d, .sp=0x22, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x00}, {.addr=0xbc1a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbc1b, .a=0xc1, .x=0xc6, .y=0x0d, .sp=0x22, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xc1}, {.addr=0xbc1a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbc1a, .value=0xaf, .type=IO_READ},
        {.addr=0xbc1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c5, .value=0xc1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0035) {
    const struct CPU_State initial_cpu = {.pc=0x16fa, .a=0xc3, .x=0x66, .y=0x98, .sp=0x40, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x16fa, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x16fb, .a=0xc3, .x=0x67, .y=0x98, .sp=0x40, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xc3}, {.addr=0x16fa, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x16fa, .value=0xaf, .type=IO_READ},
        {.addr=0x16fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0036) {
    const struct CPU_State initial_cpu = {.pc=0x9a33, .a=0xf8, .x=0x12, .y=0x31, .sp=0xc7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x9a33, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9a34, .a=0xf8, .x=0x13, .y=0x31, .sp=0xc7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xf8}, {.addr=0x9a33, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9a33, .value=0xaf, .type=IO_READ},
        {.addr=0x9a34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0xf8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0037) {
    const struct CPU_State initial_cpu = {.pc=0xdbe6, .a=0xae, .x=0x0e, .y=0x85, .sp=0x2c, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0xdbe6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdbe7, .a=0xae, .x=0x0f, .y=0x85, .sp=0x2c, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xae}, {.addr=0xdbe6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdbe6, .value=0xaf, .type=IO_READ},
        {.addr=0xdbe7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0xae, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0038) {
    const struct CPU_State initial_cpu = {.pc=0x34db, .a=0x01, .x=0x5f, .y=0x7d, .sp=0x4f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x34db, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x34dc, .a=0x01, .x=0x60, .y=0x7d, .sp=0x4f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x01}, {.addr=0x34db, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x34db, .value=0xaf, .type=IO_READ},
        {.addr=0x34dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0039) {
    const struct CPU_State initial_cpu = {.pc=0xa6d6, .a=0x18, .x=0x0f, .y=0xdf, .sp=0x68, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x00}, {.addr=0xa6d6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa6d7, .a=0x18, .x=0x10, .y=0xdf, .sp=0x68, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x18}, {.addr=0xa6d6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa6d6, .value=0xaf, .type=IO_READ},
        {.addr=0xa6d7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000f, .value=0x18, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_003A) {
    const struct CPU_State initial_cpu = {.pc=0x8a60, .a=0xf5, .x=0x4c, .y=0x1e, .sp=0x81, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x00}, {.addr=0x8a60, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8a61, .a=0xf5, .x=0x4d, .y=0x1e, .sp=0x81, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xf5}, {.addr=0x8a60, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8a60, .value=0xaf, .type=IO_READ},
        {.addr=0x8a61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004c, .value=0xf5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_003B) {
    const struct CPU_State initial_cpu = {.pc=0x3210, .a=0x74, .x=0x93, .y=0x52, .sp=0x6c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x3210, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3211, .a=0x74, .x=0x94, .y=0x52, .sp=0x6c, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x74}, {.addr=0x3210, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3210, .value=0xaf, .type=IO_READ},
        {.addr=0x3211, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0193, .value=0x74, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_003C) {
    const struct CPU_State initial_cpu = {.pc=0x8baf, .a=0x29, .x=0x59, .y=0xe8, .sp=0xcd, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x8baf, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8bb0, .a=0x29, .x=0x5a, .y=0xe8, .sp=0xcd, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x29}, {.addr=0x8baf, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8baf, .value=0xaf, .type=IO_READ},
        {.addr=0x8bb0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x29, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_003D) {
    const struct CPU_State initial_cpu = {.pc=0x104d, .a=0x2f, .x=0x87, .y=0xce, .sp=0xcb, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x104d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x104e, .a=0x2f, .x=0x88, .y=0xce, .sp=0xcb, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x2f}, {.addr=0x104d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x104d, .value=0xaf, .type=IO_READ},
        {.addr=0x104e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0187, .value=0x2f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_003E) {
    const struct CPU_State initial_cpu = {.pc=0xf493, .a=0xe5, .x=0xc6, .y=0x83, .sp=0x78, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x00}, {.addr=0xf493, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf494, .a=0xe5, .x=0xc7, .y=0x83, .sp=0x78, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0xe5}, {.addr=0xf493, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf493, .value=0xaf, .type=IO_READ},
        {.addr=0xf494, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c6, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_003F) {
    const struct CPU_State initial_cpu = {.pc=0x88ee, .a=0x26, .x=0x97, .y=0x93, .sp=0xff, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x00}, {.addr=0x88ee, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x88ef, .a=0x26, .x=0x98, .y=0x93, .sp=0xff, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x26}, {.addr=0x88ee, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x88ee, .value=0xaf, .type=IO_READ},
        {.addr=0x88ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0097, .value=0x26, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0040) {
    const struct CPU_State initial_cpu = {.pc=0x7003, .a=0xcb, .x=0xee, .y=0x93, .sp=0xcc, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x00}, {.addr=0x7003, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7004, .a=0xcb, .x=0xef, .y=0x93, .sp=0xcc, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0xcb}, {.addr=0x7003, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7003, .value=0xaf, .type=IO_READ},
        {.addr=0x7004, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ee, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0041) {
    const struct CPU_State initial_cpu = {.pc=0xd645, .a=0x15, .x=0x46, .y=0xfa, .sp=0x0b, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xd645, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd646, .a=0x15, .x=0x47, .y=0xfa, .sp=0x0b, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x15}, {.addr=0xd645, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd645, .value=0xaf, .type=IO_READ},
        {.addr=0xd646, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x15, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0042) {
    const struct CPU_State initial_cpu = {.pc=0xa6bc, .a=0xc9, .x=0x93, .y=0x2d, .sp=0x58, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x00}, {.addr=0xa6bc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa6bd, .a=0xc9, .x=0x94, .y=0x2d, .sp=0x58, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0xc9}, {.addr=0xa6bc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa6bc, .value=0xaf, .type=IO_READ},
        {.addr=0xa6bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0093, .value=0xc9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0043) {
    const struct CPU_State initial_cpu = {.pc=0x3774, .a=0xe1, .x=0x3e, .y=0x16, .sp=0x2e, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x3774, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3775, .a=0xe1, .x=0x3f, .y=0x16, .sp=0x2e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xe1}, {.addr=0x3774, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3774, .value=0xaf, .type=IO_READ},
        {.addr=0x3775, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013e, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0044) {
    const struct CPU_State initial_cpu = {.pc=0x53a2, .a=0xee, .x=0x3d, .y=0x77, .sp=0x3d, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x00}, {.addr=0x53a2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x53a3, .a=0xee, .x=0x3e, .y=0x77, .sp=0x3d, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0xee}, {.addr=0x53a2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x53a2, .value=0xaf, .type=IO_READ},
        {.addr=0x53a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003d, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0045) {
    const struct CPU_State initial_cpu = {.pc=0xdc9c, .a=0x92, .x=0x76, .y=0xd1, .sp=0x95, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x00}, {.addr=0xdc9c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdc9d, .a=0x92, .x=0x77, .y=0xd1, .sp=0x95, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x92}, {.addr=0xdc9c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdc9c, .value=0xaf, .type=IO_READ},
        {.addr=0xdc9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0076, .value=0x92, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0046) {
    const struct CPU_State initial_cpu = {.pc=0x87ef, .a=0x80, .x=0x8f, .y=0xd4, .sp=0xae, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x87ef, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x87f0, .a=0x80, .x=0x90, .y=0xd4, .sp=0xae, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x80}, {.addr=0x87ef, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x87ef, .value=0xaf, .type=IO_READ},
        {.addr=0x87f0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0x80, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0047) {
    const struct CPU_State initial_cpu = {.pc=0xc97a, .a=0xc9, .x=0x55, .y=0xfa, .sp=0xfa, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x00}, {.addr=0xc97a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc97b, .a=0xc9, .x=0x56, .y=0xfa, .sp=0xfa, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0xc9}, {.addr=0xc97a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc97a, .value=0xaf, .type=IO_READ},
        {.addr=0xc97b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0055, .value=0xc9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0048) {
    const struct CPU_State initial_cpu = {.pc=0x120c, .a=0x89, .x=0xc5, .y=0xf7, .sp=0x7e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0x120c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x120d, .a=0x89, .x=0xc6, .y=0xf7, .sp=0x7e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x89}, {.addr=0x120c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x120c, .value=0xaf, .type=IO_READ},
        {.addr=0x120d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c5, .value=0x89, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0049) {
    const struct CPU_State initial_cpu = {.pc=0x43e1, .a=0x84, .x=0xcd, .y=0x13, .sp=0x16, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x00}, {.addr=0x43e1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x43e2, .a=0x84, .x=0xce, .y=0x13, .sp=0x16, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x84}, {.addr=0x43e1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x43e1, .value=0xaf, .type=IO_READ},
        {.addr=0x43e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00cd, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_004A) {
    const struct CPU_State initial_cpu = {.pc=0xf39d, .a=0x1a, .x=0x7b, .y=0xaf, .sp=0x32, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xf39d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf39e, .a=0x1a, .x=0x7c, .y=0xaf, .sp=0x32, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x1a}, {.addr=0xf39d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf39d, .value=0xaf, .type=IO_READ},
        {.addr=0xf39e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0x1a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_004B) {
    const struct CPU_State initial_cpu = {.pc=0x390c, .a=0x47, .x=0x49, .y=0x39, .sp=0x1e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x00}, {.addr=0x390c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x390d, .a=0x47, .x=0x4a, .y=0x39, .sp=0x1e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x47}, {.addr=0x390c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x390c, .value=0xaf, .type=IO_READ},
        {.addr=0x390d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0049, .value=0x47, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_004C) {
    const struct CPU_State initial_cpu = {.pc=0x7a1a, .a=0x95, .x=0x9a, .y=0xa2, .sp=0x92, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x00}, {.addr=0x7a1a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7a1b, .a=0x95, .x=0x9b, .y=0xa2, .sp=0x92, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x95}, {.addr=0x7a1a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7a1a, .value=0xaf, .type=IO_READ},
        {.addr=0x7a1b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009a, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_004D) {
    const struct CPU_State initial_cpu = {.pc=0xf8cb, .a=0xfd, .x=0xc7, .y=0xcf, .sp=0x2e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x00}, {.addr=0xf8cb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf8cc, .a=0xfd, .x=0xc8, .y=0xcf, .sp=0x2e, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0xfd}, {.addr=0xf8cb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf8cb, .value=0xaf, .type=IO_READ},
        {.addr=0xf8cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c7, .value=0xfd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_004E) {
    const struct CPU_State initial_cpu = {.pc=0x99cb, .a=0x47, .x=0x21, .y=0x82, .sp=0x44, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x00}, {.addr=0x99cb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x99cc, .a=0x47, .x=0x22, .y=0x82, .sp=0x44, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x47}, {.addr=0x99cb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x99cb, .value=0xaf, .type=IO_READ},
        {.addr=0x99cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0021, .value=0x47, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_004F) {
    const struct CPU_State initial_cpu = {.pc=0x3d4f, .a=0x67, .x=0x43, .y=0x95, .sp=0xcc, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x00}, {.addr=0x3d4f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3d50, .a=0x67, .x=0x44, .y=0x95, .sp=0xcc, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x67}, {.addr=0x3d4f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3d4f, .value=0xaf, .type=IO_READ},
        {.addr=0x3d50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0043, .value=0x67, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0050) {
    const struct CPU_State initial_cpu = {.pc=0xf7db, .a=0x7c, .x=0x2f, .y=0xa5, .sp=0xac, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x00}, {.addr=0xf7db, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf7dc, .a=0x7c, .x=0x30, .y=0xa5, .sp=0xac, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x7c}, {.addr=0xf7db, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf7db, .value=0xaf, .type=IO_READ},
        {.addr=0xf7dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002f, .value=0x7c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0052) {
    const struct CPU_State initial_cpu = {.pc=0x4c79, .a=0x9a, .x=0x64, .y=0xdb, .sp=0x9c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x00}, {.addr=0x4c79, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4c7a, .a=0x9a, .x=0x65, .y=0xdb, .sp=0x9c, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x9a}, {.addr=0x4c79, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4c79, .value=0xaf, .type=IO_READ},
        {.addr=0x4c7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0064, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0053) {
    const struct CPU_State initial_cpu = {.pc=0x6951, .a=0x71, .x=0x90, .y=0x80, .sp=0x82, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x00}, {.addr=0x6951, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6952, .a=0x71, .x=0x91, .y=0x80, .sp=0x82, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x71}, {.addr=0x6951, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6951, .value=0xaf, .type=IO_READ},
        {.addr=0x6952, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0090, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0054) {
    const struct CPU_State initial_cpu = {.pc=0xb409, .a=0x2e, .x=0x55, .y=0x8b, .sp=0x05, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x00}, {.addr=0xb409, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb40a, .a=0x2e, .x=0x56, .y=0x8b, .sp=0x05, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x2e}, {.addr=0xb409, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb409, .value=0xaf, .type=IO_READ},
        {.addr=0xb40a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0055, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0055) {
    const struct CPU_State initial_cpu = {.pc=0xde67, .a=0x8f, .x=0xfa, .y=0xe3, .sp=0x2c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0xde67, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xde68, .a=0x8f, .x=0xfb, .y=0xe3, .sp=0x2c, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x8f}, {.addr=0xde67, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xde67, .value=0xaf, .type=IO_READ},
        {.addr=0xde68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x8f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0056) {
    const struct CPU_State initial_cpu = {.pc=0x8ab2, .a=0xc8, .x=0x8f, .y=0x04, .sp=0x84, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x00}, {.addr=0x8ab2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8ab3, .a=0xc8, .x=0x90, .y=0x04, .sp=0x84, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xc8}, {.addr=0x8ab2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8ab2, .value=0xaf, .type=IO_READ},
        {.addr=0x8ab3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x008f, .value=0xc8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0057) {
    const struct CPU_State initial_cpu = {.pc=0x35c4, .a=0x95, .x=0x89, .y=0x19, .sp=0x19, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0x00}, {.addr=0x35c4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x35c5, .a=0x95, .x=0x8a, .y=0x19, .sp=0x19, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0x95}, {.addr=0x35c4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x35c4, .value=0xaf, .type=IO_READ},
        {.addr=0x35c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0089, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0058) {
    const struct CPU_State initial_cpu = {.pc=0xcb6a, .a=0xe1, .x=0x92, .y=0xed, .sp=0xfb, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xcb6a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcb6b, .a=0xe1, .x=0x93, .y=0xed, .sp=0xfb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xe1}, {.addr=0xcb6a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcb6a, .value=0xaf, .type=IO_READ},
        {.addr=0xcb6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0059) {
    const struct CPU_State initial_cpu = {.pc=0x499c, .a=0xad, .x=0x09, .y=0x15, .sp=0xb6, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x00}, {.addr=0x499c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x499d, .a=0xad, .x=0x0a, .y=0x15, .sp=0xb6, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xad}, {.addr=0x499c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x499c, .value=0xaf, .type=IO_READ},
        {.addr=0x499d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0009, .value=0xad, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_005A) {
    const struct CPU_State initial_cpu = {.pc=0x93b3, .a=0xee, .x=0x0e, .y=0x40, .sp=0x51, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0x00}, {.addr=0x93b3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x93b4, .a=0xee, .x=0x0f, .y=0x40, .sp=0x51, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0xee}, {.addr=0x93b3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x93b3, .value=0xaf, .type=IO_READ},
        {.addr=0x93b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000e, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_005B) {
    const struct CPU_State initial_cpu = {.pc=0xc212, .a=0x87, .x=0xfb, .y=0xea, .sp=0x76, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0xc212, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc213, .a=0x87, .x=0xfc, .y=0xea, .sp=0x76, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x87}, {.addr=0xc212, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc212, .value=0xaf, .type=IO_READ},
        {.addr=0xc213, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x87, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_005C) {
    const struct CPU_State initial_cpu = {.pc=0xcf0f, .a=0xc9, .x=0x04, .y=0x79, .sp=0x50, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0x00}, {.addr=0xcf0f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcf10, .a=0xc9, .x=0x05, .y=0x79, .sp=0x50, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xc9}, {.addr=0xcf0f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcf0f, .value=0xaf, .type=IO_READ},
        {.addr=0xcf10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0004, .value=0xc9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_005D) {
    const struct CPU_State initial_cpu = {.pc=0xee04, .a=0x94, .x=0x07, .y=0x3a, .sp=0x52, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x00}, {.addr=0xee04, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xee05, .a=0x94, .x=0x08, .y=0x3a, .sp=0x52, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x94}, {.addr=0xee04, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xee04, .value=0xaf, .type=IO_READ},
        {.addr=0xee05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0007, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_005E) {
    const struct CPU_State initial_cpu = {.pc=0x76e9, .a=0x05, .x=0xcc, .y=0xfa, .sp=0x6b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x76e9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x76ea, .a=0x05, .x=0xcd, .y=0xfa, .sp=0x6b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x05}, {.addr=0x76e9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x76e9, .value=0xaf, .type=IO_READ},
        {.addr=0x76ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cc, .value=0x05, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_005F) {
    const struct CPU_State initial_cpu = {.pc=0xb36b, .a=0x77, .x=0x34, .y=0x41, .sp=0x93, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x00}, {.addr=0xb36b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb36c, .a=0x77, .x=0x35, .y=0x41, .sp=0x93, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x77}, {.addr=0xb36b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb36b, .value=0xaf, .type=IO_READ},
        {.addr=0xb36c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0034, .value=0x77, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0060) {
    const struct CPU_State initial_cpu = {.pc=0x2d67, .a=0x6d, .x=0x1b, .y=0xa2, .sp=0xe6, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x2d67, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2d68, .a=0x6d, .x=0x1c, .y=0xa2, .sp=0xe6, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x6d}, {.addr=0x2d67, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2d67, .value=0xaf, .type=IO_READ},
        {.addr=0x2d68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x6d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0061) {
    const struct CPU_State initial_cpu = {.pc=0xd142, .a=0x47, .x=0x0e, .y=0xe4, .sp=0xfb, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0x00}, {.addr=0xd142, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd143, .a=0x47, .x=0x0f, .y=0xe4, .sp=0xfb, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0x47}, {.addr=0xd142, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd142, .value=0xaf, .type=IO_READ},
        {.addr=0xd143, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000e, .value=0x47, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0062) {
    const struct CPU_State initial_cpu = {.pc=0x3870, .a=0x98, .x=0x6f, .y=0xa5, .sp=0x71, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x3870, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3871, .a=0x98, .x=0x70, .y=0xa5, .sp=0x71, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x98}, {.addr=0x3870, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3870, .value=0xaf, .type=IO_READ},
        {.addr=0x3871, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016f, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0063) {
    const struct CPU_State initial_cpu = {.pc=0x941a, .a=0x20, .x=0x8e, .y=0xed, .sp=0x8b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x941a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x941b, .a=0x20, .x=0x8f, .y=0xed, .sp=0x8b, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x20}, {.addr=0x941a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x941a, .value=0xaf, .type=IO_READ},
        {.addr=0x941b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x20, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0064) {
    const struct CPU_State initial_cpu = {.pc=0xf992, .a=0x3a, .x=0xa3, .y=0xc5, .sp=0xfe, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x00}, {.addr=0xf992, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf993, .a=0x3a, .x=0xa4, .y=0xc5, .sp=0xfe, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x3a}, {.addr=0xf992, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf992, .value=0xaf, .type=IO_READ},
        {.addr=0xf993, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a3, .value=0x3a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0065) {
    const struct CPU_State initial_cpu = {.pc=0x8121, .a=0x94, .x=0xe0, .y=0xc2, .sp=0x2f, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x8121, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8122, .a=0x94, .x=0xe1, .y=0xc2, .sp=0x2f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x94}, {.addr=0x8121, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8121, .value=0xaf, .type=IO_READ},
        {.addr=0x8122, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0066) {
    const struct CPU_State initial_cpu = {.pc=0x7f03, .a=0x93, .x=0x1b, .y=0x22, .sp=0x3f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x7f03, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7f04, .a=0x93, .x=0x1c, .y=0x22, .sp=0x3f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x93}, {.addr=0x7f03, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7f03, .value=0xaf, .type=IO_READ},
        {.addr=0x7f04, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x93, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0067) {
    const struct CPU_State initial_cpu = {.pc=0x90eb, .a=0x3d, .x=0xc1, .y=0xcd, .sp=0xb4, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x00}, {.addr=0x90eb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x90ec, .a=0x3d, .x=0xc2, .y=0xcd, .sp=0xb4, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x3d}, {.addr=0x90eb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x90eb, .value=0xaf, .type=IO_READ},
        {.addr=0x90ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c1, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0068) {
    const struct CPU_State initial_cpu = {.pc=0x7713, .a=0x3e, .x=0xbe, .y=0xf3, .sp=0x99, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0x00}, {.addr=0x7713, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7714, .a=0x3e, .x=0xbf, .y=0xf3, .sp=0x99, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0x3e}, {.addr=0x7713, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7713, .value=0xaf, .type=IO_READ},
        {.addr=0x7714, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00be, .value=0x3e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0069) {
    const struct CPU_State initial_cpu = {.pc=0x5650, .a=0xf3, .x=0x1a, .y=0xdf, .sp=0x71, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0x00}, {.addr=0x5650, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5651, .a=0xf3, .x=0x1b, .y=0xdf, .sp=0x71, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0xf3}, {.addr=0x5650, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5650, .value=0xaf, .type=IO_READ},
        {.addr=0x5651, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x001a, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_006A) {
    const struct CPU_State initial_cpu = {.pc=0x95ea, .a=0x6e, .x=0xb0, .y=0xff, .sp=0x69, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x00}, {.addr=0x95ea, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x95eb, .a=0x6e, .x=0xb1, .y=0xff, .sp=0x69, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x6e}, {.addr=0x95ea, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x95ea, .value=0xaf, .type=IO_READ},
        {.addr=0x95eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b0, .value=0x6e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_006B) {
    const struct CPU_State initial_cpu = {.pc=0x935c, .a=0xed, .x=0x05, .y=0xfa, .sp=0xe5, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x00}, {.addr=0x935c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x935d, .a=0xed, .x=0x06, .y=0xfa, .sp=0xe5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0xed}, {.addr=0x935c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x935c, .value=0xaf, .type=IO_READ},
        {.addr=0x935d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0005, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_006C) {
    const struct CPU_State initial_cpu = {.pc=0x922b, .a=0xd0, .x=0x8a, .y=0x7d, .sp=0x33, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x00}, {.addr=0x922b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x922c, .a=0xd0, .x=0x8b, .y=0x7d, .sp=0x33, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xd0}, {.addr=0x922b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x922b, .value=0xaf, .type=IO_READ},
        {.addr=0x922c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x008a, .value=0xd0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_006D) {
    const struct CPU_State initial_cpu = {.pc=0x6774, .a=0x7d, .x=0x43, .y=0x1a, .sp=0x79, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x6774, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6775, .a=0x7d, .x=0x44, .y=0x1a, .sp=0x79, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x7d}, {.addr=0x6774, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6774, .value=0xaf, .type=IO_READ},
        {.addr=0x6775, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0143, .value=0x7d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_006E) {
    const struct CPU_State initial_cpu = {.pc=0x7a0f, .a=0xa1, .x=0x83, .y=0x46, .sp=0x07, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x7a0f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7a10, .a=0xa1, .x=0x84, .y=0x46, .sp=0x07, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xa1}, {.addr=0x7a0f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7a0f, .value=0xaf, .type=IO_READ},
        {.addr=0x7a10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0xa1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_006F) {
    const struct CPU_State initial_cpu = {.pc=0xcde3, .a=0x0d, .x=0x6c, .y=0x85, .sp=0x90, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0xcde3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcde4, .a=0x0d, .x=0x6d, .y=0x85, .sp=0x90, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x0d}, {.addr=0xcde3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcde3, .value=0xaf, .type=IO_READ},
        {.addr=0xcde4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0070) {
    const struct CPU_State initial_cpu = {.pc=0x53c3, .a=0x13, .x=0x96, .y=0x09, .sp=0x5d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x53c3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x53c4, .a=0x13, .x=0x97, .y=0x09, .sp=0x5d, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x13}, {.addr=0x53c3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x53c3, .value=0xaf, .type=IO_READ},
        {.addr=0x53c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0x13, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0071) {
    const struct CPU_State initial_cpu = {.pc=0xc052, .a=0x42, .x=0xe5, .y=0x40, .sp=0x34, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x00}, {.addr=0xc052, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc053, .a=0x42, .x=0xe6, .y=0x40, .sp=0x34, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x42}, {.addr=0xc052, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc052, .value=0xaf, .type=IO_READ},
        {.addr=0xc053, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e5, .value=0x42, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0072) {
    const struct CPU_State initial_cpu = {.pc=0x0fdc, .a=0xfb, .x=0xd8, .y=0x5b, .sp=0x3f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x0fdc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0fdd, .a=0xfb, .x=0xd9, .y=0x5b, .sp=0x3f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xfb}, {.addr=0x0fdc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0fdc, .value=0xaf, .type=IO_READ},
        {.addr=0x0fdd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d8, .value=0xfb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0073) {
    const struct CPU_State initial_cpu = {.pc=0x5e8c, .a=0x19, .x=0x6e, .y=0xae, .sp=0xb3, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x5e8c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5e8d, .a=0x19, .x=0x6f, .y=0xae, .sp=0xb3, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x19}, {.addr=0x5e8c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5e8c, .value=0xaf, .type=IO_READ},
        {.addr=0x5e8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016e, .value=0x19, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0074) {
    const struct CPU_State initial_cpu = {.pc=0xbd55, .a=0xc5, .x=0x29, .y=0x43, .sp=0x1b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0xbd55, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbd56, .a=0xc5, .x=0x2a, .y=0x43, .sp=0x1b, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xc5}, {.addr=0xbd55, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbd55, .value=0xaf, .type=IO_READ},
        {.addr=0xbd56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0129, .value=0xc5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0075) {
    const struct CPU_State initial_cpu = {.pc=0x0470, .a=0x8b, .x=0xbc, .y=0x8c, .sp=0x72, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x0470, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0471, .a=0x8b, .x=0xbd, .y=0x8c, .sp=0x72, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x8b}, {.addr=0x0470, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0470, .value=0xaf, .type=IO_READ},
        {.addr=0x0471, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0x8b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0076) {
    const struct CPU_State initial_cpu = {.pc=0xde06, .a=0x22, .x=0x1e, .y=0xde, .sp=0xa3, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0xde06, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xde07, .a=0x22, .x=0x1f, .y=0xde, .sp=0xa3, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x22}, {.addr=0xde06, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xde06, .value=0xaf, .type=IO_READ},
        {.addr=0xde07, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x22, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0077) {
    const struct CPU_State initial_cpu = {.pc=0xa539, .a=0x1a, .x=0xff, .y=0xaa, .sp=0x8f, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0xa539, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa53a, .a=0x1a, .x=0x00, .y=0xaa, .sp=0x8f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x1a}, {.addr=0xa539, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa539, .value=0xaf, .type=IO_READ},
        {.addr=0xa53a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x1a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0078) {
    const struct CPU_State initial_cpu = {.pc=0x7186, .a=0xab, .x=0x3b, .y=0xb4, .sp=0x50, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0x7186, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7187, .a=0xab, .x=0x3c, .y=0xb4, .sp=0x50, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xab}, {.addr=0x7186, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7186, .value=0xaf, .type=IO_READ},
        {.addr=0x7187, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0079) {
    const struct CPU_State initial_cpu = {.pc=0xec20, .a=0x20, .x=0xd3, .y=0xdd, .sp=0xc0, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0xec20, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xec21, .a=0x20, .x=0xd4, .y=0xdd, .sp=0xc0, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x20}, {.addr=0xec20, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xec20, .value=0xaf, .type=IO_READ},
        {.addr=0xec21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0x20, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_007A) {
    const struct CPU_State initial_cpu = {.pc=0x02c3, .a=0x62, .x=0x5e, .y=0x52, .sp=0x7a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x00}, {.addr=0x02c3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x02c4, .a=0x62, .x=0x5f, .y=0x52, .sp=0x7a, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x62}, {.addr=0x02c3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x02c3, .value=0xaf, .type=IO_READ},
        {.addr=0x02c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005e, .value=0x62, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_007B) {
    const struct CPU_State initial_cpu = {.pc=0x02f0, .a=0x09, .x=0xb6, .y=0x2a, .sp=0x80, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0x02f0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x02f1, .a=0x09, .x=0xb7, .y=0x2a, .sp=0x80, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x09}, {.addr=0x02f0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x02f0, .value=0xaf, .type=IO_READ},
        {.addr=0x02f1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b6, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_007C) {
    const struct CPU_State initial_cpu = {.pc=0x38ce, .a=0xe7, .x=0x09, .y=0x51, .sp=0x2d, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x00}, {.addr=0x38ce, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x38cf, .a=0xe7, .x=0x0a, .y=0x51, .sp=0x2d, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xe7}, {.addr=0x38ce, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x38ce, .value=0xaf, .type=IO_READ},
        {.addr=0x38cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0009, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_007D) {
    const struct CPU_State initial_cpu = {.pc=0xbcd5, .a=0x84, .x=0xf7, .y=0x9e, .sp=0x55, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0xbcd5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbcd6, .a=0x84, .x=0xf8, .y=0x9e, .sp=0x55, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x84}, {.addr=0xbcd5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbcd5, .value=0xaf, .type=IO_READ},
        {.addr=0xbcd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_007E) {
    const struct CPU_State initial_cpu = {.pc=0xd87e, .a=0xb4, .x=0x65, .y=0x71, .sp=0x05, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x00}, {.addr=0xd87e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd87f, .a=0xb4, .x=0x66, .y=0x71, .sp=0x05, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0xb4}, {.addr=0xd87e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd87e, .value=0xaf, .type=IO_READ},
        {.addr=0xd87f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0065, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_007F) {
    const struct CPU_State initial_cpu = {.pc=0xfaf2, .a=0xa9, .x=0xb2, .y=0x74, .sp=0x63, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x00}, {.addr=0xfaf2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfaf3, .a=0xa9, .x=0xb3, .y=0x74, .sp=0x63, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0xa9}, {.addr=0xfaf2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfaf2, .value=0xaf, .type=IO_READ},
        {.addr=0xfaf3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b2, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0080) {
    const struct CPU_State initial_cpu = {.pc=0x9307, .a=0x0d, .x=0xda, .y=0xb6, .sp=0x54, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x00}, {.addr=0x9307, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9308, .a=0x0d, .x=0xdb, .y=0xb6, .sp=0x54, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0x0d}, {.addr=0x9307, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9307, .value=0xaf, .type=IO_READ},
        {.addr=0x9308, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00da, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0081) {
    const struct CPU_State initial_cpu = {.pc=0x8a75, .a=0x27, .x=0x16, .y=0x84, .sp=0x5d, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x8a75, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8a76, .a=0x27, .x=0x17, .y=0x84, .sp=0x5d, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x27}, {.addr=0x8a75, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8a75, .value=0xaf, .type=IO_READ},
        {.addr=0x8a76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0116, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0082) {
    const struct CPU_State initial_cpu = {.pc=0x971d, .a=0x30, .x=0x35, .y=0xd2, .sp=0x0d, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x971d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x971e, .a=0x30, .x=0x36, .y=0xd2, .sp=0x0d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x30}, {.addr=0x971d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x971d, .value=0xaf, .type=IO_READ},
        {.addr=0x971e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0x30, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0083) {
    const struct CPU_State initial_cpu = {.pc=0x9a10, .a=0x4d, .x=0xfb, .y=0xac, .sp=0x3d, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x9a10, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9a11, .a=0x4d, .x=0xfc, .y=0xac, .sp=0x3d, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x4d}, {.addr=0x9a10, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9a10, .value=0xaf, .type=IO_READ},
        {.addr=0x9a11, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x4d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0084) {
    const struct CPU_State initial_cpu = {.pc=0xcd62, .a=0x49, .x=0x11, .y=0x03, .sp=0x74, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0xcd62, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcd63, .a=0x49, .x=0x12, .y=0x03, .sp=0x74, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x49}, {.addr=0xcd62, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcd62, .value=0xaf, .type=IO_READ},
        {.addr=0xcd63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0x49, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0085) {
    const struct CPU_State initial_cpu = {.pc=0x5563, .a=0x9e, .x=0x26, .y=0xd2, .sp=0x9b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x5563, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5564, .a=0x9e, .x=0x27, .y=0xd2, .sp=0x9b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x9e}, {.addr=0x5563, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5563, .value=0xaf, .type=IO_READ},
        {.addr=0x5564, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0086) {
    const struct CPU_State initial_cpu = {.pc=0xd71d, .a=0xa0, .x=0x0e, .y=0x99, .sp=0xfe, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0xd71d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd71e, .a=0xa0, .x=0x0f, .y=0x99, .sp=0xfe, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xa0}, {.addr=0xd71d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd71d, .value=0xaf, .type=IO_READ},
        {.addr=0xd71e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0087) {
    const struct CPU_State initial_cpu = {.pc=0x23ec, .a=0x7f, .x=0xe2, .y=0xea, .sp=0x5c, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x23ec, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x23ed, .a=0x7f, .x=0xe3, .y=0xea, .sp=0x5c, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x7f}, {.addr=0x23ec, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x23ec, .value=0xaf, .type=IO_READ},
        {.addr=0x23ed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x7f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0088) {
    const struct CPU_State initial_cpu = {.pc=0x4415, .a=0xbd, .x=0x5f, .y=0x6c, .sp=0x0a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x4415, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4416, .a=0xbd, .x=0x60, .y=0x6c, .sp=0x0a, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xbd}, {.addr=0x4415, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4415, .value=0xaf, .type=IO_READ},
        {.addr=0x4416, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0xbd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0089) {
    const struct CPU_State initial_cpu = {.pc=0x52cf, .a=0xf8, .x=0x07, .y=0xd3, .sp=0x1d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x52cf, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x52d0, .a=0xf8, .x=0x08, .y=0xd3, .sp=0x1d, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xf8}, {.addr=0x52cf, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x52cf, .value=0xaf, .type=IO_READ},
        {.addr=0x52d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0107, .value=0xf8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_008A) {
    const struct CPU_State initial_cpu = {.pc=0x91c7, .a=0x7c, .x=0x5d, .y=0x30, .sp=0x3a, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0x91c7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x91c8, .a=0x7c, .x=0x5e, .y=0x30, .sp=0x3a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x7c}, {.addr=0x91c7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x91c7, .value=0xaf, .type=IO_READ},
        {.addr=0x91c8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015d, .value=0x7c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_008B) {
    const struct CPU_State initial_cpu = {.pc=0xcd3c, .a=0xa9, .x=0x18, .y=0xcb, .sp=0xb2, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0xcd3c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcd3d, .a=0xa9, .x=0x19, .y=0xcb, .sp=0xb2, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xa9}, {.addr=0xcd3c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcd3c, .value=0xaf, .type=IO_READ},
        {.addr=0xcd3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_008C) {
    const struct CPU_State initial_cpu = {.pc=0xbd99, .a=0x7d, .x=0x8c, .y=0xf9, .sp=0x49, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x00}, {.addr=0xbd99, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbd9a, .a=0x7d, .x=0x8d, .y=0xf9, .sp=0x49, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0x7d}, {.addr=0xbd99, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbd99, .value=0xaf, .type=IO_READ},
        {.addr=0xbd9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x008c, .value=0x7d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_008D) {
    const struct CPU_State initial_cpu = {.pc=0xba50, .a=0x4f, .x=0x7f, .y=0x90, .sp=0x0d, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0xba50, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xba51, .a=0x4f, .x=0x80, .y=0x90, .sp=0x0d, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x4f}, {.addr=0xba50, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xba50, .value=0xaf, .type=IO_READ},
        {.addr=0xba51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x4f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_008E) {
    const struct CPU_State initial_cpu = {.pc=0x2cf4, .a=0xc0, .x=0x32, .y=0xe9, .sp=0x1a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0x2cf4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2cf5, .a=0xc0, .x=0x33, .y=0xe9, .sp=0x1a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xc0}, {.addr=0x2cf4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2cf4, .value=0xaf, .type=IO_READ},
        {.addr=0x2cf5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0xc0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_008F) {
    const struct CPU_State initial_cpu = {.pc=0x4684, .a=0x23, .x=0xe9, .y=0x12, .sp=0xc4, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x4684, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4685, .a=0x23, .x=0xea, .y=0x12, .sp=0xc4, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x23}, {.addr=0x4684, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4684, .value=0xaf, .type=IO_READ},
        {.addr=0x4685, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0x23, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0090) {
    const struct CPU_State initial_cpu = {.pc=0x738a, .a=0xc3, .x=0x20, .y=0x32, .sp=0x1a, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x738a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x738b, .a=0xc3, .x=0x21, .y=0x32, .sp=0x1a, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xc3}, {.addr=0x738a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x738a, .value=0xaf, .type=IO_READ},
        {.addr=0x738b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0091) {
    const struct CPU_State initial_cpu = {.pc=0x815f, .a=0xb8, .x=0x93, .y=0x4f, .sp=0xd8, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x00}, {.addr=0x815f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8160, .a=0xb8, .x=0x94, .y=0x4f, .sp=0xd8, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0xb8}, {.addr=0x815f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x815f, .value=0xaf, .type=IO_READ},
        {.addr=0x8160, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0093, .value=0xb8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0092) {
    const struct CPU_State initial_cpu = {.pc=0x5374, .a=0xa6, .x=0xa7, .y=0x27, .sp=0xbc, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x5374, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5375, .a=0xa6, .x=0xa8, .y=0x27, .sp=0xbc, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xa6}, {.addr=0x5374, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5374, .value=0xaf, .type=IO_READ},
        {.addr=0x5375, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0xa6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0093) {
    const struct CPU_State initial_cpu = {.pc=0xb43d, .a=0x28, .x=0x2b, .y=0x96, .sp=0x91, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0xb43d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb43e, .a=0x28, .x=0x2c, .y=0x96, .sp=0x91, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x28}, {.addr=0xb43d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb43d, .value=0xaf, .type=IO_READ},
        {.addr=0xb43e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0094) {
    const struct CPU_State initial_cpu = {.pc=0x4a32, .a=0xa7, .x=0x3d, .y=0x57, .sp=0x36, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x4a32, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4a33, .a=0xa7, .x=0x3e, .y=0x57, .sp=0x36, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xa7}, {.addr=0x4a32, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4a32, .value=0xaf, .type=IO_READ},
        {.addr=0x4a33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0xa7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0095) {
    const struct CPU_State initial_cpu = {.pc=0x53e3, .a=0x36, .x=0x2b, .y=0x62, .sp=0x8e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x53e3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x53e4, .a=0x36, .x=0x2c, .y=0x62, .sp=0x8e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x36}, {.addr=0x53e3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x53e3, .value=0xaf, .type=IO_READ},
        {.addr=0x53e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x36, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0096) {
    const struct CPU_State initial_cpu = {.pc=0x6f55, .a=0xa4, .x=0x61, .y=0x7e, .sp=0xf2, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x00}, {.addr=0x6f55, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6f56, .a=0xa4, .x=0x62, .y=0x7e, .sp=0xf2, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0xa4}, {.addr=0x6f55, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6f55, .value=0xaf, .type=IO_READ},
        {.addr=0x6f56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0061, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0097) {
    const struct CPU_State initial_cpu = {.pc=0x5d56, .a=0xdc, .x=0x24, .y=0x1a, .sp=0x10, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x5d56, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5d57, .a=0xdc, .x=0x25, .y=0x1a, .sp=0x10, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xdc}, {.addr=0x5d56, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5d56, .value=0xaf, .type=IO_READ},
        {.addr=0x5d57, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0xdc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0098) {
    const struct CPU_State initial_cpu = {.pc=0xf58a, .a=0xaf, .x=0xe1, .y=0xc9, .sp=0x7e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0xf58a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf58b, .a=0xaf, .x=0xe2, .y=0xc9, .sp=0x7e, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xaf}, {.addr=0xf58a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf58a, .value=0xaf, .type=IO_READ},
        {.addr=0xf58b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_009A) {
    const struct CPU_State initial_cpu = {.pc=0xdf84, .a=0x15, .x=0x63, .y=0xa8, .sp=0xc5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0xdf84, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdf85, .a=0x15, .x=0x64, .y=0xa8, .sp=0xc5, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x15}, {.addr=0xdf84, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdf84, .value=0xaf, .type=IO_READ},
        {.addr=0xdf85, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x15, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_009B) {
    const struct CPU_State initial_cpu = {.pc=0x944e, .a=0x29, .x=0xb3, .y=0x1b, .sp=0x7e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x00}, {.addr=0x944e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x944f, .a=0x29, .x=0xb4, .y=0x1b, .sp=0x7e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x29}, {.addr=0x944e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x944e, .value=0xaf, .type=IO_READ},
        {.addr=0x944f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b3, .value=0x29, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_009C) {
    const struct CPU_State initial_cpu = {.pc=0xcb0f, .a=0xf4, .x=0xab, .y=0x39, .sp=0xae, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x00}, {.addr=0xcb0f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcb10, .a=0xf4, .x=0xac, .y=0x39, .sp=0xae, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xf4}, {.addr=0xcb0f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcb0f, .value=0xaf, .type=IO_READ},
        {.addr=0xcb10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ab, .value=0xf4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_009D) {
    const struct CPU_State initial_cpu = {.pc=0xceb6, .a=0x3a, .x=0x1b, .y=0x2f, .sp=0x54, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0xceb6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xceb7, .a=0x3a, .x=0x1c, .y=0x2f, .sp=0x54, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x3a}, {.addr=0xceb6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xceb6, .value=0xaf, .type=IO_READ},
        {.addr=0xceb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0x3a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_009E) {
    const struct CPU_State initial_cpu = {.pc=0x4806, .a=0xab, .x=0x22, .y=0x5f, .sp=0x3c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x4806, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4807, .a=0xab, .x=0x23, .y=0x5f, .sp=0x3c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xab}, {.addr=0x4806, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4806, .value=0xaf, .type=IO_READ},
        {.addr=0x4807, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_009F) {
    const struct CPU_State initial_cpu = {.pc=0xd6b3, .a=0x9a, .x=0xb3, .y=0x63, .sp=0x81, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0xd6b3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd6b4, .a=0x9a, .x=0xb4, .y=0x63, .sp=0x81, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x9a}, {.addr=0xd6b3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd6b3, .value=0xaf, .type=IO_READ},
        {.addr=0xd6b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x64f8, .a=0xce, .x=0xcf, .y=0x00, .sp=0x73, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x00}, {.addr=0x64f8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x64f9, .a=0xce, .x=0xd0, .y=0x00, .sp=0x73, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0xce}, {.addr=0x64f8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x64f8, .value=0xaf, .type=IO_READ},
        {.addr=0x64f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00cf, .value=0xce, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x4116, .a=0xaf, .x=0x94, .y=0x7b, .sp=0x60, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x4116, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4117, .a=0xaf, .x=0x95, .y=0x7b, .sp=0x60, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xaf}, {.addr=0x4116, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4116, .value=0xaf, .type=IO_READ},
        {.addr=0x4117, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0194, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xe14b, .a=0x8f, .x=0xbb, .y=0x3b, .sp=0x42, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x00}, {.addr=0xe14b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe14c, .a=0x8f, .x=0xbc, .y=0x3b, .sp=0x42, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x8f}, {.addr=0xe14b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe14b, .value=0xaf, .type=IO_READ},
        {.addr=0xe14c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00bb, .value=0x8f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x6ca6, .a=0x2b, .x=0xa6, .y=0xf2, .sp=0x53, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0x6ca6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6ca7, .a=0x2b, .x=0xa7, .y=0xf2, .sp=0x53, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x2b}, {.addr=0x6ca6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6ca6, .value=0xaf, .type=IO_READ},
        {.addr=0x6ca7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0x2b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x4f99, .a=0x3d, .x=0x4c, .y=0x2c, .sp=0x21, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x00}, {.addr=0x4f99, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4f9a, .a=0x3d, .x=0x4d, .y=0x2c, .sp=0x21, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0x3d}, {.addr=0x4f99, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4f99, .value=0xaf, .type=IO_READ},
        {.addr=0x4f9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004c, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x7624, .a=0xd6, .x=0xd3, .y=0x7b, .sp=0x98, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x00}, {.addr=0x7624, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7625, .a=0xd6, .x=0xd4, .y=0x7b, .sp=0x98, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xd6}, {.addr=0x7624, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7624, .value=0xaf, .type=IO_READ},
        {.addr=0x7625, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d3, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x7095, .a=0xda, .x=0x3f, .y=0x5c, .sp=0x15, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x00}, {.addr=0x7095, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7096, .a=0xda, .x=0x40, .y=0x5c, .sp=0x15, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xda}, {.addr=0x7095, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7095, .value=0xaf, .type=IO_READ},
        {.addr=0x7096, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003f, .value=0xda, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x9216, .a=0x84, .x=0xaf, .y=0xe0, .sp=0x7e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x9216, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9217, .a=0x84, .x=0xb0, .y=0xe0, .sp=0x7e, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x84}, {.addr=0x9216, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9216, .value=0xaf, .type=IO_READ},
        {.addr=0x9217, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x1300, .a=0xe1, .x=0x01, .y=0x7f, .sp=0x29, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0x1300, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1301, .a=0xe1, .x=0x02, .y=0x7f, .sp=0x29, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xe1}, {.addr=0x1300, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1300, .value=0xaf, .type=IO_READ},
        {.addr=0x1301, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xba0e, .a=0xb4, .x=0x3a, .y=0xd0, .sp=0xaf, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0xba0e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xba0f, .a=0xb4, .x=0x3b, .y=0xd0, .sp=0xaf, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xb4}, {.addr=0xba0e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xba0e, .value=0xaf, .type=IO_READ},
        {.addr=0xba0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xf9a6, .a=0x32, .x=0x08, .y=0x7b, .sp=0x9e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xf9a6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf9a7, .a=0x32, .x=0x09, .y=0x7b, .sp=0x9e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x32}, {.addr=0xf9a6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf9a6, .value=0xaf, .type=IO_READ},
        {.addr=0xf9a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x3922, .a=0x69, .x=0xb3, .y=0x26, .sp=0xaa, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x3922, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3923, .a=0x69, .x=0xb4, .y=0x26, .sp=0xaa, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x69}, {.addr=0x3922, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3922, .value=0xaf, .type=IO_READ},
        {.addr=0x3923, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0x69, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xe20e, .a=0xa3, .x=0x1f, .y=0x57, .sp=0x19, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x00}, {.addr=0xe20e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe20f, .a=0xa3, .x=0x20, .y=0x57, .sp=0x19, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0xa3}, {.addr=0xe20e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe20e, .value=0xaf, .type=IO_READ},
        {.addr=0xe20f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x001f, .value=0xa3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xe88f, .a=0x48, .x=0x0f, .y=0x4d, .sp=0x33, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0xe88f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe890, .a=0x48, .x=0x10, .y=0x4d, .sp=0x33, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x48}, {.addr=0xe88f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe88f, .value=0xaf, .type=IO_READ},
        {.addr=0xe890, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xfb64, .a=0x4a, .x=0x3c, .y=0x5d, .sp=0x1f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xfb64, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfb65, .a=0x4a, .x=0x3d, .y=0x5d, .sp=0x1f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x4a}, {.addr=0xfb64, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfb64, .value=0xaf, .type=IO_READ},
        {.addr=0xfb65, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x4a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x930f, .a=0xa0, .x=0x76, .y=0x17, .sp=0x98, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x00}, {.addr=0x930f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9310, .a=0xa0, .x=0x77, .y=0x17, .sp=0x98, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xa0}, {.addr=0x930f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x930f, .value=0xaf, .type=IO_READ},
        {.addr=0x9310, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0076, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xf4ea, .a=0x2a, .x=0x12, .y=0x06, .sp=0x35, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xf4ea, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf4eb, .a=0x2a, .x=0x13, .y=0x06, .sp=0x35, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x2a}, {.addr=0xf4ea, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf4ea, .value=0xaf, .type=IO_READ},
        {.addr=0xf4eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0112, .value=0x2a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xd695, .a=0x4e, .x=0x6d, .y=0xf5, .sp=0x42, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0xd695, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd696, .a=0x4e, .x=0x6e, .y=0xf5, .sp=0x42, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x4e}, {.addr=0xd695, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd695, .value=0xaf, .type=IO_READ},
        {.addr=0xd696, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016d, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xf50f, .a=0x1e, .x=0x00, .y=0xb6, .sp=0x05, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x00}, {.addr=0xf50f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf510, .a=0x1e, .x=0x01, .y=0xb6, .sp=0x05, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x1e}, {.addr=0xf50f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf50f, .value=0xaf, .type=IO_READ},
        {.addr=0xf510, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0000, .value=0x1e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x6e48, .a=0xde, .x=0xcb, .y=0xd7, .sp=0x2c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0x6e48, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6e49, .a=0xde, .x=0xcc, .y=0xd7, .sp=0x2c, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xde}, {.addr=0x6e48, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6e48, .value=0xaf, .type=IO_READ},
        {.addr=0x6e49, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0xde, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xf11a, .a=0x7b, .x=0x55, .y=0x7e, .sp=0x92, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xf11a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf11b, .a=0x7b, .x=0x56, .y=0x7e, .sp=0x92, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x7b}, {.addr=0xf11a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf11a, .value=0xaf, .type=IO_READ},
        {.addr=0xf11b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x7b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x4fd5, .a=0xe0, .x=0x47, .y=0xe3, .sp=0xc9, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x4fd5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4fd6, .a=0xe0, .x=0x48, .y=0xe3, .sp=0xc9, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xe0}, {.addr=0x4fd5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4fd5, .value=0xaf, .type=IO_READ},
        {.addr=0x4fd6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0xe0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x73ea, .a=0x5e, .x=0x49, .y=0x5d, .sp=0x00, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x00}, {.addr=0x73ea, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x73eb, .a=0x5e, .x=0x4a, .y=0x5d, .sp=0x00, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x5e}, {.addr=0x73ea, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x73ea, .value=0xaf, .type=IO_READ},
        {.addr=0x73eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0049, .value=0x5e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x1380, .a=0x08, .x=0x4e, .y=0x6d, .sp=0xb0, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x00}, {.addr=0x1380, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1381, .a=0x08, .x=0x4f, .y=0x6d, .sp=0xb0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x08}, {.addr=0x1380, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1380, .value=0xaf, .type=IO_READ},
        {.addr=0x1381, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004e, .value=0x08, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xd059, .a=0x8c, .x=0x4a, .y=0xf2, .sp=0x5a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x00}, {.addr=0xd059, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd05a, .a=0x8c, .x=0x4b, .y=0xf2, .sp=0x5a, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x8c}, {.addr=0xd059, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd059, .value=0xaf, .type=IO_READ},
        {.addr=0xd05a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004a, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xdb62, .a=0xe1, .x=0x7a, .y=0xcf, .sp=0x26, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xdb62, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdb63, .a=0xe1, .x=0x7b, .y=0xcf, .sp=0x26, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xe1}, {.addr=0xdb62, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdb62, .value=0xaf, .type=IO_READ},
        {.addr=0xdb63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x34c8, .a=0xc5, .x=0x8a, .y=0xc0, .sp=0xbc, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x00}, {.addr=0x34c8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x34c9, .a=0xc5, .x=0x8b, .y=0xc0, .sp=0xbc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xc5}, {.addr=0x34c8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x34c8, .value=0xaf, .type=IO_READ},
        {.addr=0x34c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x008a, .value=0xc5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x6df6, .a=0x50, .x=0x32, .y=0xcf, .sp=0x81, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x00}, {.addr=0x6df6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6df7, .a=0x50, .x=0x33, .y=0xcf, .sp=0x81, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x50}, {.addr=0x6df6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6df6, .value=0xaf, .type=IO_READ},
        {.addr=0x6df7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0032, .value=0x50, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xeb26, .a=0xc1, .x=0x66, .y=0x56, .sp=0xbd, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x00}, {.addr=0xeb26, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xeb27, .a=0xc1, .x=0x67, .y=0x56, .sp=0xbd, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0xc1}, {.addr=0xeb26, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xeb26, .value=0xaf, .type=IO_READ},
        {.addr=0xeb27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0066, .value=0xc1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x7ba6, .a=0xbe, .x=0xfd, .y=0xbc, .sp=0xf5, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x7ba6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7ba7, .a=0xbe, .x=0xfe, .y=0xbc, .sp=0xf5, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xbe}, {.addr=0x7ba6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7ba6, .value=0xaf, .type=IO_READ},
        {.addr=0x7ba7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0xbe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xb838, .a=0xbe, .x=0xc4, .y=0x88, .sp=0x27, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x00}, {.addr=0xb838, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb839, .a=0xbe, .x=0xc5, .y=0x88, .sp=0x27, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0xbe}, {.addr=0xb838, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb838, .value=0xaf, .type=IO_READ},
        {.addr=0xb839, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c4, .value=0xbe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x845f, .a=0x2d, .x=0x91, .y=0x23, .sp=0xa6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0x00}, {.addr=0x845f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8460, .a=0x2d, .x=0x92, .y=0x23, .sp=0xa6, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0x2d}, {.addr=0x845f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x845f, .value=0xaf, .type=IO_READ},
        {.addr=0x8460, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0091, .value=0x2d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x3c22, .a=0x7c, .x=0x9d, .y=0x6e, .sp=0x03, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x00}, {.addr=0x3c22, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3c23, .a=0x7c, .x=0x9e, .y=0x6e, .sp=0x03, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x7c}, {.addr=0x3c22, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3c22, .value=0xaf, .type=IO_READ},
        {.addr=0x3c23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009d, .value=0x7c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x8122, .a=0xe8, .x=0x17, .y=0x45, .sp=0xba, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x00}, {.addr=0x8122, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8123, .a=0xe8, .x=0x18, .y=0x45, .sp=0xba, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xe8}, {.addr=0x8122, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8122, .value=0xaf, .type=IO_READ},
        {.addr=0x8123, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0017, .value=0xe8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xa44c, .a=0x1f, .x=0x84, .y=0xfe, .sp=0x96, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x00}, {.addr=0xa44c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa44d, .a=0x1f, .x=0x85, .y=0xfe, .sp=0x96, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x1f}, {.addr=0xa44c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa44c, .value=0xaf, .type=IO_READ},
        {.addr=0xa44d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0084, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x78b1, .a=0xfe, .x=0xb7, .y=0x5d, .sp=0xca, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x00}, {.addr=0x78b1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x78b2, .a=0xfe, .x=0xb8, .y=0x5d, .sp=0xca, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0xfe}, {.addr=0x78b1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x78b1, .value=0xaf, .type=IO_READ},
        {.addr=0x78b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b7, .value=0xfe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x7785, .a=0x43, .x=0x0d, .y=0xc0, .sp=0xc4, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x00}, {.addr=0x7785, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7786, .a=0x43, .x=0x0e, .y=0xc0, .sp=0xc4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x43}, {.addr=0x7785, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7785, .value=0xaf, .type=IO_READ},
        {.addr=0x7786, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x43, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xecad, .a=0xdb, .x=0x7a, .y=0x0b, .sp=0x9c, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xecad, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xecae, .a=0xdb, .x=0x7b, .y=0x0b, .sp=0x9c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xdb}, {.addr=0xecad, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xecad, .value=0xaf, .type=IO_READ},
        {.addr=0xecae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0xdb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x5a57, .a=0x56, .x=0x5b, .y=0xc3, .sp=0xf6, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x00}, {.addr=0x5a57, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5a58, .a=0x56, .x=0x5c, .y=0xc3, .sp=0xf6, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x56}, {.addr=0x5a57, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5a57, .value=0xaf, .type=IO_READ},
        {.addr=0x5a58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005b, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x0edd, .a=0x4b, .x=0x99, .y=0xef, .sp=0x16, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x0edd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0ede, .a=0x4b, .x=0x9a, .y=0xef, .sp=0x16, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x4b}, {.addr=0x0edd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0edd, .value=0xaf, .type=IO_READ},
        {.addr=0x0ede, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x4b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xc4b5, .a=0x36, .x=0x9c, .y=0x5c, .sp=0xc1, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0xc4b5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc4b6, .a=0x36, .x=0x9d, .y=0x5c, .sp=0xc1, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x36}, {.addr=0xc4b5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc4b5, .value=0xaf, .type=IO_READ},
        {.addr=0xc4b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0x36, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x9103, .a=0xe7, .x=0x62, .y=0x42, .sp=0xe4, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x9103, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9104, .a=0xe7, .x=0x63, .y=0x42, .sp=0xe4, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xe7}, {.addr=0x9103, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9103, .value=0xaf, .type=IO_READ},
        {.addr=0x9104, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x9963, .a=0xb9, .x=0x72, .y=0x88, .sp=0x96, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0x9963, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9964, .a=0xb9, .x=0x73, .y=0x88, .sp=0x96, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xb9}, {.addr=0x9963, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9963, .value=0xaf, .type=IO_READ},
        {.addr=0x9964, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0172, .value=0xb9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xfee3, .a=0x4c, .x=0xe5, .y=0x72, .sp=0xb9, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x00}, {.addr=0xfee3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfee4, .a=0x4c, .x=0xe6, .y=0x72, .sp=0xb9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x4c}, {.addr=0xfee3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfee3, .value=0xaf, .type=IO_READ},
        {.addr=0xfee4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e5, .value=0x4c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x279d, .a=0xc8, .x=0x4d, .y=0xb1, .sp=0xbe, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0x279d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x279e, .a=0xc8, .x=0x4e, .y=0xb1, .sp=0xbe, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xc8}, {.addr=0x279d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x279d, .value=0xaf, .type=IO_READ},
        {.addr=0x279e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0xc8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x2415, .a=0x07, .x=0xac, .y=0x3a, .sp=0xbe, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x00}, {.addr=0x2415, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2416, .a=0x07, .x=0xad, .y=0x3a, .sp=0xbe, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x07}, {.addr=0x2415, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2415, .value=0xaf, .type=IO_READ},
        {.addr=0x2416, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ac, .value=0x07, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xad87, .a=0x7a, .x=0x56, .y=0xf3, .sp=0xe7, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x00}, {.addr=0xad87, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xad88, .a=0x7a, .x=0x57, .y=0xf3, .sp=0xe7, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x7a}, {.addr=0xad87, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xad87, .value=0xaf, .type=IO_READ},
        {.addr=0xad88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0056, .value=0x7a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x9c71, .a=0xb2, .x=0xd2, .y=0xf6, .sp=0x8a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x00}, {.addr=0x9c71, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9c72, .a=0xb2, .x=0xd3, .y=0xf6, .sp=0x8a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0xb2}, {.addr=0x9c71, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9c71, .value=0xaf, .type=IO_READ},
        {.addr=0x9c72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d2, .value=0xb2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x216e, .a=0x1a, .x=0x2b, .y=0x9d, .sp=0x78, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x216e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x216f, .a=0x1a, .x=0x2c, .y=0x9d, .sp=0x78, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x1a}, {.addr=0x216e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x216e, .value=0xaf, .type=IO_READ},
        {.addr=0x216f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x1a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xbdbc, .a=0x50, .x=0x31, .y=0x24, .sp=0x5f, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0xbdbc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbdbd, .a=0x50, .x=0x32, .y=0x24, .sp=0x5f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x50}, {.addr=0xbdbc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbdbc, .value=0xaf, .type=IO_READ},
        {.addr=0xbdbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0131, .value=0x50, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x09b8, .a=0xaa, .x=0x2e, .y=0x52, .sp=0x11, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x09b8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x09b9, .a=0xaa, .x=0x2f, .y=0x52, .sp=0x11, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xaa}, {.addr=0x09b8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x09b8, .value=0xaf, .type=IO_READ},
        {.addr=0x09b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xaa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xf7b7, .a=0x7d, .x=0x43, .y=0xbc, .sp=0xe9, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x00}, {.addr=0xf7b7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf7b8, .a=0x7d, .x=0x44, .y=0xbc, .sp=0xe9, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x7d}, {.addr=0xf7b7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf7b7, .value=0xaf, .type=IO_READ},
        {.addr=0xf7b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0043, .value=0x7d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x0d9e, .a=0x4f, .x=0x6b, .y=0xc7, .sp=0x8d, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x00}, {.addr=0x0d9e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0d9f, .a=0x4f, .x=0x6c, .y=0xc7, .sp=0x8d, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x4f}, {.addr=0x0d9e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0d9e, .value=0xaf, .type=IO_READ},
        {.addr=0x0d9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006b, .value=0x4f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x1e91, .a=0x0d, .x=0x21, .y=0x57, .sp=0x9f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x00}, {.addr=0x1e91, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1e92, .a=0x0d, .x=0x22, .y=0x57, .sp=0x9f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x0d}, {.addr=0x1e91, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1e91, .value=0xaf, .type=IO_READ},
        {.addr=0x1e92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0021, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x4e75, .a=0xa4, .x=0x1e, .y=0xfd, .sp=0x90, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0x00}, {.addr=0x4e75, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4e76, .a=0xa4, .x=0x1f, .y=0xfd, .sp=0x90, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xa4}, {.addr=0x4e75, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4e75, .value=0xaf, .type=IO_READ},
        {.addr=0x4e76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x001e, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x2409, .a=0x14, .x=0xf6, .y=0x31, .sp=0x0b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0x2409, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x240a, .a=0x14, .x=0xf7, .y=0x31, .sp=0x0b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x14}, {.addr=0x2409, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2409, .value=0xaf, .type=IO_READ},
        {.addr=0x240a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0x14, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xe6d9, .a=0xaa, .x=0xf5, .y=0x7b, .sp=0x02, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0xe6d9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe6da, .a=0xaa, .x=0xf6, .y=0x7b, .sp=0x02, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xaa}, {.addr=0xe6d9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe6d9, .value=0xaf, .type=IO_READ},
        {.addr=0xe6da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xaa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xcc20, .a=0xed, .x=0xae, .y=0x5c, .sp=0x9c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x00}, {.addr=0xcc20, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcc21, .a=0xed, .x=0xaf, .y=0x5c, .sp=0x9c, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0xed}, {.addr=0xcc20, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcc20, .value=0xaf, .type=IO_READ},
        {.addr=0xcc21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ae, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x37a1, .a=0x17, .x=0x76, .y=0x28, .sp=0x52, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0x37a1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x37a2, .a=0x17, .x=0x77, .y=0x28, .sp=0x52, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x17}, {.addr=0x37a1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x37a1, .value=0xaf, .type=IO_READ},
        {.addr=0x37a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x17, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x0a87, .a=0xb6, .x=0x00, .y=0xa3, .sp=0x34, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x00}, {.addr=0x0a87, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0a88, .a=0xb6, .x=0x01, .y=0xa3, .sp=0x34, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0xb6}, {.addr=0x0a87, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0a87, .value=0xaf, .type=IO_READ},
        {.addr=0x0a88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0000, .value=0xb6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x7318, .a=0x03, .x=0x99, .y=0xe3, .sp=0x0c, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x7318, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7319, .a=0x03, .x=0x9a, .y=0xe3, .sp=0x0c, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x03}, {.addr=0x7318, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7318, .value=0xaf, .type=IO_READ},
        {.addr=0x7319, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x94a2, .a=0xa3, .x=0x00, .y=0x80, .sp=0x06, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x94a2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x94a3, .a=0xa3, .x=0x01, .y=0x80, .sp=0x06, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xa3}, {.addr=0x94a2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x94a2, .value=0xaf, .type=IO_READ},
        {.addr=0x94a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0100, .value=0xa3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x7411, .a=0x20, .x=0x0d, .y=0x1c, .sp=0x75, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0x7411, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7412, .a=0x20, .x=0x0e, .y=0x1c, .sp=0x75, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x20}, {.addr=0x7411, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7411, .value=0xaf, .type=IO_READ},
        {.addr=0x7412, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000d, .value=0x20, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x7f97, .a=0x5d, .x=0x52, .y=0xdc, .sp=0x94, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x7f97, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7f98, .a=0x5d, .x=0x53, .y=0xdc, .sp=0x94, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x5d}, {.addr=0x7f97, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7f97, .value=0xaf, .type=IO_READ},
        {.addr=0x7f98, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0x5d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xd38c, .a=0x31, .x=0x92, .y=0x94, .sp=0x70, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x00}, {.addr=0xd38c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd38d, .a=0x31, .x=0x93, .y=0x94, .sp=0x70, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x31}, {.addr=0xd38c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd38c, .value=0xaf, .type=IO_READ},
        {.addr=0xd38d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0092, .value=0x31, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x03d0, .a=0x50, .x=0xd1, .y=0xa0, .sp=0x17, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x03d0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x03d1, .a=0x50, .x=0xd2, .y=0xa0, .sp=0x17, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x50}, {.addr=0x03d0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x03d0, .value=0xaf, .type=IO_READ},
        {.addr=0x03d1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x50, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xcd50, .a=0xc0, .x=0xaf, .y=0x28, .sp=0x2e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0xcd50, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcd51, .a=0xc0, .x=0xb0, .y=0x28, .sp=0x2e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xc0}, {.addr=0xcd50, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcd50, .value=0xaf, .type=IO_READ},
        {.addr=0xcd51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0xc0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xa3c6, .a=0xdb, .x=0xd2, .y=0x05, .sp=0x12, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0xa3c6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa3c7, .a=0xdb, .x=0xd3, .y=0x05, .sp=0x12, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xdb}, {.addr=0xa3c6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa3c6, .value=0xaf, .type=IO_READ},
        {.addr=0xa3c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d2, .value=0xdb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xfa14, .a=0xdb, .x=0x0c, .y=0x92, .sp=0x47, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0xfa14, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfa15, .a=0xdb, .x=0x0d, .y=0x92, .sp=0x47, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xdb}, {.addr=0xfa14, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfa14, .value=0xaf, .type=IO_READ},
        {.addr=0xfa15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010c, .value=0xdb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x08d9, .a=0xee, .x=0xff, .y=0xd4, .sp=0x89, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x08d9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x08da, .a=0xee, .x=0x00, .y=0xd4, .sp=0x89, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xee}, {.addr=0x08d9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x08d9, .value=0xaf, .type=IO_READ},
        {.addr=0x08da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x837a, .a=0x8e, .x=0xbd, .y=0xaf, .sp=0xf8, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x00}, {.addr=0x837a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x837b, .a=0x8e, .x=0xbe, .y=0xaf, .sp=0xf8, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x8e}, {.addr=0x837a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x837a, .value=0xaf, .type=IO_READ},
        {.addr=0x837b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00bd, .value=0x8e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xfce6, .a=0x28, .x=0x80, .y=0x36, .sp=0x19, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x00}, {.addr=0xfce6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfce7, .a=0x28, .x=0x81, .y=0x36, .sp=0x19, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0x28}, {.addr=0xfce6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfce6, .value=0xaf, .type=IO_READ},
        {.addr=0xfce7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0080, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x9955, .a=0xf5, .x=0xa7, .y=0x0b, .sp=0x21, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x00}, {.addr=0x9955, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9956, .a=0xf5, .x=0xa8, .y=0x0b, .sp=0x21, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0xf5}, {.addr=0x9955, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9955, .value=0xaf, .type=IO_READ},
        {.addr=0x9956, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a7, .value=0xf5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x8711, .a=0xee, .x=0x29, .y=0x4c, .sp=0xf2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x00}, {.addr=0x8711, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8712, .a=0xee, .x=0x2a, .y=0x4c, .sp=0xf2, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0xee}, {.addr=0x8711, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8711, .value=0xaf, .type=IO_READ},
        {.addr=0x8712, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0029, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xf029, .a=0x9e, .x=0xe4, .y=0x2e, .sp=0xf9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0xf029, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf02a, .a=0x9e, .x=0xe5, .y=0x2e, .sp=0xf9, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x9e}, {.addr=0xf029, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf029, .value=0xaf, .type=IO_READ},
        {.addr=0xf02a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e4, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x3d4b, .a=0xac, .x=0x7a, .y=0x56, .sp=0x5b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x3d4b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3d4c, .a=0xac, .x=0x7b, .y=0x56, .sp=0x5b, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xac}, {.addr=0x3d4b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3d4b, .value=0xaf, .type=IO_READ},
        {.addr=0x3d4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xb0a3, .a=0x79, .x=0xce, .y=0xcb, .sp=0xeb, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0xb0a3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb0a4, .a=0x79, .x=0xcf, .y=0xcb, .sp=0xeb, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x79}, {.addr=0xb0a3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb0a3, .value=0xaf, .type=IO_READ},
        {.addr=0xb0a4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x79, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x67ac, .a=0x39, .x=0x09, .y=0x46, .sp=0x32, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x67ac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x67ad, .a=0x39, .x=0x0a, .y=0x46, .sp=0x32, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x39}, {.addr=0x67ac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x67ac, .value=0xaf, .type=IO_READ},
        {.addr=0x67ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x39, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xb8fd, .a=0xf5, .x=0x28, .y=0xf7, .sp=0x33, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x00}, {.addr=0xb8fd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb8fe, .a=0xf5, .x=0x29, .y=0xf7, .sp=0x33, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xf5}, {.addr=0xb8fd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb8fd, .value=0xaf, .type=IO_READ},
        {.addr=0xb8fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0028, .value=0xf5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x9b85, .a=0xd6, .x=0x5a, .y=0x42, .sp=0x51, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x00}, {.addr=0x9b85, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9b86, .a=0xd6, .x=0x5b, .y=0x42, .sp=0x51, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0xd6}, {.addr=0x9b85, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9b85, .value=0xaf, .type=IO_READ},
        {.addr=0x9b86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005a, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x42c0, .a=0xeb, .x=0xee, .y=0x31, .sp=0x84, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x42c0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x42c1, .a=0xeb, .x=0xef, .y=0x31, .sp=0x84, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xeb}, {.addr=0x42c0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x42c0, .value=0xaf, .type=IO_READ},
        {.addr=0x42c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0xeb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x2dba, .a=0xaf, .x=0x8c, .y=0x5d, .sp=0x89, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x2dba, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2dbb, .a=0xaf, .x=0x8d, .y=0x5d, .sp=0x89, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xaf}, {.addr=0x2dba, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2dba, .value=0xaf, .type=IO_READ},
        {.addr=0x2dbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xca98, .a=0xca, .x=0xa6, .y=0xf1, .sp=0x37, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x00}, {.addr=0xca98, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xca99, .a=0xca, .x=0xa7, .y=0xf1, .sp=0x37, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0xca}, {.addr=0xca98, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xca98, .value=0xaf, .type=IO_READ},
        {.addr=0xca99, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a6, .value=0xca, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x76fc, .a=0xb2, .x=0xed, .y=0x0a, .sp=0x34, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0x76fc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x76fd, .a=0xb2, .x=0xee, .y=0x0a, .sp=0x34, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xb2}, {.addr=0x76fc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x76fc, .value=0xaf, .type=IO_READ},
        {.addr=0x76fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0xb2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x6895, .a=0xa1, .x=0x8f, .y=0x75, .sp=0xcc, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x00}, {.addr=0x6895, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6896, .a=0xa1, .x=0x90, .y=0x75, .sp=0xcc, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xa1}, {.addr=0x6895, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6895, .value=0xaf, .type=IO_READ},
        {.addr=0x6896, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x008f, .value=0xa1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x2f69, .a=0x59, .x=0x2d, .y=0x82, .sp=0xc2, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x00}, {.addr=0x2f69, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2f6a, .a=0x59, .x=0x2e, .y=0x82, .sp=0xc2, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x59}, {.addr=0x2f69, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2f69, .value=0xaf, .type=IO_READ},
        {.addr=0x2f6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002d, .value=0x59, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xf433, .a=0x63, .x=0x0f, .y=0xfe, .sp=0xc3, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x00}, {.addr=0xf433, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf434, .a=0x63, .x=0x10, .y=0xfe, .sp=0xc3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x63}, {.addr=0xf433, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf433, .value=0xaf, .type=IO_READ},
        {.addr=0xf434, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000f, .value=0x63, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x7324, .a=0x94, .x=0x74, .y=0xab, .sp=0x41, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x7324, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7325, .a=0x94, .x=0x75, .y=0xab, .sp=0x41, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x94}, {.addr=0x7324, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7324, .value=0xaf, .type=IO_READ},
        {.addr=0x7325, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xe787, .a=0x32, .x=0x3a, .y=0x5f, .sp=0x89, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0xe787, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe788, .a=0x32, .x=0x3b, .y=0x5f, .sp=0x89, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x32}, {.addr=0xe787, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe787, .value=0xaf, .type=IO_READ},
        {.addr=0xe788, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x6d45, .a=0xdd, .x=0x21, .y=0x57, .sp=0xe4, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x6d45, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6d46, .a=0xdd, .x=0x22, .y=0x57, .sp=0xe4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xdd}, {.addr=0x6d45, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6d45, .value=0xaf, .type=IO_READ},
        {.addr=0x6d46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xa33a, .a=0x3d, .x=0x09, .y=0x97, .sp=0x57, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x00}, {.addr=0xa33a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa33b, .a=0x3d, .x=0x0a, .y=0x97, .sp=0x57, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x3d}, {.addr=0xa33a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa33a, .value=0xaf, .type=IO_READ},
        {.addr=0xa33b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0009, .value=0x3d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xdf23, .a=0x93, .x=0x2a, .y=0xcf, .sp=0x97, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x00}, {.addr=0xdf23, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdf24, .a=0x93, .x=0x2b, .y=0xcf, .sp=0x97, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x93}, {.addr=0xdf23, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdf23, .value=0xaf, .type=IO_READ},
        {.addr=0xdf24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002a, .value=0x93, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x9231, .a=0x6a, .x=0x4e, .y=0x5f, .sp=0xa0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x00}, {.addr=0x9231, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9232, .a=0x6a, .x=0x4f, .y=0x5f, .sp=0xa0, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x6a}, {.addr=0x9231, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9231, .value=0xaf, .type=IO_READ},
        {.addr=0x9232, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004e, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0100) {
    const struct CPU_State initial_cpu = {.pc=0xcde9, .a=0x86, .x=0xbf, .y=0x74, .sp=0xd0, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0xcde9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcdea, .a=0x86, .x=0xc0, .y=0x74, .sp=0xd0, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x86}, {.addr=0xcde9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcde9, .value=0xaf, .type=IO_READ},
        {.addr=0xcdea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bf, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0101) {
    const struct CPU_State initial_cpu = {.pc=0x62a4, .a=0x56, .x=0x05, .y=0xc0, .sp=0x8c, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x00}, {.addr=0x62a4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x62a5, .a=0x56, .x=0x06, .y=0xc0, .sp=0x8c, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x56}, {.addr=0x62a4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x62a4, .value=0xaf, .type=IO_READ},
        {.addr=0x62a5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0005, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0102) {
    const struct CPU_State initial_cpu = {.pc=0x4b0f, .a=0xcf, .x=0x33, .y=0xd0, .sp=0xc9, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x4b0f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4b10, .a=0xcf, .x=0x34, .y=0xd0, .sp=0xc9, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xcf}, {.addr=0x4b0f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4b0f, .value=0xaf, .type=IO_READ},
        {.addr=0x4b10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xcf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0103) {
    const struct CPU_State initial_cpu = {.pc=0xf8e3, .a=0x24, .x=0x68, .y=0xa9, .sp=0x83, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0xf8e3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf8e4, .a=0x24, .x=0x69, .y=0xa9, .sp=0x83, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x24}, {.addr=0xf8e3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf8e3, .value=0xaf, .type=IO_READ},
        {.addr=0xf8e4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0104) {
    const struct CPU_State initial_cpu = {.pc=0xa7d4, .a=0xfd, .x=0xd9, .y=0x14, .sp=0xdb, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xa7d4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa7d5, .a=0xfd, .x=0xda, .y=0x14, .sp=0xdb, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xfd}, {.addr=0xa7d4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa7d4, .value=0xaf, .type=IO_READ},
        {.addr=0xa7d5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d9, .value=0xfd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0105) {
    const struct CPU_State initial_cpu = {.pc=0x1533, .a=0x81, .x=0x83, .y=0x90, .sp=0xb8, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x1533, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1534, .a=0x81, .x=0x84, .y=0x90, .sp=0xb8, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x81}, {.addr=0x1533, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1533, .value=0xaf, .type=IO_READ},
        {.addr=0x1534, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0183, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0106) {
    const struct CPU_State initial_cpu = {.pc=0x6ef0, .a=0x42, .x=0x80, .y=0x23, .sp=0x5c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x00}, {.addr=0x6ef0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6ef1, .a=0x42, .x=0x81, .y=0x23, .sp=0x5c, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0x42}, {.addr=0x6ef0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6ef0, .value=0xaf, .type=IO_READ},
        {.addr=0x6ef1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0080, .value=0x42, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0107) {
    const struct CPU_State initial_cpu = {.pc=0x4dfe, .a=0x35, .x=0xfb, .y=0x0d, .sp=0x88, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x4dfe, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4dff, .a=0x35, .x=0xfc, .y=0x0d, .sp=0x88, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x35}, {.addr=0x4dfe, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4dfe, .value=0xaf, .type=IO_READ},
        {.addr=0x4dff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0x35, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0108) {
    const struct CPU_State initial_cpu = {.pc=0xf4ab, .a=0xe2, .x=0x1d, .y=0xd2, .sp=0x4a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0xf4ab, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf4ac, .a=0xe2, .x=0x1e, .y=0xd2, .sp=0x4a, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xe2}, {.addr=0xf4ab, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf4ab, .value=0xaf, .type=IO_READ},
        {.addr=0xf4ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0xe2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0109) {
    const struct CPU_State initial_cpu = {.pc=0x4ea6, .a=0xd9, .x=0xdd, .y=0xdf, .sp=0x76, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0x4ea6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4ea7, .a=0xd9, .x=0xde, .y=0xdf, .sp=0x76, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xd9}, {.addr=0x4ea6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4ea6, .value=0xaf, .type=IO_READ},
        {.addr=0x4ea7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01dd, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_010A) {
    const struct CPU_State initial_cpu = {.pc=0x7d6f, .a=0xb0, .x=0x2b, .y=0xd2, .sp=0xa6, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x00}, {.addr=0x7d6f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7d70, .a=0xb0, .x=0x2c, .y=0xd2, .sp=0xa6, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0xb0}, {.addr=0x7d6f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7d6f, .value=0xaf, .type=IO_READ},
        {.addr=0x7d70, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002b, .value=0xb0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_010B) {
    const struct CPU_State initial_cpu = {.pc=0x8b00, .a=0x06, .x=0xe1, .y=0xbc, .sp=0x10, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x00}, {.addr=0x8b00, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8b01, .a=0x06, .x=0xe2, .y=0xbc, .sp=0x10, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x06}, {.addr=0x8b00, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8b00, .value=0xaf, .type=IO_READ},
        {.addr=0x8b01, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e1, .value=0x06, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_010C) {
    const struct CPU_State initial_cpu = {.pc=0x6aa7, .a=0xbc, .x=0x9f, .y=0xa6, .sp=0x96, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x00}, {.addr=0x6aa7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6aa8, .a=0xbc, .x=0xa0, .y=0xa6, .sp=0x96, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xbc}, {.addr=0x6aa7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6aa7, .value=0xaf, .type=IO_READ},
        {.addr=0x6aa8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009f, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_010E) {
    const struct CPU_State initial_cpu = {.pc=0xbe94, .a=0xd6, .x=0xea, .y=0xe7, .sp=0x8b, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0xbe94, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbe95, .a=0xd6, .x=0xeb, .y=0xe7, .sp=0x8b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xd6}, {.addr=0xbe94, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbe94, .value=0xaf, .type=IO_READ},
        {.addr=0xbe95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_010F) {
    const struct CPU_State initial_cpu = {.pc=0x0a0f, .a=0x11, .x=0x96, .y=0x87, .sp=0x2e, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x0a0f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0a10, .a=0x11, .x=0x97, .y=0x87, .sp=0x2e, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x11}, {.addr=0x0a0f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0a0f, .value=0xaf, .type=IO_READ},
        {.addr=0x0a10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0x11, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0110) {
    const struct CPU_State initial_cpu = {.pc=0x2565, .a=0xcc, .x=0xaf, .y=0xf0, .sp=0x1c, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x00}, {.addr=0x2565, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2566, .a=0xcc, .x=0xb0, .y=0xf0, .sp=0x1c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xcc}, {.addr=0x2565, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2565, .value=0xaf, .type=IO_READ},
        {.addr=0x2566, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00af, .value=0xcc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0111) {
    const struct CPU_State initial_cpu = {.pc=0xbbca, .a=0x53, .x=0xa4, .y=0x88, .sp=0x0e, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x00}, {.addr=0xbbca, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbbcb, .a=0x53, .x=0xa5, .y=0x88, .sp=0x0e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x53}, {.addr=0xbbca, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbbca, .value=0xaf, .type=IO_READ},
        {.addr=0xbbcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a4, .value=0x53, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0112) {
    const struct CPU_State initial_cpu = {.pc=0x5f25, .a=0x91, .x=0xa8, .y=0xcf, .sp=0x37, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x5f25, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5f26, .a=0x91, .x=0xa9, .y=0xcf, .sp=0x37, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x91}, {.addr=0x5f25, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5f25, .value=0xaf, .type=IO_READ},
        {.addr=0x5f26, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0x91, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0113) {
    const struct CPU_State initial_cpu = {.pc=0x657f, .a=0xd5, .x=0x81, .y=0x6a, .sp=0xdc, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x00}, {.addr=0x657f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6580, .a=0xd5, .x=0x82, .y=0x6a, .sp=0xdc, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0xd5}, {.addr=0x657f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x657f, .value=0xaf, .type=IO_READ},
        {.addr=0x6580, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0081, .value=0xd5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0114) {
    const struct CPU_State initial_cpu = {.pc=0x260a, .a=0x3b, .x=0x87, .y=0x3e, .sp=0x06, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x00}, {.addr=0x260a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x260b, .a=0x3b, .x=0x88, .y=0x3e, .sp=0x06, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x3b}, {.addr=0x260a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x260a, .value=0xaf, .type=IO_READ},
        {.addr=0x260b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0087, .value=0x3b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0115) {
    const struct CPU_State initial_cpu = {.pc=0xb884, .a=0x52, .x=0x0a, .y=0x52, .sp=0xfd, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x00}, {.addr=0xb884, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb885, .a=0x52, .x=0x0b, .y=0x52, .sp=0xfd, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x52}, {.addr=0xb884, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb884, .value=0xaf, .type=IO_READ},
        {.addr=0xb885, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000a, .value=0x52, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0116) {
    const struct CPU_State initial_cpu = {.pc=0xd7b8, .a=0x67, .x=0xc8, .y=0xc2, .sp=0xdf, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0xd7b8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd7b9, .a=0x67, .x=0xc9, .y=0xc2, .sp=0xdf, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x67}, {.addr=0xd7b8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd7b8, .value=0xaf, .type=IO_READ},
        {.addr=0xd7b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x67, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0117) {
    const struct CPU_State initial_cpu = {.pc=0x23f7, .a=0x53, .x=0x7c, .y=0x98, .sp=0xbd, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x00}, {.addr=0x23f7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x23f8, .a=0x53, .x=0x7d, .y=0x98, .sp=0xbd, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x53}, {.addr=0x23f7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x23f7, .value=0xaf, .type=IO_READ},
        {.addr=0x23f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007c, .value=0x53, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0118) {
    const struct CPU_State initial_cpu = {.pc=0x7ba9, .a=0x9a, .x=0xe7, .y=0xb8, .sp=0xd4, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x00}, {.addr=0x7ba9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7baa, .a=0x9a, .x=0xe8, .y=0xb8, .sp=0xd4, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x9a}, {.addr=0x7ba9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7ba9, .value=0xaf, .type=IO_READ},
        {.addr=0x7baa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e7, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0119) {
    const struct CPU_State initial_cpu = {.pc=0x0dc0, .a=0xfe, .x=0xa6, .y=0x0f, .sp=0xa6, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0x0dc0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0dc1, .a=0xfe, .x=0xa7, .y=0x0f, .sp=0xa6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xfe}, {.addr=0x0dc0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0dc0, .value=0xaf, .type=IO_READ},
        {.addr=0x0dc1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0xfe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_011A) {
    const struct CPU_State initial_cpu = {.pc=0x6415, .a=0xbc, .x=0xf7, .y=0xd2, .sp=0x67, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x6415, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6416, .a=0xbc, .x=0xf8, .y=0xd2, .sp=0x67, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xbc}, {.addr=0x6415, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6415, .value=0xaf, .type=IO_READ},
        {.addr=0x6416, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_011B) {
    const struct CPU_State initial_cpu = {.pc=0xf518, .a=0xfa, .x=0xd1, .y=0x14, .sp=0x64, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0xf518, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf519, .a=0xfa, .x=0xd2, .y=0x14, .sp=0x64, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xfa}, {.addr=0xf518, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf518, .value=0xaf, .type=IO_READ},
        {.addr=0xf519, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0xfa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_011C) {
    const struct CPU_State initial_cpu = {.pc=0x9b04, .a=0x4e, .x=0x27, .y=0xf7, .sp=0xcc, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x00}, {.addr=0x9b04, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9b05, .a=0x4e, .x=0x28, .y=0xf7, .sp=0xcc, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x4e}, {.addr=0x9b04, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9b04, .value=0xaf, .type=IO_READ},
        {.addr=0x9b05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0027, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_011E) {
    const struct CPU_State initial_cpu = {.pc=0x2a67, .a=0xd2, .x=0xcb, .y=0x62, .sp=0x49, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0x2a67, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2a68, .a=0xd2, .x=0xcc, .y=0x62, .sp=0x49, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xd2}, {.addr=0x2a67, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2a67, .value=0xaf, .type=IO_READ},
        {.addr=0x2a68, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_011F) {
    const struct CPU_State initial_cpu = {.pc=0xe8be, .a=0xcf, .x=0xea, .y=0xad, .sp=0x1e, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x00}, {.addr=0xe8be, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe8bf, .a=0xcf, .x=0xeb, .y=0xad, .sp=0x1e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0xcf}, {.addr=0xe8be, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe8be, .value=0xaf, .type=IO_READ},
        {.addr=0xe8bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ea, .value=0xcf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0120) {
    const struct CPU_State initial_cpu = {.pc=0x6c04, .a=0x94, .x=0xc4, .y=0x5a, .sp=0x8f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x6c04, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6c05, .a=0x94, .x=0xc5, .y=0x5a, .sp=0x8f, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x94}, {.addr=0x6c04, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6c04, .value=0xaf, .type=IO_READ},
        {.addr=0x6c05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0121) {
    const struct CPU_State initial_cpu = {.pc=0x9797, .a=0x17, .x=0xd4, .y=0x1d, .sp=0x51, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x00}, {.addr=0x9797, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9798, .a=0x17, .x=0xd5, .y=0x1d, .sp=0x51, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x17}, {.addr=0x9797, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9797, .value=0xaf, .type=IO_READ},
        {.addr=0x9798, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d4, .value=0x17, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0122) {
    const struct CPU_State initial_cpu = {.pc=0x51fa, .a=0x2e, .x=0x8c, .y=0xa0, .sp=0x41, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x51fa, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x51fb, .a=0x2e, .x=0x8d, .y=0xa0, .sp=0x41, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x2e}, {.addr=0x51fa, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x51fa, .value=0xaf, .type=IO_READ},
        {.addr=0x51fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0123) {
    const struct CPU_State initial_cpu = {.pc=0x7202, .a=0x75, .x=0xca, .y=0x29, .sp=0x6a, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x00}, {.addr=0x7202, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7203, .a=0x75, .x=0xcb, .y=0x29, .sp=0x6a, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x75}, {.addr=0x7202, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7202, .value=0xaf, .type=IO_READ},
        {.addr=0x7203, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ca, .value=0x75, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0124) {
    const struct CPU_State initial_cpu = {.pc=0xbb02, .a=0x7a, .x=0x49, .y=0x5a, .sp=0x45, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x00}, {.addr=0xbb02, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbb03, .a=0x7a, .x=0x4a, .y=0x5a, .sp=0x45, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x7a}, {.addr=0xbb02, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbb02, .value=0xaf, .type=IO_READ},
        {.addr=0xbb03, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0049, .value=0x7a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0125) {
    const struct CPU_State initial_cpu = {.pc=0xb9f9, .a=0xd6, .x=0xbc, .y=0x85, .sp=0x19, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x00}, {.addr=0xb9f9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb9fa, .a=0xd6, .x=0xbd, .y=0x85, .sp=0x19, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0xd6}, {.addr=0xb9f9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb9f9, .value=0xaf, .type=IO_READ},
        {.addr=0xb9fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00bc, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0126) {
    const struct CPU_State initial_cpu = {.pc=0x794d, .a=0xc5, .x=0x32, .y=0x87, .sp=0xa7, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x00}, {.addr=0x794d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x794e, .a=0xc5, .x=0x33, .y=0x87, .sp=0xa7, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0xc5}, {.addr=0x794d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x794d, .value=0xaf, .type=IO_READ},
        {.addr=0x794e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0032, .value=0xc5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0127) {
    const struct CPU_State initial_cpu = {.pc=0xebc6, .a=0x2f, .x=0x55, .y=0x8f, .sp=0x3a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xebc6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xebc7, .a=0x2f, .x=0x56, .y=0x8f, .sp=0x3a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x2f}, {.addr=0xebc6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xebc6, .value=0xaf, .type=IO_READ},
        {.addr=0xebc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x2f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0128) {
    const struct CPU_State initial_cpu = {.pc=0xbffe, .a=0x37, .x=0x03, .y=0xd4, .sp=0x73, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0xbffe, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbfff, .a=0x37, .x=0x04, .y=0xd4, .sp=0x73, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x37}, {.addr=0xbffe, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbffe, .value=0xaf, .type=IO_READ},
        {.addr=0xbfff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0x37, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0129) {
    const struct CPU_State initial_cpu = {.pc=0x26c5, .a=0xa0, .x=0x08, .y=0x97, .sp=0x95, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x00}, {.addr=0x26c5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x26c6, .a=0xa0, .x=0x09, .y=0x97, .sp=0x95, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0xa0}, {.addr=0x26c5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x26c5, .value=0xaf, .type=IO_READ},
        {.addr=0x26c6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0008, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_012A) {
    const struct CPU_State initial_cpu = {.pc=0xf669, .a=0x95, .x=0xa1, .y=0x35, .sp=0x89, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0xf669, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf66a, .a=0x95, .x=0xa2, .y=0x35, .sp=0x89, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x95}, {.addr=0xf669, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf669, .value=0xaf, .type=IO_READ},
        {.addr=0xf66a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_012B) {
    const struct CPU_State initial_cpu = {.pc=0x4185, .a=0xf2, .x=0xa9, .y=0x00, .sp=0x79, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x00}, {.addr=0x4185, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4186, .a=0xf2, .x=0xaa, .y=0x00, .sp=0x79, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xf2}, {.addr=0x4185, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4185, .value=0xaf, .type=IO_READ},
        {.addr=0x4186, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a9, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_012C) {
    const struct CPU_State initial_cpu = {.pc=0xf02f, .a=0x62, .x=0xa6, .y=0x4d, .sp=0x77, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x00}, {.addr=0xf02f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf030, .a=0x62, .x=0xa7, .y=0x4d, .sp=0x77, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x62}, {.addr=0xf02f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf02f, .value=0xaf, .type=IO_READ},
        {.addr=0xf030, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a6, .value=0x62, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_012D) {
    const struct CPU_State initial_cpu = {.pc=0x79be, .a=0xb7, .x=0x7b, .y=0x9b, .sp=0x65, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x00}, {.addr=0x79be, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x79bf, .a=0xb7, .x=0x7c, .y=0x9b, .sp=0x65, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xb7}, {.addr=0x79be, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x79be, .value=0xaf, .type=IO_READ},
        {.addr=0x79bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007b, .value=0xb7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_012E) {
    const struct CPU_State initial_cpu = {.pc=0x2a3f, .a=0x03, .x=0x56, .y=0xbc, .sp=0xb0, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x00}, {.addr=0x2a3f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2a40, .a=0x03, .x=0x57, .y=0xbc, .sp=0xb0, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x03}, {.addr=0x2a3f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2a3f, .value=0xaf, .type=IO_READ},
        {.addr=0x2a40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0056, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_012F) {
    const struct CPU_State initial_cpu = {.pc=0xcbf3, .a=0x8e, .x=0x9d, .y=0x9b, .sp=0x41, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x00}, {.addr=0xcbf3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcbf4, .a=0x8e, .x=0x9e, .y=0x9b, .sp=0x41, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x8e}, {.addr=0xcbf3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcbf3, .value=0xaf, .type=IO_READ},
        {.addr=0xcbf4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009d, .value=0x8e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0130) {
    const struct CPU_State initial_cpu = {.pc=0x566a, .a=0x96, .x=0xff, .y=0xc7, .sp=0x56, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x566a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x566b, .a=0x96, .x=0x00, .y=0xc7, .sp=0x56, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x96}, {.addr=0x566a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x566a, .value=0xaf, .type=IO_READ},
        {.addr=0x566b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0x96, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0131) {
    const struct CPU_State initial_cpu = {.pc=0x2457, .a=0x41, .x=0xa4, .y=0x99, .sp=0xdc, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x00}, {.addr=0x2457, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2458, .a=0x41, .x=0xa5, .y=0x99, .sp=0xdc, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x41}, {.addr=0x2457, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2457, .value=0xaf, .type=IO_READ},
        {.addr=0x2458, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a4, .value=0x41, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0132) {
    const struct CPU_State initial_cpu = {.pc=0x99db, .a=0x94, .x=0x97, .y=0x40, .sp=0xaa, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x00}, {.addr=0x99db, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x99dc, .a=0x94, .x=0x98, .y=0x40, .sp=0xaa, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x94}, {.addr=0x99db, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x99db, .value=0xaf, .type=IO_READ},
        {.addr=0x99dc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0097, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0133) {
    const struct CPU_State initial_cpu = {.pc=0xd8c3, .a=0x2d, .x=0xf4, .y=0x41, .sp=0x36, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0xd8c3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd8c4, .a=0x2d, .x=0xf5, .y=0x41, .sp=0x36, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x2d}, {.addr=0xd8c3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd8c3, .value=0xaf, .type=IO_READ},
        {.addr=0xd8c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x2d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0134) {
    const struct CPU_State initial_cpu = {.pc=0xc6e5, .a=0x63, .x=0x73, .y=0x53, .sp=0x5c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x00}, {.addr=0xc6e5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc6e6, .a=0x63, .x=0x74, .y=0x53, .sp=0x5c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x63}, {.addr=0xc6e5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc6e5, .value=0xaf, .type=IO_READ},
        {.addr=0xc6e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0073, .value=0x63, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0135) {
    const struct CPU_State initial_cpu = {.pc=0xb6ba, .a=0x6a, .x=0xbd, .y=0xf1, .sp=0x2b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0xb6ba, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb6bb, .a=0x6a, .x=0xbe, .y=0xf1, .sp=0x2b, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x6a}, {.addr=0xb6ba, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb6ba, .value=0xaf, .type=IO_READ},
        {.addr=0xb6bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0136) {
    const struct CPU_State initial_cpu = {.pc=0xfeca, .a=0x00, .x=0x47, .y=0xaf, .sp=0x73, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x00}, {.addr=0xfeca, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfecb, .a=0x00, .x=0x48, .y=0xaf, .sp=0x73, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x00}, {.addr=0xfeca, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfeca, .value=0xaf, .type=IO_READ},
        {.addr=0xfecb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0047, .value=0x00, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0137) {
    const struct CPU_State initial_cpu = {.pc=0x665a, .a=0xee, .x=0x84, .y=0x9e, .sp=0x06, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0x665a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x665b, .a=0xee, .x=0x85, .y=0x9e, .sp=0x06, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xee}, {.addr=0x665a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x665a, .value=0xaf, .type=IO_READ},
        {.addr=0x665b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0138) {
    const struct CPU_State initial_cpu = {.pc=0x2329, .a=0xb7, .x=0x9a, .y=0xd2, .sp=0x8a, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x00}, {.addr=0x2329, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x232a, .a=0xb7, .x=0x9b, .y=0xd2, .sp=0x8a, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0xb7}, {.addr=0x2329, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2329, .value=0xaf, .type=IO_READ},
        {.addr=0x232a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009a, .value=0xb7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0139) {
    const struct CPU_State initial_cpu = {.pc=0x7137, .a=0xcb, .x=0xce, .y=0x07, .sp=0x71, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x00}, {.addr=0x7137, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7138, .a=0xcb, .x=0xcf, .y=0x07, .sp=0x71, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0xcb}, {.addr=0x7137, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7137, .value=0xaf, .type=IO_READ},
        {.addr=0x7138, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ce, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_013A) {
    const struct CPU_State initial_cpu = {.pc=0x72f8, .a=0x0a, .x=0x7c, .y=0x8e, .sp=0xcb, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x72f8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x72f9, .a=0x0a, .x=0x7d, .y=0x8e, .sp=0xcb, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x0a}, {.addr=0x72f8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x72f8, .value=0xaf, .type=IO_READ},
        {.addr=0x72f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017c, .value=0x0a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_013B) {
    const struct CPU_State initial_cpu = {.pc=0x819a, .a=0xd1, .x=0x18, .y=0x13, .sp=0x97, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x00}, {.addr=0x819a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x819b, .a=0xd1, .x=0x19, .y=0x13, .sp=0x97, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0xd1}, {.addr=0x819a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x819a, .value=0xaf, .type=IO_READ},
        {.addr=0x819b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0018, .value=0xd1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_013C) {
    const struct CPU_State initial_cpu = {.pc=0x12c4, .a=0x71, .x=0x0b, .y=0xd3, .sp=0xc5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x12c4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x12c5, .a=0x71, .x=0x0c, .y=0xd3, .sp=0xc5, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x71}, {.addr=0x12c4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x12c4, .value=0xaf, .type=IO_READ},
        {.addr=0x12c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_013E) {
    const struct CPU_State initial_cpu = {.pc=0xafcd, .a=0xdd, .x=0x6c, .y=0x1f, .sp=0xff, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x00}, {.addr=0xafcd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xafce, .a=0xdd, .x=0x6d, .y=0x1f, .sp=0xff, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xdd}, {.addr=0xafcd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xafcd, .value=0xaf, .type=IO_READ},
        {.addr=0xafce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006c, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_013F) {
    const struct CPU_State initial_cpu = {.pc=0xdd24, .a=0x3c, .x=0x65, .y=0x62, .sp=0x25, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0xdd24, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdd25, .a=0x3c, .x=0x66, .y=0x62, .sp=0x25, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x3c}, {.addr=0xdd24, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdd24, .value=0xaf, .type=IO_READ},
        {.addr=0xdd25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0165, .value=0x3c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0140) {
    const struct CPU_State initial_cpu = {.pc=0xcff3, .a=0xfa, .x=0x92, .y=0x8e, .sp=0xa1, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x00}, {.addr=0xcff3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcff4, .a=0xfa, .x=0x93, .y=0x8e, .sp=0xa1, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0xfa}, {.addr=0xcff3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcff3, .value=0xaf, .type=IO_READ},
        {.addr=0xcff4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0092, .value=0xfa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0141) {
    const struct CPU_State initial_cpu = {.pc=0x399c, .a=0x86, .x=0x09, .y=0x5c, .sp=0x27, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x00}, {.addr=0x399c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x399d, .a=0x86, .x=0x0a, .y=0x5c, .sp=0x27, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x86}, {.addr=0x399c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x399c, .value=0xaf, .type=IO_READ},
        {.addr=0x399d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0009, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0142) {
    const struct CPU_State initial_cpu = {.pc=0xaadb, .a=0x1f, .x=0x01, .y=0x61, .sp=0xca, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0xaadb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xaadc, .a=0x1f, .x=0x02, .y=0x61, .sp=0xca, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x1f}, {.addr=0xaadb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xaadb, .value=0xaf, .type=IO_READ},
        {.addr=0xaadc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0143) {
    const struct CPU_State initial_cpu = {.pc=0x2150, .a=0x61, .x=0x49, .y=0xf3, .sp=0xe4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0x2150, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2151, .a=0x61, .x=0x4a, .y=0xf3, .sp=0xe4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x61}, {.addr=0x2150, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2150, .value=0xaf, .type=IO_READ},
        {.addr=0x2151, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0149, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0144) {
    const struct CPU_State initial_cpu = {.pc=0xd22e, .a=0xf9, .x=0x52, .y=0xc1, .sp=0xc3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0xd22e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd22f, .a=0xf9, .x=0x53, .y=0xc1, .sp=0xc3, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xf9}, {.addr=0xd22e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd22e, .value=0xaf, .type=IO_READ},
        {.addr=0xd22f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0152, .value=0xf9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0145) {
    const struct CPU_State initial_cpu = {.pc=0xfa63, .a=0xfa, .x=0xa4, .y=0x27, .sp=0xb5, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xfa63, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfa64, .a=0xfa, .x=0xa5, .y=0x27, .sp=0xb5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xfa}, {.addr=0xfa63, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfa63, .value=0xaf, .type=IO_READ},
        {.addr=0xfa64, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0xfa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0146) {
    const struct CPU_State initial_cpu = {.pc=0x405e, .a=0xc3, .x=0xc8, .y=0xab, .sp=0x20, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x00}, {.addr=0x405e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x405f, .a=0xc3, .x=0xc9, .y=0xab, .sp=0x20, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0xc3}, {.addr=0x405e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x405e, .value=0xaf, .type=IO_READ},
        {.addr=0x405f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c8, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0147) {
    const struct CPU_State initial_cpu = {.pc=0x2bab, .a=0x29, .x=0x5f, .y=0xbc, .sp=0x67, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x2bab, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2bac, .a=0x29, .x=0x60, .y=0xbc, .sp=0x67, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x29}, {.addr=0x2bab, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2bab, .value=0xaf, .type=IO_READ},
        {.addr=0x2bac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x29, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0148) {
    const struct CPU_State initial_cpu = {.pc=0x24a7, .a=0x82, .x=0x7d, .y=0x38, .sp=0xcb, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x24a7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x24a8, .a=0x82, .x=0x7e, .y=0x38, .sp=0xcb, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x82}, {.addr=0x24a7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x24a7, .value=0xaf, .type=IO_READ},
        {.addr=0x24a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017d, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0149) {
    const struct CPU_State initial_cpu = {.pc=0x4dfa, .a=0x24, .x=0x59, .y=0x9f, .sp=0x2a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x4dfa, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4dfb, .a=0x24, .x=0x5a, .y=0x9f, .sp=0x2a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x24}, {.addr=0x4dfa, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4dfa, .value=0xaf, .type=IO_READ},
        {.addr=0x4dfb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_014A) {
    const struct CPU_State initial_cpu = {.pc=0xf667, .a=0xe6, .x=0xb8, .y=0x0d, .sp=0xec, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xf667, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf668, .a=0xe6, .x=0xb9, .y=0x0d, .sp=0xec, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xe6}, {.addr=0xf667, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf667, .value=0xaf, .type=IO_READ},
        {.addr=0xf668, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b8, .value=0xe6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_014B) {
    const struct CPU_State initial_cpu = {.pc=0x8755, .a=0x9d, .x=0xda, .y=0x03, .sp=0xd5, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x00}, {.addr=0x8755, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8756, .a=0x9d, .x=0xdb, .y=0x03, .sp=0xd5, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0x9d}, {.addr=0x8755, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8755, .value=0xaf, .type=IO_READ},
        {.addr=0x8756, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00da, .value=0x9d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_014C) {
    const struct CPU_State initial_cpu = {.pc=0x03b3, .a=0xb9, .x=0x59, .y=0x64, .sp=0x73, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x00}, {.addr=0x03b3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x03b4, .a=0xb9, .x=0x5a, .y=0x64, .sp=0x73, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0xb9}, {.addr=0x03b3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x03b3, .value=0xaf, .type=IO_READ},
        {.addr=0x03b4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0059, .value=0xb9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_014D) {
    const struct CPU_State initial_cpu = {.pc=0x50ac, .a=0x33, .x=0xbe, .y=0xfe, .sp=0x8f, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0x50ac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x50ad, .a=0x33, .x=0xbf, .y=0xfe, .sp=0x8f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x33}, {.addr=0x50ac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x50ac, .value=0xaf, .type=IO_READ},
        {.addr=0x50ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0x33, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_014E) {
    const struct CPU_State initial_cpu = {.pc=0x4841, .a=0x39, .x=0x6a, .y=0x12, .sp=0xcb, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0x4841, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4842, .a=0x39, .x=0x6b, .y=0x12, .sp=0xcb, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x39}, {.addr=0x4841, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4841, .value=0xaf, .type=IO_READ},
        {.addr=0x4842, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0x39, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_014F) {
    const struct CPU_State initial_cpu = {.pc=0x8c13, .a=0x92, .x=0xdd, .y=0x2f, .sp=0x08, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x00}, {.addr=0x8c13, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8c14, .a=0x92, .x=0xde, .y=0x2f, .sp=0x08, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x92}, {.addr=0x8c13, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8c13, .value=0xaf, .type=IO_READ},
        {.addr=0x8c14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00dd, .value=0x92, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0150) {
    const struct CPU_State initial_cpu = {.pc=0x4f6d, .a=0xa5, .x=0x22, .y=0x14, .sp=0x4b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x4f6d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4f6e, .a=0xa5, .x=0x23, .y=0x14, .sp=0x4b, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xa5}, {.addr=0x4f6d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4f6d, .value=0xaf, .type=IO_READ},
        {.addr=0x4f6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0122, .value=0xa5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0151) {
    const struct CPU_State initial_cpu = {.pc=0xd31b, .a=0x1c, .x=0xce, .y=0x56, .sp=0xe9, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x00}, {.addr=0xd31b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd31c, .a=0x1c, .x=0xcf, .y=0x56, .sp=0xe9, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x1c}, {.addr=0xd31b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd31b, .value=0xaf, .type=IO_READ},
        {.addr=0xd31c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ce, .value=0x1c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0152) {
    const struct CPU_State initial_cpu = {.pc=0xdbef, .a=0x6b, .x=0x1d, .y=0xc9, .sp=0x13, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0xdbef, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdbf0, .a=0x6b, .x=0x1e, .y=0xc9, .sp=0x13, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x6b}, {.addr=0xdbef, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdbef, .value=0xaf, .type=IO_READ},
        {.addr=0xdbf0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x6b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0153) {
    const struct CPU_State initial_cpu = {.pc=0x5087, .a=0x94, .x=0x47, .y=0x08, .sp=0x5d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x5087, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5088, .a=0x94, .x=0x48, .y=0x08, .sp=0x5d, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x94}, {.addr=0x5087, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5087, .value=0xaf, .type=IO_READ},
        {.addr=0x5088, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0154) {
    const struct CPU_State initial_cpu = {.pc=0x614a, .a=0x35, .x=0xa7, .y=0xe8, .sp=0x4a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x614a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x614b, .a=0x35, .x=0xa8, .y=0xe8, .sp=0x4a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x35}, {.addr=0x614a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x614a, .value=0xaf, .type=IO_READ},
        {.addr=0x614b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x35, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0155) {
    const struct CPU_State initial_cpu = {.pc=0xf1a6, .a=0xa9, .x=0x81, .y=0xa3, .sp=0xf7, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0xf1a6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf1a7, .a=0xa9, .x=0x82, .y=0xa3, .sp=0xf7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xa9}, {.addr=0xf1a6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf1a6, .value=0xaf, .type=IO_READ},
        {.addr=0xf1a7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0181, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0156) {
    const struct CPU_State initial_cpu = {.pc=0x60dc, .a=0x6a, .x=0xde, .y=0xf1, .sp=0xcf, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x00}, {.addr=0x60dc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x60dd, .a=0x6a, .x=0xdf, .y=0xf1, .sp=0xcf, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x6a}, {.addr=0x60dc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x60dc, .value=0xaf, .type=IO_READ},
        {.addr=0x60dd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00de, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0157) {
    const struct CPU_State initial_cpu = {.pc=0xe06f, .a=0xb5, .x=0x3a, .y=0xa8, .sp=0xed, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0xe06f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe070, .a=0xb5, .x=0x3b, .y=0xa8, .sp=0xed, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xb5}, {.addr=0xe06f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe06f, .value=0xaf, .type=IO_READ},
        {.addr=0xe070, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013a, .value=0xb5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0158) {
    const struct CPU_State initial_cpu = {.pc=0xec46, .a=0xf5, .x=0x6f, .y=0x07, .sp=0x38, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x00}, {.addr=0xec46, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xec47, .a=0xf5, .x=0x70, .y=0x07, .sp=0x38, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0xf5}, {.addr=0xec46, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xec46, .value=0xaf, .type=IO_READ},
        {.addr=0xec47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006f, .value=0xf5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0159) {
    const struct CPU_State initial_cpu = {.pc=0xa935, .a=0x59, .x=0x1f, .y=0xb9, .sp=0x35, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xa935, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa936, .a=0x59, .x=0x20, .y=0xb9, .sp=0x35, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x59}, {.addr=0xa935, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa935, .value=0xaf, .type=IO_READ},
        {.addr=0xa936, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0x59, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_015A) {
    const struct CPU_State initial_cpu = {.pc=0xfd91, .a=0xc2, .x=0x2b, .y=0x0d, .sp=0xc9, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x00}, {.addr=0xfd91, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfd92, .a=0xc2, .x=0x2c, .y=0x0d, .sp=0xc9, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0xc2}, {.addr=0xfd91, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfd91, .value=0xaf, .type=IO_READ},
        {.addr=0xfd92, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002b, .value=0xc2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_015B) {
    const struct CPU_State initial_cpu = {.pc=0x97c0, .a=0xab, .x=0x3c, .y=0xef, .sp=0x84, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x00}, {.addr=0x97c0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x97c1, .a=0xab, .x=0x3d, .y=0xef, .sp=0x84, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0xab}, {.addr=0x97c0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x97c0, .value=0xaf, .type=IO_READ},
        {.addr=0x97c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003c, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_015C) {
    const struct CPU_State initial_cpu = {.pc=0x76ab, .a=0xf2, .x=0x66, .y=0xb9, .sp=0x51, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x76ab, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x76ac, .a=0xf2, .x=0x67, .y=0xb9, .sp=0x51, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xf2}, {.addr=0x76ab, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x76ab, .value=0xaf, .type=IO_READ},
        {.addr=0x76ac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_015D) {
    const struct CPU_State initial_cpu = {.pc=0xa8ee, .a=0x3a, .x=0x54, .y=0x34, .sp=0x27, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x00}, {.addr=0xa8ee, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa8ef, .a=0x3a, .x=0x55, .y=0x34, .sp=0x27, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x3a}, {.addr=0xa8ee, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa8ee, .value=0xaf, .type=IO_READ},
        {.addr=0xa8ef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0054, .value=0x3a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_015E) {
    const struct CPU_State initial_cpu = {.pc=0xd447, .a=0x49, .x=0x25, .y=0x87, .sp=0xc9, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x00}, {.addr=0xd447, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd448, .a=0x49, .x=0x26, .y=0x87, .sp=0xc9, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x49}, {.addr=0xd447, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd447, .value=0xaf, .type=IO_READ},
        {.addr=0xd448, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0025, .value=0x49, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_015F) {
    const struct CPU_State initial_cpu = {.pc=0xb3b9, .a=0x9a, .x=0x72, .y=0x88, .sp=0xdb, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x00}, {.addr=0xb3b9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb3ba, .a=0x9a, .x=0x73, .y=0x88, .sp=0xdb, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x9a}, {.addr=0xb3b9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb3b9, .value=0xaf, .type=IO_READ},
        {.addr=0xb3ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0072, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0160) {
    const struct CPU_State initial_cpu = {.pc=0x972b, .a=0xbf, .x=0x82, .y=0x8b, .sp=0xbe, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x00}, {.addr=0x972b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x972c, .a=0xbf, .x=0x83, .y=0x8b, .sp=0xbe, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xbf}, {.addr=0x972b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x972b, .value=0xaf, .type=IO_READ},
        {.addr=0x972c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0082, .value=0xbf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0161) {
    const struct CPU_State initial_cpu = {.pc=0xe9de, .a=0x19, .x=0x0f, .y=0xbe, .sp=0x3c, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0xe9de, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe9df, .a=0x19, .x=0x10, .y=0xbe, .sp=0x3c, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x19}, {.addr=0xe9de, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe9de, .value=0xaf, .type=IO_READ},
        {.addr=0xe9df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010f, .value=0x19, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0162) {
    const struct CPU_State initial_cpu = {.pc=0xc2ea, .a=0xa4, .x=0xee, .y=0xff, .sp=0x40, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x00}, {.addr=0xc2ea, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc2eb, .a=0xa4, .x=0xef, .y=0xff, .sp=0x40, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0xa4}, {.addr=0xc2ea, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc2ea, .value=0xaf, .type=IO_READ},
        {.addr=0xc2eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ee, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0163) {
    const struct CPU_State initial_cpu = {.pc=0x60d7, .a=0x8c, .x=0xea, .y=0x59, .sp=0x67, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x00}, {.addr=0x60d7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x60d8, .a=0x8c, .x=0xeb, .y=0x59, .sp=0x67, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x8c}, {.addr=0x60d7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x60d7, .value=0xaf, .type=IO_READ},
        {.addr=0x60d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ea, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0164) {
    const struct CPU_State initial_cpu = {.pc=0xc805, .a=0xbc, .x=0x19, .y=0x2d, .sp=0xc5, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x00}, {.addr=0xc805, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc806, .a=0xbc, .x=0x1a, .y=0x2d, .sp=0xc5, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0xbc}, {.addr=0xc805, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc805, .value=0xaf, .type=IO_READ},
        {.addr=0xc806, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0019, .value=0xbc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0165) {
    const struct CPU_State initial_cpu = {.pc=0x4e8b, .a=0x9a, .x=0xbb, .y=0x89, .sp=0x9c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x4e8b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4e8c, .a=0x9a, .x=0xbc, .y=0x89, .sp=0x9c, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x9a}, {.addr=0x4e8b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4e8b, .value=0xaf, .type=IO_READ},
        {.addr=0x4e8c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bb, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0166) {
    const struct CPU_State initial_cpu = {.pc=0x4ba1, .a=0x73, .x=0x74, .y=0x20, .sp=0x00, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x4ba1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4ba2, .a=0x73, .x=0x75, .y=0x20, .sp=0x00, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x73}, {.addr=0x4ba1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4ba1, .value=0xaf, .type=IO_READ},
        {.addr=0x4ba2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0x73, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0167) {
    const struct CPU_State initial_cpu = {.pc=0x91c2, .a=0xc3, .x=0x97, .y=0x89, .sp=0x9c, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x00}, {.addr=0x91c2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x91c3, .a=0xc3, .x=0x98, .y=0x89, .sp=0x9c, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0xc3}, {.addr=0x91c2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x91c2, .value=0xaf, .type=IO_READ},
        {.addr=0x91c3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0097, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0168) {
    const struct CPU_State initial_cpu = {.pc=0x78cb, .a=0x06, .x=0x0f, .y=0x51, .sp=0x24, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x00}, {.addr=0x78cb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x78cc, .a=0x06, .x=0x10, .y=0x51, .sp=0x24, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x06}, {.addr=0x78cb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x78cb, .value=0xaf, .type=IO_READ},
        {.addr=0x78cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000f, .value=0x06, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0169) {
    const struct CPU_State initial_cpu = {.pc=0xe878, .a=0x12, .x=0xd6, .y=0xdb, .sp=0xf8, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0xe878, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe879, .a=0x12, .x=0xd7, .y=0xdb, .sp=0xf8, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x12}, {.addr=0xe878, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe878, .value=0xaf, .type=IO_READ},
        {.addr=0xe879, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x12, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_016A) {
    const struct CPU_State initial_cpu = {.pc=0x056b, .a=0x0c, .x=0x4b, .y=0xfb, .sp=0xa9, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x00}, {.addr=0x056b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x056c, .a=0x0c, .x=0x4c, .y=0xfb, .sp=0xa9, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x0c}, {.addr=0x056b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x056b, .value=0xaf, .type=IO_READ},
        {.addr=0x056c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004b, .value=0x0c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_016B) {
    const struct CPU_State initial_cpu = {.pc=0xcb1e, .a=0x85, .x=0x59, .y=0x84, .sp=0x7d, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0xcb1e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcb1f, .a=0x85, .x=0x5a, .y=0x84, .sp=0x7d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x85}, {.addr=0xcb1e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcb1e, .value=0xaf, .type=IO_READ},
        {.addr=0xcb1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_016C) {
    const struct CPU_State initial_cpu = {.pc=0x5d27, .a=0xb1, .x=0x43, .y=0x50, .sp=0x6b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x00}, {.addr=0x5d27, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5d28, .a=0xb1, .x=0x44, .y=0x50, .sp=0x6b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xb1}, {.addr=0x5d27, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5d27, .value=0xaf, .type=IO_READ},
        {.addr=0x5d28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0043, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_016D) {
    const struct CPU_State initial_cpu = {.pc=0x5f1e, .a=0x99, .x=0x19, .y=0x47, .sp=0x9e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x00}, {.addr=0x5f1e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5f1f, .a=0x99, .x=0x1a, .y=0x47, .sp=0x9e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0x99}, {.addr=0x5f1e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5f1e, .value=0xaf, .type=IO_READ},
        {.addr=0x5f1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0019, .value=0x99, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_016E) {
    const struct CPU_State initial_cpu = {.pc=0x491a, .a=0x95, .x=0x1e, .y=0xa1, .sp=0xdc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0x00}, {.addr=0x491a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x491b, .a=0x95, .x=0x1f, .y=0xa1, .sp=0xdc, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0x95}, {.addr=0x491a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x491a, .value=0xaf, .type=IO_READ},
        {.addr=0x491b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x001e, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_016F) {
    const struct CPU_State initial_cpu = {.pc=0xf77b, .a=0x30, .x=0x7f, .y=0x4f, .sp=0x41, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x00}, {.addr=0xf77b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf77c, .a=0x30, .x=0x80, .y=0x4f, .sp=0x41, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x30}, {.addr=0xf77b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf77b, .value=0xaf, .type=IO_READ},
        {.addr=0xf77c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007f, .value=0x30, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0170) {
    const struct CPU_State initial_cpu = {.pc=0x1f46, .a=0xb4, .x=0xd9, .y=0xcb, .sp=0x31, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x00}, {.addr=0x1f46, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1f47, .a=0xb4, .x=0xda, .y=0xcb, .sp=0x31, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0xb4}, {.addr=0x1f46, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1f46, .value=0xaf, .type=IO_READ},
        {.addr=0x1f47, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d9, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0171) {
    const struct CPU_State initial_cpu = {.pc=0x5fb5, .a=0x0f, .x=0x77, .y=0x22, .sp=0x60, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x00}, {.addr=0x5fb5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5fb6, .a=0x0f, .x=0x78, .y=0x22, .sp=0x60, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x0f}, {.addr=0x5fb5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5fb5, .value=0xaf, .type=IO_READ},
        {.addr=0x5fb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0077, .value=0x0f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0172) {
    const struct CPU_State initial_cpu = {.pc=0x218b, .a=0x14, .x=0xbb, .y=0xed, .sp=0xac, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x00}, {.addr=0x218b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x218c, .a=0x14, .x=0xbc, .y=0xed, .sp=0xac, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x14}, {.addr=0x218b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x218b, .value=0xaf, .type=IO_READ},
        {.addr=0x218c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00bb, .value=0x14, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0173) {
    const struct CPU_State initial_cpu = {.pc=0x9331, .a=0x5a, .x=0xe1, .y=0xfb, .sp=0x66, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0x9331, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9332, .a=0x5a, .x=0xe2, .y=0xfb, .sp=0x66, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x5a}, {.addr=0x9331, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9331, .value=0xaf, .type=IO_READ},
        {.addr=0x9332, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e1, .value=0x5a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0174) {
    const struct CPU_State initial_cpu = {.pc=0xc21c, .a=0xad, .x=0x54, .y=0xb4, .sp=0xc6, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x00}, {.addr=0xc21c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc21d, .a=0xad, .x=0x55, .y=0xb4, .sp=0xc6, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0xad}, {.addr=0xc21c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc21c, .value=0xaf, .type=IO_READ},
        {.addr=0xc21d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0054, .value=0xad, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0175) {
    const struct CPU_State initial_cpu = {.pc=0xc458, .a=0x33, .x=0x7e, .y=0xc4, .sp=0x25, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0xc458, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc459, .a=0x33, .x=0x7f, .y=0xc4, .sp=0x25, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x33}, {.addr=0xc458, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc458, .value=0xaf, .type=IO_READ},
        {.addr=0xc459, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x33, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0176) {
    const struct CPU_State initial_cpu = {.pc=0x6f04, .a=0x21, .x=0x0d, .y=0x47, .sp=0x51, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0x6f04, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6f05, .a=0x21, .x=0x0e, .y=0x47, .sp=0x51, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x21}, {.addr=0x6f04, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6f04, .value=0xaf, .type=IO_READ},
        {.addr=0x6f05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000d, .value=0x21, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0177) {
    const struct CPU_State initial_cpu = {.pc=0xaeaa, .a=0xb4, .x=0x7a, .y=0xb4, .sp=0xb4, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x00}, {.addr=0xaeaa, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xaeab, .a=0xb4, .x=0x7b, .y=0xb4, .sp=0xb4, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0xb4}, {.addr=0xaeaa, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xaeaa, .value=0xaf, .type=IO_READ},
        {.addr=0xaeab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007a, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0178) {
    const struct CPU_State initial_cpu = {.pc=0xe05e, .a=0x68, .x=0x01, .y=0xf4, .sp=0xdd, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x00}, {.addr=0xe05e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe05f, .a=0x68, .x=0x02, .y=0xf4, .sp=0xdd, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x68}, {.addr=0xe05e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe05e, .value=0xaf, .type=IO_READ},
        {.addr=0xe05f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0001, .value=0x68, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0179) {
    const struct CPU_State initial_cpu = {.pc=0x91d8, .a=0x64, .x=0x0a, .y=0xfa, .sp=0x9c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x91d8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x91d9, .a=0x64, .x=0x0b, .y=0xfa, .sp=0x9c, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x64}, {.addr=0x91d8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x91d8, .value=0xaf, .type=IO_READ},
        {.addr=0x91d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010a, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_017A) {
    const struct CPU_State initial_cpu = {.pc=0x1b2c, .a=0xdd, .x=0x28, .y=0x99, .sp=0xb5, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x1b2c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1b2d, .a=0xdd, .x=0x29, .y=0x99, .sp=0xb5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xdd}, {.addr=0x1b2c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1b2c, .value=0xaf, .type=IO_READ},
        {.addr=0x1b2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_017B) {
    const struct CPU_State initial_cpu = {.pc=0x2fe0, .a=0xf3, .x=0x8b, .y=0x07, .sp=0xb5, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x2fe0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2fe1, .a=0xf3, .x=0x8c, .y=0x07, .sp=0xb5, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xf3}, {.addr=0x2fe0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2fe0, .value=0xaf, .type=IO_READ},
        {.addr=0x2fe1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018b, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_017C) {
    const struct CPU_State initial_cpu = {.pc=0x5cc0, .a=0x6d, .x=0x41, .y=0x89, .sp=0xb9, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x5cc0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5cc1, .a=0x6d, .x=0x42, .y=0x89, .sp=0xb9, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x6d}, {.addr=0x5cc0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5cc0, .value=0xaf, .type=IO_READ},
        {.addr=0x5cc1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x6d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_017D) {
    const struct CPU_State initial_cpu = {.pc=0x0cc7, .a=0xcb, .x=0x4b, .y=0x53, .sp=0x5d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x0cc7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0cc8, .a=0xcb, .x=0x4c, .y=0x53, .sp=0x5d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xcb}, {.addr=0x0cc7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0cc7, .value=0xaf, .type=IO_READ},
        {.addr=0x0cc8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_017E) {
    const struct CPU_State initial_cpu = {.pc=0xa411, .a=0xc8, .x=0x26, .y=0xa0, .sp=0x5a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0xa411, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa412, .a=0xc8, .x=0x27, .y=0xa0, .sp=0x5a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xc8}, {.addr=0xa411, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa411, .value=0xaf, .type=IO_READ},
        {.addr=0xa412, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0126, .value=0xc8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_017F) {
    const struct CPU_State initial_cpu = {.pc=0xa35e, .a=0x02, .x=0x30, .y=0xcb, .sp=0x45, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0xa35e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa35f, .a=0x02, .x=0x31, .y=0xcb, .sp=0x45, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x02}, {.addr=0xa35e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa35e, .value=0xaf, .type=IO_READ},
        {.addr=0xa35f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0130, .value=0x02, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0180) {
    const struct CPU_State initial_cpu = {.pc=0x3294, .a=0x76, .x=0xe6, .y=0xf0, .sp=0x42, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x3294, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3295, .a=0x76, .x=0xe7, .y=0xf0, .sp=0x42, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x76}, {.addr=0x3294, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3294, .value=0xaf, .type=IO_READ},
        {.addr=0x3295, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x76, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0181) {
    const struct CPU_State initial_cpu = {.pc=0x8bd6, .a=0x0e, .x=0xb2, .y=0xdd, .sp=0xb9, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x00}, {.addr=0x8bd6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8bd7, .a=0x0e, .x=0xb3, .y=0xdd, .sp=0xb9, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x0e}, {.addr=0x8bd6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8bd6, .value=0xaf, .type=IO_READ},
        {.addr=0x8bd7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b2, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0182) {
    const struct CPU_State initial_cpu = {.pc=0x804b, .a=0x47, .x=0x2b, .y=0x25, .sp=0xe2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x804b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x804c, .a=0x47, .x=0x2c, .y=0x25, .sp=0xe2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x47}, {.addr=0x804b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x804b, .value=0xaf, .type=IO_READ},
        {.addr=0x804c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0x47, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0183) {
    const struct CPU_State initial_cpu = {.pc=0xae80, .a=0x69, .x=0xfc, .y=0xfa, .sp=0xb1, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0xae80, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xae81, .a=0x69, .x=0xfd, .y=0xfa, .sp=0xb1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x69}, {.addr=0xae80, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xae80, .value=0xaf, .type=IO_READ},
        {.addr=0xae81, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fc, .value=0x69, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0184) {
    const struct CPU_State initial_cpu = {.pc=0x58af, .a=0xf8, .x=0x7e, .y=0x9c, .sp=0x66, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x00}, {.addr=0x58af, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x58b0, .a=0xf8, .x=0x7f, .y=0x9c, .sp=0x66, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0xf8}, {.addr=0x58af, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x58af, .value=0xaf, .type=IO_READ},
        {.addr=0x58b0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007e, .value=0xf8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0185) {
    const struct CPU_State initial_cpu = {.pc=0x601e, .a=0x64, .x=0x93, .y=0xc5, .sp=0x26, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x00}, {.addr=0x601e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x601f, .a=0x64, .x=0x94, .y=0xc5, .sp=0x26, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x64}, {.addr=0x601e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x601e, .value=0xaf, .type=IO_READ},
        {.addr=0x601f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0093, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0186) {
    const struct CPU_State initial_cpu = {.pc=0xf054, .a=0xcb, .x=0x34, .y=0xdd, .sp=0xcf, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x00}, {.addr=0xf054, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf055, .a=0xcb, .x=0x35, .y=0xdd, .sp=0xcf, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0xcb}, {.addr=0xf054, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf054, .value=0xaf, .type=IO_READ},
        {.addr=0xf055, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0034, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0187) {
    const struct CPU_State initial_cpu = {.pc=0xb29f, .a=0xdd, .x=0x9b, .y=0x71, .sp=0xa4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0xb29f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb2a0, .a=0xdd, .x=0x9c, .y=0x71, .sp=0xa4, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xdd}, {.addr=0xb29f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb29f, .value=0xaf, .type=IO_READ},
        {.addr=0xb2a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0188) {
    const struct CPU_State initial_cpu = {.pc=0x4053, .a=0x34, .x=0x5c, .y=0x2d, .sp=0x79, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x4053, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4054, .a=0x34, .x=0x5d, .y=0x2d, .sp=0x79, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x34}, {.addr=0x4053, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4053, .value=0xaf, .type=IO_READ},
        {.addr=0x4054, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015c, .value=0x34, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0189) {
    const struct CPU_State initial_cpu = {.pc=0xccf8, .a=0x33, .x=0x0d, .y=0x86, .sp=0x14, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0xccf8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xccf9, .a=0x33, .x=0x0e, .y=0x86, .sp=0x14, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x33}, {.addr=0xccf8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xccf8, .value=0xaf, .type=IO_READ},
        {.addr=0xccf9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000d, .value=0x33, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_018B) {
    const struct CPU_State initial_cpu = {.pc=0x279d, .a=0x34, .x=0x9c, .y=0x33, .sp=0x2f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x00}, {.addr=0x279d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x279e, .a=0x34, .x=0x9d, .y=0x33, .sp=0x2f, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x34}, {.addr=0x279d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x279d, .value=0xaf, .type=IO_READ},
        {.addr=0x279e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009c, .value=0x34, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_018C) {
    const struct CPU_State initial_cpu = {.pc=0x03f7, .a=0xba, .x=0xdb, .y=0xb9, .sp=0x08, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x00}, {.addr=0x03f7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x03f8, .a=0xba, .x=0xdc, .y=0xb9, .sp=0x08, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xba}, {.addr=0x03f7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x03f7, .value=0xaf, .type=IO_READ},
        {.addr=0x03f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00db, .value=0xba, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_018D) {
    const struct CPU_State initial_cpu = {.pc=0x80cd, .a=0x43, .x=0x66, .y=0x19, .sp=0xff, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x80cd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x80ce, .a=0x43, .x=0x67, .y=0x19, .sp=0xff, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x43}, {.addr=0x80cd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x80cd, .value=0xaf, .type=IO_READ},
        {.addr=0x80ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0166, .value=0x43, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_018E) {
    const struct CPU_State initial_cpu = {.pc=0x27ae, .a=0xdb, .x=0xe3, .y=0xb7, .sp=0xbf, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x27ae, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x27af, .a=0xdb, .x=0xe4, .y=0xb7, .sp=0xbf, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xdb}, {.addr=0x27ae, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x27ae, .value=0xaf, .type=IO_READ},
        {.addr=0x27af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xdb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_018F) {
    const struct CPU_State initial_cpu = {.pc=0x2e0d, .a=0x13, .x=0x4d, .y=0x18, .sp=0x65, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0x2e0d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2e0e, .a=0x13, .x=0x4e, .y=0x18, .sp=0x65, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x13}, {.addr=0x2e0d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2e0d, .value=0xaf, .type=IO_READ},
        {.addr=0x2e0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0x13, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0190) {
    const struct CPU_State initial_cpu = {.pc=0x5bd8, .a=0xa7, .x=0x91, .y=0xa7, .sp=0xab, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x5bd8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5bd9, .a=0xa7, .x=0x92, .y=0xa7, .sp=0xab, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xa7}, {.addr=0x5bd8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5bd8, .value=0xaf, .type=IO_READ},
        {.addr=0x5bd9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0xa7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0191) {
    const struct CPU_State initial_cpu = {.pc=0x1abf, .a=0x35, .x=0xad, .y=0x30, .sp=0x34, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x00}, {.addr=0x1abf, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1ac0, .a=0x35, .x=0xae, .y=0x30, .sp=0x34, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x35}, {.addr=0x1abf, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1abf, .value=0xaf, .type=IO_READ},
        {.addr=0x1ac0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ad, .value=0x35, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0192) {
    const struct CPU_State initial_cpu = {.pc=0xd2f1, .a=0x0a, .x=0xec, .y=0xc1, .sp=0xd3, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x00}, {.addr=0xd2f1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd2f2, .a=0x0a, .x=0xed, .y=0xc1, .sp=0xd3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x0a}, {.addr=0xd2f1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd2f1, .value=0xaf, .type=IO_READ},
        {.addr=0xd2f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ec, .value=0x0a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0193) {
    const struct CPU_State initial_cpu = {.pc=0x8b13, .a=0x23, .x=0x9d, .y=0xec, .sp=0xbf, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x00}, {.addr=0x8b13, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8b14, .a=0x23, .x=0x9e, .y=0xec, .sp=0xbf, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x23}, {.addr=0x8b13, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8b13, .value=0xaf, .type=IO_READ},
        {.addr=0x8b14, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009d, .value=0x23, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0194) {
    const struct CPU_State initial_cpu = {.pc=0x05fe, .a=0x82, .x=0x54, .y=0xe9, .sp=0x79, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0x05fe, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x05ff, .a=0x82, .x=0x55, .y=0xe9, .sp=0x79, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x82}, {.addr=0x05fe, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x05fe, .value=0xaf, .type=IO_READ},
        {.addr=0x05ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0195) {
    const struct CPU_State initial_cpu = {.pc=0x83b2, .a=0x78, .x=0x0f, .y=0x18, .sp=0xe7, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x00}, {.addr=0x83b2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x83b3, .a=0x78, .x=0x10, .y=0x18, .sp=0xe7, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x78}, {.addr=0x83b2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x83b2, .value=0xaf, .type=IO_READ},
        {.addr=0x83b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000f, .value=0x78, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0196) {
    const struct CPU_State initial_cpu = {.pc=0x7da5, .a=0x64, .x=0x58, .y=0xb8, .sp=0x6e, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x00}, {.addr=0x7da5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7da6, .a=0x64, .x=0x59, .y=0xb8, .sp=0x6e, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x64}, {.addr=0x7da5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7da5, .value=0xaf, .type=IO_READ},
        {.addr=0x7da6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0058, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0197) {
    const struct CPU_State initial_cpu = {.pc=0xfa01, .a=0xdd, .x=0x50, .y=0x34, .sp=0xdc, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x00}, {.addr=0xfa01, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfa02, .a=0xdd, .x=0x51, .y=0x34, .sp=0xdc, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xdd}, {.addr=0xfa01, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfa01, .value=0xaf, .type=IO_READ},
        {.addr=0xfa02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0050, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0198) {
    const struct CPU_State initial_cpu = {.pc=0x56f7, .a=0x5c, .x=0x43, .y=0x7c, .sp=0x01, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x00}, {.addr=0x56f7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x56f8, .a=0x5c, .x=0x44, .y=0x7c, .sp=0x01, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x5c}, {.addr=0x56f7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x56f7, .value=0xaf, .type=IO_READ},
        {.addr=0x56f8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0043, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0199) {
    const struct CPU_State initial_cpu = {.pc=0xd03c, .a=0xdb, .x=0xe0, .y=0x8e, .sp=0x49, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0xd03c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd03d, .a=0xdb, .x=0xe1, .y=0x8e, .sp=0x49, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xdb}, {.addr=0xd03c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd03c, .value=0xaf, .type=IO_READ},
        {.addr=0xd03d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0xdb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_019A) {
    const struct CPU_State initial_cpu = {.pc=0xd7a9, .a=0xd9, .x=0xa8, .y=0x90, .sp=0x29, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xd7a9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd7aa, .a=0xd9, .x=0xa9, .y=0x90, .sp=0x29, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xd9}, {.addr=0xd7a9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd7a9, .value=0xaf, .type=IO_READ},
        {.addr=0xd7aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_019B) {
    const struct CPU_State initial_cpu = {.pc=0x602b, .a=0xb3, .x=0x9a, .y=0x3a, .sp=0x14, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x602b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x602c, .a=0xb3, .x=0x9b, .y=0x3a, .sp=0x14, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xb3}, {.addr=0x602b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x602b, .value=0xaf, .type=IO_READ},
        {.addr=0x602c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019a, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_019C) {
    const struct CPU_State initial_cpu = {.pc=0x20ac, .a=0x14, .x=0x09, .y=0x11, .sp=0xf2, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x20ac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x20ad, .a=0x14, .x=0x0a, .y=0x11, .sp=0xf2, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x14}, {.addr=0x20ac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x20ac, .value=0xaf, .type=IO_READ},
        {.addr=0x20ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0x14, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_019D) {
    const struct CPU_State initial_cpu = {.pc=0xd6a2, .a=0x9e, .x=0xd4, .y=0x3a, .sp=0x7b, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x00}, {.addr=0xd6a2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd6a3, .a=0x9e, .x=0xd5, .y=0x3a, .sp=0x7b, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x9e}, {.addr=0xd6a2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd6a2, .value=0xaf, .type=IO_READ},
        {.addr=0xd6a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d4, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_019E) {
    const struct CPU_State initial_cpu = {.pc=0x01b1, .a=0x65, .x=0x7b, .y=0x36, .sp=0x8d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x01b1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x01b2, .a=0x65, .x=0x7c, .y=0x36, .sp=0x8d, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x65}, {.addr=0x01b1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x01b1, .value=0xaf, .type=IO_READ},
        {.addr=0x01b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0x65, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_019F) {
    const struct CPU_State initial_cpu = {.pc=0x08ae, .a=0xfc, .x=0x3c, .y=0x5f, .sp=0xc6, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x08ae, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x08af, .a=0xfc, .x=0x3d, .y=0x5f, .sp=0xc6, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xfc}, {.addr=0x08ae, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x08ae, .value=0xaf, .type=IO_READ},
        {.addr=0x08af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0xfc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x6bcc, .a=0xd9, .x=0xcd, .y=0xf0, .sp=0x10, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x00}, {.addr=0x6bcc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6bcd, .a=0xd9, .x=0xce, .y=0xf0, .sp=0x10, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0xd9}, {.addr=0x6bcc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6bcc, .value=0xaf, .type=IO_READ},
        {.addr=0x6bcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00cd, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x5902, .a=0xa4, .x=0x09, .y=0xac, .sp=0x3b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x5902, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5903, .a=0xa4, .x=0x0a, .y=0xac, .sp=0x3b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xa4}, {.addr=0x5902, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5902, .value=0xaf, .type=IO_READ},
        {.addr=0x5903, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0109, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x1ed3, .a=0x30, .x=0x55, .y=0x3a, .sp=0xeb, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0x1ed3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1ed4, .a=0x30, .x=0x56, .y=0x3a, .sp=0xeb, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x30}, {.addr=0x1ed3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1ed3, .value=0xaf, .type=IO_READ},
        {.addr=0x1ed4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x30, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xd60b, .a=0x46, .x=0xbd, .y=0xa2, .sp=0x14, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0xd60b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd60c, .a=0x46, .x=0xbe, .y=0xa2, .sp=0x14, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x46}, {.addr=0xd60b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd60b, .value=0xaf, .type=IO_READ},
        {.addr=0xd60c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xb632, .a=0xa6, .x=0xe8, .y=0x0d, .sp=0xfe, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0xb632, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb633, .a=0xa6, .x=0xe9, .y=0x0d, .sp=0xfe, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xa6}, {.addr=0xb632, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb632, .value=0xaf, .type=IO_READ},
        {.addr=0xb633, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0xa6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x63dd, .a=0x6b, .x=0x22, .y=0xf7, .sp=0x5b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0x00}, {.addr=0x63dd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x63de, .a=0x6b, .x=0x23, .y=0xf7, .sp=0x5b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0x6b}, {.addr=0x63dd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x63dd, .value=0xaf, .type=IO_READ},
        {.addr=0x63de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0022, .value=0x6b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x0d1f, .a=0x55, .x=0x4a, .y=0x58, .sp=0xa0, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x00}, {.addr=0x0d1f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0d20, .a=0x55, .x=0x4b, .y=0x58, .sp=0xa0, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x55}, {.addr=0x0d1f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0d1f, .value=0xaf, .type=IO_READ},
        {.addr=0x0d20, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004a, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x3d24, .a=0x75, .x=0x0d, .y=0xf7, .sp=0x1d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0x3d24, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3d25, .a=0x75, .x=0x0e, .y=0xf7, .sp=0x1d, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x75}, {.addr=0x3d24, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3d24, .value=0xaf, .type=IO_READ},
        {.addr=0x3d25, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000d, .value=0x75, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x264e, .a=0x6e, .x=0xe8, .y=0xde, .sp=0xe6, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x264e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x264f, .a=0x6e, .x=0xe9, .y=0xde, .sp=0xe6, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x6e}, {.addr=0x264e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x264e, .value=0xaf, .type=IO_READ},
        {.addr=0x264f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0x6e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x05e4, .a=0xfe, .x=0x2d, .y=0xd0, .sp=0x43, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0x05e4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x05e5, .a=0xfe, .x=0x2e, .y=0xd0, .sp=0x43, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xfe}, {.addr=0x05e4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x05e4, .value=0xaf, .type=IO_READ},
        {.addr=0x05e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012d, .value=0xfe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x92f6, .a=0x0d, .x=0x93, .y=0x1b, .sp=0x4e, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x00}, {.addr=0x92f6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x92f7, .a=0x0d, .x=0x94, .y=0x1b, .sp=0x4e, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x0d}, {.addr=0x92f6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x92f6, .value=0xaf, .type=IO_READ},
        {.addr=0x92f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0093, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xd0c3, .a=0xee, .x=0xea, .y=0xf1, .sp=0x4a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x00}, {.addr=0xd0c3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd0c4, .a=0xee, .x=0xeb, .y=0xf1, .sp=0x4a, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0xee}, {.addr=0xd0c3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd0c3, .value=0xaf, .type=IO_READ},
        {.addr=0xd0c4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ea, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x54b8, .a=0xc9, .x=0xf1, .y=0x1c, .sp=0x26, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x54b8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x54b9, .a=0xc9, .x=0xf2, .y=0x1c, .sp=0x26, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xc9}, {.addr=0x54b8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x54b8, .value=0xaf, .type=IO_READ},
        {.addr=0x54b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0xc9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xc0b0, .a=0x74, .x=0x08, .y=0x4e, .sp=0x30, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xc0b0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc0b1, .a=0x74, .x=0x09, .y=0x4e, .sp=0x30, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x74}, {.addr=0xc0b0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc0b0, .value=0xaf, .type=IO_READ},
        {.addr=0xc0b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0x74, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xb97c, .a=0x61, .x=0x77, .y=0x69, .sp=0x5f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x00}, {.addr=0xb97c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb97d, .a=0x61, .x=0x78, .y=0x69, .sp=0x5f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x61}, {.addr=0xb97c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb97c, .value=0xaf, .type=IO_READ},
        {.addr=0xb97d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0077, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xeb40, .a=0xe9, .x=0xc7, .y=0x4f, .sp=0x9b, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x00}, {.addr=0xeb40, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xeb41, .a=0xe9, .x=0xc8, .y=0x4f, .sp=0x9b, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0xe9}, {.addr=0xeb40, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xeb40, .value=0xaf, .type=IO_READ},
        {.addr=0xeb41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c7, .value=0xe9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x0da4, .a=0x31, .x=0x45, .y=0xc9, .sp=0x4c, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x00}, {.addr=0x0da4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0da5, .a=0x31, .x=0x46, .y=0xc9, .sp=0x4c, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x31}, {.addr=0x0da4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0da4, .value=0xaf, .type=IO_READ},
        {.addr=0x0da5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0045, .value=0x31, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x5999, .a=0xfd, .x=0x98, .y=0xb6, .sp=0x56, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x5999, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x599a, .a=0xfd, .x=0x99, .y=0xb6, .sp=0x56, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xfd}, {.addr=0x5999, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5999, .value=0xaf, .type=IO_READ},
        {.addr=0x599a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0xfd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x34f6, .a=0xfc, .x=0xe6, .y=0x38, .sp=0x3d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x00}, {.addr=0x34f6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x34f7, .a=0xfc, .x=0xe7, .y=0x38, .sp=0x3d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0xfc}, {.addr=0x34f6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x34f6, .value=0xaf, .type=IO_READ},
        {.addr=0x34f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e6, .value=0xfc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x75f9, .a=0x45, .x=0x25, .y=0xf7, .sp=0x6b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x75f9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x75fa, .a=0x45, .x=0x26, .y=0xf7, .sp=0x6b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x45}, {.addr=0x75f9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x75f9, .value=0xaf, .type=IO_READ},
        {.addr=0x75fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0125, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x2b57, .a=0x1b, .x=0x16, .y=0xe4, .sp=0x18, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x00}, {.addr=0x2b57, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2b58, .a=0x1b, .x=0x17, .y=0xe4, .sp=0x18, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x1b}, {.addr=0x2b57, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2b57, .value=0xaf, .type=IO_READ},
        {.addr=0x2b58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0016, .value=0x1b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x6d40, .a=0x60, .x=0x86, .y=0x05, .sp=0xb5, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0x6d40, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6d41, .a=0x60, .x=0x87, .y=0x05, .sp=0xb5, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x60}, {.addr=0x6d40, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6d40, .value=0xaf, .type=IO_READ},
        {.addr=0x6d41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0186, .value=0x60, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x3896, .a=0xcb, .x=0x69, .y=0xa0, .sp=0x01, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x00}, {.addr=0x3896, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3897, .a=0xcb, .x=0x6a, .y=0xa0, .sp=0x01, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0xcb}, {.addr=0x3896, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3896, .value=0xaf, .type=IO_READ},
        {.addr=0x3897, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0069, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xa8d9, .a=0x7b, .x=0xc8, .y=0xe5, .sp=0xaa, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0xa8d9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa8da, .a=0x7b, .x=0xc9, .y=0xe5, .sp=0xaa, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x7b}, {.addr=0xa8d9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa8d9, .value=0xaf, .type=IO_READ},
        {.addr=0xa8da, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x7b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x04e6, .a=0xe1, .x=0xfe, .y=0xfe, .sp=0x67, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0x04e6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x04e7, .a=0xe1, .x=0xff, .y=0xfe, .sp=0x67, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xe1}, {.addr=0x04e6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x04e6, .value=0xaf, .type=IO_READ},
        {.addr=0x04e7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xee94, .a=0x53, .x=0x00, .y=0xd3, .sp=0x46, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x00}, {.addr=0xee94, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xee95, .a=0x53, .x=0x01, .y=0xd3, .sp=0x46, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x53}, {.addr=0xee94, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xee94, .value=0xaf, .type=IO_READ},
        {.addr=0xee95, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0000, .value=0x53, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x5620, .a=0x95, .x=0x9f, .y=0xa4, .sp=0x89, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0x5620, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5621, .a=0x95, .x=0xa0, .y=0xa4, .sp=0x89, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x95}, {.addr=0x5620, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5620, .value=0xaf, .type=IO_READ},
        {.addr=0x5621, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019f, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xbeea, .a=0xa8, .x=0x3b, .y=0xd0, .sp=0x0c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0xbeea, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbeeb, .a=0xa8, .x=0x3c, .y=0xd0, .sp=0x0c, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xa8}, {.addr=0xbeea, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbeea, .value=0xaf, .type=IO_READ},
        {.addr=0xbeeb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013b, .value=0xa8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xc12b, .a=0xad, .x=0xdf, .y=0x2e, .sp=0x16, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xc12b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc12c, .a=0xad, .x=0xe0, .y=0x2e, .sp=0x16, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xad}, {.addr=0xc12b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc12b, .value=0xaf, .type=IO_READ},
        {.addr=0xc12c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xad, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x5344, .a=0x65, .x=0x5a, .y=0xe4, .sp=0x3b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0x5344, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5345, .a=0x65, .x=0x5b, .y=0xe4, .sp=0x3b, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x65}, {.addr=0x5344, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5344, .value=0xaf, .type=IO_READ},
        {.addr=0x5345, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015a, .value=0x65, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x5cda, .a=0x86, .x=0x86, .y=0x29, .sp=0x4c, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x00}, {.addr=0x5cda, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5cdb, .a=0x86, .x=0x87, .y=0x29, .sp=0x4c, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x86}, {.addr=0x5cda, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5cda, .value=0xaf, .type=IO_READ},
        {.addr=0x5cdb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0086, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xe777, .a=0xb3, .x=0x92, .y=0xf7, .sp=0x79, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xe777, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe778, .a=0xb3, .x=0x93, .y=0xf7, .sp=0x79, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xb3}, {.addr=0xe777, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe777, .value=0xaf, .type=IO_READ},
        {.addr=0xe778, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x4c0d, .a=0x71, .x=0x19, .y=0x4b, .sp=0x05, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x00}, {.addr=0x4c0d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4c0e, .a=0x71, .x=0x1a, .y=0x4b, .sp=0x05, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0x71}, {.addr=0x4c0d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4c0d, .value=0xaf, .type=IO_READ},
        {.addr=0x4c0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0019, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x8817, .a=0x34, .x=0x8c, .y=0x9a, .sp=0x21, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x8817, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8818, .a=0x34, .x=0x8d, .y=0x9a, .sp=0x21, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x34}, {.addr=0x8817, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8817, .value=0xaf, .type=IO_READ},
        {.addr=0x8818, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0x34, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xcca6, .a=0xa9, .x=0x76, .y=0xb5, .sp=0x63, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x00}, {.addr=0xcca6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcca7, .a=0xa9, .x=0x77, .y=0xb5, .sp=0x63, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xa9}, {.addr=0xcca6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcca6, .value=0xaf, .type=IO_READ},
        {.addr=0xcca7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0076, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x9169, .a=0xbb, .x=0x67, .y=0xd5, .sp=0x84, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x9169, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x916a, .a=0xbb, .x=0x68, .y=0xd5, .sp=0x84, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xbb}, {.addr=0x9169, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9169, .value=0xaf, .type=IO_READ},
        {.addr=0x916a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0xbb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x8b90, .a=0x00, .x=0xb6, .y=0x65, .sp=0x2f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x00}, {.addr=0x8b90, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8b91, .a=0x00, .x=0xb7, .y=0x65, .sp=0x2f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x00}, {.addr=0x8b90, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8b90, .value=0xaf, .type=IO_READ},
        {.addr=0x8b91, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b6, .value=0x00, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xf272, .a=0x4c, .x=0x8e, .y=0xae, .sp=0x16, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0xf272, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf273, .a=0x4c, .x=0x8f, .y=0xae, .sp=0x16, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x4c}, {.addr=0xf272, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf272, .value=0xaf, .type=IO_READ},
        {.addr=0xf273, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018e, .value=0x4c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x6f50, .a=0x56, .x=0x0f, .y=0xe7, .sp=0x56, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x00}, {.addr=0x6f50, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6f51, .a=0x56, .x=0x10, .y=0xe7, .sp=0x56, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x56}, {.addr=0x6f50, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6f50, .value=0xaf, .type=IO_READ},
        {.addr=0x6f51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000f, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xb8ea, .a=0x27, .x=0x1e, .y=0xd6, .sp=0x5e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0xb8ea, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb8eb, .a=0x27, .x=0x1f, .y=0xd6, .sp=0x5e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x27}, {.addr=0xb8ea, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb8ea, .value=0xaf, .type=IO_READ},
        {.addr=0xb8eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x3aab, .a=0xe1, .x=0x78, .y=0x7b, .sp=0x4f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x3aab, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3aac, .a=0xe1, .x=0x79, .y=0x7b, .sp=0x4f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xe1}, {.addr=0x3aab, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3aab, .value=0xaf, .type=IO_READ},
        {.addr=0x3aac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x53b2, .a=0xe8, .x=0x77, .y=0x63, .sp=0x98, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0x53b2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x53b3, .a=0xe8, .x=0x78, .y=0x63, .sp=0x98, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0xe8}, {.addr=0x53b2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x53b2, .value=0xaf, .type=IO_READ},
        {.addr=0x53b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0177, .value=0xe8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x4761, .a=0x62, .x=0xfa, .y=0x2f, .sp=0xc5, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x4761, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4762, .a=0x62, .x=0xfb, .y=0x2f, .sp=0xc5, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x62}, {.addr=0x4761, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4761, .value=0xaf, .type=IO_READ},
        {.addr=0x4762, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x62, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x1bcb, .a=0xdc, .x=0x39, .y=0xef, .sp=0xa8, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x00}, {.addr=0x1bcb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1bcc, .a=0xdc, .x=0x3a, .y=0xef, .sp=0xa8, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0xdc}, {.addr=0x1bcb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1bcb, .value=0xaf, .type=IO_READ},
        {.addr=0x1bcc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0039, .value=0xdc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xb815, .a=0xc5, .x=0xe0, .y=0x45, .sp=0x0c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0x00}, {.addr=0xb815, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb816, .a=0xc5, .x=0xe1, .y=0x45, .sp=0x0c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0xc5}, {.addr=0xb815, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb815, .value=0xaf, .type=IO_READ},
        {.addr=0xb816, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e0, .value=0xc5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x3876, .a=0x80, .x=0xd4, .y=0xf1, .sp=0x84, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x3876, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3877, .a=0x80, .x=0xd5, .y=0xf1, .sp=0x84, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x80}, {.addr=0x3876, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3876, .value=0xaf, .type=IO_READ},
        {.addr=0x3877, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x80, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xe0ce, .a=0x52, .x=0xd3, .y=0x03, .sp=0x32, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x00}, {.addr=0xe0ce, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe0cf, .a=0x52, .x=0xd4, .y=0x03, .sp=0x32, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x52}, {.addr=0xe0ce, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe0ce, .value=0xaf, .type=IO_READ},
        {.addr=0xe0cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d3, .value=0x52, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x996f, .a=0x08, .x=0x1c, .y=0x89, .sp=0x11, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x00}, {.addr=0x996f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9970, .a=0x08, .x=0x1d, .y=0x89, .sp=0x11, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x08}, {.addr=0x996f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x996f, .value=0xaf, .type=IO_READ},
        {.addr=0x9970, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x001c, .value=0x08, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xf648, .a=0x86, .x=0x0d, .y=0xc2, .sp=0x37, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0xf648, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf649, .a=0x86, .x=0x0e, .y=0xc2, .sp=0x37, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x86}, {.addr=0xf648, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf648, .value=0xaf, .type=IO_READ},
        {.addr=0xf649, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000d, .value=0x86, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xecf3, .a=0xcf, .x=0x39, .y=0x44, .sp=0x95, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0xecf3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xecf4, .a=0xcf, .x=0x3a, .y=0x44, .sp=0x95, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xcf}, {.addr=0xecf3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xecf3, .value=0xaf, .type=IO_READ},
        {.addr=0xecf4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0xcf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xb558, .a=0x5d, .x=0x85, .y=0x2b, .sp=0xa0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0xb558, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb559, .a=0x5d, .x=0x86, .y=0x2b, .sp=0xa0, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x5d}, {.addr=0xb558, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb558, .value=0xaf, .type=IO_READ},
        {.addr=0xb559, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x5d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x1f88, .a=0x27, .x=0x0d, .y=0x8a, .sp=0x5d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x00}, {.addr=0x1f88, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1f89, .a=0x27, .x=0x0e, .y=0x8a, .sp=0x5d, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x27}, {.addr=0x1f88, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1f88, .value=0xaf, .type=IO_READ},
        {.addr=0x1f89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010d, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x1146, .a=0xc3, .x=0x6f, .y=0xf7, .sp=0x6e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x00}, {.addr=0x1146, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1147, .a=0xc3, .x=0x70, .y=0xf7, .sp=0x6e, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0xc3}, {.addr=0x1146, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1146, .value=0xaf, .type=IO_READ},
        {.addr=0x1147, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006f, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xd2f3, .a=0x18, .x=0x90, .y=0xb0, .sp=0x54, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x00}, {.addr=0xd2f3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd2f4, .a=0x18, .x=0x91, .y=0xb0, .sp=0x54, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x18}, {.addr=0xd2f3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd2f3, .value=0xaf, .type=IO_READ},
        {.addr=0xd2f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0190, .value=0x18, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xc9d3, .a=0xc1, .x=0x3f, .y=0x40, .sp=0xad, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x00}, {.addr=0xc9d3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc9d4, .a=0xc1, .x=0x40, .y=0x40, .sp=0xad, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xc1}, {.addr=0xc9d3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc9d3, .value=0xaf, .type=IO_READ},
        {.addr=0xc9d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003f, .value=0xc1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x1117, .a=0x65, .x=0x8d, .y=0x40, .sp=0x36, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x1117, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1118, .a=0x65, .x=0x8e, .y=0x40, .sp=0x36, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x65}, {.addr=0x1117, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1117, .value=0xaf, .type=IO_READ},
        {.addr=0x1118, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018d, .value=0x65, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x22b9, .a=0x81, .x=0xea, .y=0xa4, .sp=0x5b, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0x22b9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x22ba, .a=0x81, .x=0xeb, .y=0xa4, .sp=0x5b, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x81}, {.addr=0x22b9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x22b9, .value=0xaf, .type=IO_READ},
        {.addr=0x22ba, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x16b2, .a=0x96, .x=0x22, .y=0x7a, .sp=0xe8, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0x00}, {.addr=0x16b2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x16b3, .a=0x96, .x=0x23, .y=0x7a, .sp=0xe8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0x96}, {.addr=0x16b2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x16b2, .value=0xaf, .type=IO_READ},
        {.addr=0x16b3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0022, .value=0x96, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xa2be, .a=0x20, .x=0x81, .y=0xb6, .sp=0x07, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x00}, {.addr=0xa2be, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa2bf, .a=0x20, .x=0x82, .y=0xb6, .sp=0x07, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x20}, {.addr=0xa2be, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa2be, .value=0xaf, .type=IO_READ},
        {.addr=0xa2bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0081, .value=0x20, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xdb93, .a=0x68, .x=0x87, .y=0x0f, .sp=0x5e, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x00}, {.addr=0xdb93, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdb94, .a=0x68, .x=0x88, .y=0x0f, .sp=0x5e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x68}, {.addr=0xdb93, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdb93, .value=0xaf, .type=IO_READ},
        {.addr=0xdb94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0087, .value=0x68, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x6e89, .a=0x50, .x=0x4c, .y=0x24, .sp=0xed, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x00}, {.addr=0x6e89, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6e8a, .a=0x50, .x=0x4d, .y=0x24, .sp=0xed, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0x50}, {.addr=0x6e89, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6e89, .value=0xaf, .type=IO_READ},
        {.addr=0x6e8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004c, .value=0x50, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x190f, .a=0x7e, .x=0x5f, .y=0x37, .sp=0xa8, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x190f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1910, .a=0x7e, .x=0x60, .y=0x37, .sp=0xa8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x7e}, {.addr=0x190f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x190f, .value=0xaf, .type=IO_READ},
        {.addr=0x1910, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x7e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x88d3, .a=0xe6, .x=0xab, .y=0x66, .sp=0xad, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x00}, {.addr=0x88d3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x88d4, .a=0xe6, .x=0xac, .y=0x66, .sp=0xad, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xe6}, {.addr=0x88d3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x88d3, .value=0xaf, .type=IO_READ},
        {.addr=0x88d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ab, .value=0xe6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xca7e, .a=0xf3, .x=0x7f, .y=0xd2, .sp=0x41, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x00}, {.addr=0xca7e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xca7f, .a=0xf3, .x=0x80, .y=0xd2, .sp=0x41, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xf3}, {.addr=0xca7e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xca7e, .value=0xaf, .type=IO_READ},
        {.addr=0xca7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007f, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x6c1e, .a=0x29, .x=0xb5, .y=0xde, .sp=0xec, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x6c1e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6c1f, .a=0x29, .x=0xb6, .y=0xde, .sp=0xec, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x29}, {.addr=0x6c1e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6c1e, .value=0xaf, .type=IO_READ},
        {.addr=0x6c1f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x29, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xd4f5, .a=0xf0, .x=0x0c, .y=0x08, .sp=0x94, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x00}, {.addr=0xd4f5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd4f6, .a=0xf0, .x=0x0d, .y=0x08, .sp=0x94, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xf0}, {.addr=0xd4f5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd4f5, .value=0xaf, .type=IO_READ},
        {.addr=0xd4f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000c, .value=0xf0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x3907, .a=0xde, .x=0xb4, .y=0xc8, .sp=0x55, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x3907, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3908, .a=0xde, .x=0xb5, .y=0xc8, .sp=0x55, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xde}, {.addr=0x3907, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3907, .value=0xaf, .type=IO_READ},
        {.addr=0x3908, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xde, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x49fc, .a=0x8e, .x=0xc1, .y=0x10, .sp=0x41, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x00}, {.addr=0x49fc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x49fd, .a=0x8e, .x=0xc2, .y=0x10, .sp=0x41, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x8e}, {.addr=0x49fc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x49fc, .value=0xaf, .type=IO_READ},
        {.addr=0x49fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c1, .value=0x8e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x7270, .a=0xd6, .x=0x2e, .y=0x61, .sp=0xfb, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x7270, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7271, .a=0xd6, .x=0x2f, .y=0x61, .sp=0xfb, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xd6}, {.addr=0x7270, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7270, .value=0xaf, .type=IO_READ},
        {.addr=0x7271, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012e, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xd8bc, .a=0xf2, .x=0x78, .y=0xf1, .sp=0xb4, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xd8bc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd8bd, .a=0xf2, .x=0x79, .y=0xf1, .sp=0xb4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xf2}, {.addr=0xd8bc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd8bc, .value=0xaf, .type=IO_READ},
        {.addr=0xd8bd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xcefc, .a=0x84, .x=0x4e, .y=0xe7, .sp=0x31, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0xcefc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcefd, .a=0x84, .x=0x4f, .y=0xe7, .sp=0x31, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x84}, {.addr=0xcefc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcefc, .value=0xaf, .type=IO_READ},
        {.addr=0xcefd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014e, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xcb6e, .a=0x22, .x=0x99, .y=0xd1, .sp=0x76, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0xcb6e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcb6f, .a=0x22, .x=0x9a, .y=0xd1, .sp=0x76, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x22}, {.addr=0xcb6e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcb6e, .value=0xaf, .type=IO_READ},
        {.addr=0xcb6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0199, .value=0x22, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xc70c, .a=0x85, .x=0x19, .y=0x41, .sp=0x6a, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0xc70c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc70d, .a=0x85, .x=0x1a, .y=0x41, .sp=0x6a, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x85}, {.addr=0xc70c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc70c, .value=0xaf, .type=IO_READ},
        {.addr=0xc70d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0119, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x20de, .a=0xae, .x=0x67, .y=0x86, .sp=0xec, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x00}, {.addr=0x20de, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x20df, .a=0xae, .x=0x68, .y=0x86, .sp=0xec, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0xae}, {.addr=0x20de, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x20de, .value=0xaf, .type=IO_READ},
        {.addr=0x20df, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0067, .value=0xae, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xd572, .a=0x50, .x=0x56, .y=0xf7, .sp=0x22, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0xd572, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd573, .a=0x50, .x=0x57, .y=0xf7, .sp=0x22, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x50}, {.addr=0xd572, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd572, .value=0xaf, .type=IO_READ},
        {.addr=0xd573, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0156, .value=0x50, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xd0e9, .a=0xdd, .x=0xa9, .y=0xf8, .sp=0x1a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0xd0e9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd0ea, .a=0xdd, .x=0xaa, .y=0xf8, .sp=0x1a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xdd}, {.addr=0xd0e9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd0e9, .value=0xaf, .type=IO_READ},
        {.addr=0xd0ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a9, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xe940, .a=0x65, .x=0x5e, .y=0x21, .sp=0x89, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0xe940, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe941, .a=0x65, .x=0x5f, .y=0x21, .sp=0x89, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x65}, {.addr=0xe940, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe940, .value=0xaf, .type=IO_READ},
        {.addr=0xe941, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015e, .value=0x65, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x7028, .a=0x4c, .x=0xa1, .y=0xe1, .sp=0x2b, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x7028, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7029, .a=0x4c, .x=0xa2, .y=0xe1, .sp=0x2b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x4c}, {.addr=0x7028, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7028, .value=0xaf, .type=IO_READ},
        {.addr=0x7029, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x4c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x4f4b, .a=0x4c, .x=0x68, .y=0x62, .sp=0x54, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0x4f4b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4f4c, .a=0x4c, .x=0x69, .y=0x62, .sp=0x54, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x4c}, {.addr=0x4f4b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4f4b, .value=0xaf, .type=IO_READ},
        {.addr=0x4f4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x4c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xb7a2, .a=0x4e, .x=0x16, .y=0x9a, .sp=0x43, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x00}, {.addr=0xb7a2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb7a3, .a=0x4e, .x=0x17, .y=0x9a, .sp=0x43, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x4e}, {.addr=0xb7a2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb7a2, .value=0xaf, .type=IO_READ},
        {.addr=0xb7a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0016, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x992e, .a=0xe7, .x=0x75, .y=0x3c, .sp=0x19, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x992e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x992f, .a=0xe7, .x=0x76, .y=0x3c, .sp=0x19, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xe7}, {.addr=0x992e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x992e, .value=0xaf, .type=IO_READ},
        {.addr=0x992f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x1c99, .a=0x5c, .x=0x7f, .y=0x52, .sp=0xbf, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x1c99, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1c9a, .a=0x5c, .x=0x80, .y=0x52, .sp=0xbf, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x5c}, {.addr=0x1c99, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1c99, .value=0xaf, .type=IO_READ},
        {.addr=0x1c9a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xa4c6, .a=0x09, .x=0x4a, .y=0x0a, .sp=0x31, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x00}, {.addr=0xa4c6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa4c7, .a=0x09, .x=0x4b, .y=0x0a, .sp=0x31, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x09}, {.addr=0xa4c6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa4c6, .value=0xaf, .type=IO_READ},
        {.addr=0xa4c7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004a, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x316f, .a=0x4e, .x=0xba, .y=0xf2, .sp=0xb0, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x316f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3170, .a=0x4e, .x=0xbb, .y=0xf2, .sp=0xb0, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x4e}, {.addr=0x316f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x316f, .value=0xaf, .type=IO_READ},
        {.addr=0x3170, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x610a, .a=0x7c, .x=0xd2, .y=0x6a, .sp=0xb1, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x00}, {.addr=0x610a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x610b, .a=0x7c, .x=0xd3, .y=0x6a, .sp=0xb1, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x7c}, {.addr=0x610a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x610a, .value=0xaf, .type=IO_READ},
        {.addr=0x610b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d2, .value=0x7c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x5be8, .a=0x4f, .x=0x46, .y=0x7f, .sp=0x28, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x5be8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5be9, .a=0x4f, .x=0x47, .y=0x7f, .sp=0x28, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x4f}, {.addr=0x5be8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5be8, .value=0xaf, .type=IO_READ},
        {.addr=0x5be9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0146, .value=0x4f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x86d8, .a=0x6b, .x=0x8f, .y=0xd4, .sp=0x12, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x00}, {.addr=0x86d8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x86d9, .a=0x6b, .x=0x90, .y=0xd4, .sp=0x12, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x6b}, {.addr=0x86d8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x86d8, .value=0xaf, .type=IO_READ},
        {.addr=0x86d9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x008f, .value=0x6b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x7cdb, .a=0x95, .x=0x88, .y=0x25, .sp=0xc7, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x7cdb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7cdc, .a=0x95, .x=0x89, .y=0x25, .sp=0xc7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x95}, {.addr=0x7cdb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7cdb, .value=0xaf, .type=IO_READ},
        {.addr=0x7cdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0188, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x6dac, .a=0x01, .x=0x70, .y=0xe4, .sp=0x61, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x00}, {.addr=0x6dac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6dad, .a=0x01, .x=0x71, .y=0xe4, .sp=0x61, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x01}, {.addr=0x6dac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6dac, .value=0xaf, .type=IO_READ},
        {.addr=0x6dad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0070, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x9797, .a=0x59, .x=0xc7, .y=0x86, .sp=0x48, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x9797, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9798, .a=0x59, .x=0xc8, .y=0x86, .sp=0x48, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x59}, {.addr=0x9797, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9797, .value=0xaf, .type=IO_READ},
        {.addr=0x9798, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0x59, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x3930, .a=0x61, .x=0x40, .y=0x89, .sp=0xe8, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x3930, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3931, .a=0x61, .x=0x41, .y=0x89, .sp=0xe8, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x61}, {.addr=0x3930, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3930, .value=0xaf, .type=IO_READ},
        {.addr=0x3931, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0140, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xbcfe, .a=0xe2, .x=0xba, .y=0x6d, .sp=0xeb, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0xbcfe, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbcff, .a=0xe2, .x=0xbb, .y=0x6d, .sp=0xeb, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xe2}, {.addr=0xbcfe, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbcfe, .value=0xaf, .type=IO_READ},
        {.addr=0xbcff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0xe2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x563e, .a=0xa2, .x=0xa1, .y=0x06, .sp=0x9e, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x563e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x563f, .a=0xa2, .x=0xa2, .y=0x06, .sp=0x9e, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xa2}, {.addr=0x563e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x563e, .value=0xaf, .type=IO_READ},
        {.addr=0x563f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0xa2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0200) {
    const struct CPU_State initial_cpu = {.pc=0xf974, .a=0xad, .x=0xac, .y=0x80, .sp=0x1a, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x00}, {.addr=0xf974, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf975, .a=0xad, .x=0xad, .y=0x80, .sp=0x1a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0xad}, {.addr=0xf974, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf974, .value=0xaf, .type=IO_READ},
        {.addr=0xf975, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ac, .value=0xad, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0201) {
    const struct CPU_State initial_cpu = {.pc=0x7266, .a=0x5e, .x=0x44, .y=0xf0, .sp=0x59, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x7266, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7267, .a=0x5e, .x=0x45, .y=0xf0, .sp=0x59, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x5e}, {.addr=0x7266, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7266, .value=0xaf, .type=IO_READ},
        {.addr=0x7267, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0x5e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0202) {
    const struct CPU_State initial_cpu = {.pc=0x0fab, .a=0x46, .x=0xc3, .y=0x77, .sp=0xf1, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x00}, {.addr=0x0fab, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0fac, .a=0x46, .x=0xc4, .y=0x77, .sp=0xf1, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x46}, {.addr=0x0fab, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0fab, .value=0xaf, .type=IO_READ},
        {.addr=0x0fac, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c3, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0203) {
    const struct CPU_State initial_cpu = {.pc=0x4eb2, .a=0x07, .x=0xda, .y=0xdb, .sp=0xa6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x00}, {.addr=0x4eb2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4eb3, .a=0x07, .x=0xdb, .y=0xdb, .sp=0xa6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0x07}, {.addr=0x4eb2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4eb2, .value=0xaf, .type=IO_READ},
        {.addr=0x4eb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00da, .value=0x07, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0204) {
    const struct CPU_State initial_cpu = {.pc=0x13eb, .a=0x25, .x=0xe2, .y=0xc3, .sp=0x2e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x00}, {.addr=0x13eb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x13ec, .a=0x25, .x=0xe3, .y=0xc3, .sp=0x2e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x25}, {.addr=0x13eb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x13eb, .value=0xaf, .type=IO_READ},
        {.addr=0x13ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e2, .value=0x25, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0205) {
    const struct CPU_State initial_cpu = {.pc=0x483d, .a=0x8e, .x=0x45, .y=0x62, .sp=0x89, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x483d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x483e, .a=0x8e, .x=0x46, .y=0x62, .sp=0x89, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x8e}, {.addr=0x483d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x483d, .value=0xaf, .type=IO_READ},
        {.addr=0x483e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x8e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0206) {
    const struct CPU_State initial_cpu = {.pc=0x9d3b, .a=0x23, .x=0x29, .y=0x54, .sp=0x7a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x00}, {.addr=0x9d3b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9d3c, .a=0x23, .x=0x2a, .y=0x54, .sp=0x7a, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x23}, {.addr=0x9d3b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9d3b, .value=0xaf, .type=IO_READ},
        {.addr=0x9d3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0029, .value=0x23, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0208) {
    const struct CPU_State initial_cpu = {.pc=0xb9ce, .a=0x01, .x=0xb1, .y=0x62, .sp=0xb2, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xb9ce, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb9cf, .a=0x01, .x=0xb2, .y=0x62, .sp=0xb2, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x01}, {.addr=0xb9ce, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb9ce, .value=0xaf, .type=IO_READ},
        {.addr=0xb9cf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b1, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0209) {
    const struct CPU_State initial_cpu = {.pc=0x9dca, .a=0x90, .x=0x85, .y=0x05, .sp=0x29, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x9dca, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9dcb, .a=0x90, .x=0x86, .y=0x05, .sp=0x29, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x90}, {.addr=0x9dca, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9dca, .value=0xaf, .type=IO_READ},
        {.addr=0x9dcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x90, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_020A) {
    const struct CPU_State initial_cpu = {.pc=0x4064, .a=0x6f, .x=0xdc, .y=0x97, .sp=0x6a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x00}, {.addr=0x4064, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4065, .a=0x6f, .x=0xdd, .y=0x97, .sp=0x6a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x6f}, {.addr=0x4064, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4064, .value=0xaf, .type=IO_READ},
        {.addr=0x4065, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00dc, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_020B) {
    const struct CPU_State initial_cpu = {.pc=0xa960, .a=0x16, .x=0x36, .y=0x01, .sp=0xfa, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x00}, {.addr=0xa960, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa961, .a=0x16, .x=0x37, .y=0x01, .sp=0xfa, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0x16}, {.addr=0xa960, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa960, .value=0xaf, .type=IO_READ},
        {.addr=0xa961, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0036, .value=0x16, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_020C) {
    const struct CPU_State initial_cpu = {.pc=0x0969, .a=0xe5, .x=0xe9, .y=0x03, .sp=0x80, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x0969, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x096a, .a=0xe5, .x=0xea, .y=0x03, .sp=0x80, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xe5}, {.addr=0x0969, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0969, .value=0xaf, .type=IO_READ},
        {.addr=0x096a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_020D) {
    const struct CPU_State initial_cpu = {.pc=0x8b7c, .a=0x3c, .x=0x7e, .y=0x29, .sp=0x7f, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0x8b7c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8b7d, .a=0x3c, .x=0x7f, .y=0x29, .sp=0x7f, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x3c}, {.addr=0x8b7c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8b7c, .value=0xaf, .type=IO_READ},
        {.addr=0x8b7d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0x3c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_020E) {
    const struct CPU_State initial_cpu = {.pc=0x5b7d, .a=0xaf, .x=0x7a, .y=0x68, .sp=0x6d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x5b7d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5b7e, .a=0xaf, .x=0x7b, .y=0x68, .sp=0x6d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xaf}, {.addr=0x5b7d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5b7d, .value=0xaf, .type=IO_READ},
        {.addr=0x5b7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017a, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_020F) {
    const struct CPU_State initial_cpu = {.pc=0x5103, .a=0x6d, .x=0x00, .y=0xeb, .sp=0x59, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x00}, {.addr=0x5103, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5104, .a=0x6d, .x=0x01, .y=0xeb, .sp=0x59, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x6d}, {.addr=0x5103, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5103, .value=0xaf, .type=IO_READ},
        {.addr=0x5104, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0000, .value=0x6d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0210) {
    const struct CPU_State initial_cpu = {.pc=0x2406, .a=0xe7, .x=0x50, .y=0xea, .sp=0xdf, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x2406, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2407, .a=0xe7, .x=0x51, .y=0xea, .sp=0xdf, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xe7}, {.addr=0x2406, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2406, .value=0xaf, .type=IO_READ},
        {.addr=0x2407, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0211) {
    const struct CPU_State initial_cpu = {.pc=0x1dfa, .a=0xfb, .x=0x7b, .y=0x6b, .sp=0xfc, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x00}, {.addr=0x1dfa, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1dfb, .a=0xfb, .x=0x7c, .y=0x6b, .sp=0xfc, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xfb}, {.addr=0x1dfa, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1dfa, .value=0xaf, .type=IO_READ},
        {.addr=0x1dfb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007b, .value=0xfb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0212) {
    const struct CPU_State initial_cpu = {.pc=0xc06e, .a=0x9a, .x=0x3b, .y=0xb7, .sp=0x58, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x00}, {.addr=0xc06e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc06f, .a=0x9a, .x=0x3c, .y=0xb7, .sp=0x58, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x9a}, {.addr=0xc06e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc06e, .value=0xaf, .type=IO_READ},
        {.addr=0xc06f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003b, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0213) {
    const struct CPU_State initial_cpu = {.pc=0xff40, .a=0xba, .x=0xf7, .y=0xab, .sp=0xf1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0xff40, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xff41, .a=0xba, .x=0xf8, .y=0xab, .sp=0xf1, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xba}, {.addr=0xff40, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xff40, .value=0xaf, .type=IO_READ},
        {.addr=0xff41, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f7, .value=0xba, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0214) {
    const struct CPU_State initial_cpu = {.pc=0x6b83, .a=0x96, .x=0xdf, .y=0x76, .sp=0x89, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x6b83, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6b84, .a=0x96, .x=0xe0, .y=0x76, .sp=0x89, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x96}, {.addr=0x6b83, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6b83, .value=0xaf, .type=IO_READ},
        {.addr=0x6b84, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0x96, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0215) {
    const struct CPU_State initial_cpu = {.pc=0x5188, .a=0x6a, .x=0xd0, .y=0xf8, .sp=0x55, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0x5188, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5189, .a=0x6a, .x=0xd1, .y=0xf8, .sp=0x55, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x6a}, {.addr=0x5188, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5188, .value=0xaf, .type=IO_READ},
        {.addr=0x5189, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0216) {
    const struct CPU_State initial_cpu = {.pc=0x2c7d, .a=0xe4, .x=0x79, .y=0x01, .sp=0x13, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x00}, {.addr=0x2c7d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2c7e, .a=0xe4, .x=0x7a, .y=0x01, .sp=0x13, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xe4}, {.addr=0x2c7d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2c7d, .value=0xaf, .type=IO_READ},
        {.addr=0x2c7e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0079, .value=0xe4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0217) {
    const struct CPU_State initial_cpu = {.pc=0x0d88, .a=0x92, .x=0x78, .y=0x4a, .sp=0xe4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x0d88, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0d89, .a=0x92, .x=0x79, .y=0x4a, .sp=0xe4, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x92}, {.addr=0x0d88, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0d88, .value=0xaf, .type=IO_READ},
        {.addr=0x0d89, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0x92, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0218) {
    const struct CPU_State initial_cpu = {.pc=0xc67a, .a=0x80, .x=0x0d, .y=0x62, .sp=0xbd, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0xc67a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc67b, .a=0x80, .x=0x0e, .y=0x62, .sp=0xbd, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x80}, {.addr=0xc67a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc67a, .value=0xaf, .type=IO_READ},
        {.addr=0xc67b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000d, .value=0x80, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0219) {
    const struct CPU_State initial_cpu = {.pc=0x64a5, .a=0x76, .x=0x10, .y=0x72, .sp=0x13, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x64a5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x64a6, .a=0x76, .x=0x11, .y=0x72, .sp=0x13, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x76}, {.addr=0x64a5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x64a5, .value=0xaf, .type=IO_READ},
        {.addr=0x64a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0x76, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_021A) {
    const struct CPU_State initial_cpu = {.pc=0xe9c9, .a=0x57, .x=0xcd, .y=0xc5, .sp=0x6b, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x00}, {.addr=0xe9c9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe9ca, .a=0x57, .x=0xce, .y=0xc5, .sp=0x6b, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x57}, {.addr=0xe9c9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe9c9, .value=0xaf, .type=IO_READ},
        {.addr=0xe9ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00cd, .value=0x57, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_021B) {
    const struct CPU_State initial_cpu = {.pc=0x6d81, .a=0x8c, .x=0x0b, .y=0xac, .sp=0x8e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x6d81, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6d82, .a=0x8c, .x=0x0c, .y=0xac, .sp=0x8e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x8c}, {.addr=0x6d81, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6d81, .value=0xaf, .type=IO_READ},
        {.addr=0x6d82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_021C) {
    const struct CPU_State initial_cpu = {.pc=0x5319, .a=0xfb, .x=0x2b, .y=0x0e, .sp=0x45, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x5319, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x531a, .a=0xfb, .x=0x2c, .y=0x0e, .sp=0x45, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xfb}, {.addr=0x5319, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5319, .value=0xaf, .type=IO_READ},
        {.addr=0x531a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012b, .value=0xfb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_021D) {
    const struct CPU_State initial_cpu = {.pc=0x0839, .a=0x99, .x=0xce, .y=0xb4, .sp=0x10, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x0839, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x083a, .a=0x99, .x=0xcf, .y=0xb4, .sp=0x10, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x99}, {.addr=0x0839, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0839, .value=0xaf, .type=IO_READ},
        {.addr=0x083a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ce, .value=0x99, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_021E) {
    const struct CPU_State initial_cpu = {.pc=0x483c, .a=0xda, .x=0xd7, .y=0x28, .sp=0xa6, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x00}, {.addr=0x483c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x483d, .a=0xda, .x=0xd8, .y=0x28, .sp=0xa6, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0xda}, {.addr=0x483c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x483c, .value=0xaf, .type=IO_READ},
        {.addr=0x483d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d7, .value=0xda, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_021F) {
    const struct CPU_State initial_cpu = {.pc=0x43ac, .a=0x7c, .x=0xd0, .y=0x56, .sp=0x08, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0x43ac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x43ad, .a=0x7c, .x=0xd1, .y=0x56, .sp=0x08, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x7c}, {.addr=0x43ac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x43ac, .value=0xaf, .type=IO_READ},
        {.addr=0x43ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0x7c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0220) {
    const struct CPU_State initial_cpu = {.pc=0xc850, .a=0x85, .x=0x6f, .y=0xcf, .sp=0xdb, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x00}, {.addr=0xc850, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc851, .a=0x85, .x=0x70, .y=0xcf, .sp=0xdb, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x85}, {.addr=0xc850, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc850, .value=0xaf, .type=IO_READ},
        {.addr=0xc851, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006f, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0221) {
    const struct CPU_State initial_cpu = {.pc=0x54a7, .a=0x1f, .x=0xbd, .y=0x8c, .sp=0xb9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x54a7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x54a8, .a=0x1f, .x=0xbe, .y=0x8c, .sp=0xb9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x1f}, {.addr=0x54a7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x54a7, .value=0xaf, .type=IO_READ},
        {.addr=0x54a8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0222) {
    const struct CPU_State initial_cpu = {.pc=0x9b68, .a=0x2f, .x=0x18, .y=0x7c, .sp=0xf5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x9b68, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9b69, .a=0x2f, .x=0x19, .y=0x7c, .sp=0xf5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x2f}, {.addr=0x9b68, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9b68, .value=0xaf, .type=IO_READ},
        {.addr=0x9b69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0118, .value=0x2f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0223) {
    const struct CPU_State initial_cpu = {.pc=0xcd2b, .a=0x55, .x=0x7b, .y=0xb7, .sp=0xcc, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x00}, {.addr=0xcd2b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcd2c, .a=0x55, .x=0x7c, .y=0xb7, .sp=0xcc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x55}, {.addr=0xcd2b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcd2b, .value=0xaf, .type=IO_READ},
        {.addr=0xcd2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007b, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0224) {
    const struct CPU_State initial_cpu = {.pc=0x21cd, .a=0x00, .x=0x34, .y=0x2d, .sp=0x56, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x00}, {.addr=0x21cd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x21ce, .a=0x00, .x=0x35, .y=0x2d, .sp=0x56, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x00}, {.addr=0x21cd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x21cd, .value=0xaf, .type=IO_READ},
        {.addr=0x21ce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0034, .value=0x00, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0225) {
    const struct CPU_State initial_cpu = {.pc=0xe114, .a=0x1e, .x=0xa5, .y=0x4e, .sp=0x66, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0xe114, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe115, .a=0x1e, .x=0xa6, .y=0x4e, .sp=0x66, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x1e}, {.addr=0xe114, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe114, .value=0xaf, .type=IO_READ},
        {.addr=0xe115, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x1e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0226) {
    const struct CPU_State initial_cpu = {.pc=0x1ead, .a=0x67, .x=0x9b, .y=0xd5, .sp=0x45, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x1ead, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1eae, .a=0x67, .x=0x9c, .y=0xd5, .sp=0x45, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x67}, {.addr=0x1ead, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1ead, .value=0xaf, .type=IO_READ},
        {.addr=0x1eae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0x67, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0227) {
    const struct CPU_State initial_cpu = {.pc=0xc8ad, .a=0xac, .x=0x5f, .y=0xff, .sp=0x83, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x00}, {.addr=0xc8ad, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc8ae, .a=0xac, .x=0x60, .y=0xff, .sp=0x83, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0xac}, {.addr=0xc8ad, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc8ad, .value=0xaf, .type=IO_READ},
        {.addr=0xc8ae, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005f, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0228) {
    const struct CPU_State initial_cpu = {.pc=0x130a, .a=0xb6, .x=0x6a, .y=0x7a, .sp=0x81, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x00}, {.addr=0x130a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x130b, .a=0xb6, .x=0x6b, .y=0x7a, .sp=0x81, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xb6}, {.addr=0x130a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x130a, .value=0xaf, .type=IO_READ},
        {.addr=0x130b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006a, .value=0xb6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0229) {
    const struct CPU_State initial_cpu = {.pc=0x4161, .a=0x28, .x=0x63, .y=0xb8, .sp=0x19, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x4161, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4162, .a=0x28, .x=0x64, .y=0xb8, .sp=0x19, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x28}, {.addr=0x4161, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4161, .value=0xaf, .type=IO_READ},
        {.addr=0x4162, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0163, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_022A) {
    const struct CPU_State initial_cpu = {.pc=0x6d71, .a=0x62, .x=0x28, .y=0xe4, .sp=0x12, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x6d71, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6d72, .a=0x62, .x=0x29, .y=0xe4, .sp=0x12, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x62}, {.addr=0x6d71, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6d71, .value=0xaf, .type=IO_READ},
        {.addr=0x6d72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0128, .value=0x62, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_022B) {
    const struct CPU_State initial_cpu = {.pc=0x2f0b, .a=0x25, .x=0x92, .y=0xb4, .sp=0x43, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x2f0b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2f0c, .a=0x25, .x=0x93, .y=0xb4, .sp=0x43, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x25}, {.addr=0x2f0b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2f0b, .value=0xaf, .type=IO_READ},
        {.addr=0x2f0c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0192, .value=0x25, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_022C) {
    const struct CPU_State initial_cpu = {.pc=0xf4e7, .a=0xc3, .x=0xa0, .y=0x6b, .sp=0x1c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0xf4e7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf4e8, .a=0xc3, .x=0xa1, .y=0x6b, .sp=0x1c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xc3}, {.addr=0xf4e7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf4e7, .value=0xaf, .type=IO_READ},
        {.addr=0xf4e8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_022D) {
    const struct CPU_State initial_cpu = {.pc=0x7486, .a=0x6b, .x=0xb7, .y=0x7b, .sp=0x93, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x7486, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7487, .a=0x6b, .x=0xb8, .y=0x7b, .sp=0x93, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x6b}, {.addr=0x7486, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7486, .value=0xaf, .type=IO_READ},
        {.addr=0x7487, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b7, .value=0x6b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_022E) {
    const struct CPU_State initial_cpu = {.pc=0xd3fa, .a=0xd1, .x=0x1f, .y=0x0c, .sp=0x03, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x00}, {.addr=0xd3fa, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd3fb, .a=0xd1, .x=0x20, .y=0x0c, .sp=0x03, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0xd1}, {.addr=0xd3fa, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd3fa, .value=0xaf, .type=IO_READ},
        {.addr=0xd3fb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x001f, .value=0xd1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_022F) {
    const struct CPU_State initial_cpu = {.pc=0x30e4, .a=0x45, .x=0xad, .y=0x72, .sp=0x6c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x00}, {.addr=0x30e4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x30e5, .a=0x45, .x=0xae, .y=0x72, .sp=0x6c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x45}, {.addr=0x30e4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x30e4, .value=0xaf, .type=IO_READ},
        {.addr=0x30e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ad, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0230) {
    const struct CPU_State initial_cpu = {.pc=0x1494, .a=0x16, .x=0x74, .y=0x7b, .sp=0x46, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x00}, {.addr=0x1494, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1495, .a=0x16, .x=0x75, .y=0x7b, .sp=0x46, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x16}, {.addr=0x1494, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1494, .value=0xaf, .type=IO_READ},
        {.addr=0x1495, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0074, .value=0x16, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0231) {
    const struct CPU_State initial_cpu = {.pc=0x60b1, .a=0x60, .x=0x17, .y=0xbd, .sp=0xf0, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0x60b1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x60b2, .a=0x60, .x=0x18, .y=0xbd, .sp=0xf0, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x60}, {.addr=0x60b1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x60b1, .value=0xaf, .type=IO_READ},
        {.addr=0x60b2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0117, .value=0x60, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0232) {
    const struct CPU_State initial_cpu = {.pc=0x9551, .a=0x76, .x=0xa5, .y=0x44, .sp=0xf0, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x9551, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9552, .a=0x76, .x=0xa6, .y=0x44, .sp=0xf0, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x76}, {.addr=0x9551, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9551, .value=0xaf, .type=IO_READ},
        {.addr=0x9552, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x76, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0233) {
    const struct CPU_State initial_cpu = {.pc=0xd9a1, .a=0x73, .x=0x5b, .y=0x9a, .sp=0x3f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0xd9a1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd9a2, .a=0x73, .x=0x5c, .y=0x9a, .sp=0x3f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x73}, {.addr=0xd9a1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd9a1, .value=0xaf, .type=IO_READ},
        {.addr=0xd9a2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0x73, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0234) {
    const struct CPU_State initial_cpu = {.pc=0x14b5, .a=0xd3, .x=0x06, .y=0x08, .sp=0x1c, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x14b5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x14b6, .a=0xd3, .x=0x07, .y=0x08, .sp=0x1c, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xd3}, {.addr=0x14b5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x14b5, .value=0xaf, .type=IO_READ},
        {.addr=0x14b6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0106, .value=0xd3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0236) {
    const struct CPU_State initial_cpu = {.pc=0x1124, .a=0x28, .x=0x5a, .y=0xa3, .sp=0xfb, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x00}, {.addr=0x1124, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1125, .a=0x28, .x=0x5b, .y=0xa3, .sp=0xfb, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x28}, {.addr=0x1124, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1124, .value=0xaf, .type=IO_READ},
        {.addr=0x1125, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005a, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0237) {
    const struct CPU_State initial_cpu = {.pc=0xfca5, .a=0xea, .x=0x3d, .y=0x8f, .sp=0xb5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x00}, {.addr=0xfca5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfca6, .a=0xea, .x=0x3e, .y=0x8f, .sp=0xb5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0xea}, {.addr=0xfca5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfca5, .value=0xaf, .type=IO_READ},
        {.addr=0xfca6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003d, .value=0xea, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0238) {
    const struct CPU_State initial_cpu = {.pc=0xf0f6, .a=0x10, .x=0xac, .y=0x5b, .sp=0xa6, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0xf0f6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf0f7, .a=0x10, .x=0xad, .y=0x5b, .sp=0xa6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x10}, {.addr=0xf0f6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf0f6, .value=0xaf, .type=IO_READ},
        {.addr=0xf0f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ac, .value=0x10, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0239) {
    const struct CPU_State initial_cpu = {.pc=0x7d4a, .a=0x8c, .x=0xc2, .y=0xe5, .sp=0xb7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x7d4a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7d4b, .a=0x8c, .x=0xc3, .y=0xe5, .sp=0xb7, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x8c}, {.addr=0x7d4a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7d4a, .value=0xaf, .type=IO_READ},
        {.addr=0x7d4b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x8c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_023A) {
    const struct CPU_State initial_cpu = {.pc=0x38be, .a=0x66, .x=0xaa, .y=0x5b, .sp=0x6b, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x00}, {.addr=0x38be, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x38bf, .a=0x66, .x=0xab, .y=0x5b, .sp=0x6b, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x66}, {.addr=0x38be, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x38be, .value=0xaf, .type=IO_READ},
        {.addr=0x38bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00aa, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_023B) {
    const struct CPU_State initial_cpu = {.pc=0x8d33, .a=0x7f, .x=0xeb, .y=0xb6, .sp=0x04, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x00}, {.addr=0x8d33, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8d34, .a=0x7f, .x=0xec, .y=0xb6, .sp=0x04, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x7f}, {.addr=0x8d33, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8d33, .value=0xaf, .type=IO_READ},
        {.addr=0x8d34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00eb, .value=0x7f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_023C) {
    const struct CPU_State initial_cpu = {.pc=0xa7dd, .a=0x0f, .x=0x9b, .y=0x64, .sp=0x35, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x00}, {.addr=0xa7dd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa7de, .a=0x0f, .x=0x9c, .y=0x64, .sp=0x35, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x0f}, {.addr=0xa7dd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa7dd, .value=0xaf, .type=IO_READ},
        {.addr=0xa7de, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009b, .value=0x0f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_023D) {
    const struct CPU_State initial_cpu = {.pc=0xaee1, .a=0x48, .x=0xa0, .y=0xd7, .sp=0x02, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x00}, {.addr=0xaee1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xaee2, .a=0x48, .x=0xa1, .y=0xd7, .sp=0x02, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x48}, {.addr=0xaee1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xaee1, .value=0xaf, .type=IO_READ},
        {.addr=0xaee2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a0, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_023E) {
    const struct CPU_State initial_cpu = {.pc=0x8aa3, .a=0xdb, .x=0x1b, .y=0xf4, .sp=0xae, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x8aa3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8aa4, .a=0xdb, .x=0x1c, .y=0xf4, .sp=0xae, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xdb}, {.addr=0x8aa3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8aa3, .value=0xaf, .type=IO_READ},
        {.addr=0x8aa4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011b, .value=0xdb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_023F) {
    const struct CPU_State initial_cpu = {.pc=0xbdb6, .a=0x7f, .x=0xa2, .y=0xfb, .sp=0x3d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x00}, {.addr=0xbdb6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbdb7, .a=0x7f, .x=0xa3, .y=0xfb, .sp=0x3d, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x7f}, {.addr=0xbdb6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbdb6, .value=0xaf, .type=IO_READ},
        {.addr=0xbdb7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a2, .value=0x7f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0240) {
    const struct CPU_State initial_cpu = {.pc=0x6585, .a=0x92, .x=0xae, .y=0x61, .sp=0xad, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x00}, {.addr=0x6585, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6586, .a=0x92, .x=0xaf, .y=0x61, .sp=0xad, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x92}, {.addr=0x6585, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6585, .value=0xaf, .type=IO_READ},
        {.addr=0x6586, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ae, .value=0x92, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0241) {
    const struct CPU_State initial_cpu = {.pc=0xf18b, .a=0x26, .x=0x74, .y=0xcd, .sp=0x07, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x00}, {.addr=0xf18b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf18c, .a=0x26, .x=0x75, .y=0xcd, .sp=0x07, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x26}, {.addr=0xf18b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf18b, .value=0xaf, .type=IO_READ},
        {.addr=0xf18c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0074, .value=0x26, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0242) {
    const struct CPU_State initial_cpu = {.pc=0x606b, .a=0x80, .x=0x46, .y=0xef, .sp=0x4f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x00}, {.addr=0x606b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x606c, .a=0x80, .x=0x47, .y=0xef, .sp=0x4f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x80}, {.addr=0x606b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x606b, .value=0xaf, .type=IO_READ},
        {.addr=0x606c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0046, .value=0x80, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0243) {
    const struct CPU_State initial_cpu = {.pc=0xa26e, .a=0x5c, .x=0xe4, .y=0x90, .sp=0x85, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x00}, {.addr=0xa26e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa26f, .a=0x5c, .x=0xe5, .y=0x90, .sp=0x85, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x5c}, {.addr=0xa26e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa26e, .value=0xaf, .type=IO_READ},
        {.addr=0xa26f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e4, .value=0x5c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0244) {
    const struct CPU_State initial_cpu = {.pc=0x3e9e, .a=0x7a, .x=0x0b, .y=0x6f, .sp=0x31, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x00}, {.addr=0x3e9e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3e9f, .a=0x7a, .x=0x0c, .y=0x6f, .sp=0x31, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x7a}, {.addr=0x3e9e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3e9e, .value=0xaf, .type=IO_READ},
        {.addr=0x3e9f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000b, .value=0x7a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0245) {
    const struct CPU_State initial_cpu = {.pc=0xbfec, .a=0xba, .x=0xaf, .y=0xf8, .sp=0x13, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0xbfec, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbfed, .a=0xba, .x=0xb0, .y=0xf8, .sp=0x13, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xba}, {.addr=0xbfec, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbfec, .value=0xaf, .type=IO_READ},
        {.addr=0xbfed, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0xba, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0246) {
    const struct CPU_State initial_cpu = {.pc=0x43f9, .a=0x34, .x=0x4e, .y=0x4d, .sp=0xe6, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x00}, {.addr=0x43f9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x43fa, .a=0x34, .x=0x4f, .y=0x4d, .sp=0xe6, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x34}, {.addr=0x43f9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x43f9, .value=0xaf, .type=IO_READ},
        {.addr=0x43fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004e, .value=0x34, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0247) {
    const struct CPU_State initial_cpu = {.pc=0x930b, .a=0x02, .x=0x0e, .y=0x5f, .sp=0xe1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0x930b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x930c, .a=0x02, .x=0x0f, .y=0x5f, .sp=0xe1, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x02}, {.addr=0x930b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x930b, .value=0xaf, .type=IO_READ},
        {.addr=0x930c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x02, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0248) {
    const struct CPU_State initial_cpu = {.pc=0x914c, .a=0x83, .x=0xe8, .y=0xc3, .sp=0x81, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x914c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x914d, .a=0x83, .x=0xe9, .y=0xc3, .sp=0x81, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x83}, {.addr=0x914c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x914c, .value=0xaf, .type=IO_READ},
        {.addr=0x914d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e8, .value=0x83, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0249) {
    const struct CPU_State initial_cpu = {.pc=0x06f4, .a=0x1d, .x=0x77, .y=0x8c, .sp=0xbd, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x00}, {.addr=0x06f4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x06f5, .a=0x1d, .x=0x78, .y=0x8c, .sp=0xbd, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x1d}, {.addr=0x06f4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x06f4, .value=0xaf, .type=IO_READ},
        {.addr=0x06f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0077, .value=0x1d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_024A) {
    const struct CPU_State initial_cpu = {.pc=0x12f8, .a=0xab, .x=0xfd, .y=0xb8, .sp=0xaf, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x12f8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x12f9, .a=0xab, .x=0xfe, .y=0xb8, .sp=0xaf, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xab}, {.addr=0x12f8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x12f8, .value=0xaf, .type=IO_READ},
        {.addr=0x12f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_024B) {
    const struct CPU_State initial_cpu = {.pc=0x313f, .a=0xb9, .x=0xd3, .y=0xc7, .sp=0x15, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x313f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3140, .a=0xb9, .x=0xd4, .y=0xc7, .sp=0x15, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xb9}, {.addr=0x313f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x313f, .value=0xaf, .type=IO_READ},
        {.addr=0x3140, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0xb9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_024C) {
    const struct CPU_State initial_cpu = {.pc=0xdfe4, .a=0x67, .x=0x2c, .y=0xc4, .sp=0xea, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0x00}, {.addr=0xdfe4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdfe5, .a=0x67, .x=0x2d, .y=0xc4, .sp=0xea, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0x67}, {.addr=0xdfe4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdfe4, .value=0xaf, .type=IO_READ},
        {.addr=0xdfe5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002c, .value=0x67, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_024D) {
    const struct CPU_State initial_cpu = {.pc=0xf211, .a=0x1d, .x=0x99, .y=0x05, .sp=0x92, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x00}, {.addr=0xf211, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf212, .a=0x1d, .x=0x9a, .y=0x05, .sp=0x92, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x1d}, {.addr=0xf211, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf211, .value=0xaf, .type=IO_READ},
        {.addr=0xf212, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0099, .value=0x1d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_024E) {
    const struct CPU_State initial_cpu = {.pc=0x0e29, .a=0xdf, .x=0x10, .y=0x6e, .sp=0xe8, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x0e29, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0e2a, .a=0xdf, .x=0x11, .y=0x6e, .sp=0xe8, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xdf}, {.addr=0x0e29, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0e29, .value=0xaf, .type=IO_READ},
        {.addr=0x0e2a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0110, .value=0xdf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0250) {
    const struct CPU_State initial_cpu = {.pc=0xbfcc, .a=0x0a, .x=0x59, .y=0x79, .sp=0x32, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x00}, {.addr=0xbfcc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbfcd, .a=0x0a, .x=0x5a, .y=0x79, .sp=0x32, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x0a}, {.addr=0xbfcc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbfcc, .value=0xaf, .type=IO_READ},
        {.addr=0xbfcd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0059, .value=0x0a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0251) {
    const struct CPU_State initial_cpu = {.pc=0xc15e, .a=0x81, .x=0x6d, .y=0x99, .sp=0x96, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x00}, {.addr=0xc15e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc15f, .a=0x81, .x=0x6e, .y=0x99, .sp=0x96, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0x81}, {.addr=0xc15e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc15e, .value=0xaf, .type=IO_READ},
        {.addr=0xc15f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006d, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0252) {
    const struct CPU_State initial_cpu = {.pc=0x09d2, .a=0xc7, .x=0x59, .y=0xaf, .sp=0x33, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x09d2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x09d3, .a=0xc7, .x=0x5a, .y=0xaf, .sp=0x33, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xc7}, {.addr=0x09d2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x09d2, .value=0xaf, .type=IO_READ},
        {.addr=0x09d3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0159, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0253) {
    const struct CPU_State initial_cpu = {.pc=0x0d04, .a=0x6e, .x=0x94, .y=0x50, .sp=0xaa, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x00}, {.addr=0x0d04, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0d05, .a=0x6e, .x=0x95, .y=0x50, .sp=0xaa, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x6e}, {.addr=0x0d04, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0d04, .value=0xaf, .type=IO_READ},
        {.addr=0x0d05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0094, .value=0x6e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0254) {
    const struct CPU_State initial_cpu = {.pc=0xc1ac, .a=0x4f, .x=0xd6, .y=0x39, .sp=0x48, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0xc1ac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc1ad, .a=0x4f, .x=0xd7, .y=0x39, .sp=0x48, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x4f}, {.addr=0xc1ac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc1ac, .value=0xaf, .type=IO_READ},
        {.addr=0xc1ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d6, .value=0x4f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0255) {
    const struct CPU_State initial_cpu = {.pc=0x3d45, .a=0xe6, .x=0x78, .y=0x6a, .sp=0x63, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x3d45, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3d46, .a=0xe6, .x=0x79, .y=0x6a, .sp=0x63, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xe6}, {.addr=0x3d45, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3d45, .value=0xaf, .type=IO_READ},
        {.addr=0x3d46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0178, .value=0xe6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0256) {
    const struct CPU_State initial_cpu = {.pc=0xda74, .a=0xd9, .x=0x51, .y=0xaa, .sp=0x7f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0xda74, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xda75, .a=0xd9, .x=0x52, .y=0xaa, .sp=0x7f, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xd9}, {.addr=0xda74, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xda74, .value=0xaf, .type=IO_READ},
        {.addr=0xda75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0151, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0257) {
    const struct CPU_State initial_cpu = {.pc=0xd8b8, .a=0xe8, .x=0x7f, .y=0x7f, .sp=0x18, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x00}, {.addr=0xd8b8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd8b9, .a=0xe8, .x=0x80, .y=0x7f, .sp=0x18, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xe8}, {.addr=0xd8b8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd8b8, .value=0xaf, .type=IO_READ},
        {.addr=0xd8b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007f, .value=0xe8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0258) {
    const struct CPU_State initial_cpu = {.pc=0x5dff, .a=0x9b, .x=0x0e, .y=0x2e, .sp=0x95, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0x5dff, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5e00, .a=0x9b, .x=0x0f, .y=0x2e, .sp=0x95, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x9b}, {.addr=0x5dff, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5dff, .value=0xaf, .type=IO_READ},
        {.addr=0x5e00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010e, .value=0x9b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0259) {
    const struct CPU_State initial_cpu = {.pc=0x90ac, .a=0x40, .x=0xe6, .y=0xed, .sp=0xe2, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x00}, {.addr=0x90ac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x90ad, .a=0x40, .x=0xe7, .y=0xed, .sp=0xe2, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x40}, {.addr=0x90ac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x90ac, .value=0xaf, .type=IO_READ},
        {.addr=0x90ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e6, .value=0x40, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_025A) {
    const struct CPU_State initial_cpu = {.pc=0x3cb8, .a=0x61, .x=0x70, .y=0x0a, .sp=0x88, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x3cb8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3cb9, .a=0x61, .x=0x71, .y=0x0a, .sp=0x88, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x61}, {.addr=0x3cb8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3cb8, .value=0xaf, .type=IO_READ},
        {.addr=0x3cb9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_025B) {
    const struct CPU_State initial_cpu = {.pc=0x538b, .a=0x46, .x=0xc8, .y=0x07, .sp=0xa4, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0x538b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x538c, .a=0x46, .x=0xc9, .y=0x07, .sp=0xa4, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x46}, {.addr=0x538b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x538b, .value=0xaf, .type=IO_READ},
        {.addr=0x538c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_025C) {
    const struct CPU_State initial_cpu = {.pc=0xe175, .a=0xa3, .x=0x9d, .y=0xab, .sp=0xb9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x00}, {.addr=0xe175, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe176, .a=0xa3, .x=0x9e, .y=0xab, .sp=0xb9, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0xa3}, {.addr=0xe175, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe175, .value=0xaf, .type=IO_READ},
        {.addr=0xe176, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009d, .value=0xa3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_025D) {
    const struct CPU_State initial_cpu = {.pc=0xdfcd, .a=0x78, .x=0xd3, .y=0x51, .sp=0xe9, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0xdfcd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdfce, .a=0x78, .x=0xd4, .y=0x51, .sp=0xe9, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x78}, {.addr=0xdfcd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdfcd, .value=0xaf, .type=IO_READ},
        {.addr=0xdfce, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d3, .value=0x78, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_025E) {
    const struct CPU_State initial_cpu = {.pc=0x6a8c, .a=0x27, .x=0x3c, .y=0x0c, .sp=0x9c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x00}, {.addr=0x6a8c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6a8d, .a=0x27, .x=0x3d, .y=0x0c, .sp=0x9c, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x27}, {.addr=0x6a8c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6a8c, .value=0xaf, .type=IO_READ},
        {.addr=0x6a8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003c, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_025F) {
    const struct CPU_State initial_cpu = {.pc=0x0cce, .a=0x9a, .x=0xaf, .y=0xfc, .sp=0x46, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x0cce, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0ccf, .a=0x9a, .x=0xb0, .y=0xfc, .sp=0x46, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x9a}, {.addr=0x0cce, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0cce, .value=0xaf, .type=IO_READ},
        {.addr=0x0ccf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01af, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0260) {
    const struct CPU_State initial_cpu = {.pc=0x0eca, .a=0xc2, .x=0x9e, .y=0x5a, .sp=0x42, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x0eca, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0ecb, .a=0xc2, .x=0x9f, .y=0x5a, .sp=0x42, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xc2}, {.addr=0x0eca, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0eca, .value=0xaf, .type=IO_READ},
        {.addr=0x0ecb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019e, .value=0xc2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0261) {
    const struct CPU_State initial_cpu = {.pc=0x915d, .a=0x6f, .x=0x4e, .y=0x95, .sp=0xdd, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x00}, {.addr=0x915d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x915e, .a=0x6f, .x=0x4f, .y=0x95, .sp=0xdd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x6f}, {.addr=0x915d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x915d, .value=0xaf, .type=IO_READ},
        {.addr=0x915e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004e, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0262) {
    const struct CPU_State initial_cpu = {.pc=0x3cd3, .a=0xf6, .x=0xdf, .y=0x2b, .sp=0x96, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x3cd3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3cd4, .a=0xf6, .x=0xe0, .y=0x2b, .sp=0x96, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xf6}, {.addr=0x3cd3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3cd3, .value=0xaf, .type=IO_READ},
        {.addr=0x3cd4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01df, .value=0xf6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0263) {
    const struct CPU_State initial_cpu = {.pc=0xdb4f, .a=0x25, .x=0xfa, .y=0xd9, .sp=0x89, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0xdb4f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdb50, .a=0x25, .x=0xfb, .y=0xd9, .sp=0x89, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x25}, {.addr=0xdb4f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdb4f, .value=0xaf, .type=IO_READ},
        {.addr=0xdb50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fa, .value=0x25, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0264) {
    const struct CPU_State initial_cpu = {.pc=0xa472, .a=0xa9, .x=0x85, .y=0x1b, .sp=0x75, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x00}, {.addr=0xa472, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa473, .a=0xa9, .x=0x86, .y=0x1b, .sp=0x75, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xa9}, {.addr=0xa472, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa472, .value=0xaf, .type=IO_READ},
        {.addr=0xa473, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0085, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0265) {
    const struct CPU_State initial_cpu = {.pc=0xbb26, .a=0x70, .x=0x04, .y=0x1e, .sp=0x49, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xbb26, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbb27, .a=0x70, .x=0x05, .y=0x1e, .sp=0x49, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x70}, {.addr=0xbb26, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbb26, .value=0xaf, .type=IO_READ},
        {.addr=0xbb27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0104, .value=0x70, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0266) {
    const struct CPU_State initial_cpu = {.pc=0xc482, .a=0x64, .x=0xd1, .y=0x52, .sp=0x1c, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x00}, {.addr=0xc482, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc483, .a=0x64, .x=0xd2, .y=0x52, .sp=0x1c, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x64}, {.addr=0xc482, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc482, .value=0xaf, .type=IO_READ},
        {.addr=0xc483, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d1, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0267) {
    const struct CPU_State initial_cpu = {.pc=0xf3ba, .a=0xb8, .x=0x8c, .y=0xbe, .sp=0x9b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0xf3ba, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf3bb, .a=0xb8, .x=0x8d, .y=0xbe, .sp=0x9b, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xb8}, {.addr=0xf3ba, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf3ba, .value=0xaf, .type=IO_READ},
        {.addr=0xf3bb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018c, .value=0xb8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0268) {
    const struct CPU_State initial_cpu = {.pc=0xa426, .a=0x96, .x=0x76, .y=0x9a, .sp=0x9a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0xa426, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa427, .a=0x96, .x=0x77, .y=0x9a, .sp=0x9a, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x96}, {.addr=0xa426, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa426, .value=0xaf, .type=IO_READ},
        {.addr=0xa427, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x96, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0269) {
    const struct CPU_State initial_cpu = {.pc=0x6784, .a=0xc0, .x=0x31, .y=0x6a, .sp=0xf6, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x00}, {.addr=0x6784, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6785, .a=0xc0, .x=0x32, .y=0x6a, .sp=0xf6, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xc0}, {.addr=0x6784, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6784, .value=0xaf, .type=IO_READ},
        {.addr=0x6785, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0031, .value=0xc0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_026A) {
    const struct CPU_State initial_cpu = {.pc=0x9a95, .a=0x6d, .x=0x1a, .y=0x1f, .sp=0x72, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0x00}, {.addr=0x9a95, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9a96, .a=0x6d, .x=0x1b, .y=0x1f, .sp=0x72, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0x6d}, {.addr=0x9a95, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9a95, .value=0xaf, .type=IO_READ},
        {.addr=0x9a96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x001a, .value=0x6d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_026B) {
    const struct CPU_State initial_cpu = {.pc=0xd81b, .a=0x94, .x=0xa6, .y=0x1f, .sp=0xd5, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0xd81b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd81c, .a=0x94, .x=0xa7, .y=0x1f, .sp=0xd5, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x94}, {.addr=0xd81b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd81b, .value=0xaf, .type=IO_READ},
        {.addr=0xd81c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0x94, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_026C) {
    const struct CPU_State initial_cpu = {.pc=0x7974, .a=0x2d, .x=0x63, .y=0x04, .sp=0x87, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0x00}, {.addr=0x7974, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7975, .a=0x2d, .x=0x64, .y=0x04, .sp=0x87, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0x2d}, {.addr=0x7974, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7974, .value=0xaf, .type=IO_READ},
        {.addr=0x7975, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0063, .value=0x2d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_026E) {
    const struct CPU_State initial_cpu = {.pc=0xdf41, .a=0xf4, .x=0x09, .y=0x19, .sp=0xd3, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x00}, {.addr=0xdf41, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdf42, .a=0xf4, .x=0x0a, .y=0x19, .sp=0xd3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xf4}, {.addr=0xdf41, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdf41, .value=0xaf, .type=IO_READ},
        {.addr=0xdf42, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0009, .value=0xf4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_026F) {
    const struct CPU_State initial_cpu = {.pc=0xe2b7, .a=0x74, .x=0x50, .y=0x04, .sp=0x6b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0xe2b7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe2b8, .a=0x74, .x=0x51, .y=0x04, .sp=0x6b, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x74}, {.addr=0xe2b7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe2b7, .value=0xaf, .type=IO_READ},
        {.addr=0xe2b8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x74, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0270) {
    const struct CPU_State initial_cpu = {.pc=0x20e2, .a=0xba, .x=0xef, .y=0x08, .sp=0x7d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x00}, {.addr=0x20e2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x20e3, .a=0xba, .x=0xf0, .y=0x08, .sp=0x7d, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0xba}, {.addr=0x20e2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x20e2, .value=0xaf, .type=IO_READ},
        {.addr=0x20e3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ef, .value=0xba, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0271) {
    const struct CPU_State initial_cpu = {.pc=0x2742, .a=0x42, .x=0x4a, .y=0x31, .sp=0xfd, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x2742, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2743, .a=0x42, .x=0x4b, .y=0x31, .sp=0xfd, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x42}, {.addr=0x2742, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2742, .value=0xaf, .type=IO_READ},
        {.addr=0x2743, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014a, .value=0x42, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0272) {
    const struct CPU_State initial_cpu = {.pc=0xb8d7, .a=0x56, .x=0xed, .y=0xe7, .sp=0xd8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x00}, {.addr=0xb8d7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb8d8, .a=0x56, .x=0xee, .y=0xe7, .sp=0xd8, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x56}, {.addr=0xb8d7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb8d7, .value=0xaf, .type=IO_READ},
        {.addr=0xb8d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ed, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0273) {
    const struct CPU_State initial_cpu = {.pc=0xfb3f, .a=0xc2, .x=0x6d, .y=0x3f, .sp=0x8d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x00}, {.addr=0xfb3f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfb40, .a=0xc2, .x=0x6e, .y=0x3f, .sp=0x8d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0xc2}, {.addr=0xfb3f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfb3f, .value=0xaf, .type=IO_READ},
        {.addr=0xfb40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006d, .value=0xc2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0274) {
    const struct CPU_State initial_cpu = {.pc=0x1551, .a=0x95, .x=0xe8, .y=0xde, .sp=0x7a, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x00}, {.addr=0x1551, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1552, .a=0x95, .x=0xe9, .y=0xde, .sp=0x7a, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0x95}, {.addr=0x1551, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1551, .value=0xaf, .type=IO_READ},
        {.addr=0x1552, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e8, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0275) {
    const struct CPU_State initial_cpu = {.pc=0xe91c, .a=0xc2, .x=0x47, .y=0x63, .sp=0xc4, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0xe91c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe91d, .a=0xc2, .x=0x48, .y=0x63, .sp=0xc4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xc2}, {.addr=0xe91c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe91c, .value=0xaf, .type=IO_READ},
        {.addr=0xe91d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0xc2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0276) {
    const struct CPU_State initial_cpu = {.pc=0x67f8, .a=0xa0, .x=0x4a, .y=0x01, .sp=0xc0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x00}, {.addr=0x67f8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x67f9, .a=0xa0, .x=0x4b, .y=0x01, .sp=0xc0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0xa0}, {.addr=0x67f8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x67f8, .value=0xaf, .type=IO_READ},
        {.addr=0x67f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004a, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0277) {
    const struct CPU_State initial_cpu = {.pc=0xf267, .a=0x4a, .x=0x1a, .y=0xbe, .sp=0x16, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0xf267, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf268, .a=0x4a, .x=0x1b, .y=0xbe, .sp=0x16, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x4a}, {.addr=0xf267, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf267, .value=0xaf, .type=IO_READ},
        {.addr=0xf268, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011a, .value=0x4a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0278) {
    const struct CPU_State initial_cpu = {.pc=0x9b9f, .a=0xfa, .x=0x19, .y=0x61, .sp=0x1d, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x00}, {.addr=0x9b9f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9ba0, .a=0xfa, .x=0x1a, .y=0x61, .sp=0x1d, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0xfa}, {.addr=0x9b9f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9b9f, .value=0xaf, .type=IO_READ},
        {.addr=0x9ba0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0019, .value=0xfa, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0279) {
    const struct CPU_State initial_cpu = {.pc=0x4b2b, .a=0xde, .x=0x82, .y=0x18, .sp=0x56, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x00}, {.addr=0x4b2b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4b2c, .a=0xde, .x=0x83, .y=0x18, .sp=0x56, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xde}, {.addr=0x4b2b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4b2b, .value=0xaf, .type=IO_READ},
        {.addr=0x4b2c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0082, .value=0xde, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_027B) {
    const struct CPU_State initial_cpu = {.pc=0xe284, .a=0xac, .x=0x67, .y=0xf1, .sp=0xfc, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x00}, {.addr=0xe284, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe285, .a=0xac, .x=0x68, .y=0xf1, .sp=0xfc, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0xac}, {.addr=0xe284, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe284, .value=0xaf, .type=IO_READ},
        {.addr=0xe285, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0067, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_027C) {
    const struct CPU_State initial_cpu = {.pc=0x4116, .a=0xfb, .x=0x02, .y=0xdc, .sp=0xfe, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x4116, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4117, .a=0xfb, .x=0x03, .y=0xdc, .sp=0xfe, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xfb}, {.addr=0x4116, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4116, .value=0xaf, .type=IO_READ},
        {.addr=0x4117, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0102, .value=0xfb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_027D) {
    const struct CPU_State initial_cpu = {.pc=0xac22, .a=0xb1, .x=0x4c, .y=0x27, .sp=0xa2, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x00}, {.addr=0xac22, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xac23, .a=0xb1, .x=0x4d, .y=0x27, .sp=0xa2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xb1}, {.addr=0xac22, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xac22, .value=0xaf, .type=IO_READ},
        {.addr=0xac23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004c, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_027E) {
    const struct CPU_State initial_cpu = {.pc=0xfb4e, .a=0x6c, .x=0x41, .y=0xc8, .sp=0xde, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0xfb4e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfb4f, .a=0x6c, .x=0x42, .y=0xc8, .sp=0xde, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x6c}, {.addr=0xfb4e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfb4e, .value=0xaf, .type=IO_READ},
        {.addr=0xfb4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x6c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_027F) {
    const struct CPU_State initial_cpu = {.pc=0x6427, .a=0x2b, .x=0x0b, .y=0x38, .sp=0x7c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0x6427, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6428, .a=0x2b, .x=0x0c, .y=0x38, .sp=0x7c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x2b}, {.addr=0x6427, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6427, .value=0xaf, .type=IO_READ},
        {.addr=0x6428, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x010b, .value=0x2b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0280) {
    const struct CPU_State initial_cpu = {.pc=0x84f2, .a=0xb1, .x=0xb5, .y=0x99, .sp=0x9a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x84f2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x84f3, .a=0xb1, .x=0xb6, .y=0x99, .sp=0x9a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xb1}, {.addr=0x84f2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x84f2, .value=0xaf, .type=IO_READ},
        {.addr=0x84f3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0281) {
    const struct CPU_State initial_cpu = {.pc=0x2123, .a=0xa0, .x=0x74, .y=0xc7, .sp=0x42, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x2123, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2124, .a=0xa0, .x=0x75, .y=0xc7, .sp=0x42, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xa0}, {.addr=0x2123, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2123, .value=0xaf, .type=IO_READ},
        {.addr=0x2124, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0174, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0282) {
    const struct CPU_State initial_cpu = {.pc=0xe861, .a=0xac, .x=0x54, .y=0xed, .sp=0xf8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0xe861, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe862, .a=0xac, .x=0x55, .y=0xed, .sp=0xf8, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xac}, {.addr=0xe861, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe861, .value=0xaf, .type=IO_READ},
        {.addr=0xe862, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0283) {
    const struct CPU_State initial_cpu = {.pc=0x1f4b, .a=0xb3, .x=0x03, .y=0x80, .sp=0xea, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0x1f4b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1f4c, .a=0xb3, .x=0x04, .y=0x80, .sp=0xea, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xb3}, {.addr=0x1f4b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1f4b, .value=0xaf, .type=IO_READ},
        {.addr=0x1f4c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0103, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0284) {
    const struct CPU_State initial_cpu = {.pc=0x5bed, .a=0x85, .x=0xa4, .y=0xe6, .sp=0x44, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x00}, {.addr=0x5bed, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5bee, .a=0x85, .x=0xa5, .y=0xe6, .sp=0x44, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x85}, {.addr=0x5bed, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5bed, .value=0xaf, .type=IO_READ},
        {.addr=0x5bee, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a4, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0285) {
    const struct CPU_State initial_cpu = {.pc=0xf1b8, .a=0x32, .x=0xb7, .y=0xa1, .sp=0x11, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x00}, {.addr=0xf1b8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf1b9, .a=0x32, .x=0xb8, .y=0xa1, .sp=0x11, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x32}, {.addr=0xf1b8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf1b8, .value=0xaf, .type=IO_READ},
        {.addr=0xf1b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b7, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0286) {
    const struct CPU_State initial_cpu = {.pc=0x2a8a, .a=0xf6, .x=0x49, .y=0xd2, .sp=0xb6, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x00}, {.addr=0x2a8a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2a8b, .a=0xf6, .x=0x4a, .y=0xd2, .sp=0xb6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0xf6}, {.addr=0x2a8a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2a8a, .value=0xaf, .type=IO_READ},
        {.addr=0x2a8b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0049, .value=0xf6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0287) {
    const struct CPU_State initial_cpu = {.pc=0x7d21, .a=0x64, .x=0xee, .y=0x31, .sp=0x95, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x7d21, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7d22, .a=0x64, .x=0xef, .y=0x31, .sp=0x95, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x64}, {.addr=0x7d21, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7d21, .value=0xaf, .type=IO_READ},
        {.addr=0x7d22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ee, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0288) {
    const struct CPU_State initial_cpu = {.pc=0xc66f, .a=0x24, .x=0xc0, .y=0x5e, .sp=0x36, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x00}, {.addr=0xc66f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc670, .a=0x24, .x=0xc1, .y=0x5e, .sp=0x36, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x24}, {.addr=0xc66f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc66f, .value=0xaf, .type=IO_READ},
        {.addr=0xc670, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c0, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0289) {
    const struct CPU_State initial_cpu = {.pc=0xef2c, .a=0x0b, .x=0xf5, .y=0xc4, .sp=0x08, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0xef2c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xef2d, .a=0x0b, .x=0xf6, .y=0xc4, .sp=0x08, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x0b}, {.addr=0xef2c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xef2c, .value=0xaf, .type=IO_READ},
        {.addr=0xef2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0x0b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_028A) {
    const struct CPU_State initial_cpu = {.pc=0x8c26, .a=0x1f, .x=0x41, .y=0xf8, .sp=0x16, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x8c26, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8c27, .a=0x1f, .x=0x42, .y=0xf8, .sp=0x16, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x1f}, {.addr=0x8c26, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8c26, .value=0xaf, .type=IO_READ},
        {.addr=0x8c27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0141, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_028B) {
    const struct CPU_State initial_cpu = {.pc=0x02f5, .a=0xb9, .x=0x70, .y=0xe2, .sp=0x33, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x02f5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x02f6, .a=0xb9, .x=0x71, .y=0xe2, .sp=0x33, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xb9}, {.addr=0x02f5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x02f5, .value=0xaf, .type=IO_READ},
        {.addr=0x02f6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0xb9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_028C) {
    const struct CPU_State initial_cpu = {.pc=0x17d7, .a=0x6e, .x=0x1d, .y=0x44, .sp=0x08, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x17d7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x17d8, .a=0x6e, .x=0x1e, .y=0x44, .sp=0x08, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x6e}, {.addr=0x17d7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x17d7, .value=0xaf, .type=IO_READ},
        {.addr=0x17d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011d, .value=0x6e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_028D) {
    const struct CPU_State initial_cpu = {.pc=0x1157, .a=0x18, .x=0x9b, .y=0xba, .sp=0x9a, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x1157, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1158, .a=0x18, .x=0x9c, .y=0xba, .sp=0x9a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x18}, {.addr=0x1157, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1157, .value=0xaf, .type=IO_READ},
        {.addr=0x1158, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0x18, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_028E) {
    const struct CPU_State initial_cpu = {.pc=0x238b, .a=0xf8, .x=0x36, .y=0x98, .sp=0xf0, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x00}, {.addr=0x238b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x238c, .a=0xf8, .x=0x37, .y=0x98, .sp=0xf0, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0xf8}, {.addr=0x238b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x238b, .value=0xaf, .type=IO_READ},
        {.addr=0x238c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0036, .value=0xf8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_028F) {
    const struct CPU_State initial_cpu = {.pc=0x5406, .a=0x06, .x=0x09, .y=0x36, .sp=0xad, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x00}, {.addr=0x5406, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5407, .a=0x06, .x=0x0a, .y=0x36, .sp=0xad, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x06}, {.addr=0x5406, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5406, .value=0xaf, .type=IO_READ},
        {.addr=0x5407, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0009, .value=0x06, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0290) {
    const struct CPU_State initial_cpu = {.pc=0x786b, .a=0x95, .x=0x6c, .y=0xe6, .sp=0x94, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x00}, {.addr=0x786b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x786c, .a=0x95, .x=0x6d, .y=0xe6, .sp=0x94, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x95}, {.addr=0x786b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x786b, .value=0xaf, .type=IO_READ},
        {.addr=0x786c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006c, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0291) {
    const struct CPU_State initial_cpu = {.pc=0xbcba, .a=0x3a, .x=0xc9, .y=0xe3, .sp=0x32, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xbcba, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbcbb, .a=0x3a, .x=0xca, .y=0xe3, .sp=0x32, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x3a}, {.addr=0xbcba, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbcba, .value=0xaf, .type=IO_READ},
        {.addr=0xbcbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c9, .value=0x3a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0292) {
    const struct CPU_State initial_cpu = {.pc=0x3633, .a=0x69, .x=0xe6, .y=0x94, .sp=0x53, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x3633, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3634, .a=0x69, .x=0xe7, .y=0x94, .sp=0x53, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x69}, {.addr=0x3633, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3633, .value=0xaf, .type=IO_READ},
        {.addr=0x3634, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x69, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0293) {
    const struct CPU_State initial_cpu = {.pc=0x3354, .a=0x91, .x=0x38, .y=0xca, .sp=0xed, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x3354, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3355, .a=0x91, .x=0x39, .y=0xca, .sp=0xed, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x91}, {.addr=0x3354, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3354, .value=0xaf, .type=IO_READ},
        {.addr=0x3355, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x91, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0294) {
    const struct CPU_State initial_cpu = {.pc=0x25f1, .a=0xc4, .x=0xb3, .y=0xff, .sp=0x27, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x25f1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x25f2, .a=0xc4, .x=0xb4, .y=0xff, .sp=0x27, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xc4}, {.addr=0x25f1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x25f1, .value=0xaf, .type=IO_READ},
        {.addr=0x25f2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b3, .value=0xc4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0295) {
    const struct CPU_State initial_cpu = {.pc=0x56fe, .a=0xb3, .x=0xea, .y=0x9a, .sp=0x28, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x00}, {.addr=0x56fe, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x56ff, .a=0xb3, .x=0xeb, .y=0x9a, .sp=0x28, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0xb3}, {.addr=0x56fe, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x56fe, .value=0xaf, .type=IO_READ},
        {.addr=0x56ff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ea, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0296) {
    const struct CPU_State initial_cpu = {.pc=0x5570, .a=0x34, .x=0xd1, .y=0x91, .sp=0x4f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x5570, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5571, .a=0x34, .x=0xd2, .y=0x91, .sp=0x4f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x34}, {.addr=0x5570, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5570, .value=0xaf, .type=IO_READ},
        {.addr=0x5571, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d1, .value=0x34, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0298) {
    const struct CPU_State initial_cpu = {.pc=0xf422, .a=0x05, .x=0x66, .y=0xff, .sp=0xa3, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x00}, {.addr=0xf422, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf423, .a=0x05, .x=0x67, .y=0xff, .sp=0xa3, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x05}, {.addr=0xf422, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf422, .value=0xaf, .type=IO_READ},
        {.addr=0xf423, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0066, .value=0x05, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0299) {
    const struct CPU_State initial_cpu = {.pc=0x274a, .a=0x16, .x=0xda, .y=0x70, .sp=0x87, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x00}, {.addr=0x274a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x274b, .a=0x16, .x=0xdb, .y=0x70, .sp=0x87, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0x16}, {.addr=0x274a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x274a, .value=0xaf, .type=IO_READ},
        {.addr=0x274b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00da, .value=0x16, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_029A) {
    const struct CPU_State initial_cpu = {.pc=0xd77c, .a=0xd9, .x=0xe2, .y=0xdc, .sp=0xbc, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x00}, {.addr=0xd77c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd77d, .a=0xd9, .x=0xe3, .y=0xdc, .sp=0xbc, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xd9}, {.addr=0xd77c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd77c, .value=0xaf, .type=IO_READ},
        {.addr=0xd77d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e2, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_029B) {
    const struct CPU_State initial_cpu = {.pc=0x533f, .a=0x46, .x=0x02, .y=0x8e, .sp=0x3f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0x00}, {.addr=0x533f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5340, .a=0x46, .x=0x03, .y=0x8e, .sp=0x3f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x46}, {.addr=0x533f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x533f, .value=0xaf, .type=IO_READ},
        {.addr=0x5340, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0002, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_029C) {
    const struct CPU_State initial_cpu = {.pc=0x40f8, .a=0x0d, .x=0xfd, .y=0xa6, .sp=0x5c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x40f8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x40f9, .a=0x0d, .x=0xfe, .y=0xa6, .sp=0x5c, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x0d}, {.addr=0x40f8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x40f8, .value=0xaf, .type=IO_READ},
        {.addr=0x40f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fd, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_029D) {
    const struct CPU_State initial_cpu = {.pc=0x1bac, .a=0x5f, .x=0xaa, .y=0xdf, .sp=0xbd, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x00}, {.addr=0x1bac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1bad, .a=0x5f, .x=0xab, .y=0xdf, .sp=0xbd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x5f}, {.addr=0x1bac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1bac, .value=0xaf, .type=IO_READ},
        {.addr=0x1bad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00aa, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_029E) {
    const struct CPU_State initial_cpu = {.pc=0x6214, .a=0xe6, .x=0xc3, .y=0x5b, .sp=0x43, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x6214, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6215, .a=0xe6, .x=0xc4, .y=0x5b, .sp=0x43, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xe6}, {.addr=0x6214, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6214, .value=0xaf, .type=IO_READ},
        {.addr=0x6215, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xe6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_029F) {
    const struct CPU_State initial_cpu = {.pc=0xba15, .a=0xac, .x=0x11, .y=0xcf, .sp=0xa1, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0xba15, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xba16, .a=0xac, .x=0x12, .y=0xcf, .sp=0xa1, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xac}, {.addr=0xba15, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xba15, .value=0xaf, .type=IO_READ},
        {.addr=0xba16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x2306, .a=0x26, .x=0x5b, .y=0x71, .sp=0xc7, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x00}, {.addr=0x2306, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2307, .a=0x26, .x=0x5c, .y=0x71, .sp=0xc7, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x26}, {.addr=0x2306, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2306, .value=0xaf, .type=IO_READ},
        {.addr=0x2307, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005b, .value=0x26, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x94f3, .a=0x2c, .x=0x54, .y=0xf0, .sp=0x11, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0x94f3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x94f4, .a=0x2c, .x=0x55, .y=0xf0, .sp=0x11, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x2c}, {.addr=0x94f3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x94f3, .value=0xaf, .type=IO_READ},
        {.addr=0x94f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0154, .value=0x2c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x2be0, .a=0x06, .x=0xa0, .y=0xda, .sp=0x93, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x2be0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2be1, .a=0x06, .x=0xa1, .y=0xda, .sp=0x93, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x06}, {.addr=0x2be0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2be0, .value=0xaf, .type=IO_READ},
        {.addr=0x2be1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0x06, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xd673, .a=0x38, .x=0xdb, .y=0xfa, .sp=0xbf, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x00}, {.addr=0xd673, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd674, .a=0x38, .x=0xdc, .y=0xfa, .sp=0xbf, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x38}, {.addr=0xd673, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd673, .value=0xaf, .type=IO_READ},
        {.addr=0xd674, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00db, .value=0x38, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x2975, .a=0xb7, .x=0xe9, .y=0x2f, .sp=0xb5, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x00}, {.addr=0x2975, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2976, .a=0xb7, .x=0xea, .y=0x2f, .sp=0xb5, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0xb7}, {.addr=0x2975, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2975, .value=0xaf, .type=IO_READ},
        {.addr=0x2976, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e9, .value=0xb7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x5de3, .a=0x68, .x=0x38, .y=0x40, .sp=0x25, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x5de3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5de4, .a=0x68, .x=0x39, .y=0x40, .sp=0x25, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x68}, {.addr=0x5de3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5de3, .value=0xaf, .type=IO_READ},
        {.addr=0x5de4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0x68, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xf996, .a=0xce, .x=0xec, .y=0xb6, .sp=0x5e, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0xf996, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf997, .a=0xce, .x=0xed, .y=0xb6, .sp=0x5e, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xce}, {.addr=0xf996, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf996, .value=0xaf, .type=IO_READ},
        {.addr=0xf997, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0xce, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x774f, .a=0x0e, .x=0xca, .y=0xe1, .sp=0x03, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x774f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7750, .a=0x0e, .x=0xcb, .y=0xe1, .sp=0x03, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x0e}, {.addr=0x774f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x774f, .value=0xaf, .type=IO_READ},
        {.addr=0x7750, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x5673, .a=0x6a, .x=0x3c, .y=0x6a, .sp=0x55, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x5673, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5674, .a=0x6a, .x=0x3d, .y=0x6a, .sp=0x55, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x6a}, {.addr=0x5673, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5673, .value=0xaf, .type=IO_READ},
        {.addr=0x5674, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0x6a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xdb89, .a=0x4e, .x=0x5c, .y=0x10, .sp=0x77, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x00}, {.addr=0xdb89, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdb8a, .a=0x4e, .x=0x5d, .y=0x10, .sp=0x77, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x4e}, {.addr=0xdb89, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdb89, .value=0xaf, .type=IO_READ},
        {.addr=0xdb8a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005c, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x3ef9, .a=0xfe, .x=0xf8, .y=0xdd, .sp=0x83, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x3ef9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3efa, .a=0xfe, .x=0xf9, .y=0xdd, .sp=0x83, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xfe}, {.addr=0x3ef9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3ef9, .value=0xaf, .type=IO_READ},
        {.addr=0x3efa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0xfe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x2fca, .a=0x7a, .x=0xee, .y=0xc9, .sp=0x6e, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x00}, {.addr=0x2fca, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2fcb, .a=0x7a, .x=0xef, .y=0xc9, .sp=0x6e, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x7a}, {.addr=0x2fca, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2fca, .value=0xaf, .type=IO_READ},
        {.addr=0x2fcb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ee, .value=0x7a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x7834, .a=0x9f, .x=0x6f, .y=0x9f, .sp=0x51, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x00}, {.addr=0x7834, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7835, .a=0x9f, .x=0x70, .y=0x9f, .sp=0x51, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x9f}, {.addr=0x7834, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7834, .value=0xaf, .type=IO_READ},
        {.addr=0x7835, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006f, .value=0x9f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x0b0c, .a=0xea, .x=0xbc, .y=0xb4, .sp=0x9b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x0b0c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0b0d, .a=0xea, .x=0xbd, .y=0xb4, .sp=0x9b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xea}, {.addr=0x0b0c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0b0c, .value=0xaf, .type=IO_READ},
        {.addr=0x0b0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bc, .value=0xea, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x8ab5, .a=0x9d, .x=0x53, .y=0xb4, .sp=0xe7, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0x8ab5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8ab6, .a=0x9d, .x=0x54, .y=0xb4, .sp=0xe7, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x9d}, {.addr=0x8ab5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8ab5, .value=0xaf, .type=IO_READ},
        {.addr=0x8ab6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x9d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xe5fd, .a=0xe9, .x=0x5c, .y=0xd1, .sp=0x26, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x00}, {.addr=0xe5fd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe5fe, .a=0xe9, .x=0x5d, .y=0xd1, .sp=0x26, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0xe9}, {.addr=0xe5fd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe5fd, .value=0xaf, .type=IO_READ},
        {.addr=0xe5fe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005c, .value=0xe9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xac2e, .a=0x22, .x=0x01, .y=0xea, .sp=0x45, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0xac2e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xac2f, .a=0x22, .x=0x02, .y=0xea, .sp=0x45, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x22}, {.addr=0xac2e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xac2e, .value=0xaf, .type=IO_READ},
        {.addr=0xac2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0101, .value=0x22, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x4dd1, .a=0x91, .x=0xa0, .y=0xdd, .sp=0x58, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x4dd1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4dd2, .a=0x91, .x=0xa1, .y=0xdd, .sp=0x58, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x91}, {.addr=0x4dd1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4dd1, .value=0xaf, .type=IO_READ},
        {.addr=0x4dd2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0x91, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xf858, .a=0x10, .x=0xe3, .y=0xb9, .sp=0x8a, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0x00}, {.addr=0xf858, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf859, .a=0x10, .x=0xe4, .y=0xb9, .sp=0x8a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x10}, {.addr=0xf858, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf858, .value=0xaf, .type=IO_READ},
        {.addr=0xf859, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e3, .value=0x10, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x9bf3, .a=0xc3, .x=0x38, .y=0x86, .sp=0x9a, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x9bf3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9bf4, .a=0xc3, .x=0x39, .y=0x86, .sp=0x9a, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xc3}, {.addr=0x9bf3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9bf3, .value=0xaf, .type=IO_READ},
        {.addr=0x9bf4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0138, .value=0xc3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xad20, .a=0x1d, .x=0x47, .y=0xa1, .sp=0x1f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x00}, {.addr=0xad20, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xad21, .a=0x1d, .x=0x48, .y=0xa1, .sp=0x1f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x1d}, {.addr=0xad20, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xad20, .value=0xaf, .type=IO_READ},
        {.addr=0xad21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0047, .value=0x1d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x978d, .a=0x9e, .x=0xbe, .y=0x2e, .sp=0x36, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0x00}, {.addr=0x978d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x978e, .a=0x9e, .x=0xbf, .y=0x2e, .sp=0x36, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0x9e}, {.addr=0x978d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x978d, .value=0xaf, .type=IO_READ},
        {.addr=0x978e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00be, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x8f8c, .a=0xdd, .x=0x18, .y=0xe8, .sp=0x0a, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x00}, {.addr=0x8f8c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8f8d, .a=0xdd, .x=0x19, .y=0xe8, .sp=0x0a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0xdd}, {.addr=0x8f8c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8f8c, .value=0xaf, .type=IO_READ},
        {.addr=0x8f8d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0018, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xb9ac, .a=0xfd, .x=0xff, .y=0x4f, .sp=0x56, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0xb9ac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb9ad, .a=0xfd, .x=0x00, .y=0x4f, .sp=0x56, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xfd}, {.addr=0xb9ac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb9ac, .value=0xaf, .type=IO_READ},
        {.addr=0xb9ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0xfd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x79f3, .a=0x24, .x=0x63, .y=0x7a, .sp=0x9d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0x00}, {.addr=0x79f3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x79f4, .a=0x24, .x=0x64, .y=0x7a, .sp=0x9d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0x24}, {.addr=0x79f3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x79f3, .value=0xaf, .type=IO_READ},
        {.addr=0x79f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0063, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xadda, .a=0x7d, .x=0xa3, .y=0xa9, .sp=0xc0, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0xadda, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xaddb, .a=0x7d, .x=0xa4, .y=0xa9, .sp=0xc0, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x7d}, {.addr=0xadda, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xadda, .value=0xaf, .type=IO_READ},
        {.addr=0xaddb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0x7d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x703c, .a=0xc6, .x=0xde, .y=0x19, .sp=0x32, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x00}, {.addr=0x703c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x703d, .a=0xc6, .x=0xdf, .y=0x19, .sp=0x32, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0xc6}, {.addr=0x703c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x703c, .value=0xaf, .type=IO_READ},
        {.addr=0x703d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00de, .value=0xc6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x3d57, .a=0xf2, .x=0x08, .y=0x70, .sp=0x7c, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0x3d57, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3d58, .a=0xf2, .x=0x09, .y=0x70, .sp=0x7c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xf2}, {.addr=0x3d57, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3d57, .value=0xaf, .type=IO_READ},
        {.addr=0x3d58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0xf2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x6338, .a=0xc1, .x=0x15, .y=0xde, .sp=0x1b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0x00}, {.addr=0x6338, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6339, .a=0xc1, .x=0x16, .y=0xde, .sp=0x1b, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0xc1}, {.addr=0x6338, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6338, .value=0xaf, .type=IO_READ},
        {.addr=0x6339, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0015, .value=0xc1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xb9eb, .a=0x9c, .x=0x1c, .y=0x3f, .sp=0x0f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0xb9eb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb9ec, .a=0x9c, .x=0x1d, .y=0x3f, .sp=0x0f, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x9c}, {.addr=0xb9eb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb9eb, .value=0xaf, .type=IO_READ},
        {.addr=0xb9ec, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011c, .value=0x9c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x58f6, .a=0x4b, .x=0x94, .y=0x36, .sp=0xba, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x00}, {.addr=0x58f6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x58f7, .a=0x4b, .x=0x95, .y=0x36, .sp=0xba, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x4b}, {.addr=0x58f6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x58f6, .value=0xaf, .type=IO_READ},
        {.addr=0x58f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0094, .value=0x4b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x9666, .a=0x09, .x=0xe9, .y=0x0f, .sp=0x49, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x00}, {.addr=0x9666, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9667, .a=0x09, .x=0xea, .y=0x0f, .sp=0x49, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x09}, {.addr=0x9666, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9666, .value=0xaf, .type=IO_READ},
        {.addr=0x9667, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e9, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xccba, .a=0x0c, .x=0x3b, .y=0xa3, .sp=0x3c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x00}, {.addr=0xccba, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xccbb, .a=0x0c, .x=0x3c, .y=0xa3, .sp=0x3c, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x0c}, {.addr=0xccba, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xccba, .value=0xaf, .type=IO_READ},
        {.addr=0xccbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003b, .value=0x0c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xd93f, .a=0xaf, .x=0x58, .y=0x94, .sp=0xc1, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x00}, {.addr=0xd93f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd940, .a=0xaf, .x=0x59, .y=0x94, .sp=0xc1, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0xaf}, {.addr=0xd93f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd93f, .value=0xaf, .type=IO_READ},
        {.addr=0xd940, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0058, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xdf3c, .a=0x48, .x=0xe1, .y=0x0f, .sp=0x3e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x00}, {.addr=0xdf3c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdf3d, .a=0x48, .x=0xe2, .y=0x0f, .sp=0x3e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x48}, {.addr=0xdf3c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdf3c, .value=0xaf, .type=IO_READ},
        {.addr=0xdf3d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e1, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xa497, .a=0x98, .x=0x5f, .y=0xa8, .sp=0xe9, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0xa497, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa498, .a=0x98, .x=0x60, .y=0xa8, .sp=0xe9, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x98}, {.addr=0xa497, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa497, .value=0xaf, .type=IO_READ},
        {.addr=0xa498, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015f, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xa044, .a=0xff, .x=0xcf, .y=0xd1, .sp=0x35, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0xa044, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa045, .a=0xff, .x=0xd0, .y=0xd1, .sp=0x35, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xff}, {.addr=0xa044, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa044, .value=0xaf, .type=IO_READ},
        {.addr=0xa045, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cf, .value=0xff, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x983c, .a=0x0e, .x=0xbd, .y=0x25, .sp=0x6f, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x983c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x983d, .a=0x0e, .x=0xbe, .y=0x25, .sp=0x6f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x0e}, {.addr=0x983c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x983c, .value=0xaf, .type=IO_READ},
        {.addr=0x983d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01bd, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x4226, .a=0x9e, .x=0x1d, .y=0xda, .sp=0x68, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x00}, {.addr=0x4226, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4227, .a=0x9e, .x=0x1e, .y=0xda, .sp=0x68, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x9e}, {.addr=0x4226, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4226, .value=0xaf, .type=IO_READ},
        {.addr=0x4227, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x001d, .value=0x9e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xb881, .a=0x18, .x=0xd2, .y=0x3b, .sp=0xd4, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x00}, {.addr=0xb881, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb882, .a=0x18, .x=0xd3, .y=0x3b, .sp=0xd4, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x18}, {.addr=0xb881, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb881, .value=0xaf, .type=IO_READ},
        {.addr=0xb882, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d2, .value=0x18, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x743b, .a=0x24, .x=0xd2, .y=0x77, .sp=0x27, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x00}, {.addr=0x743b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x743c, .a=0x24, .x=0xd3, .y=0x77, .sp=0x27, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x24}, {.addr=0x743b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x743b, .value=0xaf, .type=IO_READ},
        {.addr=0x743c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d2, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xa561, .a=0x12, .x=0xa5, .y=0x7c, .sp=0xb9, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0xa561, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa562, .a=0x12, .x=0xa6, .y=0x7c, .sp=0xb9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x12}, {.addr=0xa561, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa561, .value=0xaf, .type=IO_READ},
        {.addr=0xa562, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a5, .value=0x12, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x0b74, .a=0x71, .x=0x64, .y=0xd2, .sp=0x5b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x00}, {.addr=0x0b74, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0b75, .a=0x71, .x=0x65, .y=0xd2, .sp=0x5b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x71}, {.addr=0x0b74, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0b74, .value=0xaf, .type=IO_READ},
        {.addr=0x0b75, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0064, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x9656, .a=0x23, .x=0xe5, .y=0x66, .sp=0x98, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x00}, {.addr=0x9656, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9657, .a=0x23, .x=0xe6, .y=0x66, .sp=0x98, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x23}, {.addr=0x9656, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9656, .value=0xaf, .type=IO_READ},
        {.addr=0x9657, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e5, .value=0x23, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x9fa8, .a=0x45, .x=0xc0, .y=0x3b, .sp=0xc4, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x00}, {.addr=0x9fa8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9fa9, .a=0x45, .x=0xc1, .y=0x3b, .sp=0xc4, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x45}, {.addr=0x9fa8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9fa8, .value=0xaf, .type=IO_READ},
        {.addr=0x9fa9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c0, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xe8e5, .a=0xf7, .x=0x5d, .y=0x56, .sp=0x35, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x00}, {.addr=0xe8e5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe8e6, .a=0xf7, .x=0x5e, .y=0x56, .sp=0x35, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0xf7}, {.addr=0xe8e5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe8e5, .value=0xaf, .type=IO_READ},
        {.addr=0xe8e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005d, .value=0xf7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x1b23, .a=0x87, .x=0x86, .y=0x42, .sp=0x23, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x00}, {.addr=0x1b23, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1b24, .a=0x87, .x=0x87, .y=0x42, .sp=0x23, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x87}, {.addr=0x1b23, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1b23, .value=0xaf, .type=IO_READ},
        {.addr=0x1b24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0086, .value=0x87, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x85a2, .a=0x9f, .x=0x2f, .y=0x67, .sp=0x13, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x00}, {.addr=0x85a2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x85a3, .a=0x9f, .x=0x30, .y=0x67, .sp=0x13, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x9f}, {.addr=0x85a2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x85a2, .value=0xaf, .type=IO_READ},
        {.addr=0x85a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002f, .value=0x9f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x9a69, .a=0xa1, .x=0x47, .y=0x43, .sp=0x86, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x9a69, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9a6a, .a=0xa1, .x=0x48, .y=0x43, .sp=0x86, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xa1}, {.addr=0x9a69, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9a69, .value=0xaf, .type=IO_READ},
        {.addr=0x9a6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0xa1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xcd2c, .a=0xce, .x=0x42, .y=0x8b, .sp=0x42, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x00}, {.addr=0xcd2c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcd2d, .a=0xce, .x=0x43, .y=0x8b, .sp=0x42, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xce}, {.addr=0xcd2c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcd2c, .value=0xaf, .type=IO_READ},
        {.addr=0xcd2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0042, .value=0xce, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xdb21, .a=0x55, .x=0x68, .y=0xf4, .sp=0xb5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0xdb21, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdb22, .a=0x55, .x=0x69, .y=0xf4, .sp=0xb5, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x55}, {.addr=0xdb21, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdb21, .value=0xaf, .type=IO_READ},
        {.addr=0xdb22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0168, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x247d, .a=0x64, .x=0xae, .y=0x69, .sp=0xb1, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x247d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x247e, .a=0x64, .x=0xaf, .y=0x69, .sp=0xb1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x64}, {.addr=0x247d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x247d, .value=0xaf, .type=IO_READ},
        {.addr=0x247e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ae, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xbfd7, .a=0x0d, .x=0x38, .y=0x76, .sp=0x6d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x00}, {.addr=0xbfd7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbfd8, .a=0x0d, .x=0x39, .y=0x76, .sp=0x6d, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x0d}, {.addr=0xbfd7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbfd7, .value=0xaf, .type=IO_READ},
        {.addr=0xbfd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0038, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xeba6, .a=0x63, .x=0xea, .y=0xfe, .sp=0xc4, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x00}, {.addr=0xeba6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xeba7, .a=0x63, .x=0xeb, .y=0xfe, .sp=0xc4, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x63}, {.addr=0xeba6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xeba6, .value=0xaf, .type=IO_READ},
        {.addr=0xeba7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ea, .value=0x63, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xdcb4, .a=0x48, .x=0xca, .y=0x7a, .sp=0x5a, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0xdcb4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdcb5, .a=0x48, .x=0xcb, .y=0x7a, .sp=0x5a, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x48}, {.addr=0xdcb4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdcb4, .value=0xaf, .type=IO_READ},
        {.addr=0xdcb5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ca, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x867a, .a=0xa7, .x=0x21, .y=0xcb, .sp=0x76, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x867a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x867b, .a=0xa7, .x=0x22, .y=0xcb, .sp=0x76, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xa7}, {.addr=0x867a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x867a, .value=0xaf, .type=IO_READ},
        {.addr=0x867b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0121, .value=0xa7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x7d9f, .a=0xf7, .x=0x70, .y=0x30, .sp=0xf6, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x7d9f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7da0, .a=0xf7, .x=0x71, .y=0x30, .sp=0xf6, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xf7}, {.addr=0x7d9f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7d9f, .value=0xaf, .type=IO_READ},
        {.addr=0x7da0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0xf7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xe8c4, .a=0xa2, .x=0x59, .y=0xe6, .sp=0xf4, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x00}, {.addr=0xe8c4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe8c5, .a=0xa2, .x=0x5a, .y=0xe6, .sp=0xf4, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0xa2}, {.addr=0xe8c4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe8c4, .value=0xaf, .type=IO_READ},
        {.addr=0xe8c5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0059, .value=0xa2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x1c1c, .a=0xfb, .x=0x6c, .y=0x5a, .sp=0x9c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x00}, {.addr=0x1c1c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1c1d, .a=0xfb, .x=0x6d, .y=0x5a, .sp=0x9c, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xfb}, {.addr=0x1c1c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1c1c, .value=0xaf, .type=IO_READ},
        {.addr=0x1c1d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006c, .value=0xfb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x4d8f, .a=0x03, .x=0x3d, .y=0x6b, .sp=0xa9, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x00}, {.addr=0x4d8f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4d90, .a=0x03, .x=0x3e, .y=0x6b, .sp=0xa9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x03}, {.addr=0x4d8f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4d8f, .value=0xaf, .type=IO_READ},
        {.addr=0x4d90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003d, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x9f6d, .a=0xcd, .x=0xc3, .y=0xf9, .sp=0xe8, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x9f6d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9f6e, .a=0xcd, .x=0xc4, .y=0xf9, .sp=0xe8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xcd}, {.addr=0x9f6d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9f6d, .value=0xaf, .type=IO_READ},
        {.addr=0x9f6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c3, .value=0xcd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x5e3b, .a=0x7e, .x=0xb3, .y=0xeb, .sp=0x8d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x00}, {.addr=0x5e3b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5e3c, .a=0x7e, .x=0xb4, .y=0xeb, .sp=0x8d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x7e}, {.addr=0x5e3b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5e3b, .value=0xaf, .type=IO_READ},
        {.addr=0x5e3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b3, .value=0x7e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xd15e, .a=0x0e, .x=0x12, .y=0x7a, .sp=0xc0, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0x00}, {.addr=0xd15e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd15f, .a=0x0e, .x=0x13, .y=0x7a, .sp=0xc0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0x0e}, {.addr=0xd15e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd15e, .value=0xaf, .type=IO_READ},
        {.addr=0xd15f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0012, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xffef, .a=0x3f, .x=0xdb, .y=0xf3, .sp=0x13, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x00}, {.addr=0xffef, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfff0, .a=0x3f, .x=0xdc, .y=0xf3, .sp=0x13, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x3f}, {.addr=0xffef, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xffef, .value=0xaf, .type=IO_READ},
        {.addr=0xfff0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00db, .value=0x3f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xafb2, .a=0xa6, .x=0x9b, .y=0x0a, .sp=0x7f, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x00}, {.addr=0xafb2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xafb3, .a=0xa6, .x=0x9c, .y=0x0a, .sp=0x7f, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0xa6}, {.addr=0xafb2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xafb2, .value=0xaf, .type=IO_READ},
        {.addr=0xafb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009b, .value=0xa6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x8dde, .a=0xe9, .x=0xff, .y=0x8f, .sp=0xae, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x8dde, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8ddf, .a=0xe9, .x=0x00, .y=0x8f, .sp=0xae, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xe9}, {.addr=0x8dde, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8dde, .value=0xaf, .type=IO_READ},
        {.addr=0x8ddf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ff, .value=0xe9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x2fee, .a=0x27, .x=0x39, .y=0xf0, .sp=0xe2, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x2fee, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2fef, .a=0x27, .x=0x3a, .y=0xf0, .sp=0xe2, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x27}, {.addr=0x2fee, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2fee, .value=0xaf, .type=IO_READ},
        {.addr=0x2fef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0139, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x9c2e, .a=0x37, .x=0xef, .y=0x0f, .sp=0xb8, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x9c2e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9c2f, .a=0x37, .x=0xf0, .y=0x0f, .sp=0xb8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x37}, {.addr=0x9c2e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9c2e, .value=0xaf, .type=IO_READ},
        {.addr=0x9c2f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x37, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x9467, .a=0xb4, .x=0xbe, .y=0x27, .sp=0x17, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0x9467, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9468, .a=0xb4, .x=0xbf, .y=0x27, .sp=0x17, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xb4}, {.addr=0x9467, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9467, .value=0xaf, .type=IO_READ},
        {.addr=0x9468, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01be, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x4b6a, .a=0x05, .x=0x5d, .y=0xe6, .sp=0x42, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x00}, {.addr=0x4b6a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4b6b, .a=0x05, .x=0x5e, .y=0xe6, .sp=0x42, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x05}, {.addr=0x4b6a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4b6a, .value=0xaf, .type=IO_READ},
        {.addr=0x4b6b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005d, .value=0x05, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xe510, .a=0x55, .x=0x6a, .y=0x5a, .sp=0x02, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0xe510, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe511, .a=0x55, .x=0x6b, .y=0x5a, .sp=0x02, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x55}, {.addr=0xe510, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe510, .value=0xaf, .type=IO_READ},
        {.addr=0xe511, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016a, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x0093, .a=0x56, .x=0x76, .y=0x93, .sp=0x4b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0xaf}, {.addr=0x0176, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0094, .a=0x56, .x=0x77, .y=0x93, .sp=0x4b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0xaf}, {.addr=0x0176, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x0093, .value=0xaf, .type=IO_READ},
        {.addr=0x0094, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0176, .value=0x56, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xce6d, .a=0x53, .x=0xb5, .y=0xa7, .sp=0xed, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0xce6d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xce6e, .a=0x53, .x=0xb6, .y=0xa7, .sp=0xed, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x53}, {.addr=0xce6d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xce6d, .value=0xaf, .type=IO_READ},
        {.addr=0xce6e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b5, .value=0x53, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xab1d, .a=0x08, .x=0x71, .y=0x71, .sp=0xa1, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x00}, {.addr=0xab1d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xab1e, .a=0x08, .x=0x72, .y=0x71, .sp=0xa1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x08}, {.addr=0xab1d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xab1d, .value=0xaf, .type=IO_READ},
        {.addr=0xab1e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0071, .value=0x08, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xcb85, .a=0x95, .x=0xcc, .y=0x58, .sp=0x22, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x00}, {.addr=0xcb85, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcb86, .a=0x95, .x=0xcd, .y=0x58, .sp=0x22, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x95}, {.addr=0xcb85, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcb85, .value=0xaf, .type=IO_READ},
        {.addr=0xcb86, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00cc, .value=0x95, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xfdc6, .a=0x15, .x=0xe0, .y=0x1f, .sp=0x5a, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0xfdc6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfdc7, .a=0x15, .x=0xe1, .y=0x1f, .sp=0x5a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x15}, {.addr=0xfdc6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfdc6, .value=0xaf, .type=IO_READ},
        {.addr=0xfdc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e0, .value=0x15, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x1f87, .a=0x79, .x=0x7f, .y=0x02, .sp=0x6c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x00}, {.addr=0x1f87, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1f88, .a=0x79, .x=0x80, .y=0x02, .sp=0x6c, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x79}, {.addr=0x1f87, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1f87, .value=0xaf, .type=IO_READ},
        {.addr=0x1f88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x007f, .value=0x79, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x6a9c, .a=0x03, .x=0xb5, .y=0x26, .sp=0x17, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0x00}, {.addr=0x6a9c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6a9d, .a=0x03, .x=0xb6, .y=0x26, .sp=0x17, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0x03}, {.addr=0x6a9c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6a9c, .value=0xaf, .type=IO_READ},
        {.addr=0x6a9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b5, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x1b12, .a=0x64, .x=0xa7, .y=0x9e, .sp=0x0a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x1b12, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1b13, .a=0x64, .x=0xa8, .y=0x9e, .sp=0x0a, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x64}, {.addr=0x1b12, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1b12, .value=0xaf, .type=IO_READ},
        {.addr=0x1b13, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xe18f, .a=0xd0, .x=0x2a, .y=0xcf, .sp=0xbe, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xe18f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe190, .a=0xd0, .x=0x2b, .y=0xcf, .sp=0xbe, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xd0}, {.addr=0xe18f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe18f, .value=0xaf, .type=IO_READ},
        {.addr=0xe190, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x012a, .value=0xd0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xbb7e, .a=0x31, .x=0xd0, .y=0xb2, .sp=0xb4, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0xbb7e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbb7f, .a=0x31, .x=0xd1, .y=0xb2, .sp=0xb4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x31}, {.addr=0xbb7e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbb7e, .value=0xaf, .type=IO_READ},
        {.addr=0xbb7f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0x31, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x9737, .a=0x49, .x=0x6c, .y=0x10, .sp=0xfd, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x9737, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9738, .a=0x49, .x=0x6d, .y=0x10, .sp=0xfd, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x49}, {.addr=0x9737, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9737, .value=0xaf, .type=IO_READ},
        {.addr=0x9738, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016c, .value=0x49, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x9784, .a=0xfe, .x=0x4d, .y=0xc0, .sp=0x29, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0x00}, {.addr=0x9784, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9785, .a=0xfe, .x=0x4e, .y=0xc0, .sp=0x29, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0xfe}, {.addr=0x9784, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9784, .value=0xaf, .type=IO_READ},
        {.addr=0x9785, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004d, .value=0xfe, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xc213, .a=0xe4, .x=0x54, .y=0x1b, .sp=0x18, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x00}, {.addr=0xc213, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc214, .a=0xe4, .x=0x55, .y=0x1b, .sp=0x18, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0xe4}, {.addr=0xc213, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc213, .value=0xaf, .type=IO_READ},
        {.addr=0xc214, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0054, .value=0xe4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x7d86, .a=0x61, .x=0x91, .y=0x71, .sp=0x57, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0x00}, {.addr=0x7d86, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7d87, .a=0x61, .x=0x92, .y=0x71, .sp=0x57, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0x61}, {.addr=0x7d86, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7d86, .value=0xaf, .type=IO_READ},
        {.addr=0x7d87, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0091, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x7c81, .a=0x1d, .x=0x14, .y=0xf9, .sp=0xd2, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0x7c81, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7c82, .a=0x1d, .x=0x15, .y=0xf9, .sp=0xd2, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x1d}, {.addr=0x7c81, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7c81, .value=0xaf, .type=IO_READ},
        {.addr=0x7c82, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0114, .value=0x1d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xe1da, .a=0x81, .x=0x98, .y=0x13, .sp=0x25, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x00}, {.addr=0xe1da, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe1db, .a=0x81, .x=0x99, .y=0x13, .sp=0x25, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x81}, {.addr=0xe1da, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe1da, .value=0xaf, .type=IO_READ},
        {.addr=0xe1db, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0098, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x2201, .a=0x61, .x=0xc8, .y=0x0d, .sp=0xa3, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0x2201, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2202, .a=0x61, .x=0xc9, .y=0x0d, .sp=0xa3, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x61}, {.addr=0x2201, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2201, .value=0xaf, .type=IO_READ},
        {.addr=0x2202, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c8, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x4a0c, .a=0x71, .x=0xcd, .y=0xe0, .sp=0x4d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x4a0c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4a0d, .a=0x71, .x=0xce, .y=0xe0, .sp=0x4d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x71}, {.addr=0x4a0c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4a0c, .value=0xaf, .type=IO_READ},
        {.addr=0x4a0d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x0a60, .a=0xf4, .x=0xa8, .y=0x17, .sp=0xf8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x0a60, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0a61, .a=0xf4, .x=0xa9, .y=0x17, .sp=0xf8, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xf4}, {.addr=0x0a60, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0a60, .value=0xaf, .type=IO_READ},
        {.addr=0x0a61, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a8, .value=0xf4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xca55, .a=0x55, .x=0x70, .y=0x59, .sp=0x31, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0xca55, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xca56, .a=0x55, .x=0x71, .y=0x59, .sp=0x31, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x55}, {.addr=0xca55, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xca55, .value=0xaf, .type=IO_READ},
        {.addr=0xca56, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0170, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x09d7, .a=0x21, .x=0x03, .y=0x56, .sp=0xa4, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x00}, {.addr=0x09d7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x09d8, .a=0x21, .x=0x04, .y=0x56, .sp=0xa4, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x21}, {.addr=0x09d7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x09d7, .value=0xaf, .type=IO_READ},
        {.addr=0x09d8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0003, .value=0x21, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0300) {
    const struct CPU_State initial_cpu = {.pc=0x0efb, .a=0xd6, .x=0x83, .y=0x2c, .sp=0x7d, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x00}, {.addr=0x0efb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0efc, .a=0xd6, .x=0x84, .y=0x2c, .sp=0x7d, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0xd6}, {.addr=0x0efb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0efb, .value=0xaf, .type=IO_READ},
        {.addr=0x0efc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0083, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0301) {
    const struct CPU_State initial_cpu = {.pc=0x73cf, .a=0x36, .x=0x50, .y=0xac, .sp=0xf9, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x73cf, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x73d0, .a=0x36, .x=0x51, .y=0xac, .sp=0xf9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x36}, {.addr=0x73cf, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x73cf, .value=0xaf, .type=IO_READ},
        {.addr=0x73d0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x36, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0302) {
    const struct CPU_State initial_cpu = {.pc=0x8c4f, .a=0x5a, .x=0x37, .y=0x20, .sp=0xc7, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x00}, {.addr=0x8c4f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8c50, .a=0x5a, .x=0x38, .y=0x20, .sp=0xc7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x5a}, {.addr=0x8c4f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8c4f, .value=0xaf, .type=IO_READ},
        {.addr=0x8c50, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0037, .value=0x5a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0303) {
    const struct CPU_State initial_cpu = {.pc=0x2146, .a=0xcb, .x=0x3a, .y=0xe1, .sp=0x3d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x00}, {.addr=0x2146, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2147, .a=0xcb, .x=0x3b, .y=0xe1, .sp=0x3d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xcb}, {.addr=0x2146, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2146, .value=0xaf, .type=IO_READ},
        {.addr=0x2147, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003a, .value=0xcb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0304) {
    const struct CPU_State initial_cpu = {.pc=0x0c3b, .a=0xa9, .x=0x5b, .y=0x91, .sp=0x8e, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x0c3b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0c3c, .a=0xa9, .x=0x5c, .y=0x91, .sp=0x8e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xa9}, {.addr=0x0c3b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0c3b, .value=0xaf, .type=IO_READ},
        {.addr=0x0c3c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x015b, .value=0xa9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0305) {
    const struct CPU_State initial_cpu = {.pc=0xb199, .a=0x69, .x=0x2b, .y=0xe3, .sp=0xef, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x00}, {.addr=0xb199, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb19a, .a=0x69, .x=0x2c, .y=0xe3, .sp=0xef, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x69}, {.addr=0xb199, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb199, .value=0xaf, .type=IO_READ},
        {.addr=0xb19a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002b, .value=0x69, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0306) {
    const struct CPU_State initial_cpu = {.pc=0xf52f, .a=0xf6, .x=0x1f, .y=0x83, .sp=0xdd, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xf52f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf530, .a=0xf6, .x=0x20, .y=0x83, .sp=0xdd, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xf6}, {.addr=0xf52f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf52f, .value=0xaf, .type=IO_READ},
        {.addr=0xf530, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011f, .value=0xf6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0307) {
    const struct CPU_State initial_cpu = {.pc=0xdfa9, .a=0x23, .x=0xea, .y=0x9f, .sp=0x7c, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0xdfa9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdfaa, .a=0x23, .x=0xeb, .y=0x9f, .sp=0x7c, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x23}, {.addr=0xdfa9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdfa9, .value=0xaf, .type=IO_READ},
        {.addr=0xdfaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ea, .value=0x23, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0308) {
    const struct CPU_State initial_cpu = {.pc=0x543a, .a=0x5b, .x=0x0c, .y=0x82, .sp=0x4a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x00}, {.addr=0x543a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x543b, .a=0x5b, .x=0x0d, .y=0x82, .sp=0x4a, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x5b}, {.addr=0x543a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x543a, .value=0xaf, .type=IO_READ},
        {.addr=0x543b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000c, .value=0x5b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0309) {
    const struct CPU_State initial_cpu = {.pc=0x53cb, .a=0xec, .x=0xb4, .y=0xb4, .sp=0x64, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x53cb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x53cc, .a=0xec, .x=0xb5, .y=0xb4, .sp=0x64, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xec}, {.addr=0x53cb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x53cb, .value=0xaf, .type=IO_READ},
        {.addr=0x53cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b4, .value=0xec, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_030A) {
    const struct CPU_State initial_cpu = {.pc=0x6bc5, .a=0x53, .x=0xec, .y=0x67, .sp=0xfd, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0x6bc5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6bc6, .a=0x53, .x=0xed, .y=0x67, .sp=0xfd, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x53}, {.addr=0x6bc5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6bc5, .value=0xaf, .type=IO_READ},
        {.addr=0x6bc6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ec, .value=0x53, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_030B) {
    const struct CPU_State initial_cpu = {.pc=0xef0e, .a=0xc1, .x=0xa0, .y=0xd1, .sp=0x5c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0xef0e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xef0f, .a=0xc1, .x=0xa1, .y=0xd1, .sp=0x5c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xc1}, {.addr=0xef0e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xef0e, .value=0xaf, .type=IO_READ},
        {.addr=0xef0f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xc1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_030C) {
    const struct CPU_State initial_cpu = {.pc=0x09b8, .a=0xcc, .x=0x13, .y=0x9f, .sp=0xd0, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x09b8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x09b9, .a=0xcc, .x=0x14, .y=0x9f, .sp=0xd0, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xcc}, {.addr=0x09b8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x09b8, .value=0xaf, .type=IO_READ},
        {.addr=0x09b9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0xcc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_030D) {
    const struct CPU_State initial_cpu = {.pc=0xdda1, .a=0xd6, .x=0x05, .y=0xa6, .sp=0xf0, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x00}, {.addr=0xdda1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdda2, .a=0xd6, .x=0x06, .y=0xa6, .sp=0xf0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0xd6}, {.addr=0xdda1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdda1, .value=0xaf, .type=IO_READ},
        {.addr=0xdda2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0005, .value=0xd6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_030E) {
    const struct CPU_State initial_cpu = {.pc=0xae27, .a=0x24, .x=0xef, .y=0x6a, .sp=0x2d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xae27, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xae28, .a=0x24, .x=0xf0, .y=0x6a, .sp=0x2d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x24}, {.addr=0xae27, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xae27, .value=0xaf, .type=IO_READ},
        {.addr=0xae28, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ef, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_030F) {
    const struct CPU_State initial_cpu = {.pc=0xde3f, .a=0x9b, .x=0xba, .y=0x48, .sp=0x26, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0xde3f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xde40, .a=0x9b, .x=0xbb, .y=0x48, .sp=0x26, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x9b}, {.addr=0xde3f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xde3f, .value=0xaf, .type=IO_READ},
        {.addr=0xde40, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x9b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0310) {
    const struct CPU_State initial_cpu = {.pc=0xe168, .a=0x58, .x=0x75, .y=0x12, .sp=0xd9, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0xe168, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe169, .a=0x58, .x=0x76, .y=0x12, .sp=0xd9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x58}, {.addr=0xe168, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe168, .value=0xaf, .type=IO_READ},
        {.addr=0xe169, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0175, .value=0x58, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0311) {
    const struct CPU_State initial_cpu = {.pc=0x906e, .a=0x91, .x=0xdb, .y=0xe2, .sp=0x1d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x00}, {.addr=0x906e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x906f, .a=0x91, .x=0xdc, .y=0xe2, .sp=0x1d, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x91}, {.addr=0x906e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x906e, .value=0xaf, .type=IO_READ},
        {.addr=0x906f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00db, .value=0x91, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0312) {
    const struct CPU_State initial_cpu = {.pc=0xf69e, .a=0x85, .x=0x6d, .y=0xc9, .sp=0xab, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x00}, {.addr=0xf69e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf69f, .a=0x85, .x=0x6e, .y=0xc9, .sp=0xab, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0x85}, {.addr=0xf69e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf69e, .value=0xaf, .type=IO_READ},
        {.addr=0xf69f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006d, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0313) {
    const struct CPU_State initial_cpu = {.pc=0xc648, .a=0x58, .x=0xc4, .y=0x40, .sp=0x31, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x00}, {.addr=0xc648, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc649, .a=0x58, .x=0xc5, .y=0x40, .sp=0x31, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x58}, {.addr=0xc648, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc648, .value=0xaf, .type=IO_READ},
        {.addr=0xc649, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c4, .value=0x58, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0314) {
    const struct CPU_State initial_cpu = {.pc=0x2767, .a=0x4a, .x=0x67, .y=0x35, .sp=0xec, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x2767, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2768, .a=0x4a, .x=0x68, .y=0x35, .sp=0xec, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x4a}, {.addr=0x2767, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2767, .value=0xaf, .type=IO_READ},
        {.addr=0x2768, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0x4a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0315) {
    const struct CPU_State initial_cpu = {.pc=0x624d, .a=0x82, .x=0x6b, .y=0x08, .sp=0xde, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x624d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x624e, .a=0x82, .x=0x6c, .y=0x08, .sp=0xde, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x82}, {.addr=0x624d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x624d, .value=0xaf, .type=IO_READ},
        {.addr=0x624e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0316) {
    const struct CPU_State initial_cpu = {.pc=0xd4e8, .a=0xcd, .x=0x69, .y=0xf0, .sp=0xdc, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x00}, {.addr=0xd4e8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd4e9, .a=0xcd, .x=0x6a, .y=0xf0, .sp=0xdc, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0xcd}, {.addr=0xd4e8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd4e8, .value=0xaf, .type=IO_READ},
        {.addr=0xd4e9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0069, .value=0xcd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0317) {
    const struct CPU_State initial_cpu = {.pc=0xbbd7, .a=0x17, .x=0x3e, .y=0x87, .sp=0x02, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x00}, {.addr=0xbbd7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbbd8, .a=0x17, .x=0x3f, .y=0x87, .sp=0x02, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0x17}, {.addr=0xbbd7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbbd7, .value=0xaf, .type=IO_READ},
        {.addr=0xbbd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003e, .value=0x17, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0318) {
    const struct CPU_State initial_cpu = {.pc=0x9e6b, .a=0x0e, .x=0x7b, .y=0x35, .sp=0xc0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x9e6b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9e6c, .a=0x0e, .x=0x7c, .y=0x35, .sp=0xc0, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x0e}, {.addr=0x9e6b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9e6b, .value=0xaf, .type=IO_READ},
        {.addr=0x9e6c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0319) {
    const struct CPU_State initial_cpu = {.pc=0x8fe4, .a=0x67, .x=0xd4, .y=0x79, .sp=0x06, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0x8fe4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8fe5, .a=0x67, .x=0xd5, .y=0x79, .sp=0x06, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x67}, {.addr=0x8fe4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8fe4, .value=0xaf, .type=IO_READ},
        {.addr=0x8fe5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x67, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_031A) {
    const struct CPU_State initial_cpu = {.pc=0x2721, .a=0x73, .x=0x00, .y=0x34, .sp=0x2a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x00}, {.addr=0x2721, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2722, .a=0x73, .x=0x01, .y=0x34, .sp=0x2a, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x73}, {.addr=0x2721, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2721, .value=0xaf, .type=IO_READ},
        {.addr=0x2722, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0000, .value=0x73, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_031B) {
    const struct CPU_State initial_cpu = {.pc=0x4aba, .a=0x76, .x=0xac, .y=0x03, .sp=0xc1, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x00}, {.addr=0x4aba, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4abb, .a=0x76, .x=0xad, .y=0x03, .sp=0xc1, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x76}, {.addr=0x4aba, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4aba, .value=0xaf, .type=IO_READ},
        {.addr=0x4abb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ac, .value=0x76, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_031C) {
    const struct CPU_State initial_cpu = {.pc=0x3a8f, .a=0x4d, .x=0x9e, .y=0x9e, .sp=0x13, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x00}, {.addr=0x3a8f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3a90, .a=0x4d, .x=0x9f, .y=0x9e, .sp=0x13, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x4d}, {.addr=0x3a8f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3a8f, .value=0xaf, .type=IO_READ},
        {.addr=0x3a90, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009e, .value=0x4d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_031D) {
    const struct CPU_State initial_cpu = {.pc=0x313f, .a=0x53, .x=0x47, .y=0xb9, .sp=0x5a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x313f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3140, .a=0x53, .x=0x48, .y=0xb9, .sp=0x5a, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x53}, {.addr=0x313f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x313f, .value=0xaf, .type=IO_READ},
        {.addr=0x3140, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0147, .value=0x53, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_031E) {
    const struct CPU_State initial_cpu = {.pc=0x000b, .a=0xa7, .x=0x94, .y=0x21, .sp=0xbc, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0xaf}, {.addr=0x0094, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x000c, .a=0xa7, .x=0x95, .y=0x21, .sp=0xbc, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0xaf}, {.addr=0x0094, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x000b, .value=0xaf, .type=IO_READ},
        {.addr=0x000c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0094, .value=0xa7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_031F) {
    const struct CPU_State initial_cpu = {.pc=0x2dde, .a=0x08, .x=0x6b, .y=0x5f, .sp=0x4f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x2dde, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2ddf, .a=0x08, .x=0x6c, .y=0x5f, .sp=0x4f, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x08}, {.addr=0x2dde, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2dde, .value=0xaf, .type=IO_READ},
        {.addr=0x2ddf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x016b, .value=0x08, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0320) {
    const struct CPU_State initial_cpu = {.pc=0xca75, .a=0x21, .x=0x97, .y=0x8c, .sp=0x24, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0xca75, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xca76, .a=0x21, .x=0x98, .y=0x8c, .sp=0x24, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x21}, {.addr=0xca75, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xca75, .value=0xaf, .type=IO_READ},
        {.addr=0xca76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0197, .value=0x21, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0321) {
    const struct CPU_State initial_cpu = {.pc=0x8984, .a=0xf6, .x=0xba, .y=0x43, .sp=0x52, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x00}, {.addr=0x8984, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8985, .a=0xf6, .x=0xbb, .y=0x43, .sp=0x52, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0xf6}, {.addr=0x8984, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8984, .value=0xaf, .type=IO_READ},
        {.addr=0x8985, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ba, .value=0xf6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0322) {
    const struct CPU_State initial_cpu = {.pc=0x8de5, .a=0xd7, .x=0xc4, .y=0x34, .sp=0x7f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x8de5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8de6, .a=0xd7, .x=0xc5, .y=0x34, .sp=0x7f, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xd7}, {.addr=0x8de5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8de5, .value=0xaf, .type=IO_READ},
        {.addr=0x8de6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c4, .value=0xd7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0323) {
    const struct CPU_State initial_cpu = {.pc=0x4e75, .a=0x01, .x=0xe6, .y=0xb8, .sp=0xba, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x4e75, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4e76, .a=0x01, .x=0xe7, .y=0xb8, .sp=0xba, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x01}, {.addr=0x4e75, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4e75, .value=0xaf, .type=IO_READ},
        {.addr=0x4e76, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e6, .value=0x01, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0324) {
    const struct CPU_State initial_cpu = {.pc=0xee3d, .a=0x36, .x=0xd6, .y=0x1d, .sp=0x76, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x00}, {.addr=0xee3d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xee3e, .a=0x36, .x=0xd7, .y=0x1d, .sp=0x76, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x36}, {.addr=0xee3d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xee3d, .value=0xaf, .type=IO_READ},
        {.addr=0xee3e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d6, .value=0x36, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0325) {
    const struct CPU_State initial_cpu = {.pc=0x5ca1, .a=0xb5, .x=0x3d, .y=0x4d, .sp=0x25, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x5ca1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5ca2, .a=0xb5, .x=0x3e, .y=0x4d, .sp=0x25, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xb5}, {.addr=0x5ca1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5ca1, .value=0xaf, .type=IO_READ},
        {.addr=0x5ca2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013d, .value=0xb5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0326) {
    const struct CPU_State initial_cpu = {.pc=0xa849, .a=0x52, .x=0xd4, .y=0xea, .sp=0x1d, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x00}, {.addr=0xa849, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa84a, .a=0x52, .x=0xd5, .y=0xea, .sp=0x1d, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x52}, {.addr=0xa849, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa849, .value=0xaf, .type=IO_READ},
        {.addr=0xa84a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d4, .value=0x52, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0327) {
    const struct CPU_State initial_cpu = {.pc=0xde21, .a=0x0f, .x=0x8f, .y=0x06, .sp=0xce, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0xde21, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xde22, .a=0x0f, .x=0x90, .y=0x06, .sp=0xce, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x0f}, {.addr=0xde21, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xde21, .value=0xaf, .type=IO_READ},
        {.addr=0xde22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018f, .value=0x0f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0328) {
    const struct CPU_State initial_cpu = {.pc=0xfffb, .a=0x35, .x=0xa4, .y=0x0a, .sp=0x63, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xfffb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfffc, .a=0x35, .x=0xa5, .y=0x0a, .sp=0x63, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x35}, {.addr=0xfffb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfffb, .value=0xaf, .type=IO_READ},
        {.addr=0xfffc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a4, .value=0x35, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0329) {
    const struct CPU_State initial_cpu = {.pc=0x4c14, .a=0xf4, .x=0xb0, .y=0xa4, .sp=0xf4, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x4c14, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4c15, .a=0xf4, .x=0xb1, .y=0xa4, .sp=0xf4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xf4}, {.addr=0x4c14, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4c14, .value=0xaf, .type=IO_READ},
        {.addr=0x4c15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b0, .value=0xf4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_032A) {
    const struct CPU_State initial_cpu = {.pc=0xdd6c, .a=0xd9, .x=0xfb, .y=0x13, .sp=0x19, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0xdd6c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdd6d, .a=0xd9, .x=0xfc, .y=0x13, .sp=0x19, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xd9}, {.addr=0xdd6c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdd6c, .value=0xaf, .type=IO_READ},
        {.addr=0xdd6d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fb, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_032B) {
    const struct CPU_State initial_cpu = {.pc=0x3cf7, .a=0x40, .x=0xe5, .y=0xb8, .sp=0x0b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x00}, {.addr=0x3cf7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3cf8, .a=0x40, .x=0xe6, .y=0xb8, .sp=0x0b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x40}, {.addr=0x3cf7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3cf7, .value=0xaf, .type=IO_READ},
        {.addr=0x3cf8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e5, .value=0x40, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_032C) {
    const struct CPU_State initial_cpu = {.pc=0x34e4, .a=0x29, .x=0xa6, .y=0x0c, .sp=0x08, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x00}, {.addr=0x34e4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x34e5, .a=0x29, .x=0xa7, .y=0x0c, .sp=0x08, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x29}, {.addr=0x34e4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x34e4, .value=0xaf, .type=IO_READ},
        {.addr=0x34e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a6, .value=0x29, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_032D) {
    const struct CPU_State initial_cpu = {.pc=0x439f, .a=0xd9, .x=0x33, .y=0x2d, .sp=0xa4, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x439f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x43a0, .a=0xd9, .x=0x34, .y=0x2d, .sp=0xa4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xd9}, {.addr=0x439f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x439f, .value=0xaf, .type=IO_READ},
        {.addr=0x43a0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xd9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_032E) {
    const struct CPU_State initial_cpu = {.pc=0xc74e, .a=0xc5, .x=0xa4, .y=0xec, .sp=0x4d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x00}, {.addr=0xc74e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc74f, .a=0xc5, .x=0xa5, .y=0xec, .sp=0x4d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xc5}, {.addr=0xc74e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc74e, .value=0xaf, .type=IO_READ},
        {.addr=0xc74f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a4, .value=0xc5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0330) {
    const struct CPU_State initial_cpu = {.pc=0x65c8, .a=0xc7, .x=0xd1, .y=0x94, .sp=0x36, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x00}, {.addr=0x65c8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x65c9, .a=0xc7, .x=0xd2, .y=0x94, .sp=0x36, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0xc7}, {.addr=0x65c8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x65c8, .value=0xaf, .type=IO_READ},
        {.addr=0x65c9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d1, .value=0xc7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0331) {
    const struct CPU_State initial_cpu = {.pc=0xb1fc, .a=0x88, .x=0x48, .y=0xce, .sp=0x7a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0xb1fc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb1fd, .a=0x88, .x=0x49, .y=0xce, .sp=0x7a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x88}, {.addr=0xb1fc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb1fc, .value=0xaf, .type=IO_READ},
        {.addr=0xb1fd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0148, .value=0x88, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0332) {
    const struct CPU_State initial_cpu = {.pc=0x45df, .a=0xf3, .x=0xe2, .y=0x2c, .sp=0xb3, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x00}, {.addr=0x45df, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x45e0, .a=0xf3, .x=0xe3, .y=0x2c, .sp=0xb3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xf3}, {.addr=0x45df, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x45df, .value=0xaf, .type=IO_READ},
        {.addr=0x45e0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e2, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0333) {
    const struct CPU_State initial_cpu = {.pc=0x4fff, .a=0xd3, .x=0x36, .y=0x2f, .sp=0x1d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0x4fff, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5000, .a=0xd3, .x=0x37, .y=0x2f, .sp=0x1d, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xd3}, {.addr=0x4fff, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4fff, .value=0xaf, .type=IO_READ},
        {.addr=0x5000, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0136, .value=0xd3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0334) {
    const struct CPU_State initial_cpu = {.pc=0xa918, .a=0x35, .x=0xd7, .y=0x02, .sp=0xa2, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x00}, {.addr=0xa918, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa919, .a=0x35, .x=0xd8, .y=0x02, .sp=0xa2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x35}, {.addr=0xa918, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa918, .value=0xaf, .type=IO_READ},
        {.addr=0xa919, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d7, .value=0x35, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0335) {
    const struct CPU_State initial_cpu = {.pc=0x8d28, .a=0x98, .x=0xf1, .y=0x08, .sp=0x27, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x8d28, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8d29, .a=0x98, .x=0xf2, .y=0x08, .sp=0x27, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x98}, {.addr=0x8d28, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8d28, .value=0xaf, .type=IO_READ},
        {.addr=0x8d29, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f1, .value=0x98, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0336) {
    const struct CPU_State initial_cpu = {.pc=0x2631, .a=0xe8, .x=0xfe, .y=0x42, .sp=0x7c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0x2631, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2632, .a=0xe8, .x=0xff, .y=0x42, .sp=0x7c, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xe8}, {.addr=0x2631, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2631, .value=0xaf, .type=IO_READ},
        {.addr=0x2632, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0xe8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0337) {
    const struct CPU_State initial_cpu = {.pc=0xc8bf, .a=0xc6, .x=0xaa, .y=0x5e, .sp=0xc3, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0xc8bf, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc8c0, .a=0xc6, .x=0xab, .y=0x5e, .sp=0xc3, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xc6}, {.addr=0xc8bf, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc8bf, .value=0xaf, .type=IO_READ},
        {.addr=0xc8c0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0xc6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0338) {
    const struct CPU_State initial_cpu = {.pc=0x1562, .a=0x5a, .x=0xaa, .y=0xf5, .sp=0x26, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0x1562, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1563, .a=0x5a, .x=0xab, .y=0xf5, .sp=0x26, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x5a}, {.addr=0x1562, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1562, .value=0xaf, .type=IO_READ},
        {.addr=0x1563, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x5a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0339) {
    const struct CPU_State initial_cpu = {.pc=0xb163, .a=0xf5, .x=0x26, .y=0x68, .sp=0x7a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x00}, {.addr=0xb163, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb164, .a=0xf5, .x=0x27, .y=0x68, .sp=0x7a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0xf5}, {.addr=0xb163, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb163, .value=0xaf, .type=IO_READ},
        {.addr=0xb164, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0026, .value=0xf5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_033A) {
    const struct CPU_State initial_cpu = {.pc=0xecf8, .a=0xe2, .x=0xd6, .y=0xf9, .sp=0xff, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x00}, {.addr=0xecf8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xecf9, .a=0xe2, .x=0xd7, .y=0xf9, .sp=0xff, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xe2}, {.addr=0xecf8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xecf8, .value=0xaf, .type=IO_READ},
        {.addr=0xecf9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d6, .value=0xe2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_033B) {
    const struct CPU_State initial_cpu = {.pc=0xe01f, .a=0x9b, .x=0x45, .y=0x3a, .sp=0x7a, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0xe01f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe020, .a=0x9b, .x=0x46, .y=0x3a, .sp=0x7a, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x9b}, {.addr=0xe01f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe01f, .value=0xaf, .type=IO_READ},
        {.addr=0xe020, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0145, .value=0x9b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_033C) {
    const struct CPU_State initial_cpu = {.pc=0xf86a, .a=0x5f, .x=0xaa, .y=0x49, .sp=0xfb, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0xf86a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf86b, .a=0x5f, .x=0xab, .y=0x49, .sp=0xfb, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x5f}, {.addr=0xf86a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf86a, .value=0xaf, .type=IO_READ},
        {.addr=0xf86b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01aa, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_033D) {
    const struct CPU_State initial_cpu = {.pc=0x9afe, .a=0x4f, .x=0x84, .y=0xad, .sp=0xcb, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0x9afe, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9aff, .a=0x4f, .x=0x85, .y=0xad, .sp=0xcb, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x4f}, {.addr=0x9afe, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9afe, .value=0xaf, .type=IO_READ},
        {.addr=0x9aff, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0184, .value=0x4f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_033E) {
    const struct CPU_State initial_cpu = {.pc=0xbc95, .a=0xcd, .x=0x08, .y=0xee, .sp=0x9d, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xbc95, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbc96, .a=0xcd, .x=0x09, .y=0xee, .sp=0x9d, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xcd}, {.addr=0xbc95, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbc95, .value=0xaf, .type=IO_READ},
        {.addr=0xbc96, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0108, .value=0xcd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_033F) {
    const struct CPU_State initial_cpu = {.pc=0x7e15, .a=0x11, .x=0xa5, .y=0x6a, .sp=0x0b, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0x00}, {.addr=0x7e15, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7e16, .a=0x11, .x=0xa6, .y=0x6a, .sp=0x0b, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0x11}, {.addr=0x7e15, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7e15, .value=0xaf, .type=IO_READ},
        {.addr=0x7e16, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a5, .value=0x11, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0340) {
    const struct CPU_State initial_cpu = {.pc=0xf81c, .a=0x20, .x=0xd7, .y=0xcd, .sp=0x77, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0xf81c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf81d, .a=0x20, .x=0xd8, .y=0xcd, .sp=0x77, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x20}, {.addr=0xf81c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf81c, .value=0xaf, .type=IO_READ},
        {.addr=0xf81d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d7, .value=0x20, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0341) {
    const struct CPU_State initial_cpu = {.pc=0x2f3a, .a=0xe4, .x=0x84, .y=0x71, .sp=0x3c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x00}, {.addr=0x2f3a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2f3b, .a=0xe4, .x=0x85, .y=0x71, .sp=0x3c, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xe4}, {.addr=0x2f3a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2f3a, .value=0xaf, .type=IO_READ},
        {.addr=0x2f3b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0084, .value=0xe4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0342) {
    const struct CPU_State initial_cpu = {.pc=0x07c0, .a=0x27, .x=0x0a, .y=0xb8, .sp=0xba, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x00}, {.addr=0x07c0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x07c1, .a=0x27, .x=0x0b, .y=0xb8, .sp=0xba, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x27}, {.addr=0x07c0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x07c0, .value=0xaf, .type=IO_READ},
        {.addr=0x07c1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000a, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0343) {
    const struct CPU_State initial_cpu = {.pc=0x2cff, .a=0x07, .x=0xf9, .y=0xce, .sp=0x8d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0x2cff, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2d00, .a=0x07, .x=0xfa, .y=0xce, .sp=0x8d, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x07}, {.addr=0x2cff, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2cff, .value=0xaf, .type=IO_READ},
        {.addr=0x2d00, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f9, .value=0x07, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0344) {
    const struct CPU_State initial_cpu = {.pc=0x4b01, .a=0xe3, .x=0x96, .y=0x92, .sp=0xbd, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x4b01, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4b02, .a=0xe3, .x=0x97, .y=0x92, .sp=0xbd, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xe3}, {.addr=0x4b01, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4b01, .value=0xaf, .type=IO_READ},
        {.addr=0x4b02, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0196, .value=0xe3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0345) {
    const struct CPU_State initial_cpu = {.pc=0x536d, .a=0xda, .x=0x5c, .y=0x86, .sp=0x9f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x00}, {.addr=0x536d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x536e, .a=0xda, .x=0x5d, .y=0x86, .sp=0x9f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0xda}, {.addr=0x536d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x536d, .value=0xaf, .type=IO_READ},
        {.addr=0x536e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005c, .value=0xda, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0346) {
    const struct CPU_State initial_cpu = {.pc=0x7f7f, .a=0x0f, .x=0x44, .y=0x19, .sp=0x22, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x7f7f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7f80, .a=0x0f, .x=0x45, .y=0x19, .sp=0x22, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x0f}, {.addr=0x7f7f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7f7f, .value=0xaf, .type=IO_READ},
        {.addr=0x7f80, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0x0f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0347) {
    const struct CPU_State initial_cpu = {.pc=0xe957, .a=0x28, .x=0xd9, .y=0xae, .sp=0x74, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x00}, {.addr=0xe957, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe958, .a=0x28, .x=0xda, .y=0xae, .sp=0x74, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x28}, {.addr=0xe957, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe957, .value=0xaf, .type=IO_READ},
        {.addr=0xe958, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d9, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0348) {
    const struct CPU_State initial_cpu = {.pc=0xe5a2, .a=0x53, .x=0xb4, .y=0x18, .sp=0x5b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x00}, {.addr=0xe5a2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe5a3, .a=0x53, .x=0xb5, .y=0x18, .sp=0x5b, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0x53}, {.addr=0xe5a2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe5a2, .value=0xaf, .type=IO_READ},
        {.addr=0xe5a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b4, .value=0x53, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0349) {
    const struct CPU_State initial_cpu = {.pc=0x37ac, .a=0xf3, .x=0x33, .y=0xbe, .sp=0x89, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x37ac, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x37ad, .a=0xf3, .x=0x34, .y=0xbe, .sp=0x89, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xf3}, {.addr=0x37ac, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x37ac, .value=0xaf, .type=IO_READ},
        {.addr=0x37ad, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0133, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_034A) {
    const struct CPU_State initial_cpu = {.pc=0xcda9, .a=0xef, .x=0x6b, .y=0xff, .sp=0xd2, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x00}, {.addr=0xcda9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xcdaa, .a=0xef, .x=0x6c, .y=0xff, .sp=0xd2, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0xef}, {.addr=0xcda9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xcda9, .value=0xaf, .type=IO_READ},
        {.addr=0xcdaa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006b, .value=0xef, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_034B) {
    const struct CPU_State initial_cpu = {.pc=0x115f, .a=0x09, .x=0xe2, .y=0x21, .sp=0xef, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x115f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1160, .a=0x09, .x=0xe3, .y=0x21, .sp=0xef, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x09}, {.addr=0x115f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x115f, .value=0xaf, .type=IO_READ},
        {.addr=0x1160, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0x09, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_034D) {
    const struct CPU_State initial_cpu = {.pc=0xa11e, .a=0x8e, .x=0x24, .y=0xce, .sp=0x6f, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0xa11e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa11f, .a=0x8e, .x=0x25, .y=0xce, .sp=0x6f, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x8e}, {.addr=0xa11e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa11e, .value=0xaf, .type=IO_READ},
        {.addr=0xa11f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0124, .value=0x8e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_034E) {
    const struct CPU_State initial_cpu = {.pc=0xa8fb, .a=0x44, .x=0xfe, .y=0x05, .sp=0xe9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0xa8fb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa8fc, .a=0x44, .x=0xff, .y=0x05, .sp=0xe9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x44}, {.addr=0xa8fb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa8fb, .value=0xaf, .type=IO_READ},
        {.addr=0xa8fc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01fe, .value=0x44, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_034F) {
    const struct CPU_State initial_cpu = {.pc=0xfeae, .a=0x61, .x=0x95, .y=0x79, .sp=0x85, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x00}, {.addr=0xfeae, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfeaf, .a=0x61, .x=0x96, .y=0x79, .sp=0x85, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x61}, {.addr=0xfeae, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfeae, .value=0xaf, .type=IO_READ},
        {.addr=0xfeaf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0095, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0350) {
    const struct CPU_State initial_cpu = {.pc=0xfea3, .a=0x7f, .x=0x10, .y=0xf7, .sp=0x9b, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x00}, {.addr=0xfea3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfea4, .a=0x7f, .x=0x11, .y=0xf7, .sp=0x9b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x7f}, {.addr=0xfea3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfea3, .value=0xaf, .type=IO_READ},
        {.addr=0xfea4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0010, .value=0x7f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0351) {
    const struct CPU_State initial_cpu = {.pc=0x684b, .a=0x0d, .x=0xc9, .y=0x9c, .sp=0x27, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x00}, {.addr=0x684b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x684c, .a=0x0d, .x=0xca, .y=0x9c, .sp=0x27, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x0d}, {.addr=0x684b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x684b, .value=0xaf, .type=IO_READ},
        {.addr=0x684c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00c9, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0352) {
    const struct CPU_State initial_cpu = {.pc=0xf0aa, .a=0x55, .x=0xa1, .y=0x27, .sp=0x20, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0xf0aa, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf0ab, .a=0x55, .x=0xa2, .y=0x27, .sp=0x20, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x55}, {.addr=0xf0aa, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf0aa, .value=0xaf, .type=IO_READ},
        {.addr=0xf0ab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x55, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0354) {
    const struct CPU_State initial_cpu = {.pc=0x678a, .a=0xdb, .x=0xad, .y=0x0b, .sp=0xe8, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x00}, {.addr=0x678a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x678b, .a=0xdb, .x=0xae, .y=0x0b, .sp=0xe8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0xdb}, {.addr=0x678a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x678a, .value=0xaf, .type=IO_READ},
        {.addr=0x678b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ad, .value=0xdb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0355) {
    const struct CPU_State initial_cpu = {.pc=0xc2d3, .a=0x68, .x=0x62, .y=0xeb, .sp=0x6e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0xc2d3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc2d4, .a=0x68, .x=0x63, .y=0xeb, .sp=0x6e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x68}, {.addr=0xc2d3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc2d3, .value=0xaf, .type=IO_READ},
        {.addr=0xc2d4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0162, .value=0x68, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0356) {
    const struct CPU_State initial_cpu = {.pc=0x5bd9, .a=0x2d, .x=0x55, .y=0x8b, .sp=0x96, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0x5bd9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5bda, .a=0x2d, .x=0x56, .y=0x8b, .sp=0x96, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x2d}, {.addr=0x5bd9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5bd9, .value=0xaf, .type=IO_READ},
        {.addr=0x5bda, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0x2d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0357) {
    const struct CPU_State initial_cpu = {.pc=0xdf6e, .a=0x0e, .x=0xa7, .y=0x5c, .sp=0x17, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x00}, {.addr=0xdf6e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdf6f, .a=0x0e, .x=0xa8, .y=0x5c, .sp=0x17, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x0e}, {.addr=0xdf6e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdf6e, .value=0xaf, .type=IO_READ},
        {.addr=0xdf6f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a7, .value=0x0e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0358) {
    const struct CPU_State initial_cpu = {.pc=0x0dba, .a=0x61, .x=0x98, .y=0x66, .sp=0x86, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x00}, {.addr=0x0dba, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0dbb, .a=0x61, .x=0x99, .y=0x66, .sp=0x86, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x61}, {.addr=0x0dba, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0dba, .value=0xaf, .type=IO_READ},
        {.addr=0x0dbb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0098, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3e30, .a=0x30, .x=0x3f, .y=0xf0, .sp=0x1d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0x3e30, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3e31, .a=0x30, .x=0x40, .y=0xf0, .sp=0x1d, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x30}, {.addr=0x3e30, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3e30, .value=0xaf, .type=IO_READ},
        {.addr=0x3e31, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013f, .value=0x30, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_035A) {
    const struct CPU_State initial_cpu = {.pc=0x8191, .a=0xc8, .x=0x6a, .y=0xe0, .sp=0x95, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x00}, {.addr=0x8191, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8192, .a=0xc8, .x=0x6b, .y=0xe0, .sp=0x95, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xc8}, {.addr=0x8191, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8191, .value=0xaf, .type=IO_READ},
        {.addr=0x8192, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006a, .value=0xc8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_035B) {
    const struct CPU_State initial_cpu = {.pc=0x2ae6, .a=0x32, .x=0x45, .y=0xd4, .sp=0xa1, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x00}, {.addr=0x2ae6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2ae7, .a=0x32, .x=0x46, .y=0xd4, .sp=0xa1, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x32}, {.addr=0x2ae6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2ae6, .value=0xaf, .type=IO_READ},
        {.addr=0x2ae7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0045, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_035C) {
    const struct CPU_State initial_cpu = {.pc=0x0dc6, .a=0xef, .x=0xe3, .y=0x06, .sp=0x09, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x0dc6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0dc7, .a=0xef, .x=0xe4, .y=0x06, .sp=0x09, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xef}, {.addr=0x0dc6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0dc6, .value=0xaf, .type=IO_READ},
        {.addr=0x0dc7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e3, .value=0xef, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_035D) {
    const struct CPU_State initial_cpu = {.pc=0xa0c9, .a=0x39, .x=0x4b, .y=0x68, .sp=0x73, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x00}, {.addr=0xa0c9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa0ca, .a=0x39, .x=0x4c, .y=0x68, .sp=0x73, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x39}, {.addr=0xa0c9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa0c9, .value=0xaf, .type=IO_READ},
        {.addr=0xa0ca, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004b, .value=0x39, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_035E) {
    const struct CPU_State initial_cpu = {.pc=0x3438, .a=0x0c, .x=0xd0, .y=0x5d, .sp=0xcb, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0x3438, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3439, .a=0x0c, .x=0xd1, .y=0x5d, .sp=0xcb, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x0c}, {.addr=0x3438, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3438, .value=0xaf, .type=IO_READ},
        {.addr=0x3439, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01d0, .value=0x0c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_035F) {
    const struct CPU_State initial_cpu = {.pc=0xfd2c, .a=0x40, .x=0x62, .y=0x34, .sp=0x2d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x00}, {.addr=0xfd2c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfd2d, .a=0x40, .x=0x63, .y=0x34, .sp=0x2d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x40}, {.addr=0xfd2c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfd2c, .value=0xaf, .type=IO_READ},
        {.addr=0xfd2d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0062, .value=0x40, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0360) {
    const struct CPU_State initial_cpu = {.pc=0xd461, .a=0x21, .x=0x37, .y=0x6c, .sp=0xab, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0xd461, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd462, .a=0x21, .x=0x38, .y=0x6c, .sp=0xab, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x21}, {.addr=0xd461, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd461, .value=0xaf, .type=IO_READ},
        {.addr=0xd462, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0137, .value=0x21, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0361) {
    const struct CPU_State initial_cpu = {.pc=0x3d72, .a=0x13, .x=0xad, .y=0x76, .sp=0xf9, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x3d72, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3d73, .a=0x13, .x=0xae, .y=0x76, .sp=0xf9, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x13}, {.addr=0x3d72, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3d72, .value=0xaf, .type=IO_READ},
        {.addr=0x3d73, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ad, .value=0x13, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0362) {
    const struct CPU_State initial_cpu = {.pc=0x2245, .a=0xef, .x=0x01, .y=0xc5, .sp=0xba, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x00}, {.addr=0x2245, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2246, .a=0xef, .x=0x02, .y=0xc5, .sp=0xba, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xef}, {.addr=0x2245, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2245, .value=0xaf, .type=IO_READ},
        {.addr=0x2246, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0001, .value=0xef, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0363) {
    const struct CPU_State initial_cpu = {.pc=0x9e19, .a=0x64, .x=0x91, .y=0x75, .sp=0xa0, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0x00}, {.addr=0x9e19, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9e1a, .a=0x64, .x=0x92, .y=0x75, .sp=0xa0, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0x64}, {.addr=0x9e19, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9e19, .value=0xaf, .type=IO_READ},
        {.addr=0x9e1a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0091, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0364) {
    const struct CPU_State initial_cpu = {.pc=0x8f45, .a=0xbb, .x=0x89, .y=0xc8, .sp=0xa1, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x8f45, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8f46, .a=0xbb, .x=0x8a, .y=0xc8, .sp=0xa1, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xbb}, {.addr=0x8f45, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8f45, .value=0xaf, .type=IO_READ},
        {.addr=0x8f46, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0xbb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0365) {
    const struct CPU_State initial_cpu = {.pc=0x8947, .a=0xd3, .x=0xc7, .y=0xcb, .sp=0xce, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x00}, {.addr=0x8947, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8948, .a=0xd3, .x=0xc8, .y=0xcb, .sp=0xce, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xd3}, {.addr=0x8947, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8947, .value=0xaf, .type=IO_READ},
        {.addr=0x8948, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c7, .value=0xd3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0366) {
    const struct CPU_State initial_cpu = {.pc=0x3d87, .a=0x0d, .x=0x3f, .y=0xf6, .sp=0xfa, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x00}, {.addr=0x3d87, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3d88, .a=0x0d, .x=0x40, .y=0xf6, .sp=0xfa, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x0d}, {.addr=0x3d87, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3d87, .value=0xaf, .type=IO_READ},
        {.addr=0x3d88, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003f, .value=0x0d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0367) {
    const struct CPU_State initial_cpu = {.pc=0xe842, .a=0xab, .x=0x15, .y=0x5e, .sp=0x69, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0x00}, {.addr=0xe842, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe843, .a=0xab, .x=0x16, .y=0x5e, .sp=0x69, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0xab}, {.addr=0xe842, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe842, .value=0xaf, .type=IO_READ},
        {.addr=0xe843, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0015, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0368) {
    const struct CPU_State initial_cpu = {.pc=0x6c04, .a=0x88, .x=0x5c, .y=0x76, .sp=0xa7, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x00}, {.addr=0x6c04, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6c05, .a=0x88, .x=0x5d, .y=0x76, .sp=0xa7, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x88}, {.addr=0x6c04, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6c04, .value=0xaf, .type=IO_READ},
        {.addr=0x6c05, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005c, .value=0x88, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0369) {
    const struct CPU_State initial_cpu = {.pc=0x70b0, .a=0x60, .x=0xb9, .y=0x3b, .sp=0xe0, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x00}, {.addr=0x70b0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x70b1, .a=0x60, .x=0xba, .y=0x3b, .sp=0xe0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0x60}, {.addr=0x70b0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x70b0, .value=0xaf, .type=IO_READ},
        {.addr=0x70b1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b9, .value=0x60, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_036A) {
    const struct CPU_State initial_cpu = {.pc=0x6c68, .a=0xdd, .x=0xcb, .y=0x6f, .sp=0x47, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x00}, {.addr=0x6c68, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6c69, .a=0xdd, .x=0xcc, .y=0x6f, .sp=0x47, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xdd}, {.addr=0x6c68, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6c68, .value=0xaf, .type=IO_READ},
        {.addr=0x6c69, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cb, .value=0xdd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_036B) {
    const struct CPU_State initial_cpu = {.pc=0xdfe0, .a=0x4b, .x=0x58, .y=0x67, .sp=0xcf, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x00}, {.addr=0xdfe0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdfe1, .a=0x4b, .x=0x59, .y=0x67, .sp=0xcf, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x4b}, {.addr=0xdfe0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdfe0, .value=0xaf, .type=IO_READ},
        {.addr=0xdfe1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0058, .value=0x4b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_036C) {
    const struct CPU_State initial_cpu = {.pc=0xe91b, .a=0xbb, .x=0x3b, .y=0x41, .sp=0xf8, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x00}, {.addr=0xe91b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe91c, .a=0xbb, .x=0x3c, .y=0x41, .sp=0xf8, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0xbb}, {.addr=0xe91b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe91b, .value=0xaf, .type=IO_READ},
        {.addr=0xe91c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003b, .value=0xbb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_036D) {
    const struct CPU_State initial_cpu = {.pc=0xa096, .a=0x06, .x=0xf4, .y=0xe4, .sp=0x20, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0xa096, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa097, .a=0x06, .x=0xf5, .y=0xe4, .sp=0x20, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x06}, {.addr=0xa096, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa096, .value=0xaf, .type=IO_READ},
        {.addr=0xa097, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f4, .value=0x06, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_036E) {
    const struct CPU_State initial_cpu = {.pc=0xbd50, .a=0x5b, .x=0xeb, .y=0x6f, .sp=0x63, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x00}, {.addr=0xbd50, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbd51, .a=0x5b, .x=0xec, .y=0x6f, .sp=0x63, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x5b}, {.addr=0xbd50, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbd50, .value=0xaf, .type=IO_READ},
        {.addr=0xbd51, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00eb, .value=0x5b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_036F) {
    const struct CPU_State initial_cpu = {.pc=0x916b, .a=0xf7, .x=0xee, .y=0xd3, .sp=0xdf, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x00}, {.addr=0x916b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x916c, .a=0xf7, .x=0xef, .y=0xd3, .sp=0xdf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0xf7}, {.addr=0x916b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x916b, .value=0xaf, .type=IO_READ},
        {.addr=0x916c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ee, .value=0xf7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0370) {
    const struct CPU_State initial_cpu = {.pc=0x708e, .a=0x24, .x=0xa1, .y=0xc4, .sp=0xd0, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0x708e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x708f, .a=0x24, .x=0xa2, .y=0xc4, .sp=0xd0, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x24}, {.addr=0x708e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x708e, .value=0xaf, .type=IO_READ},
        {.addr=0x708f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a1, .value=0x24, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0371) {
    const struct CPU_State initial_cpu = {.pc=0xe0f9, .a=0x7f, .x=0xad, .y=0xfb, .sp=0x61, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x00}, {.addr=0xe0f9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe0fa, .a=0x7f, .x=0xae, .y=0xfb, .sp=0x61, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x7f}, {.addr=0xe0f9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe0f9, .value=0xaf, .type=IO_READ},
        {.addr=0xe0fa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ad, .value=0x7f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0372) {
    const struct CPU_State initial_cpu = {.pc=0xfab7, .a=0x70, .x=0x58, .y=0xfd, .sp=0x23, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x00}, {.addr=0xfab7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfab8, .a=0x70, .x=0x59, .y=0xfd, .sp=0x23, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x70}, {.addr=0xfab7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfab7, .value=0xaf, .type=IO_READ},
        {.addr=0xfab8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0058, .value=0x70, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0373) {
    const struct CPU_State initial_cpu = {.pc=0x8faa, .a=0x2f, .x=0xeb, .y=0xeb, .sp=0x44, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x00}, {.addr=0x8faa, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8fab, .a=0x2f, .x=0xec, .y=0xeb, .sp=0x44, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x2f}, {.addr=0x8faa, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8faa, .value=0xaf, .type=IO_READ},
        {.addr=0x8fab, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00eb, .value=0x2f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0374) {
    const struct CPU_State initial_cpu = {.pc=0x7b5e, .a=0xd2, .x=0x7e, .y=0x6b, .sp=0xfe, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0x7b5e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7b5f, .a=0xd2, .x=0x7f, .y=0x6b, .sp=0xfe, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xd2}, {.addr=0x7b5e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7b5e, .value=0xaf, .type=IO_READ},
        {.addr=0x7b5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017e, .value=0xd2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0375) {
    const struct CPU_State initial_cpu = {.pc=0xff23, .a=0x71, .x=0xc2, .y=0x24, .sp=0xb0, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0xff23, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xff24, .a=0x71, .x=0xc3, .y=0x24, .sp=0xb0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x71}, {.addr=0xff23, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xff23, .value=0xaf, .type=IO_READ},
        {.addr=0xff24, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01c2, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0376) {
    const struct CPU_State initial_cpu = {.pc=0x0e93, .a=0x2e, .x=0xce, .y=0xb1, .sp=0x1c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x00}, {.addr=0x0e93, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0e94, .a=0x2e, .x=0xcf, .y=0xb1, .sp=0x1c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x2e}, {.addr=0x0e93, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0e93, .value=0xaf, .type=IO_READ},
        {.addr=0x0e94, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ce, .value=0x2e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0377) {
    const struct CPU_State initial_cpu = {.pc=0x8275, .a=0x20, .x=0x41, .y=0x14, .sp=0xe9, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x00}, {.addr=0x8275, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8276, .a=0x20, .x=0x42, .y=0x14, .sp=0xe9, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0x20}, {.addr=0x8275, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8275, .value=0xaf, .type=IO_READ},
        {.addr=0x8276, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0041, .value=0x20, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0378) {
    const struct CPU_State initial_cpu = {.pc=0x2b77, .a=0xb4, .x=0xaf, .y=0x3f, .sp=0xcf, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x00}, {.addr=0x2b77, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2b78, .a=0xb4, .x=0xb0, .y=0x3f, .sp=0xcf, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xb4}, {.addr=0x2b77, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2b77, .value=0xaf, .type=IO_READ},
        {.addr=0x2b78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00af, .value=0xb4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0379) {
    const struct CPU_State initial_cpu = {.pc=0x8e0d, .a=0x7d, .x=0xe9, .y=0x7d, .sp=0xfc, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x00}, {.addr=0x8e0d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8e0e, .a=0x7d, .x=0xea, .y=0x7d, .sp=0xfc, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x7d}, {.addr=0x8e0d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8e0d, .value=0xaf, .type=IO_READ},
        {.addr=0x8e0e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e9, .value=0x7d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_037A) {
    const struct CPU_State initial_cpu = {.pc=0x07ff, .a=0x0b, .x=0x20, .y=0x2c, .sp=0xc4, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x00}, {.addr=0x07ff, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0800, .a=0x0b, .x=0x21, .y=0x2c, .sp=0xc4, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x0b}, {.addr=0x07ff, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x07ff, .value=0xaf, .type=IO_READ},
        {.addr=0x0800, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0020, .value=0x0b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_037B) {
    const struct CPU_State initial_cpu = {.pc=0x2026, .a=0x1f, .x=0x67, .y=0x13, .sp=0xd5, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x2026, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2027, .a=0x1f, .x=0x68, .y=0x13, .sp=0xd5, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x1f}, {.addr=0x2026, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2026, .value=0xaf, .type=IO_READ},
        {.addr=0x2027, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0167, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_037C) {
    const struct CPU_State initial_cpu = {.pc=0x1dd7, .a=0x61, .x=0x72, .y=0x59, .sp=0x36, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x00}, {.addr=0x1dd7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1dd8, .a=0x61, .x=0x73, .y=0x59, .sp=0x36, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x61}, {.addr=0x1dd7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1dd7, .value=0xaf, .type=IO_READ},
        {.addr=0x1dd8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0072, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_037D) {
    const struct CPU_State initial_cpu = {.pc=0x928c, .a=0xfd, .x=0x9c, .y=0x6f, .sp=0x1f, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0x928c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x928d, .a=0xfd, .x=0x9d, .y=0x6f, .sp=0x1f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xfd}, {.addr=0x928c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x928c, .value=0xaf, .type=IO_READ},
        {.addr=0x928d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019c, .value=0xfd, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_037E) {
    const struct CPU_State initial_cpu = {.pc=0x3aa1, .a=0xe7, .x=0xf5, .y=0x1d, .sp=0x53, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0x3aa1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3aa2, .a=0xe7, .x=0xf6, .y=0x1d, .sp=0x53, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xe7}, {.addr=0x3aa1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3aa1, .value=0xaf, .type=IO_READ},
        {.addr=0x3aa2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xe7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_037F) {
    const struct CPU_State initial_cpu = {.pc=0xe927, .a=0xee, .x=0xa3, .y=0x00, .sp=0x44, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0xe927, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe928, .a=0xee, .x=0xa4, .y=0x00, .sp=0x44, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xee}, {.addr=0xe927, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe927, .value=0xaf, .type=IO_READ},
        {.addr=0xe928, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a3, .value=0xee, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0380) {
    const struct CPU_State initial_cpu = {.pc=0x4e20, .a=0xa4, .x=0x55, .y=0x0b, .sp=0x28, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0x4e20, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4e21, .a=0xa4, .x=0x56, .y=0x0b, .sp=0x28, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xa4}, {.addr=0x4e20, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4e20, .value=0xaf, .type=IO_READ},
        {.addr=0x4e21, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0155, .value=0xa4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0381) {
    const struct CPU_State initial_cpu = {.pc=0xd339, .a=0x6c, .x=0x0f, .y=0xc6, .sp=0x2e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x00}, {.addr=0xd339, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd33a, .a=0x6c, .x=0x10, .y=0xc6, .sp=0x2e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x6c}, {.addr=0xd339, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd339, .value=0xaf, .type=IO_READ},
        {.addr=0xd33a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000f, .value=0x6c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0382) {
    const struct CPU_State initial_cpu = {.pc=0xaa9c, .a=0x32, .x=0x58, .y=0x74, .sp=0xce, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0xaa9c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xaa9d, .a=0x32, .x=0x59, .y=0x74, .sp=0xce, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x32}, {.addr=0xaa9c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xaa9c, .value=0xaf, .type=IO_READ},
        {.addr=0xaa9d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0158, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0383) {
    const struct CPU_State initial_cpu = {.pc=0xc2a5, .a=0x4e, .x=0x07, .y=0x12, .sp=0x28, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x00}, {.addr=0xc2a5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc2a6, .a=0x4e, .x=0x08, .y=0x12, .sp=0x28, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x4e}, {.addr=0xc2a5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc2a5, .value=0xaf, .type=IO_READ},
        {.addr=0xc2a6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0007, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0384) {
    const struct CPU_State initial_cpu = {.pc=0x5f2a, .a=0xf7, .x=0x1f, .y=0xed, .sp=0x09, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x00}, {.addr=0x5f2a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5f2b, .a=0xf7, .x=0x20, .y=0xed, .sp=0x09, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0xf7}, {.addr=0x5f2a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5f2a, .value=0xaf, .type=IO_READ},
        {.addr=0x5f2b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x001f, .value=0xf7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0385) {
    const struct CPU_State initial_cpu = {.pc=0x3ebc, .a=0x32, .x=0x79, .y=0x7d, .sp=0xaf, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x3ebc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3ebd, .a=0x32, .x=0x7a, .y=0x7d, .sp=0xaf, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x32}, {.addr=0x3ebc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3ebc, .value=0xaf, .type=IO_READ},
        {.addr=0x3ebd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0179, .value=0x32, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0386) {
    const struct CPU_State initial_cpu = {.pc=0x52be, .a=0x10, .x=0x9b, .y=0xf2, .sp=0xe7, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x52be, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x52bf, .a=0x10, .x=0x9c, .y=0xf2, .sp=0xe7, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x10}, {.addr=0x52be, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x52be, .value=0xaf, .type=IO_READ},
        {.addr=0x52bf, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019b, .value=0x10, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0387) {
    const struct CPU_State initial_cpu = {.pc=0xbbf0, .a=0xce, .x=0xca, .y=0xe9, .sp=0x5c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x00}, {.addr=0xbbf0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbbf1, .a=0xce, .x=0xcb, .y=0xe9, .sp=0x5c, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0xce}, {.addr=0xbbf0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbbf0, .value=0xaf, .type=IO_READ},
        {.addr=0xbbf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ca, .value=0xce, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0388) {
    const struct CPU_State initial_cpu = {.pc=0xbf38, .a=0x7b, .x=0x9f, .y=0x5d, .sp=0x13, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x00}, {.addr=0xbf38, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbf39, .a=0x7b, .x=0xa0, .y=0x5d, .sp=0x13, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x7b}, {.addr=0xbf38, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbf38, .value=0xaf, .type=IO_READ},
        {.addr=0xbf39, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x009f, .value=0x7b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0389) {
    const struct CPU_State initial_cpu = {.pc=0x8043, .a=0xa6, .x=0x5a, .y=0x3d, .sp=0xbd, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x00}, {.addr=0x8043, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8044, .a=0xa6, .x=0x5b, .y=0x3d, .sp=0xbd, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0xa6}, {.addr=0x8043, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8043, .value=0xaf, .type=IO_READ},
        {.addr=0x8044, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005a, .value=0xa6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_038A) {
    const struct CPU_State initial_cpu = {.pc=0x5520, .a=0x27, .x=0x5f, .y=0x0f, .sp=0xa7, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x00}, {.addr=0x5520, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5521, .a=0x27, .x=0x60, .y=0x0f, .sp=0xa7, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x27}, {.addr=0x5520, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5520, .value=0xaf, .type=IO_READ},
        {.addr=0x5521, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005f, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_038B) {
    const struct CPU_State initial_cpu = {.pc=0xfabd, .a=0xea, .x=0x8c, .y=0x0c, .sp=0x19, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x00}, {.addr=0xfabd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfabe, .a=0xea, .x=0x8d, .y=0x0c, .sp=0x19, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0xea}, {.addr=0xfabd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfabd, .value=0xaf, .type=IO_READ},
        {.addr=0xfabe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x008c, .value=0xea, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_038D) {
    const struct CPU_State initial_cpu = {.pc=0x7cb2, .a=0x9a, .x=0x56, .y=0xbe, .sp=0x39, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x00}, {.addr=0x7cb2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7cb3, .a=0x9a, .x=0x57, .y=0xbe, .sp=0x39, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x9a}, {.addr=0x7cb2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7cb2, .value=0xaf, .type=IO_READ},
        {.addr=0x7cb3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0056, .value=0x9a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_038E) {
    const struct CPU_State initial_cpu = {.pc=0x157a, .a=0x14, .x=0x4f, .y=0x34, .sp=0x9d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0x00}, {.addr=0x157a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x157b, .a=0x14, .x=0x50, .y=0x34, .sp=0x9d, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0x14}, {.addr=0x157a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x157a, .value=0xaf, .type=IO_READ},
        {.addr=0x157b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004f, .value=0x14, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_038F) {
    const struct CPU_State initial_cpu = {.pc=0xb515, .a=0x5f, .x=0x50, .y=0xf6, .sp=0xba, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0xb515, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb516, .a=0x5f, .x=0x51, .y=0xf6, .sp=0xba, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x5f}, {.addr=0xb515, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb515, .value=0xaf, .type=IO_READ},
        {.addr=0xb516, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0150, .value=0x5f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0390) {
    const struct CPU_State initial_cpu = {.pc=0xd7e1, .a=0x45, .x=0xb1, .y=0xc2, .sp=0x80, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x00}, {.addr=0xd7e1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd7e2, .a=0x45, .x=0xb2, .y=0xc2, .sp=0x80, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x45}, {.addr=0xd7e1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd7e1, .value=0xaf, .type=IO_READ},
        {.addr=0xd7e2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b1, .value=0x45, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0391) {
    const struct CPU_State initial_cpu = {.pc=0xc343, .a=0x16, .x=0x93, .y=0x08, .sp=0x3d, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x00}, {.addr=0xc343, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc344, .a=0x16, .x=0x94, .y=0x08, .sp=0x3d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x16}, {.addr=0xc343, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc343, .value=0xaf, .type=IO_READ},
        {.addr=0xc344, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0093, .value=0x16, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0392) {
    const struct CPU_State initial_cpu = {.pc=0x0add, .a=0x7b, .x=0xa3, .y=0x67, .sp=0x7a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x00}, {.addr=0x0add, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0ade, .a=0x7b, .x=0xa4, .y=0x67, .sp=0x7a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x7b}, {.addr=0x0add, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0add, .value=0xaf, .type=IO_READ},
        {.addr=0x0ade, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a3, .value=0x7b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0393) {
    const struct CPU_State initial_cpu = {.pc=0xc974, .a=0xbf, .x=0xb0, .y=0xf0, .sp=0x14, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x00}, {.addr=0xc974, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc975, .a=0xbf, .x=0xb1, .y=0xf0, .sp=0x14, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xbf}, {.addr=0xc974, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc974, .value=0xaf, .type=IO_READ},
        {.addr=0xc975, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b0, .value=0xbf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0394) {
    const struct CPU_State initial_cpu = {.pc=0x5d0a, .a=0x19, .x=0xe2, .y=0x6b, .sp=0xc7, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x00}, {.addr=0x5d0a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5d0b, .a=0x19, .x=0xe3, .y=0x6b, .sp=0xc7, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x19}, {.addr=0x5d0a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5d0a, .value=0xaf, .type=IO_READ},
        {.addr=0x5d0b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e2, .value=0x19, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0395) {
    const struct CPU_State initial_cpu = {.pc=0x2e26, .a=0xaf, .x=0xa0, .y=0xb5, .sp=0x3a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x2e26, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2e27, .a=0xaf, .x=0xa1, .y=0xb5, .sp=0x3a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xaf}, {.addr=0x2e26, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2e26, .value=0xaf, .type=IO_READ},
        {.addr=0x2e27, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a0, .value=0xaf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0396) {
    const struct CPU_State initial_cpu = {.pc=0xb311, .a=0xdc, .x=0x82, .y=0x57, .sp=0xa3, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x00}, {.addr=0xb311, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb312, .a=0xdc, .x=0x83, .y=0x57, .sp=0xa3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xdc}, {.addr=0xb311, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb311, .value=0xaf, .type=IO_READ},
        {.addr=0xb312, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0082, .value=0xdc, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0397) {
    const struct CPU_State initial_cpu = {.pc=0xa540, .a=0xa0, .x=0x38, .y=0xf2, .sp=0xf4, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x00}, {.addr=0xa540, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa541, .a=0xa0, .x=0x39, .y=0xf2, .sp=0xf4, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0xa0}, {.addr=0xa540, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa540, .value=0xaf, .type=IO_READ},
        {.addr=0xa541, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0038, .value=0xa0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0398) {
    const struct CPU_State initial_cpu = {.pc=0x028f, .a=0xa3, .x=0x44, .y=0x8e, .sp=0x65, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x028f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0290, .a=0xa3, .x=0x45, .y=0x8e, .sp=0x65, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xa3}, {.addr=0x028f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x028f, .value=0xaf, .type=IO_READ},
        {.addr=0x0290, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0144, .value=0xa3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_0399) {
    const struct CPU_State initial_cpu = {.pc=0xc616, .a=0x0a, .x=0x92, .y=0xc7, .sp=0xdf, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x00}, {.addr=0xc616, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc617, .a=0x0a, .x=0x93, .y=0xc7, .sp=0xdf, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x0a}, {.addr=0xc616, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc616, .value=0xaf, .type=IO_READ},
        {.addr=0xc617, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0092, .value=0x0a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_039A) {
    const struct CPU_State initial_cpu = {.pc=0x08e4, .a=0x84, .x=0x49, .y=0xcb, .sp=0xf4, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x00}, {.addr=0x08e4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x08e5, .a=0x84, .x=0x4a, .y=0xcb, .sp=0xf4, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x84}, {.addr=0x08e4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x08e4, .value=0xaf, .type=IO_READ},
        {.addr=0x08e5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0049, .value=0x84, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_039B) {
    const struct CPU_State initial_cpu = {.pc=0x8a8e, .a=0xa2, .x=0x7b, .y=0xe4, .sp=0x3a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x8a8e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8a8f, .a=0xa2, .x=0x7c, .y=0xe4, .sp=0x3a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xa2}, {.addr=0x8a8e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8a8e, .value=0xaf, .type=IO_READ},
        {.addr=0x8a8f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017b, .value=0xa2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_039C) {
    const struct CPU_State initial_cpu = {.pc=0x84f6, .a=0xf6, .x=0xd1, .y=0xc4, .sp=0x49, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x00}, {.addr=0x84f6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x84f7, .a=0xf6, .x=0xd2, .y=0xc4, .sp=0x49, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0xf6}, {.addr=0x84f6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x84f6, .value=0xaf, .type=IO_READ},
        {.addr=0x84f7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d1, .value=0xf6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_039D) {
    const struct CPU_State initial_cpu = {.pc=0x4fef, .a=0xac, .x=0x41, .y=0xa6, .sp=0xba, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x00}, {.addr=0x4fef, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4ff0, .a=0xac, .x=0x42, .y=0xa6, .sp=0xba, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xac}, {.addr=0x4fef, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4fef, .value=0xaf, .type=IO_READ},
        {.addr=0x4ff0, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0041, .value=0xac, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_039E) {
    const struct CPU_State initial_cpu = {.pc=0x4ab1, .a=0x34, .x=0x98, .y=0xca, .sp=0xc2, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x4ab1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4ab2, .a=0x34, .x=0x99, .y=0xca, .sp=0xc2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x34}, {.addr=0x4ab1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4ab1, .value=0xaf, .type=IO_READ},
        {.addr=0x4ab2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0198, .value=0x34, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_039F) {
    const struct CPU_State initial_cpu = {.pc=0x8f69, .a=0x49, .x=0x9d, .y=0x1c, .sp=0xf8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x00}, {.addr=0x8f69, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8f6a, .a=0x49, .x=0x9e, .y=0x1c, .sp=0xf8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x49}, {.addr=0x8f69, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8f69, .value=0xaf, .type=IO_READ},
        {.addr=0x8f6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x019d, .value=0x49, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xbb5e, .a=0xe9, .x=0x35, .y=0x42, .sp=0x4b, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xbb5e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbb5f, .a=0xe9, .x=0x36, .y=0x42, .sp=0x4b, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xe9}, {.addr=0xbb5e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbb5e, .value=0xaf, .type=IO_READ},
        {.addr=0xbb5f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0xe9, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xbb79, .a=0x85, .x=0x8a, .y=0x39, .sp=0x95, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0xbb79, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbb7a, .a=0x85, .x=0x8b, .y=0x39, .sp=0x95, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x85}, {.addr=0xbb79, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbb79, .value=0xaf, .type=IO_READ},
        {.addr=0xbb7a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x9d8d, .a=0x6f, .x=0xe6, .y=0x08, .sp=0xe8, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x00}, {.addr=0x9d8d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9d8e, .a=0x6f, .x=0xe7, .y=0x08, .sp=0xe8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x6f}, {.addr=0x9d8d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9d8d, .value=0xaf, .type=IO_READ},
        {.addr=0x9d8e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e6, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x91e9, .a=0xce, .x=0xf5, .y=0xbd, .sp=0x2a, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0x91e9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x91ea, .a=0xce, .x=0xf6, .y=0xbd, .sp=0x2a, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xce}, {.addr=0x91e9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x91e9, .value=0xaf, .type=IO_READ},
        {.addr=0x91ea, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f5, .value=0xce, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x0bfc, .a=0xd7, .x=0xe9, .y=0x37, .sp=0x0d, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x0bfc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0bfd, .a=0xd7, .x=0xea, .y=0x37, .sp=0x0d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xd7}, {.addr=0x0bfc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0bfc, .value=0xaf, .type=IO_READ},
        {.addr=0x0bfd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e9, .value=0xd7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x44ea, .a=0x4c, .x=0x27, .y=0xbb, .sp=0x03, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x00}, {.addr=0x44ea, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x44eb, .a=0x4c, .x=0x28, .y=0xbb, .sp=0x03, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x4c}, {.addr=0x44ea, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x44ea, .value=0xaf, .type=IO_READ},
        {.addr=0x44eb, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0027, .value=0x4c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x415a, .a=0x15, .x=0xba, .y=0x13, .sp=0x6c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x415a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x415b, .a=0x15, .x=0xbb, .y=0x13, .sp=0x6c, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x15}, {.addr=0x415a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x415a, .value=0xaf, .type=IO_READ},
        {.addr=0x415b, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ba, .value=0x15, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x4e36, .a=0x60, .x=0xd9, .y=0x58, .sp=0x4e, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x00}, {.addr=0x4e36, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4e37, .a=0x60, .x=0xda, .y=0x58, .sp=0x4e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x60}, {.addr=0x4e36, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4e36, .value=0xaf, .type=IO_READ},
        {.addr=0x4e37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d9, .value=0x60, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xbdf6, .a=0xba, .x=0xdf, .y=0x67, .sp=0xdd, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x00}, {.addr=0xbdf6, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbdf7, .a=0xba, .x=0xe0, .y=0x67, .sp=0xdd, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0xba}, {.addr=0xbdf6, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbdf6, .value=0xaf, .type=IO_READ},
        {.addr=0xbdf7, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00df, .value=0xba, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x5f69, .a=0x1f, .x=0x86, .y=0x11, .sp=0xf0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x00}, {.addr=0x5f69, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5f6a, .a=0x1f, .x=0x87, .y=0x11, .sp=0xf0, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x1f}, {.addr=0x5f69, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5f69, .value=0xaf, .type=IO_READ},
        {.addr=0x5f6a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0086, .value=0x1f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x0bf0, .a=0x53, .x=0x4b, .y=0x50, .sp=0x21, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x0bf0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0bf1, .a=0x53, .x=0x4c, .y=0x50, .sp=0x21, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x53}, {.addr=0x0bf0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0bf0, .value=0xaf, .type=IO_READ},
        {.addr=0x0bf1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014b, .value=0x53, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x4b4e, .a=0xf0, .x=0xa7, .y=0xb1, .sp=0x1b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x4b4e, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4b4f, .a=0xf0, .x=0xa8, .y=0xb1, .sp=0x1b, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xf0}, {.addr=0x4b4e, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4b4e, .value=0xaf, .type=IO_READ},
        {.addr=0x4b4f, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a7, .value=0xf0, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x91f8, .a=0x0a, .x=0xb9, .y=0xc8, .sp=0xd4, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x91f8, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x91f9, .a=0x0a, .x=0xba, .y=0xc8, .sp=0xd4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x0a}, {.addr=0x91f8, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x91f8, .value=0xaf, .type=IO_READ},
        {.addr=0x91f9, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01b9, .value=0x0a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x7161, .a=0x46, .x=0x46, .y=0x48, .sp=0xcb, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x00}, {.addr=0x7161, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7162, .a=0x46, .x=0x47, .y=0x48, .sp=0xcb, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x46}, {.addr=0x7161, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7161, .value=0xaf, .type=IO_READ},
        {.addr=0x7162, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0046, .value=0x46, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x5955, .a=0xb2, .x=0x2d, .y=0x3c, .sp=0x3d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x00}, {.addr=0x5955, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5956, .a=0xb2, .x=0x2e, .y=0x3c, .sp=0x3d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0xb2}, {.addr=0x5955, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5955, .value=0xaf, .type=IO_READ},
        {.addr=0x5956, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x002d, .value=0xb2, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x7071, .a=0xb1, .x=0x8a, .y=0xcd, .sp=0x3e, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x7071, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7072, .a=0xb1, .x=0x8b, .y=0xcd, .sp=0x3e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xb1}, {.addr=0x7071, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x7071, .value=0xaf, .type=IO_READ},
        {.addr=0x7072, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x018a, .value=0xb1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xc742, .a=0x89, .x=0x7f, .y=0x79, .sp=0x21, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0xc742, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc743, .a=0x89, .x=0x80, .y=0x79, .sp=0x21, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x89}, {.addr=0xc742, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc742, .value=0xaf, .type=IO_READ},
        {.addr=0xc743, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x017f, .value=0x89, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x1da9, .a=0x66, .x=0x20, .y=0xc7, .sp=0xab, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0x1da9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1daa, .a=0x66, .x=0x21, .y=0xc7, .sp=0xab, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x66}, {.addr=0x1da9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1da9, .value=0xaf, .type=IO_READ},
        {.addr=0x1daa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0120, .value=0x66, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xd802, .a=0x28, .x=0xed, .y=0xb4, .sp=0x7f, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x00}, {.addr=0xd802, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd803, .a=0x28, .x=0xee, .y=0xb4, .sp=0x7f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x28}, {.addr=0xd802, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd802, .value=0xaf, .type=IO_READ},
        {.addr=0xd803, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01ed, .value=0x28, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x904b, .a=0x7a, .x=0x74, .y=0x6e, .sp=0x3c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x00}, {.addr=0x904b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x904c, .a=0x7a, .x=0x75, .y=0x6e, .sp=0x3c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x7a}, {.addr=0x904b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x904b, .value=0xaf, .type=IO_READ},
        {.addr=0x904c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0074, .value=0x7a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xfe36, .a=0x11, .x=0x53, .y=0x98, .sp=0xc6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xfe36, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfe37, .a=0x11, .x=0x54, .y=0x98, .sp=0xc6, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x11}, {.addr=0xfe36, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfe36, .value=0xaf, .type=IO_READ},
        {.addr=0xfe37, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0153, .value=0x11, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x2244, .a=0x65, .x=0x5c, .y=0xee, .sp=0x29, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x00}, {.addr=0x2244, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2245, .a=0x65, .x=0x5d, .y=0xee, .sp=0x29, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x65}, {.addr=0x2244, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2244, .value=0xaf, .type=IO_READ},
        {.addr=0x2245, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x005c, .value=0x65, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x3105, .a=0x1b, .x=0x56, .y=0xf7, .sp=0x49, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x00}, {.addr=0x3105, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3106, .a=0x1b, .x=0x57, .y=0xf7, .sp=0x49, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x1b}, {.addr=0x3105, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3105, .value=0xaf, .type=IO_READ},
        {.addr=0x3106, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0056, .value=0x1b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x3e09, .a=0x16, .x=0x51, .y=0xb4, .sp=0x82, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x00}, {.addr=0x3e09, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x3e0a, .a=0x16, .x=0x52, .y=0xb4, .sp=0x82, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x16}, {.addr=0x3e09, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3e09, .value=0xaf, .type=IO_READ},
        {.addr=0x3e0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0051, .value=0x16, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xe4c1, .a=0x6c, .x=0x32, .y=0x47, .sp=0x10, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0xe4c1, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe4c2, .a=0x6c, .x=0x33, .y=0x47, .sp=0x10, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x6c}, {.addr=0xe4c1, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe4c1, .value=0xaf, .type=IO_READ},
        {.addr=0xe4c2, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0132, .value=0x6c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x4d62, .a=0x64, .x=0xde, .y=0xb7, .sp=0x40, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x4d62, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4d63, .a=0x64, .x=0xdf, .y=0xb7, .sp=0x40, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x64}, {.addr=0x4d62, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4d62, .value=0xaf, .type=IO_READ},
        {.addr=0x4d63, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01de, .value=0x64, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x4359, .a=0x85, .x=0xac, .y=0xae, .sp=0x12, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x00}, {.addr=0x4359, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x435a, .a=0x85, .x=0xad, .y=0xae, .sp=0x12, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x85}, {.addr=0x4359, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4359, .value=0xaf, .type=IO_READ},
        {.addr=0x435a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ac, .value=0x85, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x2bb5, .a=0xc1, .x=0x35, .y=0xe5, .sp=0x58, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x2bb5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2bb6, .a=0xc1, .x=0x36, .y=0xe5, .sp=0x58, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xc1}, {.addr=0x2bb5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2bb5, .value=0xaf, .type=IO_READ},
        {.addr=0x2bb6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0135, .value=0xc1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x519c, .a=0x91, .x=0x0d, .y=0x42, .sp=0x48, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0x519c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x519d, .a=0x91, .x=0x0e, .y=0x42, .sp=0x48, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x91}, {.addr=0x519c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x519c, .value=0xaf, .type=IO_READ},
        {.addr=0x519d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000d, .value=0x91, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x63bd, .a=0xe8, .x=0xe2, .y=0x28, .sp=0xe3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x63bd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x63be, .a=0xe8, .x=0xe3, .y=0x28, .sp=0xe3, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xe8}, {.addr=0x63bd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x63bd, .value=0xaf, .type=IO_READ},
        {.addr=0x63be, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01e2, .value=0xe8, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x475d, .a=0xf6, .x=0xf8, .y=0x38, .sp=0x16, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x475d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x475e, .a=0xf6, .x=0xf9, .y=0x38, .sp=0x16, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xf6}, {.addr=0x475d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x475d, .value=0xaf, .type=IO_READ},
        {.addr=0x475e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f8, .value=0xf6, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x2aee, .a=0x2a, .x=0xa6, .y=0x14, .sp=0xf1, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0x2aee, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2aef, .a=0x2a, .x=0xa7, .y=0x14, .sp=0xf1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x2a}, {.addr=0x2aee, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2aee, .value=0xaf, .type=IO_READ},
        {.addr=0x2aef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a6, .value=0x2a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xf541, .a=0xe5, .x=0x89, .y=0x15, .sp=0xc4, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0xf541, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf542, .a=0xe5, .x=0x8a, .y=0x15, .sp=0xc4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xe5}, {.addr=0xf541, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf541, .value=0xaf, .type=IO_READ},
        {.addr=0xf542, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0189, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x1d33, .a=0xce, .x=0x6d, .y=0x5d, .sp=0x0b, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x00}, {.addr=0x1d33, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1d34, .a=0xce, .x=0x6e, .y=0x5d, .sp=0x0b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0xce}, {.addr=0x1d33, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1d33, .value=0xaf, .type=IO_READ},
        {.addr=0x1d34, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006d, .value=0xce, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xc5a0, .a=0xab, .x=0xf6, .y=0x38, .sp=0x8c, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0xc5a0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc5a1, .a=0xab, .x=0xf7, .y=0x38, .sp=0x8c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xab}, {.addr=0xc5a0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc5a0, .value=0xaf, .type=IO_READ},
        {.addr=0xc5a1, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xab, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xf01c, .a=0x7e, .x=0xcd, .y=0x3a, .sp=0xfc, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0xf01c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf01d, .a=0x7e, .x=0xce, .y=0x3a, .sp=0xfc, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x7e}, {.addr=0xf01c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf01c, .value=0xaf, .type=IO_READ},
        {.addr=0xf01d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01cd, .value=0x7e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xacdb, .a=0x71, .x=0x91, .y=0x26, .sp=0x37, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0xacdb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xacdc, .a=0x71, .x=0x92, .y=0x26, .sp=0x37, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x71}, {.addr=0xacdb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xacdb, .value=0xaf, .type=IO_READ},
        {.addr=0xacdc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0191, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x690d, .a=0xed, .x=0x95, .y=0x33, .sp=0xa6, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x00}, {.addr=0x690d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x690e, .a=0xed, .x=0x96, .y=0x33, .sp=0xa6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0xed}, {.addr=0x690d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x690d, .value=0xaf, .type=IO_READ},
        {.addr=0x690e, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0095, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x76e5, .a=0x27, .x=0x31, .y=0x15, .sp=0x5f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x00}, {.addr=0x76e5, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x76e6, .a=0x27, .x=0x32, .y=0x15, .sp=0x5f, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x27}, {.addr=0x76e5, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x76e5, .value=0xaf, .type=IO_READ},
        {.addr=0x76e6, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0031, .value=0x27, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x97a2, .a=0xd4, .x=0xf6, .y=0x43, .sp=0xcc, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x00}, {.addr=0x97a2, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x97a3, .a=0xd4, .x=0xf7, .y=0x43, .sp=0xcc, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xd4}, {.addr=0x97a2, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x97a2, .value=0xaf, .type=IO_READ},
        {.addr=0x97a3, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f6, .value=0xd4, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x8ebd, .a=0x4e, .x=0x13, .y=0xf5, .sp=0xe5, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x8ebd, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8ebe, .a=0x4e, .x=0x14, .y=0xf5, .sp=0xe5, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x4e}, {.addr=0x8ebd, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8ebd, .value=0xaf, .type=IO_READ},
        {.addr=0x8ebe, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0113, .value=0x4e, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xbe0f, .a=0x58, .x=0x85, .y=0x25, .sp=0xcb, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0xbe0f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xbe10, .a=0x58, .x=0x86, .y=0x25, .sp=0xcb, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x58}, {.addr=0xbe0f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xbe0f, .value=0xaf, .type=IO_READ},
        {.addr=0xbe10, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0185, .value=0x58, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xf7f3, .a=0xb3, .x=0x22, .y=0x96, .sp=0x41, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0x00}, {.addr=0xf7f3, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf7f4, .a=0xb3, .x=0x23, .y=0x96, .sp=0x41, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0xb3}, {.addr=0xf7f3, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf7f3, .value=0xaf, .type=IO_READ},
        {.addr=0xf7f4, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0022, .value=0xb3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xce22, .a=0x82, .x=0x3e, .y=0xf9, .sp=0xad, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x00}, {.addr=0xce22, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xce23, .a=0x82, .x=0x3f, .y=0xf9, .sp=0xad, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0x82}, {.addr=0xce22, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xce22, .value=0xaf, .type=IO_READ},
        {.addr=0xce23, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x003e, .value=0x82, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x4d1b, .a=0x81, .x=0xd2, .y=0xf1, .sp=0x67, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x00}, {.addr=0x4d1b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4d1c, .a=0x81, .x=0xd3, .y=0xf1, .sp=0x67, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x81}, {.addr=0x4d1b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4d1b, .value=0xaf, .type=IO_READ},
        {.addr=0x4d1c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d2, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xdd77, .a=0x9b, .x=0xf2, .y=0x3c, .sp=0x6c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0xdd77, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdd78, .a=0x9b, .x=0xf3, .y=0x3c, .sp=0x6c, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x9b}, {.addr=0xdd77, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdd77, .value=0xaf, .type=IO_READ},
        {.addr=0xdd78, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01f2, .value=0x9b, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x81f4, .a=0x3f, .x=0x04, .y=0x99, .sp=0xd9, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0x00}, {.addr=0x81f4, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x81f5, .a=0x3f, .x=0x05, .y=0x99, .sp=0xd9, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0x3f}, {.addr=0x81f4, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x81f4, .value=0xaf, .type=IO_READ},
        {.addr=0x81f5, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0004, .value=0x3f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x6c14, .a=0xed, .x=0x20, .y=0xef, .sp=0x4a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x00}, {.addr=0x6c14, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x6c15, .a=0xed, .x=0x21, .y=0xef, .sp=0x4a, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xed}, {.addr=0x6c14, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x6c14, .value=0xaf, .type=IO_READ},
        {.addr=0x6c15, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0020, .value=0xed, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xc108, .a=0xbf, .x=0x0d, .y=0xed, .sp=0xae, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x00}, {.addr=0xc108, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc109, .a=0xbf, .x=0x0e, .y=0xed, .sp=0xae, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0xbf}, {.addr=0xc108, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc108, .value=0xaf, .type=IO_READ},
        {.addr=0xc109, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x000d, .value=0xbf, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xa850, .a=0xf7, .x=0x3c, .y=0x4a, .sp=0x87, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xa850, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xa851, .a=0xf7, .x=0x3d, .y=0x4a, .sp=0x87, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xf7}, {.addr=0xa850, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xa850, .value=0xaf, .type=IO_READ},
        {.addr=0xa851, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x013c, .value=0xf7, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xe783, .a=0x4a, .x=0xea, .y=0x67, .sp=0xe9, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x00}, {.addr=0xe783, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe784, .a=0x4a, .x=0xeb, .y=0x67, .sp=0xe9, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x4a}, {.addr=0xe783, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe783, .value=0xaf, .type=IO_READ},
        {.addr=0xe784, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ea, .value=0x4a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xc566, .a=0xdb, .x=0xda, .y=0x0f, .sp=0xde, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x00}, {.addr=0xc566, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xc567, .a=0xdb, .x=0xdb, .y=0x0f, .sp=0xde, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0xdb}, {.addr=0xc566, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xc566, .value=0xaf, .type=IO_READ},
        {.addr=0xc567, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00da, .value=0xdb, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x9a32, .a=0x61, .x=0x4d, .y=0x16, .sp=0x8d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0x9a32, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9a33, .a=0x61, .x=0x4e, .y=0x16, .sp=0x8d, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x61}, {.addr=0x9a32, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9a32, .value=0xaf, .type=IO_READ},
        {.addr=0x9a33, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x014d, .value=0x61, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xfaee, .a=0x78, .x=0x1e, .y=0x5d, .sp=0xeb, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0xfaee, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfaef, .a=0x78, .x=0x1f, .y=0x5d, .sp=0xeb, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x78}, {.addr=0xfaee, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfaee, .value=0xaf, .type=IO_READ},
        {.addr=0xfaef, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x011e, .value=0x78, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x2d71, .a=0x4a, .x=0x86, .y=0x47, .sp=0x53, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x00}, {.addr=0x2d71, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2d72, .a=0x4a, .x=0x87, .y=0x47, .sp=0x53, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x4a}, {.addr=0x2d71, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2d71, .value=0xaf, .type=IO_READ},
        {.addr=0x2d72, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0086, .value=0x4a, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xaeb7, .a=0x44, .x=0xa2, .y=0x49, .sp=0x59, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0xaeb7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xaeb8, .a=0x44, .x=0xa3, .y=0x49, .sp=0x59, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x44}, {.addr=0xaeb7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xaeb7, .value=0xaf, .type=IO_READ},
        {.addr=0xaeb8, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x01a2, .value=0x44, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xb987, .a=0x89, .x=0xea, .y=0x2a, .sp=0x82, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x00}, {.addr=0xb987, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb988, .a=0x89, .x=0xeb, .y=0x2a, .sp=0x82, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x89}, {.addr=0xb987, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb987, .value=0xaf, .type=IO_READ},
        {.addr=0xb988, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00ea, .value=0x89, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x9a5f, .a=0x04, .x=0xe7, .y=0x44, .sp=0x80, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x00}, {.addr=0x9a5f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x9a60, .a=0x04, .x=0xe8, .y=0x44, .sp=0x80, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x04}, {.addr=0x9a5f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x9a5f, .value=0xaf, .type=IO_READ},
        {.addr=0x9a60, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e7, .value=0x04, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xb96b, .a=0x81, .x=0xd9, .y=0xde, .sp=0xa5, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x00}, {.addr=0xb96b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb96c, .a=0x81, .x=0xda, .y=0xde, .sp=0xa5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x81}, {.addr=0xb96b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb96b, .value=0xaf, .type=IO_READ},
        {.addr=0xb96c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d9, .value=0x81, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x2dbc, .a=0x9d, .x=0x72, .y=0x6e, .sp=0x5a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x00}, {.addr=0x2dbc, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x2dbd, .a=0x9d, .x=0x73, .y=0x6e, .sp=0x5a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x9d}, {.addr=0x2dbc, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x2dbc, .value=0xaf, .type=IO_READ},
        {.addr=0x2dbd, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0072, .value=0x9d, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x730c, .a=0xe5, .x=0xe8, .y=0x55, .sp=0x91, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x00}, {.addr=0x730c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x730d, .a=0xe5, .x=0xe9, .y=0x55, .sp=0x91, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xe5}, {.addr=0x730c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x730c, .value=0xaf, .type=IO_READ},
        {.addr=0x730d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00e8, .value=0xe5, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xf50c, .a=0x57, .x=0x32, .y=0x09, .sp=0xbf, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x00}, {.addr=0xf50c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xf50d, .a=0x57, .x=0x33, .y=0x09, .sp=0xbf, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x57}, {.addr=0xf50c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xf50c, .value=0xaf, .type=IO_READ},
        {.addr=0xf50d, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0032, .value=0x57, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x169b, .a=0xf3, .x=0x06, .y=0xc1, .sp=0xdb, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0x00}, {.addr=0x169b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x169c, .a=0xf3, .x=0x07, .y=0xc1, .sp=0xdb, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xf3}, {.addr=0x169b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x169b, .value=0xaf, .type=IO_READ},
        {.addr=0x169c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0006, .value=0xf3, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x167b, .a=0x48, .x=0x6a, .y=0x4d, .sp=0x25, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x00}, {.addr=0x167b, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x167c, .a=0x48, .x=0x6b, .y=0x4d, .sp=0x25, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x48}, {.addr=0x167b, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x167b, .value=0xaf, .type=IO_READ},
        {.addr=0x167c, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x006a, .value=0x48, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xe1ae, .a=0x03, .x=0xa9, .y=0xb2, .sp=0xc3, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x00}, {.addr=0xe1ae, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe1af, .a=0x03, .x=0xaa, .y=0xb2, .sp=0xc3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x03}, {.addr=0xe1ae, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe1ae, .value=0xaf, .type=IO_READ},
        {.addr=0xe1af, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00a9, .value=0x03, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x77a9, .a=0x71, .x=0x4b, .y=0xf8, .sp=0x0c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x00}, {.addr=0x77a9, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x77aa, .a=0x71, .x=0x4c, .y=0xf8, .sp=0x0c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x71}, {.addr=0x77a9, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x77a9, .value=0xaf, .type=IO_READ},
        {.addr=0x77aa, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x004b, .value=0x71, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xfe31, .a=0xe1, .x=0xb0, .y=0x08, .sp=0x05, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x00}, {.addr=0xfe31, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xfe32, .a=0xe1, .x=0xb1, .y=0x08, .sp=0x05, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xe1}, {.addr=0xfe31, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xfe31, .value=0xaf, .type=IO_READ},
        {.addr=0xfe32, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00b0, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x8d21, .a=0x6f, .x=0x64, .y=0xba, .sp=0x75, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x00}, {.addr=0x8d21, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8d22, .a=0x6f, .x=0x65, .y=0xba, .sp=0x75, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x6f}, {.addr=0x8d21, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x8d21, .value=0xaf, .type=IO_READ},
        {.addr=0x8d22, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0064, .value=0x6f, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x0b57, .a=0xe1, .x=0x11, .y=0xb7, .sp=0xa9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x0b57, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0b58, .a=0xe1, .x=0x12, .y=0xb7, .sp=0xa9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xe1}, {.addr=0x0b57, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0b57, .value=0xaf, .type=IO_READ},
        {.addr=0x0b58, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0111, .value=0xe1, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xdb09, .a=0x13, .x=0xd3, .y=0xbc, .sp=0x43, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x00}, {.addr=0xdb09, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xdb0a, .a=0x13, .x=0xd4, .y=0xbc, .sp=0x43, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x13}, {.addr=0xdb09, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdb09, .value=0xaf, .type=IO_READ},
        {.addr=0xdb0a, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x00d3, .value=0x13, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_AF, _AF_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x49cb, .a=0x0c, .x=0x61, .y=0x69, .sp=0xef, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x00}, {.addr=0x49cb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x49cc, .a=0x0c, .x=0x62, .y=0x69, .sp=0xef, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x0c}, {.addr=0x49cb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x49cb, .value=0xaf, .type=IO_READ},
        {.addr=0x49cc, .value=DUMMY, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=0x0061, .value=0x0c, .type=IO_WRITE},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("AF 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
