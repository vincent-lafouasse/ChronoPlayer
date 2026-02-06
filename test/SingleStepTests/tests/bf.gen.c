#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_BF, _BF_0000) {
    const struct CPU_State initial_cpu = {.pc=0x9b09, .a=0x20, .x=0xca, .y=0xb3, .sp=0x15, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x3f}, {.addr=0x9b09, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9b0a, .a=0x3f, .x=0xcb, .y=0xb3, .sp=0x15, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x3f}, {.addr=0x9b09, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9b09, .value=0xbf, .type=IO_READ},
        {.addr=0x9b0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0001) {
    const struct CPU_State initial_cpu = {.pc=0x8288, .a=0x5c, .x=0x1d, .y=0x7f, .sp=0x47, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x10}, {.addr=0x8288, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8289, .a=0x10, .x=0x1e, .y=0x7f, .sp=0x47, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x10}, {.addr=0x8288, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8288, .value=0xbf, .type=IO_READ},
        {.addr=0x8289, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0002) {
    const struct CPU_State initial_cpu = {.pc=0x2710, .a=0xbf, .x=0x66, .y=0x39, .sp=0x62, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x75}, {.addr=0x2710, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2711, .a=0x75, .x=0x67, .y=0x39, .sp=0x62, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x75}, {.addr=0x2710, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2710, .value=0xbf, .type=IO_READ},
        {.addr=0x2711, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0003) {
    const struct CPU_State initial_cpu = {.pc=0x7e93, .a=0x7c, .x=0x4f, .y=0xfd, .sp=0x97, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0xa9}, {.addr=0x7e93, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7e94, .a=0xa9, .x=0x50, .y=0xfd, .sp=0x97, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xa9}, {.addr=0x7e93, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7e93, .value=0xbf, .type=IO_READ},
        {.addr=0x7e94, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0004) {
    const struct CPU_State initial_cpu = {.pc=0x2625, .a=0x70, .x=0x56, .y=0x7a, .sp=0x85, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x6d}, {.addr=0x2625, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2626, .a=0x6d, .x=0x57, .y=0x7a, .sp=0x85, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x6d}, {.addr=0x2625, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2625, .value=0xbf, .type=IO_READ},
        {.addr=0x2626, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0005) {
    const struct CPU_State initial_cpu = {.pc=0x89e3, .a=0x90, .x=0x8f, .y=0x0d, .sp=0x67, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xf1}, {.addr=0x89e3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x89e4, .a=0xf1, .x=0x90, .y=0x0d, .sp=0x67, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xf1}, {.addr=0x89e3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x89e3, .value=0xbf, .type=IO_READ},
        {.addr=0x89e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0006) {
    const struct CPU_State initial_cpu = {.pc=0x4c61, .a=0x55, .x=0x2c, .y=0xe1, .sp=0x25, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0x5a}, {.addr=0x4c61, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4c62, .a=0x5a, .x=0x2d, .y=0xe1, .sp=0x25, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0x5a}, {.addr=0x4c61, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4c61, .value=0xbf, .type=IO_READ},
        {.addr=0x4c62, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0007) {
    const struct CPU_State initial_cpu = {.pc=0x4cc0, .a=0x98, .x=0xc2, .y=0x80, .sp=0x05, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x7d}, {.addr=0x4cc0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4cc1, .a=0x7d, .x=0xc3, .y=0x80, .sp=0x05, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x7d}, {.addr=0x4cc0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4cc0, .value=0xbf, .type=IO_READ},
        {.addr=0x4cc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0008) {
    const struct CPU_State initial_cpu = {.pc=0x34f4, .a=0x7d, .x=0x46, .y=0xc6, .sp=0xf2, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x11}, {.addr=0x34f4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x34f5, .a=0x11, .x=0x47, .y=0xc6, .sp=0xf2, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x11}, {.addr=0x34f4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x34f4, .value=0xbf, .type=IO_READ},
        {.addr=0x34f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0009) {
    const struct CPU_State initial_cpu = {.pc=0x9e2c, .a=0xce, .x=0x5e, .y=0x23, .sp=0x51, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xfb}, {.addr=0x9e2c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9e2d, .a=0xfb, .x=0x5f, .y=0x23, .sp=0x51, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xfb}, {.addr=0x9e2c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9e2c, .value=0xbf, .type=IO_READ},
        {.addr=0x9e2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_000A) {
    const struct CPU_State initial_cpu = {.pc=0xba10, .a=0x92, .x=0x62, .y=0x5f, .sp=0x7a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x6a}, {.addr=0xba10, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xba11, .a=0x6a, .x=0x63, .y=0x5f, .sp=0x7a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x6a}, {.addr=0xba10, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xba10, .value=0xbf, .type=IO_READ},
        {.addr=0xba11, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_000B) {
    const struct CPU_State initial_cpu = {.pc=0x8768, .a=0x41, .x=0x8c, .y=0xc7, .sp=0x1b, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xce}, {.addr=0x8768, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8769, .a=0xce, .x=0x8d, .y=0xc7, .sp=0x1b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xce}, {.addr=0x8768, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8768, .value=0xbf, .type=IO_READ},
        {.addr=0x8769, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_000C) {
    const struct CPU_State initial_cpu = {.pc=0x7fde, .a=0x07, .x=0xbc, .y=0x20, .sp=0x97, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x19}, {.addr=0x7fde, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7fdf, .a=0x19, .x=0xbd, .y=0x20, .sp=0x97, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x19}, {.addr=0x7fde, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7fde, .value=0xbf, .type=IO_READ},
        {.addr=0x7fdf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_000D) {
    const struct CPU_State initial_cpu = {.pc=0xa330, .a=0xaa, .x=0xd0, .y=0x77, .sp=0x52, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0x4c}, {.addr=0xa330, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa331, .a=0x4c, .x=0xd1, .y=0x77, .sp=0x52, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0x4c}, {.addr=0xa330, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa330, .value=0xbf, .type=IO_READ},
        {.addr=0xa331, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_000E) {
    const struct CPU_State initial_cpu = {.pc=0xa08c, .a=0x30, .x=0x5a, .y=0x03, .sp=0x51, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x81}, {.addr=0xa08c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa08d, .a=0x81, .x=0x5b, .y=0x03, .sp=0x51, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x81}, {.addr=0xa08c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa08c, .value=0xbf, .type=IO_READ},
        {.addr=0xa08d, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_000F) {
    const struct CPU_State initial_cpu = {.pc=0xb8dc, .a=0xe3, .x=0x89, .y=0x2d, .sp=0xe6, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0x46}, {.addr=0xb8dc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb8dd, .a=0x46, .x=0x8a, .y=0x2d, .sp=0xe6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0x46}, {.addr=0xb8dc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb8dc, .value=0xbf, .type=IO_READ},
        {.addr=0xb8dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0010) {
    const struct CPU_State initial_cpu = {.pc=0xe3f1, .a=0x0b, .x=0x7b, .y=0x6d, .sp=0x32, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x3c}, {.addr=0xe3f1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe3f2, .a=0x3c, .x=0x7c, .y=0x6d, .sp=0x32, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x3c}, {.addr=0xe3f1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe3f1, .value=0xbf, .type=IO_READ},
        {.addr=0xe3f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0011) {
    const struct CPU_State initial_cpu = {.pc=0x518e, .a=0x84, .x=0xea, .y=0xed, .sp=0x0b, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x35}, {.addr=0x518e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x518f, .a=0x35, .x=0xeb, .y=0xed, .sp=0x0b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x35}, {.addr=0x518e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x518e, .value=0xbf, .type=IO_READ},
        {.addr=0x518f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0012) {
    const struct CPU_State initial_cpu = {.pc=0x7bf2, .a=0x42, .x=0x2e, .y=0xff, .sp=0x7c, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xed}, {.addr=0x7bf2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7bf3, .a=0xed, .x=0x2f, .y=0xff, .sp=0x7c, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xed}, {.addr=0x7bf2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7bf2, .value=0xbf, .type=IO_READ},
        {.addr=0x7bf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0013) {
    const struct CPU_State initial_cpu = {.pc=0xd614, .a=0x20, .x=0x32, .y=0x99, .sp=0xf6, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x52}, {.addr=0xd614, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd615, .a=0x52, .x=0x33, .y=0x99, .sp=0xf6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x52}, {.addr=0xd614, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd614, .value=0xbf, .type=IO_READ},
        {.addr=0xd615, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0014) {
    const struct CPU_State initial_cpu = {.pc=0x5945, .a=0xd2, .x=0xc6, .y=0xe9, .sp=0x36, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x70}, {.addr=0x5945, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5946, .a=0x70, .x=0xc7, .y=0xe9, .sp=0x36, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x70}, {.addr=0x5945, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5945, .value=0xbf, .type=IO_READ},
        {.addr=0x5946, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0015) {
    const struct CPU_State initial_cpu = {.pc=0x994a, .a=0x43, .x=0xba, .y=0xd7, .sp=0x37, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xca}, {.addr=0x994a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x994b, .a=0xca, .x=0xbb, .y=0xd7, .sp=0x37, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xca}, {.addr=0x994a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x994a, .value=0xbf, .type=IO_READ},
        {.addr=0x994b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0016) {
    const struct CPU_State initial_cpu = {.pc=0x92ef, .a=0xb2, .x=0xb0, .y=0x66, .sp=0x04, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x40}, {.addr=0x92ef, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x92f0, .a=0x40, .x=0xb1, .y=0x66, .sp=0x04, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x40}, {.addr=0x92ef, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x92ef, .value=0xbf, .type=IO_READ},
        {.addr=0x92f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0017) {
    const struct CPU_State initial_cpu = {.pc=0xa0fc, .a=0x09, .x=0x37, .y=0xbb, .sp=0x17, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xbb}, {.addr=0xa0fc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa0fd, .a=0xbb, .x=0x38, .y=0xbb, .sp=0x17, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xbb}, {.addr=0xa0fc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa0fc, .value=0xbf, .type=IO_READ},
        {.addr=0xa0fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0018) {
    const struct CPU_State initial_cpu = {.pc=0x49ca, .a=0xb1, .x=0xb7, .y=0x4f, .sp=0x79, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x73}, {.addr=0x49ca, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x49cb, .a=0x73, .x=0xb8, .y=0x4f, .sp=0x79, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x73}, {.addr=0x49ca, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x49ca, .value=0xbf, .type=IO_READ},
        {.addr=0x49cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0019) {
    const struct CPU_State initial_cpu = {.pc=0x3637, .a=0x64, .x=0x29, .y=0x27, .sp=0x8f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x77}, {.addr=0x3637, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3638, .a=0x77, .x=0x2a, .y=0x27, .sp=0x8f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x77}, {.addr=0x3637, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3637, .value=0xbf, .type=IO_READ},
        {.addr=0x3638, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_001A) {
    const struct CPU_State initial_cpu = {.pc=0x06b1, .a=0x5c, .x=0xa8, .y=0xae, .sp=0xbe, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xac}, {.addr=0x06b1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x06b2, .a=0xac, .x=0xa9, .y=0xae, .sp=0xbe, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xac}, {.addr=0x06b1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x06b1, .value=0xbf, .type=IO_READ},
        {.addr=0x06b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_001B) {
    const struct CPU_State initial_cpu = {.pc=0x76d0, .a=0xa9, .x=0x53, .y=0xd7, .sp=0xfd, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x9e}, {.addr=0x76d0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x76d1, .a=0x9e, .x=0x54, .y=0xd7, .sp=0xfd, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x9e}, {.addr=0x76d0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x76d0, .value=0xbf, .type=IO_READ},
        {.addr=0x76d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_001C) {
    const struct CPU_State initial_cpu = {.pc=0x3d61, .a=0x6b, .x=0x2f, .y=0xe9, .sp=0xba, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0xe8}, {.addr=0x3d61, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3d62, .a=0xe8, .x=0x30, .y=0xe9, .sp=0xba, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0xe8}, {.addr=0x3d61, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3d61, .value=0xbf, .type=IO_READ},
        {.addr=0x3d62, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_001D) {
    const struct CPU_State initial_cpu = {.pc=0x4b32, .a=0xd1, .x=0xbc, .y=0x8c, .sp=0x75, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x08}, {.addr=0x4b32, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4b33, .a=0x08, .x=0xbd, .y=0x8c, .sp=0x75, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x08}, {.addr=0x4b32, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4b32, .value=0xbf, .type=IO_READ},
        {.addr=0x4b33, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_001E) {
    const struct CPU_State initial_cpu = {.pc=0x0715, .a=0x0a, .x=0xee, .y=0x8d, .sp=0x11, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x06}, {.addr=0x0715, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0716, .a=0x06, .x=0xef, .y=0x8d, .sp=0x11, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x06}, {.addr=0x0715, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0715, .value=0xbf, .type=IO_READ},
        {.addr=0x0716, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_001F) {
    const struct CPU_State initial_cpu = {.pc=0xc245, .a=0x30, .x=0xae, .y=0x51, .sp=0x22, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xc7}, {.addr=0xc245, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc246, .a=0xc7, .x=0xaf, .y=0x51, .sp=0x22, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xc7}, {.addr=0xc245, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc245, .value=0xbf, .type=IO_READ},
        {.addr=0xc246, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0020) {
    const struct CPU_State initial_cpu = {.pc=0xbf7c, .a=0x7e, .x=0x73, .y=0x2f, .sp=0x91, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x5a}, {.addr=0xbf7c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbf7d, .a=0x5a, .x=0x74, .y=0x2f, .sp=0x91, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x5a}, {.addr=0xbf7c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbf7c, .value=0xbf, .type=IO_READ},
        {.addr=0xbf7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0021) {
    const struct CPU_State initial_cpu = {.pc=0x1f4c, .a=0xe1, .x=0x0a, .y=0x64, .sp=0x87, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xae}, {.addr=0x1f4c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1f4d, .a=0xae, .x=0x0b, .y=0x64, .sp=0x87, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xae}, {.addr=0x1f4c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1f4c, .value=0xbf, .type=IO_READ},
        {.addr=0x1f4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0022) {
    const struct CPU_State initial_cpu = {.pc=0xb77f, .a=0xaf, .x=0x5c, .y=0x10, .sp=0x69, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xbc}, {.addr=0xb77f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb780, .a=0xbc, .x=0x5d, .y=0x10, .sp=0x69, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xbc}, {.addr=0xb77f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb77f, .value=0xbf, .type=IO_READ},
        {.addr=0xb780, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0023) {
    const struct CPU_State initial_cpu = {.pc=0x6ccd, .a=0xd6, .x=0xf2, .y=0x8f, .sp=0xe5, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xc6}, {.addr=0x6ccd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6cce, .a=0xc6, .x=0xf3, .y=0x8f, .sp=0xe5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xc6}, {.addr=0x6ccd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6ccd, .value=0xbf, .type=IO_READ},
        {.addr=0x6cce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0024) {
    const struct CPU_State initial_cpu = {.pc=0xf3d7, .a=0xcd, .x=0xaf, .y=0x38, .sp=0x17, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x39}, {.addr=0xf3d7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf3d8, .a=0x39, .x=0xb0, .y=0x38, .sp=0x17, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x39}, {.addr=0xf3d7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf3d7, .value=0xbf, .type=IO_READ},
        {.addr=0xf3d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0025) {
    const struct CPU_State initial_cpu = {.pc=0x1635, .a=0x81, .x=0xdf, .y=0x90, .sp=0x08, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0xc8}, {.addr=0x1635, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1636, .a=0xc8, .x=0xe0, .y=0x90, .sp=0x08, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0xc8}, {.addr=0x1635, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1635, .value=0xbf, .type=IO_READ},
        {.addr=0x1636, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0026) {
    const struct CPU_State initial_cpu = {.pc=0xca4a, .a=0xf3, .x=0x61, .y=0x46, .sp=0x68, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x20}, {.addr=0xca4a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xca4b, .a=0x20, .x=0x62, .y=0x46, .sp=0x68, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x20}, {.addr=0xca4a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xca4a, .value=0xbf, .type=IO_READ},
        {.addr=0xca4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0027) {
    const struct CPU_State initial_cpu = {.pc=0x4b1e, .a=0x7c, .x=0x49, .y=0x3e, .sp=0x2a, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x57}, {.addr=0x4b1e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4b1f, .a=0x57, .x=0x4a, .y=0x3e, .sp=0x2a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x57}, {.addr=0x4b1e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4b1e, .value=0xbf, .type=IO_READ},
        {.addr=0x4b1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0028) {
    const struct CPU_State initial_cpu = {.pc=0x2748, .a=0x30, .x=0x30, .y=0xb8, .sp=0x13, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xae}, {.addr=0x2748, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2749, .a=0xae, .x=0x31, .y=0xb8, .sp=0x13, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xae}, {.addr=0x2748, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2748, .value=0xbf, .type=IO_READ},
        {.addr=0x2749, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0029) {
    const struct CPU_State initial_cpu = {.pc=0x905e, .a=0xb4, .x=0x12, .y=0x3d, .sp=0x34, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x37}, {.addr=0x905e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x905f, .a=0x37, .x=0x13, .y=0x3d, .sp=0x34, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x37}, {.addr=0x905e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x905e, .value=0xbf, .type=IO_READ},
        {.addr=0x905f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_002A) {
    const struct CPU_State initial_cpu = {.pc=0x8494, .a=0xba, .x=0xd4, .y=0x06, .sp=0xc2, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x49}, {.addr=0x8494, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8495, .a=0x49, .x=0xd5, .y=0x06, .sp=0xc2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x49}, {.addr=0x8494, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8494, .value=0xbf, .type=IO_READ},
        {.addr=0x8495, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_002B) {
    const struct CPU_State initial_cpu = {.pc=0x0f29, .a=0x10, .x=0x96, .y=0xd9, .sp=0x51, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xe7}, {.addr=0x0f29, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0f2a, .a=0xe7, .x=0x97, .y=0xd9, .sp=0x51, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xe7}, {.addr=0x0f29, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0f29, .value=0xbf, .type=IO_READ},
        {.addr=0x0f2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_002C) {
    const struct CPU_State initial_cpu = {.pc=0x4e0b, .a=0xf5, .x=0x48, .y=0x1b, .sp=0xb4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x7d}, {.addr=0x4e0b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4e0c, .a=0x7d, .x=0x49, .y=0x1b, .sp=0xb4, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x7d}, {.addr=0x4e0b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4e0b, .value=0xbf, .type=IO_READ},
        {.addr=0x4e0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_002D) {
    const struct CPU_State initial_cpu = {.pc=0xd0f3, .a=0xc5, .x=0x18, .y=0x5d, .sp=0x31, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0xe9}, {.addr=0xd0f3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd0f4, .a=0xe9, .x=0x19, .y=0x5d, .sp=0x31, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0xe9}, {.addr=0xd0f3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd0f3, .value=0xbf, .type=IO_READ},
        {.addr=0xd0f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_002E) {
    const struct CPU_State initial_cpu = {.pc=0x954f, .a=0xd4, .x=0x70, .y=0xf6, .sp=0xf1, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x5e}, {.addr=0x954f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9550, .a=0x5e, .x=0x71, .y=0xf6, .sp=0xf1, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x5e}, {.addr=0x954f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x954f, .value=0xbf, .type=IO_READ},
        {.addr=0x9550, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_002F) {
    const struct CPU_State initial_cpu = {.pc=0x72e6, .a=0xee, .x=0xee, .y=0xb6, .sp=0xd6, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0xe4}, {.addr=0x72e6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x72e7, .a=0xe4, .x=0xef, .y=0xb6, .sp=0xd6, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0xe4}, {.addr=0x72e6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x72e6, .value=0xbf, .type=IO_READ},
        {.addr=0x72e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0030) {
    const struct CPU_State initial_cpu = {.pc=0xb88b, .a=0x45, .x=0x33, .y=0x37, .sp=0x92, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x8a}, {.addr=0xb88b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb88c, .a=0x8a, .x=0x34, .y=0x37, .sp=0x92, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x8a}, {.addr=0xb88b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb88b, .value=0xbf, .type=IO_READ},
        {.addr=0xb88c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0031) {
    const struct CPU_State initial_cpu = {.pc=0xe788, .a=0x28, .x=0x85, .y=0xaa, .sp=0x96, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x46}, {.addr=0xe788, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe789, .a=0x46, .x=0x86, .y=0xaa, .sp=0x96, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x46}, {.addr=0xe788, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe788, .value=0xbf, .type=IO_READ},
        {.addr=0xe789, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0032) {
    const struct CPU_State initial_cpu = {.pc=0x9b16, .a=0xc3, .x=0xc3, .y=0x2d, .sp=0xff, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xd9}, {.addr=0x9b16, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9b17, .a=0xd9, .x=0xc4, .y=0x2d, .sp=0xff, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xd9}, {.addr=0x9b16, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9b16, .value=0xbf, .type=IO_READ},
        {.addr=0x9b17, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0033) {
    const struct CPU_State initial_cpu = {.pc=0x9eb3, .a=0xff, .x=0x1d, .y=0x4c, .sp=0xa1, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0xe7}, {.addr=0x9eb3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9eb4, .a=0xe7, .x=0x1e, .y=0x4c, .sp=0xa1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0xe7}, {.addr=0x9eb3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9eb3, .value=0xbf, .type=IO_READ},
        {.addr=0x9eb4, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0034) {
    const struct CPU_State initial_cpu = {.pc=0x4209, .a=0x35, .x=0x98, .y=0x73, .sp=0x41, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x8b}, {.addr=0x4209, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x420a, .a=0x8b, .x=0x99, .y=0x73, .sp=0x41, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x8b}, {.addr=0x4209, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4209, .value=0xbf, .type=IO_READ},
        {.addr=0x420a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0035) {
    const struct CPU_State initial_cpu = {.pc=0x7d05, .a=0xab, .x=0x1d, .y=0x43, .sp=0x75, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x2d}, {.addr=0x7d05, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7d06, .a=0x2d, .x=0x1e, .y=0x43, .sp=0x75, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x2d}, {.addr=0x7d05, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7d05, .value=0xbf, .type=IO_READ},
        {.addr=0x7d06, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0036) {
    const struct CPU_State initial_cpu = {.pc=0x25ea, .a=0x46, .x=0xe7, .y=0xcf, .sp=0x72, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x2d}, {.addr=0x25ea, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x25eb, .a=0x2d, .x=0xe8, .y=0xcf, .sp=0x72, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x2d}, {.addr=0x25ea, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x25ea, .value=0xbf, .type=IO_READ},
        {.addr=0x25eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0037) {
    const struct CPU_State initial_cpu = {.pc=0x55dc, .a=0x31, .x=0x51, .y=0xfa, .sp=0xa5, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xb9}, {.addr=0x55dc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x55dd, .a=0xb9, .x=0x52, .y=0xfa, .sp=0xa5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xb9}, {.addr=0x55dc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x55dc, .value=0xbf, .type=IO_READ},
        {.addr=0x55dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0038) {
    const struct CPU_State initial_cpu = {.pc=0xd4fa, .a=0xd6, .x=0x5a, .y=0x3f, .sp=0x7d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x6e}, {.addr=0xd4fa, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd4fb, .a=0x6e, .x=0x5b, .y=0x3f, .sp=0x7d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x6e}, {.addr=0xd4fa, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd4fa, .value=0xbf, .type=IO_READ},
        {.addr=0xd4fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0039) {
    const struct CPU_State initial_cpu = {.pc=0x766c, .a=0x8b, .x=0x24, .y=0x3a, .sp=0x32, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x92}, {.addr=0x766c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x766d, .a=0x92, .x=0x25, .y=0x3a, .sp=0x32, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x92}, {.addr=0x766c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x766c, .value=0xbf, .type=IO_READ},
        {.addr=0x766d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_003B) {
    const struct CPU_State initial_cpu = {.pc=0x832d, .a=0xe3, .x=0xc5, .y=0x84, .sp=0x0d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x4e}, {.addr=0x832d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x832e, .a=0x4e, .x=0xc6, .y=0x84, .sp=0x0d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x4e}, {.addr=0x832d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x832d, .value=0xbf, .type=IO_READ},
        {.addr=0x832e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_003C) {
    const struct CPU_State initial_cpu = {.pc=0x5886, .a=0x6d, .x=0x93, .y=0x74, .sp=0x44, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x28}, {.addr=0x5886, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5887, .a=0x28, .x=0x94, .y=0x74, .sp=0x44, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x28}, {.addr=0x5886, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5886, .value=0xbf, .type=IO_READ},
        {.addr=0x5887, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_003D) {
    const struct CPU_State initial_cpu = {.pc=0xa560, .a=0x91, .x=0xb1, .y=0x76, .sp=0xe8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0xde}, {.addr=0xa560, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa561, .a=0xde, .x=0xb2, .y=0x76, .sp=0xe8, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0xde}, {.addr=0xa560, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa560, .value=0xbf, .type=IO_READ},
        {.addr=0xa561, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_003E) {
    const struct CPU_State initial_cpu = {.pc=0x6838, .a=0x69, .x=0xa4, .y=0x1c, .sp=0x08, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x69}, {.addr=0x6838, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6839, .a=0x69, .x=0xa5, .y=0x1c, .sp=0x08, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x69}, {.addr=0x6838, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6838, .value=0xbf, .type=IO_READ},
        {.addr=0x6839, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_003F) {
    const struct CPU_State initial_cpu = {.pc=0x62be, .a=0x3c, .x=0x21, .y=0x61, .sp=0x1d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0xbd}, {.addr=0x62be, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x62bf, .a=0xbd, .x=0x22, .y=0x61, .sp=0x1d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0xbd}, {.addr=0x62be, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x62be, .value=0xbf, .type=IO_READ},
        {.addr=0x62bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0040) {
    const struct CPU_State initial_cpu = {.pc=0x5389, .a=0xc7, .x=0xd2, .y=0x69, .sp=0xba, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0xec}, {.addr=0x5389, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x538a, .a=0xec, .x=0xd3, .y=0x69, .sp=0xba, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0xec}, {.addr=0x5389, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5389, .value=0xbf, .type=IO_READ},
        {.addr=0x538a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0041) {
    const struct CPU_State initial_cpu = {.pc=0x63de, .a=0x44, .x=0x7d, .y=0x3a, .sp=0xa9, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x12}, {.addr=0x63de, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x63df, .a=0x12, .x=0x7e, .y=0x3a, .sp=0xa9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x12}, {.addr=0x63de, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x63de, .value=0xbf, .type=IO_READ},
        {.addr=0x63df, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0042) {
    const struct CPU_State initial_cpu = {.pc=0x9142, .a=0xae, .x=0xec, .y=0x7b, .sp=0x38, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x48}, {.addr=0x9142, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9143, .a=0x48, .x=0xed, .y=0x7b, .sp=0x38, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x48}, {.addr=0x9142, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9142, .value=0xbf, .type=IO_READ},
        {.addr=0x9143, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0043) {
    const struct CPU_State initial_cpu = {.pc=0xfd25, .a=0x9f, .x=0x42, .y=0x5f, .sp=0x4a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xbd}, {.addr=0xfd25, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfd26, .a=0xbd, .x=0x43, .y=0x5f, .sp=0x4a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xbd}, {.addr=0xfd25, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfd25, .value=0xbf, .type=IO_READ},
        {.addr=0xfd26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0044) {
    const struct CPU_State initial_cpu = {.pc=0xf563, .a=0x83, .x=0x7c, .y=0x1b, .sp=0x18, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0xde}, {.addr=0xf563, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf564, .a=0xde, .x=0x7d, .y=0x1b, .sp=0x18, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0xde}, {.addr=0xf563, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf563, .value=0xbf, .type=IO_READ},
        {.addr=0xf564, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0045) {
    const struct CPU_State initial_cpu = {.pc=0x94c3, .a=0xac, .x=0xa1, .y=0xa6, .sp=0x84, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xe7}, {.addr=0x94c3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x94c4, .a=0xe7, .x=0xa2, .y=0xa6, .sp=0x84, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xe7}, {.addr=0x94c3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x94c3, .value=0xbf, .type=IO_READ},
        {.addr=0x94c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0046) {
    const struct CPU_State initial_cpu = {.pc=0x1634, .a=0x72, .x=0x10, .y=0x67, .sp=0x48, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x79}, {.addr=0x1634, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1635, .a=0x79, .x=0x11, .y=0x67, .sp=0x48, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x79}, {.addr=0x1634, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1634, .value=0xbf, .type=IO_READ},
        {.addr=0x1635, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0047) {
    const struct CPU_State initial_cpu = {.pc=0xd113, .a=0xa2, .x=0xb2, .y=0x35, .sp=0x52, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x1f}, {.addr=0xd113, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd114, .a=0x1f, .x=0xb3, .y=0x35, .sp=0x52, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x1f}, {.addr=0xd113, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd113, .value=0xbf, .type=IO_READ},
        {.addr=0xd114, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0048) {
    const struct CPU_State initial_cpu = {.pc=0x1ae7, .a=0xc6, .x=0x4d, .y=0x2f, .sp=0x95, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x80}, {.addr=0x1ae7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1ae8, .a=0x80, .x=0x4e, .y=0x2f, .sp=0x95, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x80}, {.addr=0x1ae7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1ae7, .value=0xbf, .type=IO_READ},
        {.addr=0x1ae8, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0049) {
    const struct CPU_State initial_cpu = {.pc=0xfea6, .a=0xbe, .x=0xb6, .y=0x9c, .sp=0xcf, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x20}, {.addr=0xfea6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfea7, .a=0x20, .x=0xb7, .y=0x9c, .sp=0xcf, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x20}, {.addr=0xfea6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfea6, .value=0xbf, .type=IO_READ},
        {.addr=0xfea7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_004A) {
    const struct CPU_State initial_cpu = {.pc=0x626f, .a=0xd7, .x=0x09, .y=0xc2, .sp=0xbd, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xe7}, {.addr=0x626f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6270, .a=0xe7, .x=0x0a, .y=0xc2, .sp=0xbd, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xe7}, {.addr=0x626f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x626f, .value=0xbf, .type=IO_READ},
        {.addr=0x6270, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_004B) {
    const struct CPU_State initial_cpu = {.pc=0xaeea, .a=0x62, .x=0x00, .y=0x45, .sp=0x8d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xab}, {.addr=0xaeea, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xaeeb, .a=0xab, .x=0x01, .y=0x45, .sp=0x8d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xab}, {.addr=0xaeea, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xaeea, .value=0xbf, .type=IO_READ},
        {.addr=0xaeeb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_004C) {
    const struct CPU_State initial_cpu = {.pc=0x08ad, .a=0x45, .x=0xd3, .y=0x4e, .sp=0x52, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x35}, {.addr=0x08ad, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x08ae, .a=0x35, .x=0xd4, .y=0x4e, .sp=0x52, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x35}, {.addr=0x08ad, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x08ad, .value=0xbf, .type=IO_READ},
        {.addr=0x08ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_004D) {
    const struct CPU_State initial_cpu = {.pc=0xd427, .a=0x9d, .x=0x73, .y=0xbe, .sp=0xb0, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0xc5}, {.addr=0xd427, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd428, .a=0xc5, .x=0x74, .y=0xbe, .sp=0xb0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0xc5}, {.addr=0xd427, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd427, .value=0xbf, .type=IO_READ},
        {.addr=0xd428, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_004F) {
    const struct CPU_State initial_cpu = {.pc=0x6790, .a=0x76, .x=0x77, .y=0x92, .sp=0xd0, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x9f}, {.addr=0x6790, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6791, .a=0x9f, .x=0x78, .y=0x92, .sp=0xd0, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x9f}, {.addr=0x6790, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6790, .value=0xbf, .type=IO_READ},
        {.addr=0x6791, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0050) {
    const struct CPU_State initial_cpu = {.pc=0x145c, .a=0x29, .x=0x94, .y=0xdc, .sp=0x85, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x50}, {.addr=0x145c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x145d, .a=0x50, .x=0x95, .y=0xdc, .sp=0x85, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x50}, {.addr=0x145c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x145c, .value=0xbf, .type=IO_READ},
        {.addr=0x145d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0051) {
    const struct CPU_State initial_cpu = {.pc=0xdb26, .a=0xbc, .x=0xb6, .y=0xb2, .sp=0x4e, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x82}, {.addr=0xdb26, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdb27, .a=0x82, .x=0xb7, .y=0xb2, .sp=0x4e, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x82}, {.addr=0xdb26, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdb26, .value=0xbf, .type=IO_READ},
        {.addr=0xdb27, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0052) {
    const struct CPU_State initial_cpu = {.pc=0xa660, .a=0xe2, .x=0xd0, .y=0x35, .sp=0x0e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x0e}, {.addr=0xa660, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa661, .a=0x0e, .x=0xd1, .y=0x35, .sp=0x0e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x0e}, {.addr=0xa660, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa660, .value=0xbf, .type=IO_READ},
        {.addr=0xa661, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0053) {
    const struct CPU_State initial_cpu = {.pc=0xc91b, .a=0x8c, .x=0xb0, .y=0x2e, .sp=0x2e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x80}, {.addr=0xc91b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc91c, .a=0x80, .x=0xb1, .y=0x2e, .sp=0x2e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x80}, {.addr=0xc91b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc91b, .value=0xbf, .type=IO_READ},
        {.addr=0xc91c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0054) {
    const struct CPU_State initial_cpu = {.pc=0xd428, .a=0x69, .x=0xa5, .y=0x59, .sp=0x62, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0x2e}, {.addr=0xd428, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd429, .a=0x2e, .x=0xa6, .y=0x59, .sp=0x62, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0x2e}, {.addr=0xd428, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd428, .value=0xbf, .type=IO_READ},
        {.addr=0xd429, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0055) {
    const struct CPU_State initial_cpu = {.pc=0x23d7, .a=0x79, .x=0xf9, .y=0x26, .sp=0x71, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0xee}, {.addr=0x23d7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x23d8, .a=0xee, .x=0xfa, .y=0x26, .sp=0x71, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xee}, {.addr=0x23d7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x23d7, .value=0xbf, .type=IO_READ},
        {.addr=0x23d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0056) {
    const struct CPU_State initial_cpu = {.pc=0x298e, .a=0x3b, .x=0xa7, .y=0x40, .sp=0xa7, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0xbc}, {.addr=0x298e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x298f, .a=0xbc, .x=0xa8, .y=0x40, .sp=0xa7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xbc}, {.addr=0x298e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x298e, .value=0xbf, .type=IO_READ},
        {.addr=0x298f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0057) {
    const struct CPU_State initial_cpu = {.pc=0x8b6c, .a=0xac, .x=0x85, .y=0x9d, .sp=0x74, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xef}, {.addr=0x8b6c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8b6d, .a=0xef, .x=0x86, .y=0x9d, .sp=0x74, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xef}, {.addr=0x8b6c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8b6c, .value=0xbf, .type=IO_READ},
        {.addr=0x8b6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0058) {
    const struct CPU_State initial_cpu = {.pc=0xf842, .a=0xac, .x=0x15, .y=0xe7, .sp=0xdc, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x84}, {.addr=0xf842, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf843, .a=0x84, .x=0x16, .y=0xe7, .sp=0xdc, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x84}, {.addr=0xf842, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf842, .value=0xbf, .type=IO_READ},
        {.addr=0xf843, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0059) {
    const struct CPU_State initial_cpu = {.pc=0xb5ef, .a=0xef, .x=0xdb, .y=0x35, .sp=0x8d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0xce}, {.addr=0xb5ef, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb5f0, .a=0xce, .x=0xdc, .y=0x35, .sp=0x8d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xce}, {.addr=0xb5ef, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb5ef, .value=0xbf, .type=IO_READ},
        {.addr=0xb5f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_005A) {
    const struct CPU_State initial_cpu = {.pc=0x7013, .a=0x46, .x=0x88, .y=0x06, .sp=0x75, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x81}, {.addr=0x7013, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7014, .a=0x81, .x=0x89, .y=0x06, .sp=0x75, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x81}, {.addr=0x7013, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7013, .value=0xbf, .type=IO_READ},
        {.addr=0x7014, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_005B) {
    const struct CPU_State initial_cpu = {.pc=0x5f5c, .a=0x11, .x=0x59, .y=0x85, .sp=0x48, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x72}, {.addr=0x5f5c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5f5d, .a=0x72, .x=0x5a, .y=0x85, .sp=0x48, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x72}, {.addr=0x5f5c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5f5c, .value=0xbf, .type=IO_READ},
        {.addr=0x5f5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_005C) {
    const struct CPU_State initial_cpu = {.pc=0x838b, .a=0x11, .x=0x9b, .y=0x82, .sp=0x6a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x34}, {.addr=0x838b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x838c, .a=0x34, .x=0x9c, .y=0x82, .sp=0x6a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x34}, {.addr=0x838b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x838b, .value=0xbf, .type=IO_READ},
        {.addr=0x838c, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_005D) {
    const struct CPU_State initial_cpu = {.pc=0xcd3d, .a=0x78, .x=0x42, .y=0xf2, .sp=0x61, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x84}, {.addr=0xcd3d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcd3e, .a=0x84, .x=0x43, .y=0xf2, .sp=0x61, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x84}, {.addr=0xcd3d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcd3d, .value=0xbf, .type=IO_READ},
        {.addr=0xcd3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_005F) {
    const struct CPU_State initial_cpu = {.pc=0xd83d, .a=0x82, .x=0x67, .y=0x80, .sp=0x03, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0xcb}, {.addr=0xd83d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd83e, .a=0xcb, .x=0x68, .y=0x80, .sp=0x03, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0xcb}, {.addr=0xd83d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd83d, .value=0xbf, .type=IO_READ},
        {.addr=0xd83e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0060) {
    const struct CPU_State initial_cpu = {.pc=0x8141, .a=0xfe, .x=0xc1, .y=0x8d, .sp=0xf0, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x6e}, {.addr=0x8141, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8142, .a=0x6e, .x=0xc2, .y=0x8d, .sp=0xf0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x6e}, {.addr=0x8141, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8141, .value=0xbf, .type=IO_READ},
        {.addr=0x8142, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0061) {
    const struct CPU_State initial_cpu = {.pc=0x18b6, .a=0xf5, .x=0x6a, .y=0x4a, .sp=0x5d, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xe9}, {.addr=0x18b6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x18b7, .a=0xe9, .x=0x6b, .y=0x4a, .sp=0x5d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xe9}, {.addr=0x18b6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x18b6, .value=0xbf, .type=IO_READ},
        {.addr=0x18b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0062) {
    const struct CPU_State initial_cpu = {.pc=0x3712, .a=0xc3, .x=0xc5, .y=0x0b, .sp=0xca, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x88}, {.addr=0x3712, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3713, .a=0x88, .x=0xc6, .y=0x0b, .sp=0xca, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x88}, {.addr=0x3712, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3712, .value=0xbf, .type=IO_READ},
        {.addr=0x3713, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0063) {
    const struct CPU_State initial_cpu = {.pc=0x099b, .a=0x68, .x=0x20, .y=0x30, .sp=0x71, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x29}, {.addr=0x099b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x099c, .a=0x29, .x=0x21, .y=0x30, .sp=0x71, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x29}, {.addr=0x099b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x099b, .value=0xbf, .type=IO_READ},
        {.addr=0x099c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0064) {
    const struct CPU_State initial_cpu = {.pc=0xcb31, .a=0xc3, .x=0xde, .y=0xdb, .sp=0x2b, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x4d}, {.addr=0xcb31, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcb32, .a=0x4d, .x=0xdf, .y=0xdb, .sp=0x2b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x4d}, {.addr=0xcb31, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcb31, .value=0xbf, .type=IO_READ},
        {.addr=0xcb32, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0065) {
    const struct CPU_State initial_cpu = {.pc=0x8a55, .a=0x34, .x=0x91, .y=0x15, .sp=0xac, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0xb0}, {.addr=0x8a55, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8a56, .a=0xb0, .x=0x92, .y=0x15, .sp=0xac, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xb0}, {.addr=0x8a55, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8a55, .value=0xbf, .type=IO_READ},
        {.addr=0x8a56, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0066) {
    const struct CPU_State initial_cpu = {.pc=0x4c51, .a=0xfc, .x=0x35, .y=0x87, .sp=0xa4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0xad}, {.addr=0x4c51, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4c52, .a=0xad, .x=0x36, .y=0x87, .sp=0xa4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0xad}, {.addr=0x4c51, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4c51, .value=0xbf, .type=IO_READ},
        {.addr=0x4c52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0067) {
    const struct CPU_State initial_cpu = {.pc=0x60c0, .a=0x51, .x=0x09, .y=0xc9, .sp=0xb1, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xf6}, {.addr=0x60c0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x60c1, .a=0xf6, .x=0x0a, .y=0xc9, .sp=0xb1, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xf6}, {.addr=0x60c0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x60c0, .value=0xbf, .type=IO_READ},
        {.addr=0x60c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0068) {
    const struct CPU_State initial_cpu = {.pc=0xda44, .a=0x9f, .x=0x25, .y=0x84, .sp=0xe0, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x01}, {.addr=0xda44, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xda45, .a=0x01, .x=0x26, .y=0x84, .sp=0xe0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x01}, {.addr=0xda44, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xda44, .value=0xbf, .type=IO_READ},
        {.addr=0xda45, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0069) {
    const struct CPU_State initial_cpu = {.pc=0x9ed9, .a=0xb5, .x=0x89, .y=0x09, .sp=0xee, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xd1}, {.addr=0x9ed9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9eda, .a=0xd1, .x=0x8a, .y=0x09, .sp=0xee, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xd1}, {.addr=0x9ed9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9ed9, .value=0xbf, .type=IO_READ},
        {.addr=0x9eda, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_006A) {
    const struct CPU_State initial_cpu = {.pc=0x5410, .a=0x21, .x=0x73, .y=0x71, .sp=0xe4, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x4d}, {.addr=0x5410, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5411, .a=0x4d, .x=0x74, .y=0x71, .sp=0xe4, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x4d}, {.addr=0x5410, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5410, .value=0xbf, .type=IO_READ},
        {.addr=0x5411, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_006B) {
    const struct CPU_State initial_cpu = {.pc=0x4b4b, .a=0x75, .x=0x52, .y=0xdb, .sp=0x87, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x64}, {.addr=0x4b4b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4b4c, .a=0x64, .x=0x53, .y=0xdb, .sp=0x87, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x64}, {.addr=0x4b4b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4b4b, .value=0xbf, .type=IO_READ},
        {.addr=0x4b4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_006C) {
    const struct CPU_State initial_cpu = {.pc=0x6a23, .a=0x58, .x=0xac, .y=0x85, .sp=0x16, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0xc6}, {.addr=0x6a23, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6a24, .a=0xc6, .x=0xad, .y=0x85, .sp=0x16, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0xc6}, {.addr=0x6a23, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6a23, .value=0xbf, .type=IO_READ},
        {.addr=0x6a24, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_006D) {
    const struct CPU_State initial_cpu = {.pc=0x0dbf, .a=0xda, .x=0x34, .y=0xeb, .sp=0xb3, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x0e}, {.addr=0x0dbf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0dc0, .a=0x0e, .x=0x35, .y=0xeb, .sp=0xb3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x0e}, {.addr=0x0dbf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0dbf, .value=0xbf, .type=IO_READ},
        {.addr=0x0dc0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_006E) {
    const struct CPU_State initial_cpu = {.pc=0x86f0, .a=0x71, .x=0xfc, .y=0xee, .sp=0x17, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x90}, {.addr=0x86f0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x86f1, .a=0x90, .x=0xfd, .y=0xee, .sp=0x17, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x90}, {.addr=0x86f0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x86f0, .value=0xbf, .type=IO_READ},
        {.addr=0x86f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_006F) {
    const struct CPU_State initial_cpu = {.pc=0x9368, .a=0x91, .x=0xa7, .y=0x2d, .sp=0x17, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x22}, {.addr=0x9368, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9369, .a=0x22, .x=0xa8, .y=0x2d, .sp=0x17, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x22}, {.addr=0x9368, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9368, .value=0xbf, .type=IO_READ},
        {.addr=0x9369, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0070) {
    const struct CPU_State initial_cpu = {.pc=0xe72a, .a=0xb9, .x=0x60, .y=0x00, .sp=0x12, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x0c}, {.addr=0xe72a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe72b, .a=0x0c, .x=0x61, .y=0x00, .sp=0x12, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x0c}, {.addr=0xe72a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe72a, .value=0xbf, .type=IO_READ},
        {.addr=0xe72b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0071) {
    const struct CPU_State initial_cpu = {.pc=0xd301, .a=0x21, .x=0x8b, .y=0x5c, .sp=0x28, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0x22}, {.addr=0xd301, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd302, .a=0x22, .x=0x8c, .y=0x5c, .sp=0x28, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0x22}, {.addr=0xd301, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd301, .value=0xbf, .type=IO_READ},
        {.addr=0xd302, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0072) {
    const struct CPU_State initial_cpu = {.pc=0xae15, .a=0x11, .x=0x35, .y=0x7e, .sp=0x90, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x77}, {.addr=0xae15, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xae16, .a=0x77, .x=0x36, .y=0x7e, .sp=0x90, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x77}, {.addr=0xae15, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xae15, .value=0xbf, .type=IO_READ},
        {.addr=0xae16, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0073) {
    const struct CPU_State initial_cpu = {.pc=0x9bc1, .a=0xd4, .x=0x6d, .y=0x86, .sp=0xee, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x0a}, {.addr=0x9bc1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9bc2, .a=0x0a, .x=0x6e, .y=0x86, .sp=0xee, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x0a}, {.addr=0x9bc1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9bc1, .value=0xbf, .type=IO_READ},
        {.addr=0x9bc2, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0074) {
    const struct CPU_State initial_cpu = {.pc=0x46dc, .a=0x5f, .x=0xfc, .y=0x6c, .sp=0x7f, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x21}, {.addr=0x46dc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x46dd, .a=0x21, .x=0xfd, .y=0x6c, .sp=0x7f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x21}, {.addr=0x46dc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x46dc, .value=0xbf, .type=IO_READ},
        {.addr=0x46dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0075) {
    const struct CPU_State initial_cpu = {.pc=0x25ab, .a=0x60, .x=0xf7, .y=0x37, .sp=0x75, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xac}, {.addr=0x25ab, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x25ac, .a=0xac, .x=0xf8, .y=0x37, .sp=0x75, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xac}, {.addr=0x25ab, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x25ab, .value=0xbf, .type=IO_READ},
        {.addr=0x25ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0076) {
    const struct CPU_State initial_cpu = {.pc=0xa981, .a=0xe7, .x=0x15, .y=0x32, .sp=0xe2, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0x3e}, {.addr=0xa981, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa982, .a=0x3e, .x=0x16, .y=0x32, .sp=0xe2, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0x3e}, {.addr=0xa981, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa981, .value=0xbf, .type=IO_READ},
        {.addr=0xa982, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0077) {
    const struct CPU_State initial_cpu = {.pc=0xf51d, .a=0xa0, .x=0x31, .y=0xfa, .sp=0x0d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x6f}, {.addr=0xf51d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf51e, .a=0x6f, .x=0x32, .y=0xfa, .sp=0x0d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x6f}, {.addr=0xf51d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf51d, .value=0xbf, .type=IO_READ},
        {.addr=0xf51e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0078) {
    const struct CPU_State initial_cpu = {.pc=0xab30, .a=0x5e, .x=0x89, .y=0x56, .sp=0xef, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0x22}, {.addr=0xab30, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xab31, .a=0x22, .x=0x8a, .y=0x56, .sp=0xef, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0x22}, {.addr=0xab30, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xab30, .value=0xbf, .type=IO_READ},
        {.addr=0xab31, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0079) {
    const struct CPU_State initial_cpu = {.pc=0x5799, .a=0xe4, .x=0x04, .y=0xa5, .sp=0xba, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x90}, {.addr=0x5799, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x579a, .a=0x90, .x=0x05, .y=0xa5, .sp=0xba, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x90}, {.addr=0x5799, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5799, .value=0xbf, .type=IO_READ},
        {.addr=0x579a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_007A) {
    const struct CPU_State initial_cpu = {.pc=0x5096, .a=0x6f, .x=0x0f, .y=0x69, .sp=0xc1, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x35}, {.addr=0x5096, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5097, .a=0x35, .x=0x10, .y=0x69, .sp=0xc1, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x35}, {.addr=0x5096, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5096, .value=0xbf, .type=IO_READ},
        {.addr=0x5097, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_007B) {
    const struct CPU_State initial_cpu = {.pc=0x916c, .a=0x45, .x=0x5a, .y=0x95, .sp=0x88, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x7e}, {.addr=0x916c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x916d, .a=0x7e, .x=0x5b, .y=0x95, .sp=0x88, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x7e}, {.addr=0x916c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x916c, .value=0xbf, .type=IO_READ},
        {.addr=0x916d, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_007C) {
    const struct CPU_State initial_cpu = {.pc=0x4324, .a=0xc6, .x=0x2c, .y=0x8b, .sp=0x09, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0xa1}, {.addr=0x4324, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4325, .a=0xa1, .x=0x2d, .y=0x8b, .sp=0x09, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0xa1}, {.addr=0x4324, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4324, .value=0xbf, .type=IO_READ},
        {.addr=0x4325, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_007D) {
    const struct CPU_State initial_cpu = {.pc=0xe26d, .a=0xb9, .x=0x21, .y=0x26, .sp=0xed, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x83}, {.addr=0xe26d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe26e, .a=0x83, .x=0x22, .y=0x26, .sp=0xed, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x83}, {.addr=0xe26d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe26d, .value=0xbf, .type=IO_READ},
        {.addr=0xe26e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_007E) {
    const struct CPU_State initial_cpu = {.pc=0x0d82, .a=0x12, .x=0x27, .y=0xb7, .sp=0xa1, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xa7}, {.addr=0x0d82, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0d83, .a=0xa7, .x=0x28, .y=0xb7, .sp=0xa1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xa7}, {.addr=0x0d82, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0d82, .value=0xbf, .type=IO_READ},
        {.addr=0x0d83, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_007F) {
    const struct CPU_State initial_cpu = {.pc=0x1dc9, .a=0x3c, .x=0x17, .y=0x66, .sp=0xf8, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x41}, {.addr=0x1dc9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1dca, .a=0x41, .x=0x18, .y=0x66, .sp=0xf8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x41}, {.addr=0x1dc9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1dc9, .value=0xbf, .type=IO_READ},
        {.addr=0x1dca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0080) {
    const struct CPU_State initial_cpu = {.pc=0x2dff, .a=0x11, .x=0xbd, .y=0xa5, .sp=0xb0, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x81}, {.addr=0x2dff, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2e00, .a=0x81, .x=0xbe, .y=0xa5, .sp=0xb0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x81}, {.addr=0x2dff, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2dff, .value=0xbf, .type=IO_READ},
        {.addr=0x2e00, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0081) {
    const struct CPU_State initial_cpu = {.pc=0x3740, .a=0x38, .x=0x76, .y=0x86, .sp=0xaf, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x30}, {.addr=0x3740, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3741, .a=0x30, .x=0x77, .y=0x86, .sp=0xaf, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x30}, {.addr=0x3740, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3740, .value=0xbf, .type=IO_READ},
        {.addr=0x3741, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0082) {
    const struct CPU_State initial_cpu = {.pc=0xd1b1, .a=0x1b, .x=0xd0, .y=0x76, .sp=0xa6, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x4e}, {.addr=0xd1b1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd1b2, .a=0x4e, .x=0xd1, .y=0x76, .sp=0xa6, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x4e}, {.addr=0xd1b1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd1b1, .value=0xbf, .type=IO_READ},
        {.addr=0xd1b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0083) {
    const struct CPU_State initial_cpu = {.pc=0xab64, .a=0x2a, .x=0x55, .y=0x4c, .sp=0x4d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x7c}, {.addr=0xab64, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xab65, .a=0x7c, .x=0x56, .y=0x4c, .sp=0x4d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x7c}, {.addr=0xab64, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xab64, .value=0xbf, .type=IO_READ},
        {.addr=0xab65, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0084) {
    const struct CPU_State initial_cpu = {.pc=0x8590, .a=0x02, .x=0xc6, .y=0x97, .sp=0xb1, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x75}, {.addr=0x8590, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8591, .a=0x75, .x=0xc7, .y=0x97, .sp=0xb1, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x75}, {.addr=0x8590, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8590, .value=0xbf, .type=IO_READ},
        {.addr=0x8591, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0085) {
    const struct CPU_State initial_cpu = {.pc=0xa12f, .a=0xc3, .x=0x0c, .y=0x46, .sp=0x2a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x1c}, {.addr=0xa12f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa130, .a=0x1c, .x=0x0d, .y=0x46, .sp=0x2a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x1c}, {.addr=0xa12f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa12f, .value=0xbf, .type=IO_READ},
        {.addr=0xa130, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0086) {
    const struct CPU_State initial_cpu = {.pc=0x7621, .a=0x78, .x=0xae, .y=0xb5, .sp=0x16, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xc4}, {.addr=0x7621, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7622, .a=0xc4, .x=0xaf, .y=0xb5, .sp=0x16, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xc4}, {.addr=0x7621, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7621, .value=0xbf, .type=IO_READ},
        {.addr=0x7622, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0087) {
    const struct CPU_State initial_cpu = {.pc=0xb369, .a=0xc0, .x=0xdd, .y=0x4d, .sp=0x2a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xff}, {.addr=0xb369, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb36a, .a=0xff, .x=0xde, .y=0x4d, .sp=0x2a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xff}, {.addr=0xb369, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb369, .value=0xbf, .type=IO_READ},
        {.addr=0xb36a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0088) {
    const struct CPU_State initial_cpu = {.pc=0x15b8, .a=0xe0, .x=0x2f, .y=0xf5, .sp=0x1f, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x6b}, {.addr=0x15b8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x15b9, .a=0x6b, .x=0x30, .y=0xf5, .sp=0x1f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x6b}, {.addr=0x15b8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x15b8, .value=0xbf, .type=IO_READ},
        {.addr=0x15b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0089) {
    const struct CPU_State initial_cpu = {.pc=0x1613, .a=0x19, .x=0x5f, .y=0x6a, .sp=0x90, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0xa1}, {.addr=0x1613, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1614, .a=0xa1, .x=0x60, .y=0x6a, .sp=0x90, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0xa1}, {.addr=0x1613, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1613, .value=0xbf, .type=IO_READ},
        {.addr=0x1614, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_008A) {
    const struct CPU_State initial_cpu = {.pc=0xf73d, .a=0xd4, .x=0x89, .y=0x16, .sp=0x3e, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x2b}, {.addr=0xf73d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf73e, .a=0x2b, .x=0x8a, .y=0x16, .sp=0x3e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x2b}, {.addr=0xf73d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf73d, .value=0xbf, .type=IO_READ},
        {.addr=0xf73e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_008B) {
    const struct CPU_State initial_cpu = {.pc=0x9e4f, .a=0x15, .x=0x59, .y=0x38, .sp=0xe6, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x0c}, {.addr=0x9e4f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9e50, .a=0x0c, .x=0x5a, .y=0x38, .sp=0xe6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x0c}, {.addr=0x9e4f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9e4f, .value=0xbf, .type=IO_READ},
        {.addr=0x9e50, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_008C) {
    const struct CPU_State initial_cpu = {.pc=0x3814, .a=0xf7, .x=0x74, .y=0x7d, .sp=0x3b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x80}, {.addr=0x3814, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3815, .a=0x80, .x=0x75, .y=0x7d, .sp=0x3b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x80}, {.addr=0x3814, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3814, .value=0xbf, .type=IO_READ},
        {.addr=0x3815, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_008D) {
    const struct CPU_State initial_cpu = {.pc=0x3554, .a=0x20, .x=0x17, .y=0xf0, .sp=0x34, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x90}, {.addr=0x3554, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3555, .a=0x90, .x=0x18, .y=0xf0, .sp=0x34, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x90}, {.addr=0x3554, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3554, .value=0xbf, .type=IO_READ},
        {.addr=0x3555, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_008E) {
    const struct CPU_State initial_cpu = {.pc=0xbea1, .a=0xa0, .x=0xa4, .y=0x10, .sp=0x02, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x14}, {.addr=0xbea1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbea2, .a=0x14, .x=0xa5, .y=0x10, .sp=0x02, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x14}, {.addr=0xbea1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbea1, .value=0xbf, .type=IO_READ},
        {.addr=0xbea2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_008F) {
    const struct CPU_State initial_cpu = {.pc=0x4756, .a=0xd5, .x=0x52, .y=0xb1, .sp=0xf4, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x6a}, {.addr=0x4756, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4757, .a=0x6a, .x=0x53, .y=0xb1, .sp=0xf4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x6a}, {.addr=0x4756, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4756, .value=0xbf, .type=IO_READ},
        {.addr=0x4757, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0091) {
    const struct CPU_State initial_cpu = {.pc=0xdcf8, .a=0x69, .x=0x69, .y=0x76, .sp=0xe7, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x93}, {.addr=0xdcf8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdcf9, .a=0x93, .x=0x6a, .y=0x76, .sp=0xe7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x93}, {.addr=0xdcf8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdcf8, .value=0xbf, .type=IO_READ},
        {.addr=0xdcf9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0092) {
    const struct CPU_State initial_cpu = {.pc=0x68b7, .a=0x33, .x=0xe4, .y=0x91, .sp=0xe0, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x34}, {.addr=0x68b7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x68b8, .a=0x34, .x=0xe5, .y=0x91, .sp=0xe0, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x34}, {.addr=0x68b7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x68b7, .value=0xbf, .type=IO_READ},
        {.addr=0x68b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0093) {
    const struct CPU_State initial_cpu = {.pc=0xc289, .a=0xef, .x=0x88, .y=0xcd, .sp=0xf2, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0x44}, {.addr=0xc289, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc28a, .a=0x44, .x=0x89, .y=0xcd, .sp=0xf2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0x44}, {.addr=0xc289, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc289, .value=0xbf, .type=IO_READ},
        {.addr=0xc28a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0094) {
    const struct CPU_State initial_cpu = {.pc=0xbdae, .a=0x83, .x=0xb3, .y=0x0c, .sp=0x49, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x4c}, {.addr=0xbdae, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbdaf, .a=0x4c, .x=0xb4, .y=0x0c, .sp=0x49, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x4c}, {.addr=0xbdae, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbdae, .value=0xbf, .type=IO_READ},
        {.addr=0xbdaf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0095) {
    const struct CPU_State initial_cpu = {.pc=0x9f3f, .a=0xaf, .x=0xc0, .y=0x82, .sp=0x12, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x65}, {.addr=0x9f3f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9f40, .a=0x65, .x=0xc1, .y=0x82, .sp=0x12, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x65}, {.addr=0x9f3f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9f3f, .value=0xbf, .type=IO_READ},
        {.addr=0x9f40, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0096) {
    const struct CPU_State initial_cpu = {.pc=0x2789, .a=0x64, .x=0x6a, .y=0xc5, .sp=0x8b, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x98}, {.addr=0x2789, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x278a, .a=0x98, .x=0x6b, .y=0xc5, .sp=0x8b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x98}, {.addr=0x2789, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2789, .value=0xbf, .type=IO_READ},
        {.addr=0x278a, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0097) {
    const struct CPU_State initial_cpu = {.pc=0xc3af, .a=0x74, .x=0xb0, .y=0x17, .sp=0x58, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x2e}, {.addr=0xc3af, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc3b0, .a=0x2e, .x=0xb1, .y=0x17, .sp=0x58, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x2e}, {.addr=0xc3af, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc3af, .value=0xbf, .type=IO_READ},
        {.addr=0xc3b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0098) {
    const struct CPU_State initial_cpu = {.pc=0xf33e, .a=0xc2, .x=0x1d, .y=0x6e, .sp=0x42, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x9a}, {.addr=0xf33e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf33f, .a=0x9a, .x=0x1e, .y=0x6e, .sp=0x42, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x9a}, {.addr=0xf33e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf33e, .value=0xbf, .type=IO_READ},
        {.addr=0xf33f, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0099) {
    const struct CPU_State initial_cpu = {.pc=0x4ae3, .a=0x95, .x=0xc3, .y=0x3d, .sp=0xec, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xc0}, {.addr=0x4ae3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4ae4, .a=0xc0, .x=0xc4, .y=0x3d, .sp=0xec, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xc0}, {.addr=0x4ae3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4ae3, .value=0xbf, .type=IO_READ},
        {.addr=0x4ae4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_009A) {
    const struct CPU_State initial_cpu = {.pc=0x47e5, .a=0xe0, .x=0xe1, .y=0xec, .sp=0x2f, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x20}, {.addr=0x47e5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x47e6, .a=0x20, .x=0xe2, .y=0xec, .sp=0x2f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x20}, {.addr=0x47e5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x47e5, .value=0xbf, .type=IO_READ},
        {.addr=0x47e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_009B) {
    const struct CPU_State initial_cpu = {.pc=0xac3f, .a=0xe1, .x=0x42, .y=0xed, .sp=0x8c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x2d}, {.addr=0xac3f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xac40, .a=0x2d, .x=0x43, .y=0xed, .sp=0x8c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x2d}, {.addr=0xac3f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xac3f, .value=0xbf, .type=IO_READ},
        {.addr=0xac40, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_009C) {
    const struct CPU_State initial_cpu = {.pc=0x9cd9, .a=0x6f, .x=0x22, .y=0x56, .sp=0x32, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0x19}, {.addr=0x9cd9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9cda, .a=0x19, .x=0x23, .y=0x56, .sp=0x32, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0x19}, {.addr=0x9cd9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9cd9, .value=0xbf, .type=IO_READ},
        {.addr=0x9cda, .value=DUMMY, .type=IO_READ},
        {.addr=0x0022, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_009D) {
    const struct CPU_State initial_cpu = {.pc=0x1822, .a=0x4c, .x=0x71, .y=0x46, .sp=0xea, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x40}, {.addr=0x1822, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1823, .a=0x40, .x=0x72, .y=0x46, .sp=0xea, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x40}, {.addr=0x1822, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1822, .value=0xbf, .type=IO_READ},
        {.addr=0x1823, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_009E) {
    const struct CPU_State initial_cpu = {.pc=0x1e9d, .a=0x67, .x=0xca, .y=0x33, .sp=0x16, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0xe0}, {.addr=0x1e9d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1e9e, .a=0xe0, .x=0xcb, .y=0x33, .sp=0x16, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0xe0}, {.addr=0x1e9d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1e9d, .value=0xbf, .type=IO_READ},
        {.addr=0x1e9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_009F) {
    const struct CPU_State initial_cpu = {.pc=0xc7d5, .a=0xc7, .x=0x45, .y=0xbb, .sp=0xe6, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x8e}, {.addr=0xc7d5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc7d6, .a=0x8e, .x=0x46, .y=0xbb, .sp=0xe6, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x8e}, {.addr=0xc7d5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc7d5, .value=0xbf, .type=IO_READ},
        {.addr=0xc7d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x47b4, .a=0xe4, .x=0x7c, .y=0x26, .sp=0xc0, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xc7}, {.addr=0x47b4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x47b5, .a=0xc7, .x=0x7d, .y=0x26, .sp=0xc0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xc7}, {.addr=0x47b4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x47b4, .value=0xbf, .type=IO_READ},
        {.addr=0x47b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x0350, .a=0xc4, .x=0x73, .y=0xc5, .sp=0x84, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x45}, {.addr=0x0350, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0351, .a=0x45, .x=0x74, .y=0xc5, .sp=0x84, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x45}, {.addr=0x0350, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0350, .value=0xbf, .type=IO_READ},
        {.addr=0x0351, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xf862, .a=0x3e, .x=0x9d, .y=0x80, .sp=0x88, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x21}, {.addr=0xf862, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf863, .a=0x21, .x=0x9e, .y=0x80, .sp=0x88, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x21}, {.addr=0xf862, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf862, .value=0xbf, .type=IO_READ},
        {.addr=0xf863, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x74dd, .a=0x43, .x=0x57, .y=0x37, .sp=0x54, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0xbf}, {.addr=0x74dd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x74de, .a=0xbf, .x=0x58, .y=0x37, .sp=0x54, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xbf}, {.addr=0x74dd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x74dd, .value=0xbf, .type=IO_READ},
        {.addr=0x74de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x731d, .a=0xb1, .x=0xb8, .y=0xd1, .sp=0x84, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x41}, {.addr=0x731d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x731e, .a=0x41, .x=0xb9, .y=0xd1, .sp=0x84, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x41}, {.addr=0x731d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x731d, .value=0xbf, .type=IO_READ},
        {.addr=0x731e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xc4ea, .a=0x9d, .x=0x1d, .y=0x99, .sp=0xba, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x4d}, {.addr=0xc4ea, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc4eb, .a=0x4d, .x=0x1e, .y=0x99, .sp=0xba, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x4d}, {.addr=0xc4ea, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc4ea, .value=0xbf, .type=IO_READ},
        {.addr=0xc4eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x53ce, .a=0x1c, .x=0xb2, .y=0x24, .sp=0x68, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x1c}, {.addr=0x53ce, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x53cf, .a=0x1c, .x=0xb3, .y=0x24, .sp=0x68, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x1c}, {.addr=0x53ce, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x53ce, .value=0xbf, .type=IO_READ},
        {.addr=0x53cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xbc7b, .a=0x29, .x=0x0a, .y=0xda, .sp=0x3e, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0xaa}, {.addr=0xbc7b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbc7c, .a=0xaa, .x=0x0b, .y=0xda, .sp=0x3e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0xaa}, {.addr=0xbc7b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbc7b, .value=0xbf, .type=IO_READ},
        {.addr=0xbc7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x26ec, .a=0x50, .x=0x3e, .y=0x7f, .sp=0x72, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x2a}, {.addr=0x26ec, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x26ed, .a=0x2a, .x=0x3f, .y=0x7f, .sp=0x72, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x2a}, {.addr=0x26ec, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x26ec, .value=0xbf, .type=IO_READ},
        {.addr=0x26ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x6b77, .a=0x60, .x=0x1b, .y=0xa4, .sp=0x0d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x2f}, {.addr=0x6b77, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6b78, .a=0x2f, .x=0x1c, .y=0xa4, .sp=0x0d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x2f}, {.addr=0x6b77, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6b77, .value=0xbf, .type=IO_READ},
        {.addr=0x6b78, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xace3, .a=0x2f, .x=0x2e, .y=0xf0, .sp=0x54, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x32}, {.addr=0xace3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xace4, .a=0x32, .x=0x2f, .y=0xf0, .sp=0x54, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x32}, {.addr=0xace3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xace3, .value=0xbf, .type=IO_READ},
        {.addr=0xace4, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x2013, .a=0x2b, .x=0xef, .y=0x47, .sp=0x69, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x79}, {.addr=0x2013, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2014, .a=0x79, .x=0xf0, .y=0x47, .sp=0x69, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x79}, {.addr=0x2013, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2013, .value=0xbf, .type=IO_READ},
        {.addr=0x2014, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x2b1c, .a=0x58, .x=0xab, .y=0xd3, .sp=0x86, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xa4}, {.addr=0x2b1c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2b1d, .a=0xa4, .x=0xac, .y=0xd3, .sp=0x86, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xa4}, {.addr=0x2b1c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2b1c, .value=0xbf, .type=IO_READ},
        {.addr=0x2b1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x7123, .a=0x28, .x=0x11, .y=0x87, .sp=0x80, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0xe6}, {.addr=0x7123, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7124, .a=0xe6, .x=0x12, .y=0x87, .sp=0x80, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0xe6}, {.addr=0x7123, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7123, .value=0xbf, .type=IO_READ},
        {.addr=0x7124, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x36f1, .a=0xc7, .x=0xee, .y=0x3d, .sp=0xe8, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x8e}, {.addr=0x36f1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x36f2, .a=0x8e, .x=0xef, .y=0x3d, .sp=0xe8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x8e}, {.addr=0x36f1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x36f1, .value=0xbf, .type=IO_READ},
        {.addr=0x36f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xf96a, .a=0x68, .x=0xc3, .y=0x7b, .sp=0xd3, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x5d}, {.addr=0xf96a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf96b, .a=0x5d, .x=0xc4, .y=0x7b, .sp=0xd3, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x5d}, {.addr=0xf96a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf96a, .value=0xbf, .type=IO_READ},
        {.addr=0xf96b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x5006, .a=0x4d, .x=0x9e, .y=0x59, .sp=0x61, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x35}, {.addr=0x5006, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5007, .a=0x35, .x=0x9f, .y=0x59, .sp=0x61, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x35}, {.addr=0x5006, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5006, .value=0xbf, .type=IO_READ},
        {.addr=0x5007, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x86fc, .a=0x75, .x=0x0f, .y=0x55, .sp=0xe7, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0xad}, {.addr=0x86fc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x86fd, .a=0xad, .x=0x10, .y=0x55, .sp=0xe7, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0xad}, {.addr=0x86fc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x86fc, .value=0xbf, .type=IO_READ},
        {.addr=0x86fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xfad8, .a=0xa9, .x=0x89, .y=0xb8, .sp=0xef, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x0f}, {.addr=0xfad8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfad9, .a=0x0f, .x=0x8a, .y=0xb8, .sp=0xef, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x0f}, {.addr=0xfad8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfad8, .value=0xbf, .type=IO_READ},
        {.addr=0xfad9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x3f68, .a=0x6a, .x=0xed, .y=0x63, .sp=0xd0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x49}, {.addr=0x3f68, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3f69, .a=0x49, .x=0xee, .y=0x63, .sp=0xd0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x49}, {.addr=0x3f68, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3f68, .value=0xbf, .type=IO_READ},
        {.addr=0x3f69, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x1180, .a=0xd6, .x=0xd4, .y=0x8e, .sp=0xac, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xe4}, {.addr=0x1180, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1181, .a=0xe4, .x=0xd5, .y=0x8e, .sp=0xac, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xe4}, {.addr=0x1180, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1180, .value=0xbf, .type=IO_READ},
        {.addr=0x1181, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x9ca0, .a=0x60, .x=0xf9, .y=0x39, .sp=0xe6, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x44}, {.addr=0x9ca0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9ca1, .a=0x44, .x=0xfa, .y=0x39, .sp=0xe6, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x44}, {.addr=0x9ca0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9ca0, .value=0xbf, .type=IO_READ},
        {.addr=0x9ca1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x87c6, .a=0x71, .x=0xbd, .y=0xbd, .sp=0xcd, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x22}, {.addr=0x87c6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x87c7, .a=0x22, .x=0xbe, .y=0xbd, .sp=0xcd, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x22}, {.addr=0x87c6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x87c6, .value=0xbf, .type=IO_READ},
        {.addr=0x87c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x43f9, .a=0xd8, .x=0x98, .y=0x8e, .sp=0x9f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0xc5}, {.addr=0x43f9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x43fa, .a=0xc5, .x=0x99, .y=0x8e, .sp=0x9f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xc5}, {.addr=0x43f9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x43f9, .value=0xbf, .type=IO_READ},
        {.addr=0x43fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xb7aa, .a=0xd5, .x=0xce, .y=0x44, .sp=0x0b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x84}, {.addr=0xb7aa, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb7ab, .a=0x84, .x=0xcf, .y=0x44, .sp=0x0b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x84}, {.addr=0xb7aa, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb7aa, .value=0xbf, .type=IO_READ},
        {.addr=0xb7ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x1c29, .a=0xb4, .x=0x6b, .y=0x2f, .sp=0x20, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x37}, {.addr=0x1c29, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1c2a, .a=0x37, .x=0x6c, .y=0x2f, .sp=0x20, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x37}, {.addr=0x1c29, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1c29, .value=0xbf, .type=IO_READ},
        {.addr=0x1c2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x83ad, .a=0x5c, .x=0xbb, .y=0x8a, .sp=0x3c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x71}, {.addr=0x83ad, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x83ae, .a=0x71, .x=0xbc, .y=0x8a, .sp=0x3c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x71}, {.addr=0x83ad, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x83ad, .value=0xbf, .type=IO_READ},
        {.addr=0x83ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x211e, .a=0xed, .x=0x8b, .y=0xa5, .sp=0xaf, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0x20}, {.addr=0x211e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x211f, .a=0x20, .x=0x8c, .y=0xa5, .sp=0xaf, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0x20}, {.addr=0x211e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x211e, .value=0xbf, .type=IO_READ},
        {.addr=0x211f, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x5e35, .a=0xa7, .x=0xe2, .y=0x3f, .sp=0x0e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x65}, {.addr=0x5e35, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5e36, .a=0x65, .x=0xe3, .y=0x3f, .sp=0x0e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x65}, {.addr=0x5e35, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5e35, .value=0xbf, .type=IO_READ},
        {.addr=0x5e36, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xbb08, .a=0xd5, .x=0xbb, .y=0xa8, .sp=0x30, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0xd4}, {.addr=0xbb08, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbb09, .a=0xd4, .x=0xbc, .y=0xa8, .sp=0x30, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0xd4}, {.addr=0xbb08, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbb08, .value=0xbf, .type=IO_READ},
        {.addr=0xbb09, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x8cb6, .a=0x1f, .x=0xfa, .y=0x94, .sp=0x9c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x09}, {.addr=0x8cb6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8cb7, .a=0x09, .x=0xfb, .y=0x94, .sp=0x9c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x09}, {.addr=0x8cb6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8cb6, .value=0xbf, .type=IO_READ},
        {.addr=0x8cb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xbccd, .a=0xaf, .x=0x72, .y=0xad, .sp=0x96, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x7f}, {.addr=0xbccd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbcce, .a=0x7f, .x=0x73, .y=0xad, .sp=0x96, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x7f}, {.addr=0xbccd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbccd, .value=0xbf, .type=IO_READ},
        {.addr=0xbcce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x6411, .a=0x1e, .x=0x45, .y=0x65, .sp=0xb6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x1e}, {.addr=0x6411, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6412, .a=0x1e, .x=0x46, .y=0x65, .sp=0xb6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x1e}, {.addr=0x6411, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6411, .value=0xbf, .type=IO_READ},
        {.addr=0x6412, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xb345, .a=0x3d, .x=0x31, .y=0x4c, .sp=0xef, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x97}, {.addr=0xb345, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb346, .a=0x97, .x=0x32, .y=0x4c, .sp=0xef, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x97}, {.addr=0xb345, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb345, .value=0xbf, .type=IO_READ},
        {.addr=0xb346, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xf63b, .a=0xae, .x=0x12, .y=0x66, .sp=0xa4, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x04}, {.addr=0xf63b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf63c, .a=0x04, .x=0x13, .y=0x66, .sp=0xa4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x04}, {.addr=0xf63b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf63b, .value=0xbf, .type=IO_READ},
        {.addr=0xf63c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x4341, .a=0x1a, .x=0x16, .y=0x88, .sp=0xa0, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x36}, {.addr=0x4341, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4342, .a=0x36, .x=0x17, .y=0x88, .sp=0xa0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x36}, {.addr=0x4341, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4341, .value=0xbf, .type=IO_READ},
        {.addr=0x4342, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x13d0, .a=0x42, .x=0x1e, .y=0x74, .sp=0xc0, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0x1a}, {.addr=0x13d0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x13d1, .a=0x1a, .x=0x1f, .y=0x74, .sp=0xc0, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0x1a}, {.addr=0x13d0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x13d0, .value=0xbf, .type=IO_READ},
        {.addr=0x13d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x8661, .a=0x48, .x=0x82, .y=0xe0, .sp=0x2b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xdf}, {.addr=0x8661, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8662, .a=0xdf, .x=0x83, .y=0xe0, .sp=0x2b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xdf}, {.addr=0x8661, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8661, .value=0xbf, .type=IO_READ},
        {.addr=0x8662, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x2d35, .a=0x41, .x=0xd8, .y=0x3e, .sp=0x3c, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x61}, {.addr=0x2d35, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2d36, .a=0x61, .x=0xd9, .y=0x3e, .sp=0x3c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x61}, {.addr=0x2d35, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2d35, .value=0xbf, .type=IO_READ},
        {.addr=0x2d36, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x3590, .a=0x32, .x=0xa0, .y=0x9c, .sp=0x3b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xad}, {.addr=0x3590, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3591, .a=0xad, .x=0xa1, .y=0x9c, .sp=0x3b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xad}, {.addr=0x3590, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3590, .value=0xbf, .type=IO_READ},
        {.addr=0x3591, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x69e0, .a=0x33, .x=0xe3, .y=0x1d, .sp=0xe6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0x82}, {.addr=0x69e0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x69e1, .a=0x82, .x=0xe4, .y=0x1d, .sp=0xe6, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x82}, {.addr=0x69e0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x69e0, .value=0xbf, .type=IO_READ},
        {.addr=0x69e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x05be, .a=0x3c, .x=0x09, .y=0xfb, .sp=0xea, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xb5}, {.addr=0x05be, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x05bf, .a=0xb5, .x=0x0a, .y=0xfb, .sp=0xea, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xb5}, {.addr=0x05be, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x05be, .value=0xbf, .type=IO_READ},
        {.addr=0x05bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xf400, .a=0xb8, .x=0x32, .y=0x70, .sp=0xb3, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xc7}, {.addr=0xf400, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf401, .a=0xc7, .x=0x33, .y=0x70, .sp=0xb3, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xc7}, {.addr=0xf400, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf400, .value=0xbf, .type=IO_READ},
        {.addr=0xf401, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xb916, .a=0x8e, .x=0x10, .y=0xee, .sp=0x1b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xe6}, {.addr=0xb916, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb917, .a=0xe6, .x=0x11, .y=0xee, .sp=0x1b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xe6}, {.addr=0xb916, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb916, .value=0xbf, .type=IO_READ},
        {.addr=0xb917, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x681d, .a=0x88, .x=0x3e, .y=0xdd, .sp=0x05, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x5d}, {.addr=0x681d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x681e, .a=0x5d, .x=0x3f, .y=0xdd, .sp=0x05, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x5d}, {.addr=0x681d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x681d, .value=0xbf, .type=IO_READ},
        {.addr=0x681e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x8ae3, .a=0xfd, .x=0x52, .y=0x7a, .sp=0xf8, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x70}, {.addr=0x8ae3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8ae4, .a=0x70, .x=0x53, .y=0x7a, .sp=0xf8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x70}, {.addr=0x8ae3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8ae3, .value=0xbf, .type=IO_READ},
        {.addr=0x8ae4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x3ce8, .a=0x1d, .x=0x62, .y=0xc0, .sp=0x1b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x5a}, {.addr=0x3ce8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3ce9, .a=0x5a, .x=0x63, .y=0xc0, .sp=0x1b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x5a}, {.addr=0x3ce8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3ce8, .value=0xbf, .type=IO_READ},
        {.addr=0x3ce9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xcced, .a=0xe3, .x=0x3f, .y=0x51, .sp=0x55, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x88}, {.addr=0xcced, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xccee, .a=0x88, .x=0x40, .y=0x51, .sp=0x55, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x88}, {.addr=0xcced, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcced, .value=0xbf, .type=IO_READ},
        {.addr=0xccee, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xb614, .a=0x8d, .x=0xea, .y=0x71, .sp=0xcd, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0xf7}, {.addr=0xb614, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb615, .a=0xf7, .x=0xeb, .y=0x71, .sp=0xcd, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0xf7}, {.addr=0xb614, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb614, .value=0xbf, .type=IO_READ},
        {.addr=0xb615, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x4a76, .a=0x1a, .x=0x91, .y=0xdc, .sp=0xe3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0xd8}, {.addr=0x4a76, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4a77, .a=0xd8, .x=0x92, .y=0xdc, .sp=0xe3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0xd8}, {.addr=0x4a76, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4a76, .value=0xbf, .type=IO_READ},
        {.addr=0x4a77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0091, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x008d, .a=0xcf, .x=0x1f, .y=0xdb, .sp=0xd4, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0xbf}, {.addr=0x011f, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x008e, .a=0xec, .x=0x20, .y=0xdb, .sp=0xd4, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0xbf}, {.addr=0x011f, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x008d, .value=0xbf, .type=IO_READ},
        {.addr=0x008e, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xc632, .a=0xeb, .x=0x35, .y=0xa1, .sp=0x2a, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xaa}, {.addr=0xc632, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc633, .a=0xaa, .x=0x36, .y=0xa1, .sp=0x2a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xaa}, {.addr=0xc632, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc632, .value=0xbf, .type=IO_READ},
        {.addr=0xc633, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x2989, .a=0xbe, .x=0x75, .y=0x2f, .sp=0xcd, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xb4}, {.addr=0x2989, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x298a, .a=0xb4, .x=0x76, .y=0x2f, .sp=0xcd, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xb4}, {.addr=0x2989, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2989, .value=0xbf, .type=IO_READ},
        {.addr=0x298a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x6e50, .a=0x72, .x=0x37, .y=0x4e, .sp=0xc1, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xe5}, {.addr=0x6e50, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6e51, .a=0xe5, .x=0x38, .y=0x4e, .sp=0xc1, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xe5}, {.addr=0x6e50, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6e50, .value=0xbf, .type=IO_READ},
        {.addr=0x6e51, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xb657, .a=0xec, .x=0x7a, .y=0xd8, .sp=0x5c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x90}, {.addr=0xb657, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb658, .a=0x90, .x=0x7b, .y=0xd8, .sp=0x5c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x90}, {.addr=0xb657, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb657, .value=0xbf, .type=IO_READ},
        {.addr=0xb658, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xb8f6, .a=0x06, .x=0x24, .y=0xae, .sp=0x47, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xb7}, {.addr=0xb8f6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb8f7, .a=0xb7, .x=0x25, .y=0xae, .sp=0x47, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xb7}, {.addr=0xb8f6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb8f6, .value=0xbf, .type=IO_READ},
        {.addr=0xb8f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xa6c7, .a=0x2f, .x=0xc5, .y=0x64, .sp=0xee, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x59}, {.addr=0xa6c7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa6c8, .a=0x59, .x=0xc6, .y=0x64, .sp=0xee, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x59}, {.addr=0xa6c7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa6c7, .value=0xbf, .type=IO_READ},
        {.addr=0xa6c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x02ae, .a=0x0f, .x=0xfe, .y=0xa1, .sp=0x3f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x46}, {.addr=0x02ae, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x02af, .a=0x46, .x=0xff, .y=0xa1, .sp=0x3f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x46}, {.addr=0x02ae, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x02ae, .value=0xbf, .type=IO_READ},
        {.addr=0x02af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x0583, .a=0x12, .x=0xb0, .y=0xb8, .sp=0x60, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x2e}, {.addr=0x0583, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0584, .a=0x2e, .x=0xb1, .y=0xb8, .sp=0x60, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x2e}, {.addr=0x0583, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0583, .value=0xbf, .type=IO_READ},
        {.addr=0x0584, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x7d70, .a=0x17, .x=0x3b, .y=0xce, .sp=0x1e, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x30}, {.addr=0x7d70, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7d71, .a=0x30, .x=0x3c, .y=0xce, .sp=0x1e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x30}, {.addr=0x7d70, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7d70, .value=0xbf, .type=IO_READ},
        {.addr=0x7d71, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x4a67, .a=0x05, .x=0x7d, .y=0x92, .sp=0xbc, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x4d}, {.addr=0x4a67, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4a68, .a=0x4d, .x=0x7e, .y=0x92, .sp=0xbc, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x4d}, {.addr=0x4a67, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4a67, .value=0xbf, .type=IO_READ},
        {.addr=0x4a68, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x5745, .a=0x9d, .x=0x18, .y=0xa6, .sp=0x8a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x12}, {.addr=0x5745, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5746, .a=0x12, .x=0x19, .y=0xa6, .sp=0x8a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x12}, {.addr=0x5745, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5745, .value=0xbf, .type=IO_READ},
        {.addr=0x5746, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xe1d0, .a=0xfa, .x=0xb7, .y=0x1b, .sp=0xa7, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x52}, {.addr=0xe1d0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe1d1, .a=0x52, .x=0xb8, .y=0x1b, .sp=0xa7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x52}, {.addr=0xe1d0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe1d0, .value=0xbf, .type=IO_READ},
        {.addr=0xe1d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xceda, .a=0x6b, .x=0xaf, .y=0x3c, .sp=0x82, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xce}, {.addr=0xceda, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcedb, .a=0xce, .x=0xb0, .y=0x3c, .sp=0x82, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xce}, {.addr=0xceda, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xceda, .value=0xbf, .type=IO_READ},
        {.addr=0xcedb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x5668, .a=0xd7, .x=0x54, .y=0xf4, .sp=0xf2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x30}, {.addr=0x5668, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5669, .a=0x30, .x=0x55, .y=0xf4, .sp=0xf2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x30}, {.addr=0x5668, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5668, .value=0xbf, .type=IO_READ},
        {.addr=0x5669, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xe5ec, .a=0x45, .x=0x23, .y=0xba, .sp=0xd0, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x66}, {.addr=0xe5ec, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe5ed, .a=0x66, .x=0x24, .y=0xba, .sp=0xd0, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x66}, {.addr=0xe5ec, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe5ec, .value=0xbf, .type=IO_READ},
        {.addr=0xe5ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xe990, .a=0xed, .x=0x51, .y=0xe1, .sp=0x4f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x39}, {.addr=0xe990, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe991, .a=0x39, .x=0x52, .y=0xe1, .sp=0x4f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x39}, {.addr=0xe990, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe990, .value=0xbf, .type=IO_READ},
        {.addr=0xe991, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x4460, .a=0x20, .x=0x02, .y=0xcf, .sp=0x78, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0xd3}, {.addr=0x4460, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4461, .a=0xd3, .x=0x03, .y=0xcf, .sp=0x78, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0xd3}, {.addr=0x4460, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4460, .value=0xbf, .type=IO_READ},
        {.addr=0x4461, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x8372, .a=0xe9, .x=0xdf, .y=0x71, .sp=0x8b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x39}, {.addr=0x8372, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8373, .a=0x39, .x=0xe0, .y=0x71, .sp=0x8b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x39}, {.addr=0x8372, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8372, .value=0xbf, .type=IO_READ},
        {.addr=0x8373, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xfcb9, .a=0x50, .x=0xac, .y=0xd5, .sp=0x88, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x2f}, {.addr=0xfcb9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfcba, .a=0x2f, .x=0xad, .y=0xd5, .sp=0x88, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x2f}, {.addr=0xfcb9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfcb9, .value=0xbf, .type=IO_READ},
        {.addr=0xfcba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x7397, .a=0x40, .x=0x47, .y=0xcb, .sp=0x5d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xd7}, {.addr=0x7397, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7398, .a=0xd7, .x=0x48, .y=0xcb, .sp=0x5d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xd7}, {.addr=0x7397, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7397, .value=0xbf, .type=IO_READ},
        {.addr=0x7398, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xeeac, .a=0x6b, .x=0x84, .y=0x08, .sp=0xa8, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x12}, {.addr=0xeeac, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xeead, .a=0x12, .x=0x85, .y=0x08, .sp=0xa8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x12}, {.addr=0xeeac, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xeeac, .value=0xbf, .type=IO_READ},
        {.addr=0xeead, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x8a3b, .a=0xe8, .x=0x63, .y=0xd7, .sp=0x1a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0x0e}, {.addr=0x8a3b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8a3c, .a=0x0e, .x=0x64, .y=0xd7, .sp=0x1a, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0x0e}, {.addr=0x8a3b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8a3b, .value=0xbf, .type=IO_READ},
        {.addr=0x8a3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x0dcb, .a=0x50, .x=0x79, .y=0xa2, .sp=0xf0, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x1d}, {.addr=0x0dcb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0dcc, .a=0x1d, .x=0x7a, .y=0xa2, .sp=0xf0, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x1d}, {.addr=0x0dcb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0dcb, .value=0xbf, .type=IO_READ},
        {.addr=0x0dcc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x7db3, .a=0x85, .x=0xbc, .y=0x77, .sp=0x0c, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x90}, {.addr=0x7db3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7db4, .a=0x90, .x=0xbd, .y=0x77, .sp=0x0c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x90}, {.addr=0x7db3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7db3, .value=0xbf, .type=IO_READ},
        {.addr=0x7db4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xda5d, .a=0x92, .x=0x18, .y=0x1c, .sp=0x8a, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x47}, {.addr=0xda5d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xda5e, .a=0x47, .x=0x19, .y=0x1c, .sp=0x8a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x47}, {.addr=0xda5d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xda5d, .value=0xbf, .type=IO_READ},
        {.addr=0xda5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x80a3, .a=0x1f, .x=0x00, .y=0x35, .sp=0xb2, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x83}, {.addr=0x80a3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x80a4, .a=0x83, .x=0x01, .y=0x35, .sp=0xb2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x83}, {.addr=0x80a3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x80a3, .value=0xbf, .type=IO_READ},
        {.addr=0x80a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x1a60, .a=0xec, .x=0x91, .y=0x20, .sp=0xfc, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0xf5}, {.addr=0x1a60, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1a61, .a=0xf5, .x=0x92, .y=0x20, .sp=0xfc, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xf5}, {.addr=0x1a60, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1a60, .value=0xbf, .type=IO_READ},
        {.addr=0x1a61, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x5290, .a=0x3c, .x=0x49, .y=0x62, .sp=0x99, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0xa5}, {.addr=0x5290, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5291, .a=0xa5, .x=0x4a, .y=0x62, .sp=0x99, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0xa5}, {.addr=0x5290, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5290, .value=0xbf, .type=IO_READ},
        {.addr=0x5291, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x7319, .a=0xe2, .x=0x0c, .y=0x95, .sp=0x8c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0xef}, {.addr=0x7319, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x731a, .a=0xef, .x=0x0d, .y=0x95, .sp=0x8c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xef}, {.addr=0x7319, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7319, .value=0xbf, .type=IO_READ},
        {.addr=0x731a, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xc695, .a=0xa5, .x=0xeb, .y=0xa7, .sp=0x85, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x51}, {.addr=0xc695, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc696, .a=0x51, .x=0xec, .y=0xa7, .sp=0x85, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x51}, {.addr=0xc695, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc695, .value=0xbf, .type=IO_READ},
        {.addr=0xc696, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x93da, .a=0x15, .x=0xaf, .y=0x70, .sp=0xbf, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0xff}, {.addr=0x93da, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x93db, .a=0xff, .x=0xb0, .y=0x70, .sp=0xbf, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xff}, {.addr=0x93da, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x93da, .value=0xbf, .type=IO_READ},
        {.addr=0x93db, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x5c59, .a=0x42, .x=0x25, .y=0xcc, .sp=0x9f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x5a}, {.addr=0x5c59, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5c5a, .a=0x5a, .x=0x26, .y=0xcc, .sp=0x9f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x5a}, {.addr=0x5c59, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5c59, .value=0xbf, .type=IO_READ},
        {.addr=0x5c5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x028c, .a=0x59, .x=0x52, .y=0x42, .sp=0x78, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0xb9}, {.addr=0x028c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x028d, .a=0xb9, .x=0x53, .y=0x42, .sp=0x78, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0xb9}, {.addr=0x028c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x028c, .value=0xbf, .type=IO_READ},
        {.addr=0x028d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x677d, .a=0x98, .x=0x3f, .y=0x39, .sp=0x7d, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x8b}, {.addr=0x677d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x677e, .a=0x8b, .x=0x40, .y=0x39, .sp=0x7d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x8b}, {.addr=0x677d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x677d, .value=0xbf, .type=IO_READ},
        {.addr=0x677e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xd373, .a=0xe3, .x=0xa1, .y=0x41, .sp=0x21, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x4e}, {.addr=0xd373, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd374, .a=0x4e, .x=0xa2, .y=0x41, .sp=0x21, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x4e}, {.addr=0xd373, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd373, .value=0xbf, .type=IO_READ},
        {.addr=0xd374, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x5a87, .a=0xd2, .x=0xe4, .y=0x8c, .sp=0x72, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x70}, {.addr=0x5a87, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5a88, .a=0x70, .x=0xe5, .y=0x8c, .sp=0x72, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x70}, {.addr=0x5a87, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5a87, .value=0xbf, .type=IO_READ},
        {.addr=0x5a88, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x273c, .a=0xc8, .x=0x84, .y=0x4e, .sp=0xa9, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x58}, {.addr=0x273c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x273d, .a=0x58, .x=0x85, .y=0x4e, .sp=0xa9, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x58}, {.addr=0x273c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x273c, .value=0xbf, .type=IO_READ},
        {.addr=0x273d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x3f4d, .a=0x21, .x=0xe4, .y=0xc9, .sp=0xf8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x0a}, {.addr=0x3f4d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3f4e, .a=0x0a, .x=0xe5, .y=0xc9, .sp=0xf8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x0a}, {.addr=0x3f4d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3f4d, .value=0xbf, .type=IO_READ},
        {.addr=0x3f4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x37a0, .a=0xb6, .x=0x20, .y=0x62, .sp=0xe4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x21}, {.addr=0x37a0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x37a1, .a=0x21, .x=0x21, .y=0x62, .sp=0xe4, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x21}, {.addr=0x37a0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x37a0, .value=0xbf, .type=IO_READ},
        {.addr=0x37a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0100) {
    const struct CPU_State initial_cpu = {.pc=0x292f, .a=0xe4, .x=0x31, .y=0xb7, .sp=0x55, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x7b}, {.addr=0x292f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2930, .a=0x7b, .x=0x32, .y=0xb7, .sp=0x55, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x7b}, {.addr=0x292f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x292f, .value=0xbf, .type=IO_READ},
        {.addr=0x2930, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0101) {
    const struct CPU_State initial_cpu = {.pc=0x11fe, .a=0x4e, .x=0x75, .y=0xc9, .sp=0x12, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x83}, {.addr=0x11fe, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x11ff, .a=0x83, .x=0x76, .y=0xc9, .sp=0x12, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x83}, {.addr=0x11fe, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x11fe, .value=0xbf, .type=IO_READ},
        {.addr=0x11ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0102) {
    const struct CPU_State initial_cpu = {.pc=0xb47f, .a=0x39, .x=0x69, .y=0xbb, .sp=0x39, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x05}, {.addr=0xb47f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb480, .a=0x05, .x=0x6a, .y=0xbb, .sp=0x39, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x05}, {.addr=0xb47f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb47f, .value=0xbf, .type=IO_READ},
        {.addr=0xb480, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0103) {
    const struct CPU_State initial_cpu = {.pc=0x9174, .a=0xd1, .x=0x15, .y=0xfc, .sp=0x8c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0x86}, {.addr=0x9174, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9175, .a=0x86, .x=0x16, .y=0xfc, .sp=0x8c, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0x86}, {.addr=0x9174, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9174, .value=0xbf, .type=IO_READ},
        {.addr=0x9175, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0105) {
    const struct CPU_State initial_cpu = {.pc=0x829a, .a=0x7d, .x=0x2c, .y=0xcc, .sp=0x67, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x83}, {.addr=0x829a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x829b, .a=0x83, .x=0x2d, .y=0xcc, .sp=0x67, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x83}, {.addr=0x829a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x829a, .value=0xbf, .type=IO_READ},
        {.addr=0x829b, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0106) {
    const struct CPU_State initial_cpu = {.pc=0x72a1, .a=0x3a, .x=0xe7, .y=0xe6, .sp=0x1f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x86}, {.addr=0x72a1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x72a2, .a=0x86, .x=0xe8, .y=0xe6, .sp=0x1f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x86}, {.addr=0x72a1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x72a1, .value=0xbf, .type=IO_READ},
        {.addr=0x72a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0107) {
    const struct CPU_State initial_cpu = {.pc=0x9aef, .a=0x5f, .x=0xe8, .y=0x60, .sp=0x97, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xdf}, {.addr=0x9aef, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9af0, .a=0xdf, .x=0xe9, .y=0x60, .sp=0x97, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xdf}, {.addr=0x9aef, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9aef, .value=0xbf, .type=IO_READ},
        {.addr=0x9af0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0108) {
    const struct CPU_State initial_cpu = {.pc=0xf9ea, .a=0x52, .x=0x62, .y=0x1a, .sp=0x46, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0xcc}, {.addr=0xf9ea, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf9eb, .a=0xcc, .x=0x63, .y=0x1a, .sp=0x46, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0xcc}, {.addr=0xf9ea, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf9ea, .value=0xbf, .type=IO_READ},
        {.addr=0xf9eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0109) {
    const struct CPU_State initial_cpu = {.pc=0x6ddb, .a=0xaa, .x=0x95, .y=0x1e, .sp=0xec, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x76}, {.addr=0x6ddb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6ddc, .a=0x76, .x=0x96, .y=0x1e, .sp=0xec, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x76}, {.addr=0x6ddb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6ddb, .value=0xbf, .type=IO_READ},
        {.addr=0x6ddc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_010A) {
    const struct CPU_State initial_cpu = {.pc=0xed3d, .a=0x88, .x=0x9b, .y=0xc7, .sp=0xe8, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x27}, {.addr=0xed3d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xed3e, .a=0x27, .x=0x9c, .y=0xc7, .sp=0xe8, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x27}, {.addr=0xed3d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xed3d, .value=0xbf, .type=IO_READ},
        {.addr=0xed3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_010B) {
    const struct CPU_State initial_cpu = {.pc=0x3f54, .a=0x0d, .x=0xc8, .y=0x0f, .sp=0xf4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0xc9}, {.addr=0x3f54, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3f55, .a=0xc9, .x=0xc9, .y=0x0f, .sp=0xf4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0xc9}, {.addr=0x3f54, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3f54, .value=0xbf, .type=IO_READ},
        {.addr=0x3f55, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_010C) {
    const struct CPU_State initial_cpu = {.pc=0x1617, .a=0xe1, .x=0x6d, .y=0x41, .sp=0x23, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x65}, {.addr=0x1617, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1618, .a=0x65, .x=0x6e, .y=0x41, .sp=0x23, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0x65}, {.addr=0x1617, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1617, .value=0xbf, .type=IO_READ},
        {.addr=0x1618, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_010D) {
    const struct CPU_State initial_cpu = {.pc=0x1c44, .a=0xc6, .x=0x5d, .y=0x1f, .sp=0x28, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xb9}, {.addr=0x1c44, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1c45, .a=0xb9, .x=0x5e, .y=0x1f, .sp=0x28, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xb9}, {.addr=0x1c44, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1c44, .value=0xbf, .type=IO_READ},
        {.addr=0x1c45, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_010E) {
    const struct CPU_State initial_cpu = {.pc=0x5bf9, .a=0x8f, .x=0x26, .y=0x40, .sp=0x1a, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x31}, {.addr=0x5bf9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5bfa, .a=0x31, .x=0x27, .y=0x40, .sp=0x1a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x31}, {.addr=0x5bf9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5bf9, .value=0xbf, .type=IO_READ},
        {.addr=0x5bfa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_010F) {
    const struct CPU_State initial_cpu = {.pc=0xa12d, .a=0xf3, .x=0x4f, .y=0x9a, .sp=0x5f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0xfe}, {.addr=0xa12d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa12e, .a=0xfe, .x=0x50, .y=0x9a, .sp=0x5f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0xfe}, {.addr=0xa12d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa12d, .value=0xbf, .type=IO_READ},
        {.addr=0xa12e, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0110) {
    const struct CPU_State initial_cpu = {.pc=0x242f, .a=0x52, .x=0xe3, .y=0xc2, .sp=0xd3, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xe5}, {.addr=0x242f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2430, .a=0xe5, .x=0xe4, .y=0xc2, .sp=0xd3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xe5}, {.addr=0x242f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x242f, .value=0xbf, .type=IO_READ},
        {.addr=0x2430, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0111) {
    const struct CPU_State initial_cpu = {.pc=0xe47e, .a=0x77, .x=0x8f, .y=0x90, .sp=0xf7, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x26}, {.addr=0xe47e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe47f, .a=0x26, .x=0x90, .y=0x90, .sp=0xf7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x26}, {.addr=0xe47e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe47e, .value=0xbf, .type=IO_READ},
        {.addr=0xe47f, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0112) {
    const struct CPU_State initial_cpu = {.pc=0x65d4, .a=0x03, .x=0x78, .y=0xce, .sp=0x4a, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0x25}, {.addr=0x65d4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x65d5, .a=0x25, .x=0x79, .y=0xce, .sp=0x4a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0x25}, {.addr=0x65d4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x65d4, .value=0xbf, .type=IO_READ},
        {.addr=0x65d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0113) {
    const struct CPU_State initial_cpu = {.pc=0xf8b6, .a=0xc9, .x=0x3b, .y=0xd4, .sp=0x30, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x4d}, {.addr=0xf8b6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf8b7, .a=0x4d, .x=0x3c, .y=0xd4, .sp=0x30, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x4d}, {.addr=0xf8b6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf8b6, .value=0xbf, .type=IO_READ},
        {.addr=0xf8b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0114) {
    const struct CPU_State initial_cpu = {.pc=0xb8a8, .a=0x29, .x=0xc6, .y=0x6c, .sp=0x3e, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0xfa}, {.addr=0xb8a8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb8a9, .a=0xfa, .x=0xc7, .y=0x6c, .sp=0x3e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0xfa}, {.addr=0xb8a8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb8a8, .value=0xbf, .type=IO_READ},
        {.addr=0xb8a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0115) {
    const struct CPU_State initial_cpu = {.pc=0xd468, .a=0x97, .x=0x91, .y=0x69, .sp=0x7b, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0x7b}, {.addr=0xd468, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd469, .a=0x7b, .x=0x92, .y=0x69, .sp=0x7b, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0x7b}, {.addr=0xd468, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd468, .value=0xbf, .type=IO_READ},
        {.addr=0xd469, .value=DUMMY, .type=IO_READ},
        {.addr=0x0091, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0116) {
    const struct CPU_State initial_cpu = {.pc=0xb148, .a=0x77, .x=0xe3, .y=0x3a, .sp=0x14, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xae}, {.addr=0xb148, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb149, .a=0xae, .x=0xe4, .y=0x3a, .sp=0x14, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xae}, {.addr=0xb148, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb148, .value=0xbf, .type=IO_READ},
        {.addr=0xb149, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0117) {
    const struct CPU_State initial_cpu = {.pc=0xb363, .a=0x5f, .x=0xeb, .y=0x11, .sp=0xbf, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x12}, {.addr=0xb363, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb364, .a=0x12, .x=0xec, .y=0x11, .sp=0xbf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x12}, {.addr=0xb363, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb363, .value=0xbf, .type=IO_READ},
        {.addr=0xb364, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0118) {
    const struct CPU_State initial_cpu = {.pc=0x2ca5, .a=0x3b, .x=0x79, .y=0x95, .sp=0xc5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x5a}, {.addr=0x2ca5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2ca6, .a=0x5a, .x=0x7a, .y=0x95, .sp=0xc5, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x5a}, {.addr=0x2ca5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2ca5, .value=0xbf, .type=IO_READ},
        {.addr=0x2ca6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0119) {
    const struct CPU_State initial_cpu = {.pc=0x8b88, .a=0x74, .x=0x2c, .y=0x9a, .sp=0xfd, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xd3}, {.addr=0x8b88, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8b89, .a=0xd3, .x=0x2d, .y=0x9a, .sp=0xfd, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xd3}, {.addr=0x8b88, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8b88, .value=0xbf, .type=IO_READ},
        {.addr=0x8b89, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_011A) {
    const struct CPU_State initial_cpu = {.pc=0xc787, .a=0x20, .x=0xe8, .y=0xf5, .sp=0x61, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xcb}, {.addr=0xc787, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc788, .a=0xcb, .x=0xe9, .y=0xf5, .sp=0x61, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xcb}, {.addr=0xc787, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc787, .value=0xbf, .type=IO_READ},
        {.addr=0xc788, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_011B) {
    const struct CPU_State initial_cpu = {.pc=0x584e, .a=0x17, .x=0xd4, .y=0x3d, .sp=0x3f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xef}, {.addr=0x584e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x584f, .a=0xef, .x=0xd5, .y=0x3d, .sp=0x3f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xef}, {.addr=0x584e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x584e, .value=0xbf, .type=IO_READ},
        {.addr=0x584f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_011C) {
    const struct CPU_State initial_cpu = {.pc=0xd68d, .a=0x08, .x=0xd4, .y=0x5b, .sp=0xdb, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x3e}, {.addr=0xd68d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd68e, .a=0x3e, .x=0xd5, .y=0x5b, .sp=0xdb, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x3e}, {.addr=0xd68d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd68d, .value=0xbf, .type=IO_READ},
        {.addr=0xd68e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_011D) {
    const struct CPU_State initial_cpu = {.pc=0x5012, .a=0x96, .x=0x75, .y=0x1e, .sp=0x05, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0x92}, {.addr=0x5012, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5013, .a=0x92, .x=0x76, .y=0x1e, .sp=0x05, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0x92}, {.addr=0x5012, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5012, .value=0xbf, .type=IO_READ},
        {.addr=0x5013, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_011E) {
    const struct CPU_State initial_cpu = {.pc=0xaaaf, .a=0x32, .x=0xa7, .y=0x3d, .sp=0x23, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x1e}, {.addr=0xaaaf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xaab0, .a=0x1e, .x=0xa8, .y=0x3d, .sp=0x23, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x1e}, {.addr=0xaaaf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xaaaf, .value=0xbf, .type=IO_READ},
        {.addr=0xaab0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_011F) {
    const struct CPU_State initial_cpu = {.pc=0x7552, .a=0xf3, .x=0xe5, .y=0x94, .sp=0x54, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x0b}, {.addr=0x7552, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7553, .a=0x0b, .x=0xe6, .y=0x94, .sp=0x54, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x0b}, {.addr=0x7552, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7552, .value=0xbf, .type=IO_READ},
        {.addr=0x7553, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0120) {
    const struct CPU_State initial_cpu = {.pc=0xd230, .a=0x96, .x=0x38, .y=0xf4, .sp=0x04, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0xdf}, {.addr=0xd230, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd231, .a=0xdf, .x=0x39, .y=0xf4, .sp=0x04, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0xdf}, {.addr=0xd230, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd230, .value=0xbf, .type=IO_READ},
        {.addr=0xd231, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0121) {
    const struct CPU_State initial_cpu = {.pc=0x5c9f, .a=0x63, .x=0xd2, .y=0x0e, .sp=0x44, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x67}, {.addr=0x5c9f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5ca0, .a=0x67, .x=0xd3, .y=0x0e, .sp=0x44, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x67}, {.addr=0x5c9f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5c9f, .value=0xbf, .type=IO_READ},
        {.addr=0x5ca0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0122) {
    const struct CPU_State initial_cpu = {.pc=0x4701, .a=0x6c, .x=0x19, .y=0xeb, .sp=0xf0, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x33}, {.addr=0x4701, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4702, .a=0x33, .x=0x1a, .y=0xeb, .sp=0xf0, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0x33}, {.addr=0x4701, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4701, .value=0xbf, .type=IO_READ},
        {.addr=0x4702, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0123) {
    const struct CPU_State initial_cpu = {.pc=0xd3f7, .a=0x03, .x=0x1d, .y=0x48, .sp=0x64, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x1c}, {.addr=0xd3f7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd3f8, .a=0x1c, .x=0x1e, .y=0x48, .sp=0x64, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x1c}, {.addr=0xd3f7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd3f7, .value=0xbf, .type=IO_READ},
        {.addr=0xd3f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0124) {
    const struct CPU_State initial_cpu = {.pc=0xe7a7, .a=0xc6, .x=0xb1, .y=0x00, .sp=0x72, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x09}, {.addr=0xe7a7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe7a8, .a=0x09, .x=0xb2, .y=0x00, .sp=0x72, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x09}, {.addr=0xe7a7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe7a7, .value=0xbf, .type=IO_READ},
        {.addr=0xe7a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0125) {
    const struct CPU_State initial_cpu = {.pc=0xd262, .a=0xa1, .x=0xd9, .y=0xf1, .sp=0x57, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0xd3}, {.addr=0xd262, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd263, .a=0xd3, .x=0xda, .y=0xf1, .sp=0x57, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0xd3}, {.addr=0xd262, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd262, .value=0xbf, .type=IO_READ},
        {.addr=0xd263, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0126) {
    const struct CPU_State initial_cpu = {.pc=0x8248, .a=0x27, .x=0xab, .y=0xee, .sp=0x83, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xef}, {.addr=0x8248, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8249, .a=0xef, .x=0xac, .y=0xee, .sp=0x83, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xef}, {.addr=0x8248, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8248, .value=0xbf, .type=IO_READ},
        {.addr=0x8249, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0127) {
    const struct CPU_State initial_cpu = {.pc=0x5cf3, .a=0x3d, .x=0x43, .y=0x7c, .sp=0xe6, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xfe}, {.addr=0x5cf3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5cf4, .a=0xfe, .x=0x44, .y=0x7c, .sp=0xe6, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xfe}, {.addr=0x5cf3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5cf3, .value=0xbf, .type=IO_READ},
        {.addr=0x5cf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0128) {
    const struct CPU_State initial_cpu = {.pc=0x7c17, .a=0x02, .x=0xcb, .y=0x92, .sp=0x86, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x45}, {.addr=0x7c17, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7c18, .a=0x45, .x=0xcc, .y=0x92, .sp=0x86, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x45}, {.addr=0x7c17, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7c17, .value=0xbf, .type=IO_READ},
        {.addr=0x7c18, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0129) {
    const struct CPU_State initial_cpu = {.pc=0x9fdc, .a=0x86, .x=0x1f, .y=0xd7, .sp=0xf7, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x02}, {.addr=0x9fdc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9fdd, .a=0x02, .x=0x20, .y=0xd7, .sp=0xf7, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x02}, {.addr=0x9fdc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9fdc, .value=0xbf, .type=IO_READ},
        {.addr=0x9fdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_012A) {
    const struct CPU_State initial_cpu = {.pc=0xada6, .a=0x49, .x=0x13, .y=0xd6, .sp=0x6d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0xbd}, {.addr=0xada6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xada7, .a=0xbd, .x=0x14, .y=0xd6, .sp=0x6d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0xbd}, {.addr=0xada6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xada6, .value=0xbf, .type=IO_READ},
        {.addr=0xada7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_012B) {
    const struct CPU_State initial_cpu = {.pc=0xbfb1, .a=0x16, .x=0x6f, .y=0xd5, .sp=0xef, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x35}, {.addr=0xbfb1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbfb2, .a=0x35, .x=0x70, .y=0xd5, .sp=0xef, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x35}, {.addr=0xbfb1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbfb1, .value=0xbf, .type=IO_READ},
        {.addr=0xbfb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_012C) {
    const struct CPU_State initial_cpu = {.pc=0x1a53, .a=0x1b, .x=0xfc, .y=0x53, .sp=0x1d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x81}, {.addr=0x1a53, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1a54, .a=0x81, .x=0xfd, .y=0x53, .sp=0x1d, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x81}, {.addr=0x1a53, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1a53, .value=0xbf, .type=IO_READ},
        {.addr=0x1a54, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_012D) {
    const struct CPU_State initial_cpu = {.pc=0x2d0d, .a=0x17, .x=0x25, .y=0xc7, .sp=0x21, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x89}, {.addr=0x2d0d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2d0e, .a=0x89, .x=0x26, .y=0xc7, .sp=0x21, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x89}, {.addr=0x2d0d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2d0d, .value=0xbf, .type=IO_READ},
        {.addr=0x2d0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_012E) {
    const struct CPU_State initial_cpu = {.pc=0x0a73, .a=0x5d, .x=0x98, .y=0xea, .sp=0xe5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x70}, {.addr=0x0a73, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0a74, .a=0x70, .x=0x99, .y=0xea, .sp=0xe5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x70}, {.addr=0x0a73, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0a73, .value=0xbf, .type=IO_READ},
        {.addr=0x0a74, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_012F) {
    const struct CPU_State initial_cpu = {.pc=0x9ba7, .a=0x49, .x=0x7b, .y=0x10, .sp=0x85, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xba}, {.addr=0x9ba7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9ba8, .a=0xba, .x=0x7c, .y=0x10, .sp=0x85, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xba}, {.addr=0x9ba7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9ba7, .value=0xbf, .type=IO_READ},
        {.addr=0x9ba8, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0130) {
    const struct CPU_State initial_cpu = {.pc=0xe1fa, .a=0xee, .x=0x28, .y=0x0b, .sp=0xc8, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0xfc}, {.addr=0xe1fa, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe1fb, .a=0xfc, .x=0x29, .y=0x0b, .sp=0xc8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xfc}, {.addr=0xe1fa, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe1fa, .value=0xbf, .type=IO_READ},
        {.addr=0xe1fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0131) {
    const struct CPU_State initial_cpu = {.pc=0xbd72, .a=0x97, .x=0xb2, .y=0xb1, .sp=0xa5, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x15}, {.addr=0xbd72, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbd73, .a=0x15, .x=0xb3, .y=0xb1, .sp=0xa5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x15}, {.addr=0xbd72, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbd72, .value=0xbf, .type=IO_READ},
        {.addr=0xbd73, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0132) {
    const struct CPU_State initial_cpu = {.pc=0x7ad3, .a=0x07, .x=0xeb, .y=0x34, .sp=0x74, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x01}, {.addr=0x7ad3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7ad4, .a=0x01, .x=0xec, .y=0x34, .sp=0x74, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x01}, {.addr=0x7ad3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7ad3, .value=0xbf, .type=IO_READ},
        {.addr=0x7ad4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0133) {
    const struct CPU_State initial_cpu = {.pc=0x878c, .a=0x44, .x=0x88, .y=0x50, .sp=0x60, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x0b}, {.addr=0x878c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x878d, .a=0x0b, .x=0x89, .y=0x50, .sp=0x60, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x0b}, {.addr=0x878c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x878c, .value=0xbf, .type=IO_READ},
        {.addr=0x878d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0134) {
    const struct CPU_State initial_cpu = {.pc=0x0f85, .a=0x8c, .x=0xa4, .y=0x61, .sp=0x61, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0xa3}, {.addr=0x0f85, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0f86, .a=0xa3, .x=0xa5, .y=0x61, .sp=0x61, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xa3}, {.addr=0x0f85, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0f85, .value=0xbf, .type=IO_READ},
        {.addr=0x0f86, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0135) {
    const struct CPU_State initial_cpu = {.pc=0x7050, .a=0xe2, .x=0x66, .y=0x07, .sp=0x8b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xb7}, {.addr=0x7050, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7051, .a=0xb7, .x=0x67, .y=0x07, .sp=0x8b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xb7}, {.addr=0x7050, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7050, .value=0xbf, .type=IO_READ},
        {.addr=0x7051, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0136) {
    const struct CPU_State initial_cpu = {.pc=0xf52e, .a=0x57, .x=0x8d, .y=0x3b, .sp=0xd1, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x05}, {.addr=0xf52e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf52f, .a=0x05, .x=0x8e, .y=0x3b, .sp=0xd1, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x05}, {.addr=0xf52e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf52e, .value=0xbf, .type=IO_READ},
        {.addr=0xf52f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0137) {
    const struct CPU_State initial_cpu = {.pc=0x8b11, .a=0x8b, .x=0x66, .y=0xa1, .sp=0xf6, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xd5}, {.addr=0x8b11, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8b12, .a=0xd5, .x=0x67, .y=0xa1, .sp=0xf6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xd5}, {.addr=0x8b11, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8b11, .value=0xbf, .type=IO_READ},
        {.addr=0x8b12, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0138) {
    const struct CPU_State initial_cpu = {.pc=0x0b56, .a=0x39, .x=0x21, .y=0xc5, .sp=0x25, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x8f}, {.addr=0x0b56, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0b57, .a=0x8f, .x=0x22, .y=0xc5, .sp=0x25, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x8f}, {.addr=0x0b56, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0b56, .value=0xbf, .type=IO_READ},
        {.addr=0x0b57, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0139) {
    const struct CPU_State initial_cpu = {.pc=0xbe3d, .a=0x7b, .x=0xae, .y=0x57, .sp=0x21, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0xd4}, {.addr=0xbe3d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbe3e, .a=0xd4, .x=0xaf, .y=0x57, .sp=0x21, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0xd4}, {.addr=0xbe3d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbe3d, .value=0xbf, .type=IO_READ},
        {.addr=0xbe3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_013A) {
    const struct CPU_State initial_cpu = {.pc=0xbd49, .a=0x44, .x=0x1c, .y=0xff, .sp=0xbf, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x85}, {.addr=0xbd49, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbd4a, .a=0x85, .x=0x1d, .y=0xff, .sp=0xbf, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x85}, {.addr=0xbd49, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbd49, .value=0xbf, .type=IO_READ},
        {.addr=0xbd4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_013B) {
    const struct CPU_State initial_cpu = {.pc=0x9026, .a=0x5b, .x=0x4b, .y=0xa0, .sp=0x68, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x1d}, {.addr=0x9026, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9027, .a=0x1d, .x=0x4c, .y=0xa0, .sp=0x68, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x1d}, {.addr=0x9026, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9026, .value=0xbf, .type=IO_READ},
        {.addr=0x9027, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_013C) {
    const struct CPU_State initial_cpu = {.pc=0x4a0b, .a=0x5c, .x=0x31, .y=0xac, .sp=0x06, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xdd}, {.addr=0x4a0b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4a0c, .a=0xdd, .x=0x32, .y=0xac, .sp=0x06, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xdd}, {.addr=0x4a0b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4a0b, .value=0xbf, .type=IO_READ},
        {.addr=0x4a0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_013D) {
    const struct CPU_State initial_cpu = {.pc=0x21f5, .a=0x76, .x=0x1f, .y=0x1a, .sp=0x9b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xe2}, {.addr=0x21f5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x21f6, .a=0xe2, .x=0x20, .y=0x1a, .sp=0x9b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xe2}, {.addr=0x21f5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x21f5, .value=0xbf, .type=IO_READ},
        {.addr=0x21f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_013E) {
    const struct CPU_State initial_cpu = {.pc=0xe672, .a=0xc4, .x=0xc8, .y=0x51, .sp=0x22, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x19}, {.addr=0xe672, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe673, .a=0x19, .x=0xc9, .y=0x51, .sp=0x22, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x19}, {.addr=0xe672, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe672, .value=0xbf, .type=IO_READ},
        {.addr=0xe673, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_013F) {
    const struct CPU_State initial_cpu = {.pc=0x025c, .a=0x00, .x=0x36, .y=0xab, .sp=0xd7, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xde}, {.addr=0x025c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x025d, .a=0xde, .x=0x37, .y=0xab, .sp=0xd7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xde}, {.addr=0x025c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x025c, .value=0xbf, .type=IO_READ},
        {.addr=0x025d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0140) {
    const struct CPU_State initial_cpu = {.pc=0x58e3, .a=0x38, .x=0x59, .y=0xff, .sp=0xfb, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0xea}, {.addr=0x58e3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x58e4, .a=0xea, .x=0x5a, .y=0xff, .sp=0xfb, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0xea}, {.addr=0x58e3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x58e3, .value=0xbf, .type=IO_READ},
        {.addr=0x58e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0141) {
    const struct CPU_State initial_cpu = {.pc=0xfd30, .a=0x5d, .x=0xde, .y=0xe9, .sp=0x05, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0xda}, {.addr=0xfd30, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfd31, .a=0xda, .x=0xdf, .y=0xe9, .sp=0x05, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0xda}, {.addr=0xfd30, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfd30, .value=0xbf, .type=IO_READ},
        {.addr=0xfd31, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0142) {
    const struct CPU_State initial_cpu = {.pc=0xce43, .a=0x59, .x=0xc3, .y=0xec, .sp=0xc5, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x9e}, {.addr=0xce43, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xce44, .a=0x9e, .x=0xc4, .y=0xec, .sp=0xc5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x9e}, {.addr=0xce43, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xce43, .value=0xbf, .type=IO_READ},
        {.addr=0xce44, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0143) {
    const struct CPU_State initial_cpu = {.pc=0x8e29, .a=0x46, .x=0xac, .y=0xd5, .sp=0x18, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xe0}, {.addr=0x8e29, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8e2a, .a=0xe0, .x=0xad, .y=0xd5, .sp=0x18, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xe0}, {.addr=0x8e29, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8e29, .value=0xbf, .type=IO_READ},
        {.addr=0x8e2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0144) {
    const struct CPU_State initial_cpu = {.pc=0x569b, .a=0x92, .x=0xe5, .y=0x3b, .sp=0x7a, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0xd4}, {.addr=0x569b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x569c, .a=0xd4, .x=0xe6, .y=0x3b, .sp=0x7a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0xd4}, {.addr=0x569b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x569b, .value=0xbf, .type=IO_READ},
        {.addr=0x569c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0145) {
    const struct CPU_State initial_cpu = {.pc=0xac46, .a=0x8f, .x=0xc5, .y=0x66, .sp=0xd5, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0xbe}, {.addr=0xac46, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xac47, .a=0xbe, .x=0xc6, .y=0x66, .sp=0xd5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xbe}, {.addr=0xac46, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xac46, .value=0xbf, .type=IO_READ},
        {.addr=0xac47, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0146) {
    const struct CPU_State initial_cpu = {.pc=0xad11, .a=0x56, .x=0xc4, .y=0xbc, .sp=0x4e, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0xb7}, {.addr=0xad11, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xad12, .a=0xb7, .x=0xc5, .y=0xbc, .sp=0x4e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0xb7}, {.addr=0xad11, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xad11, .value=0xbf, .type=IO_READ},
        {.addr=0xad12, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0147) {
    const struct CPU_State initial_cpu = {.pc=0x117d, .a=0xad, .x=0xc0, .y=0xc1, .sp=0x86, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0xe2}, {.addr=0x117d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x117e, .a=0xe2, .x=0xc1, .y=0xc1, .sp=0x86, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0xe2}, {.addr=0x117d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x117d, .value=0xbf, .type=IO_READ},
        {.addr=0x117e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0148) {
    const struct CPU_State initial_cpu = {.pc=0x2331, .a=0xe7, .x=0x67, .y=0x5f, .sp=0x25, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x76}, {.addr=0x2331, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2332, .a=0x76, .x=0x68, .y=0x5f, .sp=0x25, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x76}, {.addr=0x2331, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2331, .value=0xbf, .type=IO_READ},
        {.addr=0x2332, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0149) {
    const struct CPU_State initial_cpu = {.pc=0x1642, .a=0x59, .x=0x09, .y=0xe1, .sp=0x24, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xcd}, {.addr=0x1642, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1643, .a=0xcd, .x=0x0a, .y=0xe1, .sp=0x24, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xcd}, {.addr=0x1642, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1642, .value=0xbf, .type=IO_READ},
        {.addr=0x1643, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_014A) {
    const struct CPU_State initial_cpu = {.pc=0x1145, .a=0xda, .x=0xec, .y=0x27, .sp=0xf6, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xcc}, {.addr=0x1145, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1146, .a=0xcc, .x=0xed, .y=0x27, .sp=0xf6, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xcc}, {.addr=0x1145, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1145, .value=0xbf, .type=IO_READ},
        {.addr=0x1146, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_014B) {
    const struct CPU_State initial_cpu = {.pc=0xc6f6, .a=0x7f, .x=0x8b, .y=0xd4, .sp=0x88, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xbe}, {.addr=0xc6f6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc6f7, .a=0xbe, .x=0x8c, .y=0xd4, .sp=0x88, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xbe}, {.addr=0xc6f6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc6f6, .value=0xbf, .type=IO_READ},
        {.addr=0xc6f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_014C) {
    const struct CPU_State initial_cpu = {.pc=0xc229, .a=0x72, .x=0x4c, .y=0x37, .sp=0x84, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x1c}, {.addr=0xc229, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc22a, .a=0x1c, .x=0x4d, .y=0x37, .sp=0x84, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x1c}, {.addr=0xc229, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc229, .value=0xbf, .type=IO_READ},
        {.addr=0xc22a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_014D) {
    const struct CPU_State initial_cpu = {.pc=0x7258, .a=0x12, .x=0xe9, .y=0xfc, .sp=0x0f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x68}, {.addr=0x7258, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7259, .a=0x68, .x=0xea, .y=0xfc, .sp=0x0f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x68}, {.addr=0x7258, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7258, .value=0xbf, .type=IO_READ},
        {.addr=0x7259, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_014E) {
    const struct CPU_State initial_cpu = {.pc=0xb4f3, .a=0x8b, .x=0xc6, .y=0x86, .sp=0x0b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x0e}, {.addr=0xb4f3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb4f4, .a=0x0e, .x=0xc7, .y=0x86, .sp=0x0b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x0e}, {.addr=0xb4f3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb4f3, .value=0xbf, .type=IO_READ},
        {.addr=0xb4f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0150) {
    const struct CPU_State initial_cpu = {.pc=0xb724, .a=0x05, .x=0x90, .y=0xb2, .sp=0xde, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x9a}, {.addr=0xb724, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb725, .a=0x9a, .x=0x91, .y=0xb2, .sp=0xde, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x9a}, {.addr=0xb724, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb724, .value=0xbf, .type=IO_READ},
        {.addr=0xb725, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0151) {
    const struct CPU_State initial_cpu = {.pc=0x60c3, .a=0xbe, .x=0x5e, .y=0x42, .sp=0xfd, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0xd0}, {.addr=0x60c3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x60c4, .a=0xd0, .x=0x5f, .y=0x42, .sp=0xfd, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0xd0}, {.addr=0x60c3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x60c3, .value=0xbf, .type=IO_READ},
        {.addr=0x60c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0152) {
    const struct CPU_State initial_cpu = {.pc=0x3113, .a=0xef, .x=0x1d, .y=0xe2, .sp=0x0b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x51}, {.addr=0x3113, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3114, .a=0x51, .x=0x1e, .y=0xe2, .sp=0x0b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x51}, {.addr=0x3113, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3113, .value=0xbf, .type=IO_READ},
        {.addr=0x3114, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0153) {
    const struct CPU_State initial_cpu = {.pc=0x2d81, .a=0xdc, .x=0x6a, .y=0x0b, .sp=0x1f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x08}, {.addr=0x2d81, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2d82, .a=0x08, .x=0x6b, .y=0x0b, .sp=0x1f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x08}, {.addr=0x2d81, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2d81, .value=0xbf, .type=IO_READ},
        {.addr=0x2d82, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0154) {
    const struct CPU_State initial_cpu = {.pc=0x3b35, .a=0xd4, .x=0x49, .y=0x95, .sp=0x55, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x7a}, {.addr=0x3b35, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3b36, .a=0x7a, .x=0x4a, .y=0x95, .sp=0x55, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x7a}, {.addr=0x3b35, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3b35, .value=0xbf, .type=IO_READ},
        {.addr=0x3b36, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0155) {
    const struct CPU_State initial_cpu = {.pc=0xf9f8, .a=0xcb, .x=0x3b, .y=0x23, .sp=0x45, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0xa0}, {.addr=0xf9f8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf9f9, .a=0xa0, .x=0x3c, .y=0x23, .sp=0x45, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0xa0}, {.addr=0xf9f8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf9f8, .value=0xbf, .type=IO_READ},
        {.addr=0xf9f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0156) {
    const struct CPU_State initial_cpu = {.pc=0x67a2, .a=0x21, .x=0x56, .y=0xe0, .sp=0x7a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x4c}, {.addr=0x67a2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x67a3, .a=0x4c, .x=0x57, .y=0xe0, .sp=0x7a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x4c}, {.addr=0x67a2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x67a2, .value=0xbf, .type=IO_READ},
        {.addr=0x67a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0157) {
    const struct CPU_State initial_cpu = {.pc=0x2740, .a=0x10, .x=0xcb, .y=0xcf, .sp=0x78, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xa0}, {.addr=0x2740, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2741, .a=0xa0, .x=0xcc, .y=0xcf, .sp=0x78, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xa0}, {.addr=0x2740, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2740, .value=0xbf, .type=IO_READ},
        {.addr=0x2741, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0158) {
    const struct CPU_State initial_cpu = {.pc=0x7634, .a=0x52, .x=0x6d, .y=0xe6, .sp=0xbd, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x87}, {.addr=0x7634, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7635, .a=0x87, .x=0x6e, .y=0xe6, .sp=0xbd, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x87}, {.addr=0x7634, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7634, .value=0xbf, .type=IO_READ},
        {.addr=0x7635, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0159) {
    const struct CPU_State initial_cpu = {.pc=0x2f75, .a=0xf0, .x=0x5c, .y=0x21, .sp=0xf0, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xd7}, {.addr=0x2f75, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2f76, .a=0xd7, .x=0x5d, .y=0x21, .sp=0xf0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xd7}, {.addr=0x2f75, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2f75, .value=0xbf, .type=IO_READ},
        {.addr=0x2f76, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_015A) {
    const struct CPU_State initial_cpu = {.pc=0x7014, .a=0x42, .x=0x2c, .y=0xd6, .sp=0x39, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x80}, {.addr=0x7014, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7015, .a=0x80, .x=0x2d, .y=0xd6, .sp=0x39, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x80}, {.addr=0x7014, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7014, .value=0xbf, .type=IO_READ},
        {.addr=0x7015, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_015B) {
    const struct CPU_State initial_cpu = {.pc=0xff02, .a=0x29, .x=0x6e, .y=0x93, .sp=0x5d, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xe7}, {.addr=0xff02, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xff03, .a=0xe7, .x=0x6f, .y=0x93, .sp=0x5d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xe7}, {.addr=0xff02, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xff02, .value=0xbf, .type=IO_READ},
        {.addr=0xff03, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_015C) {
    const struct CPU_State initial_cpu = {.pc=0x49cc, .a=0x57, .x=0x9c, .y=0x7b, .sp=0xbc, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0xa3}, {.addr=0x49cc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x49cd, .a=0xa3, .x=0x9d, .y=0x7b, .sp=0xbc, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0xa3}, {.addr=0x49cc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x49cc, .value=0xbf, .type=IO_READ},
        {.addr=0x49cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_015D) {
    const struct CPU_State initial_cpu = {.pc=0xcb8d, .a=0x2d, .x=0xcf, .y=0x4a, .sp=0x41, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xe4}, {.addr=0xcb8d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcb8e, .a=0xe4, .x=0xd0, .y=0x4a, .sp=0x41, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xe4}, {.addr=0xcb8d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcb8d, .value=0xbf, .type=IO_READ},
        {.addr=0xcb8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_015E) {
    const struct CPU_State initial_cpu = {.pc=0x08ef, .a=0x4c, .x=0x5b, .y=0xb2, .sp=0x31, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x46}, {.addr=0x08ef, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x08f0, .a=0x46, .x=0x5c, .y=0xb2, .sp=0x31, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x46}, {.addr=0x08ef, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x08ef, .value=0xbf, .type=IO_READ},
        {.addr=0x08f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_015F) {
    const struct CPU_State initial_cpu = {.pc=0x0dd4, .a=0xbc, .x=0x72, .y=0x84, .sp=0x66, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xfd}, {.addr=0x0dd4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0dd5, .a=0xfd, .x=0x73, .y=0x84, .sp=0x66, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xfd}, {.addr=0x0dd4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0dd4, .value=0xbf, .type=IO_READ},
        {.addr=0x0dd5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0160) {
    const struct CPU_State initial_cpu = {.pc=0xed60, .a=0xb0, .x=0xb7, .y=0xe1, .sp=0x4e, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x0f}, {.addr=0xed60, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xed61, .a=0x0f, .x=0xb8, .y=0xe1, .sp=0x4e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x0f}, {.addr=0xed60, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xed60, .value=0xbf, .type=IO_READ},
        {.addr=0xed61, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0161) {
    const struct CPU_State initial_cpu = {.pc=0xf8a7, .a=0x9d, .x=0xb9, .y=0x0e, .sp=0xa3, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x75}, {.addr=0xf8a7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf8a8, .a=0x75, .x=0xba, .y=0x0e, .sp=0xa3, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0x75}, {.addr=0xf8a7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf8a7, .value=0xbf, .type=IO_READ},
        {.addr=0xf8a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0162) {
    const struct CPU_State initial_cpu = {.pc=0x5860, .a=0xcd, .x=0xbc, .y=0x15, .sp=0x1a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0xa7}, {.addr=0x5860, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5861, .a=0xa7, .x=0xbd, .y=0x15, .sp=0x1a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0xa7}, {.addr=0x5860, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5860, .value=0xbf, .type=IO_READ},
        {.addr=0x5861, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0163) {
    const struct CPU_State initial_cpu = {.pc=0x9390, .a=0x66, .x=0x6a, .y=0x1b, .sp=0x5a, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0xd3}, {.addr=0x9390, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9391, .a=0xd3, .x=0x6b, .y=0x1b, .sp=0x5a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xd3}, {.addr=0x9390, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9390, .value=0xbf, .type=IO_READ},
        {.addr=0x9391, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0164) {
    const struct CPU_State initial_cpu = {.pc=0x62f3, .a=0x37, .x=0x8a, .y=0x87, .sp=0xb2, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x1b}, {.addr=0x62f3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x62f4, .a=0x1b, .x=0x8b, .y=0x87, .sp=0xb2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x1b}, {.addr=0x62f3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x62f3, .value=0xbf, .type=IO_READ},
        {.addr=0x62f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0165) {
    const struct CPU_State initial_cpu = {.pc=0x14ca, .a=0xb3, .x=0x4a, .y=0x44, .sp=0xec, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x1a}, {.addr=0x14ca, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x14cb, .a=0x1a, .x=0x4b, .y=0x44, .sp=0xec, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x1a}, {.addr=0x14ca, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x14ca, .value=0xbf, .type=IO_READ},
        {.addr=0x14cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0166) {
    const struct CPU_State initial_cpu = {.pc=0x5767, .a=0x80, .x=0x91, .y=0xe1, .sp=0xd1, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0xb9}, {.addr=0x5767, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5768, .a=0xb9, .x=0x92, .y=0xe1, .sp=0xd1, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0xb9}, {.addr=0x5767, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5767, .value=0xbf, .type=IO_READ},
        {.addr=0x5768, .value=DUMMY, .type=IO_READ},
        {.addr=0x0091, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0167) {
    const struct CPU_State initial_cpu = {.pc=0x43ae, .a=0x98, .x=0x43, .y=0x16, .sp=0x94, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x86}, {.addr=0x43ae, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x43af, .a=0x86, .x=0x44, .y=0x16, .sp=0x94, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x86}, {.addr=0x43ae, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x43ae, .value=0xbf, .type=IO_READ},
        {.addr=0x43af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0168) {
    const struct CPU_State initial_cpu = {.pc=0xd0a5, .a=0x5e, .x=0x45, .y=0x70, .sp=0xdd, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x1c}, {.addr=0xd0a5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd0a6, .a=0x1c, .x=0x46, .y=0x70, .sp=0xdd, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x1c}, {.addr=0xd0a5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd0a5, .value=0xbf, .type=IO_READ},
        {.addr=0xd0a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0169) {
    const struct CPU_State initial_cpu = {.pc=0x6cb4, .a=0x16, .x=0x97, .y=0x38, .sp=0x96, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xc2}, {.addr=0x6cb4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6cb5, .a=0xc2, .x=0x98, .y=0x38, .sp=0x96, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xc2}, {.addr=0x6cb4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6cb4, .value=0xbf, .type=IO_READ},
        {.addr=0x6cb5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_016A) {
    const struct CPU_State initial_cpu = {.pc=0xee47, .a=0x49, .x=0xb0, .y=0x3f, .sp=0xb6, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xea}, {.addr=0xee47, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xee48, .a=0xea, .x=0xb1, .y=0x3f, .sp=0xb6, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xea}, {.addr=0xee47, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xee47, .value=0xbf, .type=IO_READ},
        {.addr=0xee48, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_016B) {
    const struct CPU_State initial_cpu = {.pc=0xc66a, .a=0xf4, .x=0x1d, .y=0x2e, .sp=0xfe, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x3b}, {.addr=0xc66a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc66b, .a=0x3b, .x=0x1e, .y=0x2e, .sp=0xfe, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x3b}, {.addr=0xc66a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc66a, .value=0xbf, .type=IO_READ},
        {.addr=0xc66b, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_016C) {
    const struct CPU_State initial_cpu = {.pc=0x3673, .a=0x33, .x=0xe6, .y=0xfc, .sp=0xa1, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x32}, {.addr=0x3673, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3674, .a=0x32, .x=0xe7, .y=0xfc, .sp=0xa1, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x32}, {.addr=0x3673, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3673, .value=0xbf, .type=IO_READ},
        {.addr=0x3674, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_016D) {
    const struct CPU_State initial_cpu = {.pc=0x63a0, .a=0x4e, .x=0x3a, .y=0x60, .sp=0x75, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xf5}, {.addr=0x63a0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x63a1, .a=0xf5, .x=0x3b, .y=0x60, .sp=0x75, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xf5}, {.addr=0x63a0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x63a0, .value=0xbf, .type=IO_READ},
        {.addr=0x63a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_016E) {
    const struct CPU_State initial_cpu = {.pc=0x43bf, .a=0xc5, .x=0x17, .y=0xd3, .sp=0xe5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xa2}, {.addr=0x43bf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x43c0, .a=0xa2, .x=0x18, .y=0xd3, .sp=0xe5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xa2}, {.addr=0x43bf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x43bf, .value=0xbf, .type=IO_READ},
        {.addr=0x43c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_016F) {
    const struct CPU_State initial_cpu = {.pc=0x0531, .a=0xba, .x=0x0d, .y=0x2c, .sp=0x91, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x54}, {.addr=0x0531, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0532, .a=0x54, .x=0x0e, .y=0x2c, .sp=0x91, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x54}, {.addr=0x0531, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0531, .value=0xbf, .type=IO_READ},
        {.addr=0x0532, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0170) {
    const struct CPU_State initial_cpu = {.pc=0x8f87, .a=0x98, .x=0xd3, .y=0x78, .sp=0x69, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x7b}, {.addr=0x8f87, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8f88, .a=0x7b, .x=0xd4, .y=0x78, .sp=0x69, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x7b}, {.addr=0x8f87, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8f87, .value=0xbf, .type=IO_READ},
        {.addr=0x8f88, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0171) {
    const struct CPU_State initial_cpu = {.pc=0x16c5, .a=0x8b, .x=0x70, .y=0x7a, .sp=0x87, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x29}, {.addr=0x16c5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x16c6, .a=0x29, .x=0x71, .y=0x7a, .sp=0x87, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x29}, {.addr=0x16c5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x16c5, .value=0xbf, .type=IO_READ},
        {.addr=0x16c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0172) {
    const struct CPU_State initial_cpu = {.pc=0xa143, .a=0xa7, .x=0xbc, .y=0x9f, .sp=0x67, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x02}, {.addr=0xa143, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa144, .a=0x02, .x=0xbd, .y=0x9f, .sp=0x67, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x02}, {.addr=0xa143, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa143, .value=0xbf, .type=IO_READ},
        {.addr=0xa144, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0173) {
    const struct CPU_State initial_cpu = {.pc=0x6270, .a=0xfb, .x=0xbf, .y=0xd1, .sp=0x75, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x94}, {.addr=0x6270, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6271, .a=0x94, .x=0xc0, .y=0xd1, .sp=0x75, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x94}, {.addr=0x6270, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6270, .value=0xbf, .type=IO_READ},
        {.addr=0x6271, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0174) {
    const struct CPU_State initial_cpu = {.pc=0xa434, .a=0x3b, .x=0xd5, .y=0xc2, .sp=0x3b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x27}, {.addr=0xa434, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa435, .a=0x27, .x=0xd6, .y=0xc2, .sp=0x3b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x27}, {.addr=0xa434, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa434, .value=0xbf, .type=IO_READ},
        {.addr=0xa435, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0175) {
    const struct CPU_State initial_cpu = {.pc=0x2c48, .a=0x00, .x=0x72, .y=0xe8, .sp=0x2b, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x26}, {.addr=0x2c48, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2c49, .a=0x26, .x=0x73, .y=0xe8, .sp=0x2b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x26}, {.addr=0x2c48, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2c48, .value=0xbf, .type=IO_READ},
        {.addr=0x2c49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0176) {
    const struct CPU_State initial_cpu = {.pc=0x3637, .a=0xfd, .x=0x56, .y=0x8c, .sp=0x27, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x35}, {.addr=0x3637, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3638, .a=0x35, .x=0x57, .y=0x8c, .sp=0x27, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x35}, {.addr=0x3637, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3637, .value=0xbf, .type=IO_READ},
        {.addr=0x3638, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0177) {
    const struct CPU_State initial_cpu = {.pc=0x82ef, .a=0x46, .x=0xdf, .y=0x2e, .sp=0xe0, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x52}, {.addr=0x82ef, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x82f0, .a=0x52, .x=0xe0, .y=0x2e, .sp=0xe0, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x52}, {.addr=0x82ef, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x82ef, .value=0xbf, .type=IO_READ},
        {.addr=0x82f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0178) {
    const struct CPU_State initial_cpu = {.pc=0x5b95, .a=0xa0, .x=0x43, .y=0x5a, .sp=0x55, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xad}, {.addr=0x5b95, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5b96, .a=0xad, .x=0x44, .y=0x5a, .sp=0x55, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xad}, {.addr=0x5b95, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5b95, .value=0xbf, .type=IO_READ},
        {.addr=0x5b96, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0179) {
    const struct CPU_State initial_cpu = {.pc=0x0543, .a=0xa7, .x=0xc4, .y=0xe8, .sp=0x86, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x42}, {.addr=0x0543, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0544, .a=0x42, .x=0xc5, .y=0xe8, .sp=0x86, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x42}, {.addr=0x0543, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0543, .value=0xbf, .type=IO_READ},
        {.addr=0x0544, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_017A) {
    const struct CPU_State initial_cpu = {.pc=0xc732, .a=0x8c, .x=0x5a, .y=0x53, .sp=0xa0, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x2f}, {.addr=0xc732, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc733, .a=0x2f, .x=0x5b, .y=0x53, .sp=0xa0, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x2f}, {.addr=0xc732, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc732, .value=0xbf, .type=IO_READ},
        {.addr=0xc733, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_017B) {
    const struct CPU_State initial_cpu = {.pc=0x8770, .a=0x20, .x=0xcd, .y=0x37, .sp=0x6e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0xeb}, {.addr=0x8770, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8771, .a=0xeb, .x=0xce, .y=0x37, .sp=0x6e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0xeb}, {.addr=0x8770, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8770, .value=0xbf, .type=IO_READ},
        {.addr=0x8771, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_017C) {
    const struct CPU_State initial_cpu = {.pc=0xd449, .a=0xc8, .x=0x17, .y=0xcc, .sp=0x3f, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x4e}, {.addr=0xd449, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd44a, .a=0x4e, .x=0x18, .y=0xcc, .sp=0x3f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x4e}, {.addr=0xd449, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd449, .value=0xbf, .type=IO_READ},
        {.addr=0xd44a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_017D) {
    const struct CPU_State initial_cpu = {.pc=0x5535, .a=0xc5, .x=0x13, .y=0x96, .sp=0x87, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0xf9}, {.addr=0x5535, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5536, .a=0xf9, .x=0x14, .y=0x96, .sp=0x87, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0xf9}, {.addr=0x5535, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5535, .value=0xbf, .type=IO_READ},
        {.addr=0x5536, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_017E) {
    const struct CPU_State initial_cpu = {.pc=0x9685, .a=0x35, .x=0x8b, .y=0x8a, .sp=0x8a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x59}, {.addr=0x9685, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9686, .a=0x59, .x=0x8c, .y=0x8a, .sp=0x8a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x59}, {.addr=0x9685, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9685, .value=0xbf, .type=IO_READ},
        {.addr=0x9686, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_017F) {
    const struct CPU_State initial_cpu = {.pc=0x44cd, .a=0x16, .x=0xae, .y=0x62, .sp=0x0d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x38}, {.addr=0x44cd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x44ce, .a=0x38, .x=0xaf, .y=0x62, .sp=0x0d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x38}, {.addr=0x44cd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x44cd, .value=0xbf, .type=IO_READ},
        {.addr=0x44ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0180) {
    const struct CPU_State initial_cpu = {.pc=0x3798, .a=0xb0, .x=0x20, .y=0xe8, .sp=0xb6, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0xbb}, {.addr=0x3798, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3799, .a=0xbb, .x=0x21, .y=0xe8, .sp=0xb6, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xbb}, {.addr=0x3798, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3798, .value=0xbf, .type=IO_READ},
        {.addr=0x3799, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0181) {
    const struct CPU_State initial_cpu = {.pc=0xed14, .a=0x05, .x=0x98, .y=0x68, .sp=0x91, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0xbe}, {.addr=0xed14, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xed15, .a=0xbe, .x=0x99, .y=0x68, .sp=0x91, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xbe}, {.addr=0xed14, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xed14, .value=0xbf, .type=IO_READ},
        {.addr=0xed15, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0182) {
    const struct CPU_State initial_cpu = {.pc=0xa204, .a=0x25, .x=0xfb, .y=0x5f, .sp=0x3f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x12}, {.addr=0xa204, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa205, .a=0x12, .x=0xfc, .y=0x5f, .sp=0x3f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x12}, {.addr=0xa204, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa204, .value=0xbf, .type=IO_READ},
        {.addr=0xa205, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0183) {
    const struct CPU_State initial_cpu = {.pc=0x93a8, .a=0x9b, .x=0x47, .y=0x0b, .sp=0x13, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x32}, {.addr=0x93a8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x93a9, .a=0x32, .x=0x48, .y=0x0b, .sp=0x13, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x32}, {.addr=0x93a8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x93a8, .value=0xbf, .type=IO_READ},
        {.addr=0x93a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0184) {
    const struct CPU_State initial_cpu = {.pc=0x9c85, .a=0x9b, .x=0xc9, .y=0x39, .sp=0xdc, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0xdf}, {.addr=0x9c85, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9c86, .a=0xdf, .x=0xca, .y=0x39, .sp=0xdc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0xdf}, {.addr=0x9c85, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9c85, .value=0xbf, .type=IO_READ},
        {.addr=0x9c86, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0185) {
    const struct CPU_State initial_cpu = {.pc=0x9287, .a=0x2f, .x=0xe2, .y=0x45, .sp=0x89, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x28}, {.addr=0x9287, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9288, .a=0x28, .x=0xe3, .y=0x45, .sp=0x89, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x28}, {.addr=0x9287, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9287, .value=0xbf, .type=IO_READ},
        {.addr=0x9288, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0186) {
    const struct CPU_State initial_cpu = {.pc=0x99fb, .a=0xa8, .x=0x3a, .y=0xbc, .sp=0xcc, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x94}, {.addr=0x99fb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x99fc, .a=0x94, .x=0x3b, .y=0xbc, .sp=0xcc, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x94}, {.addr=0x99fb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x99fb, .value=0xbf, .type=IO_READ},
        {.addr=0x99fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0187) {
    const struct CPU_State initial_cpu = {.pc=0x1947, .a=0xd9, .x=0xb3, .y=0x4e, .sp=0x4b, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0xee}, {.addr=0x1947, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1948, .a=0xee, .x=0xb4, .y=0x4e, .sp=0x4b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0xee}, {.addr=0x1947, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1947, .value=0xbf, .type=IO_READ},
        {.addr=0x1948, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0188) {
    const struct CPU_State initial_cpu = {.pc=0x5092, .a=0xb0, .x=0xa1, .y=0x46, .sp=0xea, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x0f}, {.addr=0x5092, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5093, .a=0x0f, .x=0xa2, .y=0x46, .sp=0xea, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x0f}, {.addr=0x5092, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5092, .value=0xbf, .type=IO_READ},
        {.addr=0x5093, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0189) {
    const struct CPU_State initial_cpu = {.pc=0xd87e, .a=0xbd, .x=0x96, .y=0xba, .sp=0x2d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xb3}, {.addr=0xd87e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd87f, .a=0xb3, .x=0x97, .y=0xba, .sp=0x2d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xb3}, {.addr=0xd87e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd87e, .value=0xbf, .type=IO_READ},
        {.addr=0xd87f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_018A) {
    const struct CPU_State initial_cpu = {.pc=0x31a4, .a=0xd2, .x=0xcf, .y=0x7a, .sp=0x28, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x14}, {.addr=0x31a4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x31a5, .a=0x14, .x=0xd0, .y=0x7a, .sp=0x28, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x14}, {.addr=0x31a4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x31a4, .value=0xbf, .type=IO_READ},
        {.addr=0x31a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_018B) {
    const struct CPU_State initial_cpu = {.pc=0x18ee, .a=0xe2, .x=0x42, .y=0xa8, .sp=0x9b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x65}, {.addr=0x18ee, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x18ef, .a=0x65, .x=0x43, .y=0xa8, .sp=0x9b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x65}, {.addr=0x18ee, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x18ee, .value=0xbf, .type=IO_READ},
        {.addr=0x18ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_018C) {
    const struct CPU_State initial_cpu = {.pc=0x81ca, .a=0xbd, .x=0x07, .y=0xea, .sp=0x68, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0xfb}, {.addr=0x81ca, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x81cb, .a=0xfb, .x=0x08, .y=0xea, .sp=0x68, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xfb}, {.addr=0x81ca, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x81ca, .value=0xbf, .type=IO_READ},
        {.addr=0x81cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_018D) {
    const struct CPU_State initial_cpu = {.pc=0x03a8, .a=0xcb, .x=0x6a, .y=0xd7, .sp=0xe5, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0xde}, {.addr=0x03a8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x03a9, .a=0xde, .x=0x6b, .y=0xd7, .sp=0xe5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xde}, {.addr=0x03a8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x03a8, .value=0xbf, .type=IO_READ},
        {.addr=0x03a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_018E) {
    const struct CPU_State initial_cpu = {.pc=0x8643, .a=0x96, .x=0xe4, .y=0x5d, .sp=0x25, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x78}, {.addr=0x8643, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8644, .a=0x78, .x=0xe5, .y=0x5d, .sp=0x25, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x78}, {.addr=0x8643, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8643, .value=0xbf, .type=IO_READ},
        {.addr=0x8644, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_018F) {
    const struct CPU_State initial_cpu = {.pc=0x1a79, .a=0xd1, .x=0x7c, .y=0xbe, .sp=0x99, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x4f}, {.addr=0x1a79, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1a7a, .a=0x4f, .x=0x7d, .y=0xbe, .sp=0x99, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x4f}, {.addr=0x1a79, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1a79, .value=0xbf, .type=IO_READ},
        {.addr=0x1a7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0190) {
    const struct CPU_State initial_cpu = {.pc=0xd0a3, .a=0xfd, .x=0xb1, .y=0xc4, .sp=0xb5, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x83}, {.addr=0xd0a3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd0a4, .a=0x83, .x=0xb2, .y=0xc4, .sp=0xb5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x83}, {.addr=0xd0a3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd0a3, .value=0xbf, .type=IO_READ},
        {.addr=0xd0a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0191) {
    const struct CPU_State initial_cpu = {.pc=0x9fa6, .a=0xce, .x=0x90, .y=0xba, .sp=0xd3, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x09}, {.addr=0x9fa6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9fa7, .a=0x09, .x=0x91, .y=0xba, .sp=0xd3, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x09}, {.addr=0x9fa6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9fa6, .value=0xbf, .type=IO_READ},
        {.addr=0x9fa7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0192) {
    const struct CPU_State initial_cpu = {.pc=0xe5bb, .a=0xdf, .x=0xd4, .y=0x52, .sp=0xc8, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xf1}, {.addr=0xe5bb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe5bc, .a=0xf1, .x=0xd5, .y=0x52, .sp=0xc8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0xf1}, {.addr=0xe5bb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe5bb, .value=0xbf, .type=IO_READ},
        {.addr=0xe5bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0193) {
    const struct CPU_State initial_cpu = {.pc=0xc072, .a=0x82, .x=0x57, .y=0xeb, .sp=0xca, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x2e}, {.addr=0xc072, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc073, .a=0x2e, .x=0x58, .y=0xeb, .sp=0xca, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x2e}, {.addr=0xc072, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc072, .value=0xbf, .type=IO_READ},
        {.addr=0xc073, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0194) {
    const struct CPU_State initial_cpu = {.pc=0xed11, .a=0x97, .x=0x8e, .y=0x64, .sp=0xa9, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xe4}, {.addr=0xed11, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xed12, .a=0xe4, .x=0x8f, .y=0x64, .sp=0xa9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xe4}, {.addr=0xed11, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xed11, .value=0xbf, .type=IO_READ},
        {.addr=0xed12, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0195) {
    const struct CPU_State initial_cpu = {.pc=0xa909, .a=0xab, .x=0x52, .y=0x31, .sp=0x56, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x0b}, {.addr=0xa909, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa90a, .a=0x0b, .x=0x53, .y=0x31, .sp=0x56, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x0b}, {.addr=0xa909, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa909, .value=0xbf, .type=IO_READ},
        {.addr=0xa90a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0196) {
    const struct CPU_State initial_cpu = {.pc=0x484d, .a=0xf9, .x=0xf2, .y=0x21, .sp=0xb7, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xb7}, {.addr=0x484d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x484e, .a=0xb7, .x=0xf3, .y=0x21, .sp=0xb7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xb7}, {.addr=0x484d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x484d, .value=0xbf, .type=IO_READ},
        {.addr=0x484e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0197) {
    const struct CPU_State initial_cpu = {.pc=0x238e, .a=0xe7, .x=0x98, .y=0x16, .sp=0x8e, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x22}, {.addr=0x238e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x238f, .a=0x22, .x=0x99, .y=0x16, .sp=0x8e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x22}, {.addr=0x238e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x238e, .value=0xbf, .type=IO_READ},
        {.addr=0x238f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0198) {
    const struct CPU_State initial_cpu = {.pc=0x1ab1, .a=0x45, .x=0x89, .y=0xa6, .sp=0xb0, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x39}, {.addr=0x1ab1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1ab2, .a=0x39, .x=0x8a, .y=0xa6, .sp=0xb0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x39}, {.addr=0x1ab1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1ab1, .value=0xbf, .type=IO_READ},
        {.addr=0x1ab2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0199) {
    const struct CPU_State initial_cpu = {.pc=0x6525, .a=0x1c, .x=0x74, .y=0x5c, .sp=0x3b, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x7c}, {.addr=0x6525, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6526, .a=0x7c, .x=0x75, .y=0x5c, .sp=0x3b, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x7c}, {.addr=0x6525, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6525, .value=0xbf, .type=IO_READ},
        {.addr=0x6526, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_019A) {
    const struct CPU_State initial_cpu = {.pc=0x6e2e, .a=0xc8, .x=0xa7, .y=0x15, .sp=0xcb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0xe3}, {.addr=0x6e2e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6e2f, .a=0xe3, .x=0xa8, .y=0x15, .sp=0xcb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xe3}, {.addr=0x6e2e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6e2e, .value=0xbf, .type=IO_READ},
        {.addr=0x6e2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_019B) {
    const struct CPU_State initial_cpu = {.pc=0xbba7, .a=0x80, .x=0xc0, .y=0x81, .sp=0x93, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x41}, {.addr=0xbba7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbba8, .a=0x41, .x=0xc1, .y=0x81, .sp=0x93, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x41}, {.addr=0xbba7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbba7, .value=0xbf, .type=IO_READ},
        {.addr=0xbba8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_019C) {
    const struct CPU_State initial_cpu = {.pc=0xda13, .a=0xd2, .x=0x99, .y=0xfc, .sp=0xea, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xb0}, {.addr=0xda13, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xda14, .a=0xb0, .x=0x9a, .y=0xfc, .sp=0xea, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xb0}, {.addr=0xda13, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xda13, .value=0xbf, .type=IO_READ},
        {.addr=0xda14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_019D) {
    const struct CPU_State initial_cpu = {.pc=0xd5e3, .a=0xaf, .x=0x3f, .y=0xfd, .sp=0x7b, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x32}, {.addr=0xd5e3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd5e4, .a=0x32, .x=0x40, .y=0xfd, .sp=0x7b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x32}, {.addr=0xd5e3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd5e3, .value=0xbf, .type=IO_READ},
        {.addr=0xd5e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_019E) {
    const struct CPU_State initial_cpu = {.pc=0x05b5, .a=0x12, .x=0xde, .y=0xe5, .sp=0xbb, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xd9}, {.addr=0x05b5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x05b6, .a=0xd9, .x=0xdf, .y=0xe5, .sp=0xbb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xd9}, {.addr=0x05b5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x05b5, .value=0xbf, .type=IO_READ},
        {.addr=0x05b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_019F) {
    const struct CPU_State initial_cpu = {.pc=0x5226, .a=0x9e, .x=0xa5, .y=0x85, .sp=0x2e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0xac}, {.addr=0x5226, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5227, .a=0xac, .x=0xa6, .y=0x85, .sp=0x2e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0xac}, {.addr=0x5226, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5226, .value=0xbf, .type=IO_READ},
        {.addr=0x5227, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xbc32, .a=0xb3, .x=0xe3, .y=0x4b, .sp=0xcf, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xb0}, {.addr=0xbc32, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbc33, .a=0xb0, .x=0xe4, .y=0x4b, .sp=0xcf, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0xb0}, {.addr=0xbc32, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbc32, .value=0xbf, .type=IO_READ},
        {.addr=0xbc33, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xd6a8, .a=0xe9, .x=0xc1, .y=0xb8, .sp=0xbf, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x01}, {.addr=0xd6a8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd6a9, .a=0x01, .x=0xc2, .y=0xb8, .sp=0xbf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x01}, {.addr=0xd6a8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd6a8, .value=0xbf, .type=IO_READ},
        {.addr=0xd6a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x6cbb, .a=0x36, .x=0x2b, .y=0x89, .sp=0xa5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x66}, {.addr=0x6cbb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6cbc, .a=0x66, .x=0x2c, .y=0x89, .sp=0xa5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x66}, {.addr=0x6cbb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6cbb, .value=0xbf, .type=IO_READ},
        {.addr=0x6cbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xa1ee, .a=0x6a, .x=0x0e, .y=0x82, .sp=0x65, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0xa5}, {.addr=0xa1ee, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa1ef, .a=0xa5, .x=0x0f, .y=0x82, .sp=0x65, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0xa5}, {.addr=0xa1ee, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa1ee, .value=0xbf, .type=IO_READ},
        {.addr=0xa1ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x919f, .a=0x3e, .x=0x8a, .y=0x0f, .sp=0xe1, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0xfd}, {.addr=0x919f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x91a0, .a=0xfd, .x=0x8b, .y=0x0f, .sp=0xe1, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xfd}, {.addr=0x919f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x919f, .value=0xbf, .type=IO_READ},
        {.addr=0x91a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xf12c, .a=0xab, .x=0xd4, .y=0x61, .sp=0xe0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x9a}, {.addr=0xf12c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf12d, .a=0x9a, .x=0xd5, .y=0x61, .sp=0xe0, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x9a}, {.addr=0xf12c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf12c, .value=0xbf, .type=IO_READ},
        {.addr=0xf12d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x5ad0, .a=0x4d, .x=0x7f, .y=0xcc, .sp=0xa2, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x11}, {.addr=0x5ad0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5ad1, .a=0x11, .x=0x80, .y=0xcc, .sp=0xa2, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x11}, {.addr=0x5ad0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5ad0, .value=0xbf, .type=IO_READ},
        {.addr=0x5ad1, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x1b24, .a=0x89, .x=0x10, .y=0xe0, .sp=0x91, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0xf2}, {.addr=0x1b24, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1b25, .a=0xf2, .x=0x11, .y=0xe0, .sp=0x91, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0xf2}, {.addr=0x1b24, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1b24, .value=0xbf, .type=IO_READ},
        {.addr=0x1b25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x6f21, .a=0x0e, .x=0x6d, .y=0x24, .sp=0xc5, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x3f}, {.addr=0x6f21, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6f22, .a=0x3f, .x=0x6e, .y=0x24, .sp=0xc5, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x3f}, {.addr=0x6f21, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6f21, .value=0xbf, .type=IO_READ},
        {.addr=0x6f22, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xf64a, .a=0xb5, .x=0x03, .y=0x52, .sp=0x61, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x97}, {.addr=0xf64a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf64b, .a=0x97, .x=0x04, .y=0x52, .sp=0x61, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x97}, {.addr=0xf64a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf64a, .value=0xbf, .type=IO_READ},
        {.addr=0xf64b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x9369, .a=0x94, .x=0x40, .y=0xd4, .sp=0xc7, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0xa7}, {.addr=0x9369, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x936a, .a=0xa7, .x=0x41, .y=0xd4, .sp=0xc7, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0xa7}, {.addr=0x9369, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9369, .value=0xbf, .type=IO_READ},
        {.addr=0x936a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x657f, .a=0x5a, .x=0xa9, .y=0x97, .sp=0x12, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0xd4}, {.addr=0x657f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6580, .a=0xd4, .x=0xaa, .y=0x97, .sp=0x12, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xd4}, {.addr=0x657f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x657f, .value=0xbf, .type=IO_READ},
        {.addr=0x6580, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xe311, .a=0x1c, .x=0x72, .y=0x7c, .sp=0xdc, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x4b}, {.addr=0xe311, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe312, .a=0x4b, .x=0x73, .y=0x7c, .sp=0xdc, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x4b}, {.addr=0xe311, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe311, .value=0xbf, .type=IO_READ},
        {.addr=0xe312, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xbf47, .a=0xe6, .x=0xa5, .y=0x94, .sp=0x45, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0x0f}, {.addr=0xbf47, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbf48, .a=0x0f, .x=0xa6, .y=0x94, .sp=0x45, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0x0f}, {.addr=0xbf47, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbf47, .value=0xbf, .type=IO_READ},
        {.addr=0xbf48, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x7f6d, .a=0xb3, .x=0x57, .y=0x50, .sp=0xa6, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x45}, {.addr=0x7f6d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7f6e, .a=0x45, .x=0x58, .y=0x50, .sp=0xa6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x45}, {.addr=0x7f6d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7f6d, .value=0xbf, .type=IO_READ},
        {.addr=0x7f6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xc48c, .a=0xad, .x=0x1b, .y=0x72, .sp=0xf1, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xbf}, {.addr=0xc48c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc48d, .a=0xbf, .x=0x1c, .y=0x72, .sp=0xf1, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xbf}, {.addr=0xc48c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc48c, .value=0xbf, .type=IO_READ},
        {.addr=0xc48d, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xc684, .a=0x23, .x=0x7e, .y=0x5d, .sp=0xde, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0xbf}, {.addr=0xc684, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc685, .a=0xbf, .x=0x7f, .y=0x5d, .sp=0xde, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0xbf}, {.addr=0xc684, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc684, .value=0xbf, .type=IO_READ},
        {.addr=0xc685, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x235f, .a=0x8a, .x=0xe6, .y=0xab, .sp=0x98, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x0e}, {.addr=0x235f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2360, .a=0x0e, .x=0xe7, .y=0xab, .sp=0x98, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x0e}, {.addr=0x235f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x235f, .value=0xbf, .type=IO_READ},
        {.addr=0x2360, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x5de8, .a=0x75, .x=0x2b, .y=0xf9, .sp=0x06, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x1b}, {.addr=0x5de8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5de9, .a=0x1b, .x=0x2c, .y=0xf9, .sp=0x06, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x1b}, {.addr=0x5de8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5de8, .value=0xbf, .type=IO_READ},
        {.addr=0x5de9, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xc2e5, .a=0x90, .x=0xa6, .y=0x76, .sp=0x22, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x96}, {.addr=0xc2e5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc2e6, .a=0x96, .x=0xa7, .y=0x76, .sp=0x22, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x96}, {.addr=0xc2e5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc2e5, .value=0xbf, .type=IO_READ},
        {.addr=0xc2e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xccd3, .a=0x32, .x=0x15, .y=0xfb, .sp=0x16, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0xf0}, {.addr=0xccd3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xccd4, .a=0xf0, .x=0x16, .y=0xfb, .sp=0x16, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0xf0}, {.addr=0xccd3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xccd3, .value=0xbf, .type=IO_READ},
        {.addr=0xccd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x83d9, .a=0xd5, .x=0xac, .y=0x3a, .sp=0xae, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x46}, {.addr=0x83d9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x83da, .a=0x46, .x=0xad, .y=0x3a, .sp=0xae, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x46}, {.addr=0x83d9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x83d9, .value=0xbf, .type=IO_READ},
        {.addr=0x83da, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xf159, .a=0x57, .x=0x4a, .y=0x2e, .sp=0xba, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x2b}, {.addr=0xf159, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf15a, .a=0x2b, .x=0x4b, .y=0x2e, .sp=0xba, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x2b}, {.addr=0xf159, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf159, .value=0xbf, .type=IO_READ},
        {.addr=0xf15a, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x55bf, .a=0x9b, .x=0x2c, .y=0xf8, .sp=0x21, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x62}, {.addr=0x55bf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x55c0, .a=0x62, .x=0x2d, .y=0xf8, .sp=0x21, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x62}, {.addr=0x55bf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x55bf, .value=0xbf, .type=IO_READ},
        {.addr=0x55c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x7bcb, .a=0x77, .x=0xac, .y=0xba, .sp=0x72, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x64}, {.addr=0x7bcb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7bcc, .a=0x64, .x=0xad, .y=0xba, .sp=0x72, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x64}, {.addr=0x7bcb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7bcb, .value=0xbf, .type=IO_READ},
        {.addr=0x7bcc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xd1f6, .a=0xfb, .x=0x84, .y=0x73, .sp=0x20, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x40}, {.addr=0xd1f6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd1f7, .a=0x40, .x=0x85, .y=0x73, .sp=0x20, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x40}, {.addr=0xd1f6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd1f6, .value=0xbf, .type=IO_READ},
        {.addr=0xd1f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x4f9d, .a=0xda, .x=0xa7, .y=0x7d, .sp=0x11, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x9d}, {.addr=0x4f9d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4f9e, .a=0x9d, .x=0xa8, .y=0x7d, .sp=0x11, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x9d}, {.addr=0x4f9d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4f9d, .value=0xbf, .type=IO_READ},
        {.addr=0x4f9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x6d9a, .a=0x67, .x=0x93, .y=0xbd, .sp=0x89, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x89}, {.addr=0x6d9a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6d9b, .a=0x89, .x=0x94, .y=0xbd, .sp=0x89, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x89}, {.addr=0x6d9a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6d9a, .value=0xbf, .type=IO_READ},
        {.addr=0x6d9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xfdff, .a=0xb3, .x=0xbe, .y=0xa8, .sp=0x0f, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0xba}, {.addr=0xfdff, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfe00, .a=0xba, .x=0xbf, .y=0xa8, .sp=0x0f, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0xba}, {.addr=0xfdff, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfdff, .value=0xbf, .type=IO_READ},
        {.addr=0xfe00, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x62ed, .a=0x21, .x=0x8e, .y=0xd1, .sp=0x0f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x69}, {.addr=0x62ed, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x62ee, .a=0x69, .x=0x8f, .y=0xd1, .sp=0x0f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x69}, {.addr=0x62ed, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x62ed, .value=0xbf, .type=IO_READ},
        {.addr=0x62ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x5b48, .a=0x7e, .x=0x69, .y=0xec, .sp=0x30, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x22}, {.addr=0x5b48, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5b49, .a=0x22, .x=0x6a, .y=0xec, .sp=0x30, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x22}, {.addr=0x5b48, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5b48, .value=0xbf, .type=IO_READ},
        {.addr=0x5b49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xbaae, .a=0x33, .x=0x56, .y=0xa2, .sp=0x8f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x3b}, {.addr=0xbaae, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbaaf, .a=0x3b, .x=0x57, .y=0xa2, .sp=0x8f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x3b}, {.addr=0xbaae, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbaae, .value=0xbf, .type=IO_READ},
        {.addr=0xbaaf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xcceb, .a=0x34, .x=0xdb, .y=0xb8, .sp=0x12, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xbf}, {.addr=0xcceb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xccec, .a=0xbf, .x=0xdc, .y=0xb8, .sp=0x12, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xbf}, {.addr=0xcceb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcceb, .value=0xbf, .type=IO_READ},
        {.addr=0xccec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x152c, .a=0x58, .x=0x6a, .y=0xcf, .sp=0xe3, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x29}, {.addr=0x152c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x152d, .a=0x29, .x=0x6b, .y=0xcf, .sp=0xe3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x29}, {.addr=0x152c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x152c, .value=0xbf, .type=IO_READ},
        {.addr=0x152d, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x46cc, .a=0xe5, .x=0xb1, .y=0xbc, .sp=0x71, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x92}, {.addr=0x46cc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x46cd, .a=0x92, .x=0xb2, .y=0xbc, .sp=0x71, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x92}, {.addr=0x46cc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x46cc, .value=0xbf, .type=IO_READ},
        {.addr=0x46cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xc705, .a=0x68, .x=0x36, .y=0xcb, .sp=0xb5, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0xc3}, {.addr=0xc705, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc706, .a=0xc3, .x=0x37, .y=0xcb, .sp=0xb5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0xc3}, {.addr=0xc705, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc705, .value=0xbf, .type=IO_READ},
        {.addr=0xc706, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xd032, .a=0x42, .x=0xd4, .y=0xc3, .sp=0x86, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x32}, {.addr=0xd032, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd033, .a=0x32, .x=0xd5, .y=0xc3, .sp=0x86, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x32}, {.addr=0xd032, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd032, .value=0xbf, .type=IO_READ},
        {.addr=0xd033, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xa5a3, .a=0x47, .x=0x51, .y=0xa4, .sp=0x80, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x0e}, {.addr=0xa5a3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa5a4, .a=0x0e, .x=0x52, .y=0xa4, .sp=0x80, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x0e}, {.addr=0xa5a3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa5a3, .value=0xbf, .type=IO_READ},
        {.addr=0xa5a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x45ae, .a=0xf8, .x=0xf4, .y=0x4d, .sp=0x3e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xe1}, {.addr=0x45ae, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x45af, .a=0xe1, .x=0xf5, .y=0x4d, .sp=0x3e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xe1}, {.addr=0x45ae, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x45ae, .value=0xbf, .type=IO_READ},
        {.addr=0x45af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x1991, .a=0x42, .x=0x0a, .y=0x65, .sp=0x03, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x73}, {.addr=0x1991, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1992, .a=0x73, .x=0x0b, .y=0x65, .sp=0x03, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x73}, {.addr=0x1991, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1991, .value=0xbf, .type=IO_READ},
        {.addr=0x1992, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x9a15, .a=0xdf, .x=0xe5, .y=0x60, .sp=0xb1, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x1f}, {.addr=0x9a15, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9a16, .a=0x1f, .x=0xe6, .y=0x60, .sp=0xb1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x1f}, {.addr=0x9a15, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9a15, .value=0xbf, .type=IO_READ},
        {.addr=0x9a16, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xede6, .a=0x24, .x=0x38, .y=0x2e, .sp=0x95, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x75}, {.addr=0xede6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xede7, .a=0x75, .x=0x39, .y=0x2e, .sp=0x95, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x75}, {.addr=0xede6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xede6, .value=0xbf, .type=IO_READ},
        {.addr=0xede7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x9427, .a=0x70, .x=0xb9, .y=0xe6, .sp=0x7e, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x8a}, {.addr=0x9427, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9428, .a=0x8a, .x=0xba, .y=0xe6, .sp=0x7e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x8a}, {.addr=0x9427, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9427, .value=0xbf, .type=IO_READ},
        {.addr=0x9428, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xc723, .a=0x7e, .x=0x88, .y=0xd5, .sp=0x0b, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0x78}, {.addr=0xc723, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc724, .a=0x78, .x=0x89, .y=0xd5, .sp=0x0b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0x78}, {.addr=0xc723, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc723, .value=0xbf, .type=IO_READ},
        {.addr=0xc724, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xf9f5, .a=0x30, .x=0x71, .y=0x44, .sp=0xf9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x5d}, {.addr=0xf9f5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf9f6, .a=0x5d, .x=0x72, .y=0x44, .sp=0xf9, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x5d}, {.addr=0xf9f5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf9f5, .value=0xbf, .type=IO_READ},
        {.addr=0xf9f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x837c, .a=0x80, .x=0x93, .y=0x90, .sp=0x8e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xb5}, {.addr=0x837c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x837d, .a=0xb5, .x=0x94, .y=0x90, .sp=0x8e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xb5}, {.addr=0x837c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x837c, .value=0xbf, .type=IO_READ},
        {.addr=0x837d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x7f43, .a=0x72, .x=0x0b, .y=0x35, .sp=0xba, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x9f}, {.addr=0x7f43, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7f44, .a=0x9f, .x=0x0c, .y=0x35, .sp=0xba, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x9f}, {.addr=0x7f43, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7f43, .value=0xbf, .type=IO_READ},
        {.addr=0x7f44, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x8c6c, .a=0x82, .x=0xbb, .y=0x88, .sp=0x84, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x05}, {.addr=0x8c6c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8c6d, .a=0x05, .x=0xbc, .y=0x88, .sp=0x84, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x05}, {.addr=0x8c6c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8c6c, .value=0xbf, .type=IO_READ},
        {.addr=0x8c6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x11d4, .a=0x8d, .x=0xd5, .y=0x48, .sp=0x5d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x41}, {.addr=0x11d4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x11d5, .a=0x41, .x=0xd6, .y=0x48, .sp=0x5d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x41}, {.addr=0x11d4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x11d4, .value=0xbf, .type=IO_READ},
        {.addr=0x11d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x1a62, .a=0xda, .x=0x97, .y=0xf7, .sp=0xf5, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x61}, {.addr=0x1a62, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1a63, .a=0x61, .x=0x98, .y=0xf7, .sp=0xf5, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x61}, {.addr=0x1a62, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1a62, .value=0xbf, .type=IO_READ},
        {.addr=0x1a63, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x1663, .a=0x22, .x=0x83, .y=0xc3, .sp=0x30, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x94}, {.addr=0x1663, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1664, .a=0x94, .x=0x84, .y=0xc3, .sp=0x30, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x94}, {.addr=0x1663, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1663, .value=0xbf, .type=IO_READ},
        {.addr=0x1664, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x2985, .a=0x8a, .x=0x49, .y=0xdf, .sp=0x1c, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x88}, {.addr=0x2985, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2986, .a=0x88, .x=0x4a, .y=0xdf, .sp=0x1c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x88}, {.addr=0x2985, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2985, .value=0xbf, .type=IO_READ},
        {.addr=0x2986, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x701c, .a=0xec, .x=0x5d, .y=0xdd, .sp=0x31, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xa0}, {.addr=0x701c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x701d, .a=0xa0, .x=0x5e, .y=0xdd, .sp=0x31, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xa0}, {.addr=0x701c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x701c, .value=0xbf, .type=IO_READ},
        {.addr=0x701d, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xd703, .a=0xbf, .x=0xce, .y=0x21, .sp=0x2e, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x3d}, {.addr=0xd703, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd704, .a=0x3d, .x=0xcf, .y=0x21, .sp=0x2e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x3d}, {.addr=0xd703, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd703, .value=0xbf, .type=IO_READ},
        {.addr=0xd704, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x9ea6, .a=0x2d, .x=0x36, .y=0xe2, .sp=0x69, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xec}, {.addr=0x9ea6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9ea7, .a=0xec, .x=0x37, .y=0xe2, .sp=0x69, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xec}, {.addr=0x9ea6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9ea6, .value=0xbf, .type=IO_READ},
        {.addr=0x9ea7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x54f1, .a=0xfb, .x=0x97, .y=0x70, .sp=0x41, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x3b}, {.addr=0x54f1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x54f2, .a=0x3b, .x=0x98, .y=0x70, .sp=0x41, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x3b}, {.addr=0x54f1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x54f1, .value=0xbf, .type=IO_READ},
        {.addr=0x54f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xfb9b, .a=0x12, .x=0x07, .y=0xd1, .sp=0x37, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xd6}, {.addr=0xfb9b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfb9c, .a=0xd6, .x=0x08, .y=0xd1, .sp=0x37, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xd6}, {.addr=0xfb9b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfb9b, .value=0xbf, .type=IO_READ},
        {.addr=0xfb9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xdf4f, .a=0xe4, .x=0xe1, .y=0xc0, .sp=0x1f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0xcb}, {.addr=0xdf4f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdf50, .a=0xcb, .x=0xe2, .y=0xc0, .sp=0x1f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0xcb}, {.addr=0xdf4f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdf4f, .value=0xbf, .type=IO_READ},
        {.addr=0xdf50, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x64fa, .a=0xb6, .x=0x8c, .y=0x77, .sp=0xbc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x6c}, {.addr=0x64fa, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x64fb, .a=0x6c, .x=0x8d, .y=0x77, .sp=0xbc, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0x6c}, {.addr=0x64fa, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x64fa, .value=0xbf, .type=IO_READ},
        {.addr=0x64fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x26b3, .a=0xf4, .x=0x6f, .y=0xd7, .sp=0x3b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x1f}, {.addr=0x26b3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x26b4, .a=0x1f, .x=0x70, .y=0xd7, .sp=0x3b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x1f}, {.addr=0x26b3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x26b3, .value=0xbf, .type=IO_READ},
        {.addr=0x26b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x0899, .a=0x78, .x=0xc4, .y=0x40, .sp=0x7c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0xbf}, {.addr=0x0899, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x089a, .a=0xbf, .x=0xc5, .y=0x40, .sp=0x7c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xbf}, {.addr=0x0899, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0899, .value=0xbf, .type=IO_READ},
        {.addr=0x089a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xe800, .a=0xac, .x=0x8e, .y=0x54, .sp=0x8a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x96}, {.addr=0xe800, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe801, .a=0x96, .x=0x8f, .y=0x54, .sp=0x8a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x96}, {.addr=0xe800, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe800, .value=0xbf, .type=IO_READ},
        {.addr=0xe801, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x5be0, .a=0x45, .x=0x6a, .y=0xfc, .sp=0x12, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x6e}, {.addr=0x5be0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5be1, .a=0x6e, .x=0x6b, .y=0xfc, .sp=0x12, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x6e}, {.addr=0x5be0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5be0, .value=0xbf, .type=IO_READ},
        {.addr=0x5be1, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x134b, .a=0x84, .x=0xec, .y=0xa7, .sp=0x11, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x61}, {.addr=0x134b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x134c, .a=0x61, .x=0xed, .y=0xa7, .sp=0x11, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x61}, {.addr=0x134b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x134b, .value=0xbf, .type=IO_READ},
        {.addr=0x134c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x18ff, .a=0xe0, .x=0xa0, .y=0xc3, .sp=0x22, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x44}, {.addr=0x18ff, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1900, .a=0x44, .x=0xa1, .y=0xc3, .sp=0x22, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x44}, {.addr=0x18ff, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x18ff, .value=0xbf, .type=IO_READ},
        {.addr=0x1900, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x56c9, .a=0x72, .x=0xa3, .y=0x51, .sp=0xa2, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x77}, {.addr=0x56c9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x56ca, .a=0x77, .x=0xa4, .y=0x51, .sp=0xa2, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x77}, {.addr=0x56c9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x56c9, .value=0xbf, .type=IO_READ},
        {.addr=0x56ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x40f8, .a=0x84, .x=0x20, .y=0x2d, .sp=0xc9, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x2a}, {.addr=0x40f8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x40f9, .a=0x2a, .x=0x21, .y=0x2d, .sp=0xc9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x2a}, {.addr=0x40f8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x40f8, .value=0xbf, .type=IO_READ},
        {.addr=0x40f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x1dff, .a=0x75, .x=0x83, .y=0x53, .sp=0x3c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x5e}, {.addr=0x1dff, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1e00, .a=0x5e, .x=0x84, .y=0x53, .sp=0x3c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x5e}, {.addr=0x1dff, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1dff, .value=0xbf, .type=IO_READ},
        {.addr=0x1e00, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xa3a0, .a=0x83, .x=0x87, .y=0x53, .sp=0xf7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xd1}, {.addr=0xa3a0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa3a1, .a=0xd1, .x=0x88, .y=0x53, .sp=0xf7, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xd1}, {.addr=0xa3a0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa3a0, .value=0xbf, .type=IO_READ},
        {.addr=0xa3a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x4b39, .a=0xd7, .x=0xa5, .y=0x0f, .sp=0x8b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0x43}, {.addr=0x4b39, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4b3a, .a=0x43, .x=0xa6, .y=0x0f, .sp=0x8b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0x43}, {.addr=0x4b39, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4b39, .value=0xbf, .type=IO_READ},
        {.addr=0x4b3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xc810, .a=0x25, .x=0x75, .y=0x49, .sp=0x7b, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0xeb}, {.addr=0xc810, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc811, .a=0xeb, .x=0x76, .y=0x49, .sp=0x7b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xeb}, {.addr=0xc810, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc810, .value=0xbf, .type=IO_READ},
        {.addr=0xc811, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x4515, .a=0x2a, .x=0xfd, .y=0x1a, .sp=0x72, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x07}, {.addr=0x4515, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4516, .a=0x07, .x=0xfe, .y=0x1a, .sp=0x72, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x07}, {.addr=0x4515, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4515, .value=0xbf, .type=IO_READ},
        {.addr=0x4516, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x2f96, .a=0xe4, .x=0x43, .y=0x6c, .sp=0x86, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xaa}, {.addr=0x2f96, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2f97, .a=0xaa, .x=0x44, .y=0x6c, .sp=0x86, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xaa}, {.addr=0x2f96, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2f96, .value=0xbf, .type=IO_READ},
        {.addr=0x2f97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x362c, .a=0x24, .x=0x7a, .y=0x89, .sp=0x53, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x24}, {.addr=0x362c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x362d, .a=0x24, .x=0x7b, .y=0x89, .sp=0x53, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x24}, {.addr=0x362c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x362c, .value=0xbf, .type=IO_READ},
        {.addr=0x362d, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x5b0c, .a=0xcf, .x=0x03, .y=0x1f, .sp=0x56, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xb5}, {.addr=0x5b0c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5b0d, .a=0xb5, .x=0x04, .y=0x1f, .sp=0x56, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xb5}, {.addr=0x5b0c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5b0c, .value=0xbf, .type=IO_READ},
        {.addr=0x5b0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x529d, .a=0xb6, .x=0xd9, .y=0xb1, .sp=0x99, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x04}, {.addr=0x529d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x529e, .a=0x04, .x=0xda, .y=0xb1, .sp=0x99, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x04}, {.addr=0x529d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x529d, .value=0xbf, .type=IO_READ},
        {.addr=0x529e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xd64f, .a=0x83, .x=0x09, .y=0x72, .sp=0x0c, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xf9}, {.addr=0xd64f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd650, .a=0xf9, .x=0x0a, .y=0x72, .sp=0x0c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xf9}, {.addr=0xd64f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd64f, .value=0xbf, .type=IO_READ},
        {.addr=0xd650, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x561a, .a=0xe2, .x=0x0b, .y=0xe2, .sp=0x80, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0xec}, {.addr=0x561a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x561b, .a=0xec, .x=0x0c, .y=0xe2, .sp=0x80, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0xec}, {.addr=0x561a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x561a, .value=0xbf, .type=IO_READ},
        {.addr=0x561b, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x494d, .a=0x5e, .x=0xe7, .y=0xb1, .sp=0xc7, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x02}, {.addr=0x494d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x494e, .a=0x02, .x=0xe8, .y=0xb1, .sp=0xc7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x02}, {.addr=0x494d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x494d, .value=0xbf, .type=IO_READ},
        {.addr=0x494e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xf8b9, .a=0x6e, .x=0x79, .y=0xfe, .sp=0xe9, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xd7}, {.addr=0xf8b9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf8ba, .a=0xd7, .x=0x7a, .y=0xfe, .sp=0xe9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xd7}, {.addr=0xf8b9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf8b9, .value=0xbf, .type=IO_READ},
        {.addr=0xf8ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x2194, .a=0x63, .x=0x72, .y=0x60, .sp=0xef, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xec}, {.addr=0x2194, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2195, .a=0xec, .x=0x73, .y=0x60, .sp=0xef, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xec}, {.addr=0x2194, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2194, .value=0xbf, .type=IO_READ},
        {.addr=0x2195, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x8169, .a=0xd5, .x=0x40, .y=0xdb, .sp=0x16, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x45}, {.addr=0x8169, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x816a, .a=0x45, .x=0x41, .y=0xdb, .sp=0x16, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x45}, {.addr=0x8169, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8169, .value=0xbf, .type=IO_READ},
        {.addr=0x816a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x26dc, .a=0xd2, .x=0xfe, .y=0x86, .sp=0x2d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x22}, {.addr=0x26dc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x26dd, .a=0x22, .x=0xff, .y=0x86, .sp=0x2d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x22}, {.addr=0x26dc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x26dc, .value=0xbf, .type=IO_READ},
        {.addr=0x26dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xdefd, .a=0xdd, .x=0x55, .y=0x2a, .sp=0xd5, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xc1}, {.addr=0xdefd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdefe, .a=0xc1, .x=0x56, .y=0x2a, .sp=0xd5, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xc1}, {.addr=0xdefd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdefd, .value=0xbf, .type=IO_READ},
        {.addr=0xdefe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x6c0c, .a=0x45, .x=0x8f, .y=0xe0, .sp=0x4d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x61}, {.addr=0x6c0c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6c0d, .a=0x61, .x=0x90, .y=0xe0, .sp=0x4d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x61}, {.addr=0x6c0c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6c0c, .value=0xbf, .type=IO_READ},
        {.addr=0x6c0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xfd55, .a=0xbc, .x=0x54, .y=0x51, .sp=0x5d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x1b}, {.addr=0xfd55, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfd56, .a=0x1b, .x=0x55, .y=0x51, .sp=0x5d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x1b}, {.addr=0xfd55, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfd55, .value=0xbf, .type=IO_READ},
        {.addr=0xfd56, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xbb14, .a=0x50, .x=0xf2, .y=0xca, .sp=0xdb, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xe3}, {.addr=0xbb14, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbb15, .a=0xe3, .x=0xf3, .y=0xca, .sp=0xdb, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xe3}, {.addr=0xbb14, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbb14, .value=0xbf, .type=IO_READ},
        {.addr=0xbb15, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x19d7, .a=0x96, .x=0x65, .y=0x27, .sp=0x14, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x3a}, {.addr=0x19d7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x19d8, .a=0x3a, .x=0x66, .y=0x27, .sp=0x14, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x3a}, {.addr=0x19d7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x19d7, .value=0xbf, .type=IO_READ},
        {.addr=0x19d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xcd49, .a=0x80, .x=0x07, .y=0x56, .sp=0x28, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0xeb}, {.addr=0xcd49, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcd4a, .a=0xeb, .x=0x08, .y=0x56, .sp=0x28, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xeb}, {.addr=0xcd49, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcd49, .value=0xbf, .type=IO_READ},
        {.addr=0xcd4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xefc0, .a=0x24, .x=0xd7, .y=0xf4, .sp=0x7a, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x78}, {.addr=0xefc0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xefc1, .a=0x78, .x=0xd8, .y=0xf4, .sp=0x7a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x78}, {.addr=0xefc0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xefc0, .value=0xbf, .type=IO_READ},
        {.addr=0xefc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x77ab, .a=0xef, .x=0xac, .y=0x7c, .sp=0xbe, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x06}, {.addr=0x77ab, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x77ac, .a=0x06, .x=0xad, .y=0x7c, .sp=0xbe, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x06}, {.addr=0x77ab, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x77ab, .value=0xbf, .type=IO_READ},
        {.addr=0x77ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0200) {
    const struct CPU_State initial_cpu = {.pc=0x0705, .a=0x11, .x=0x7f, .y=0x58, .sp=0x2d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x55}, {.addr=0x0705, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0706, .a=0x55, .x=0x80, .y=0x58, .sp=0x2d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x55}, {.addr=0x0705, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0705, .value=0xbf, .type=IO_READ},
        {.addr=0x0706, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0201) {
    const struct CPU_State initial_cpu = {.pc=0x769d, .a=0x49, .x=0x08, .y=0x79, .sp=0x94, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x7a}, {.addr=0x769d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x769e, .a=0x7a, .x=0x09, .y=0x79, .sp=0x94, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0x7a}, {.addr=0x769d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x769d, .value=0xbf, .type=IO_READ},
        {.addr=0x769e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0202) {
    const struct CPU_State initial_cpu = {.pc=0x3920, .a=0x46, .x=0xa8, .y=0xb7, .sp=0x3c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0x9a}, {.addr=0x3920, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3921, .a=0x9a, .x=0xa9, .y=0xb7, .sp=0x3c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0x9a}, {.addr=0x3920, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3920, .value=0xbf, .type=IO_READ},
        {.addr=0x3921, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0203) {
    const struct CPU_State initial_cpu = {.pc=0x9d50, .a=0xb5, .x=0x13, .y=0x90, .sp=0x17, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0x15}, {.addr=0x9d50, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9d51, .a=0x15, .x=0x14, .y=0x90, .sp=0x17, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0x15}, {.addr=0x9d50, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9d50, .value=0xbf, .type=IO_READ},
        {.addr=0x9d51, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0204) {
    const struct CPU_State initial_cpu = {.pc=0x5f3a, .a=0x96, .x=0x26, .y=0x36, .sp=0xb0, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x9c}, {.addr=0x5f3a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5f3b, .a=0x9c, .x=0x27, .y=0x36, .sp=0xb0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0x9c}, {.addr=0x5f3a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5f3a, .value=0xbf, .type=IO_READ},
        {.addr=0x5f3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0205) {
    const struct CPU_State initial_cpu = {.pc=0x68a0, .a=0xe9, .x=0x19, .y=0x90, .sp=0xc0, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0xc2}, {.addr=0x68a0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x68a1, .a=0xc2, .x=0x1a, .y=0x90, .sp=0xc0, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0xc2}, {.addr=0x68a0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x68a0, .value=0xbf, .type=IO_READ},
        {.addr=0x68a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0206) {
    const struct CPU_State initial_cpu = {.pc=0xc678, .a=0x4d, .x=0x0b, .y=0xf8, .sp=0x6c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x19}, {.addr=0xc678, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc679, .a=0x19, .x=0x0c, .y=0xf8, .sp=0x6c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x19}, {.addr=0xc678, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc678, .value=0xbf, .type=IO_READ},
        {.addr=0xc679, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0207) {
    const struct CPU_State initial_cpu = {.pc=0xf030, .a=0x31, .x=0x10, .y=0xad, .sp=0x7a, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x7d}, {.addr=0xf030, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf031, .a=0x7d, .x=0x11, .y=0xad, .sp=0x7a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x7d}, {.addr=0xf030, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf030, .value=0xbf, .type=IO_READ},
        {.addr=0xf031, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0208) {
    const struct CPU_State initial_cpu = {.pc=0x198d, .a=0xb0, .x=0xb2, .y=0x3c, .sp=0x51, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0xbd}, {.addr=0x198d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x198e, .a=0xbd, .x=0xb3, .y=0x3c, .sp=0x51, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0xbd}, {.addr=0x198d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x198d, .value=0xbf, .type=IO_READ},
        {.addr=0x198e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0209) {
    const struct CPU_State initial_cpu = {.pc=0xc7c7, .a=0x5c, .x=0x60, .y=0xec, .sp=0xaa, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x20}, {.addr=0xc7c7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc7c8, .a=0x20, .x=0x61, .y=0xec, .sp=0xaa, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x20}, {.addr=0xc7c7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc7c7, .value=0xbf, .type=IO_READ},
        {.addr=0xc7c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_020A) {
    const struct CPU_State initial_cpu = {.pc=0xd99b, .a=0xa3, .x=0xcb, .y=0xdf, .sp=0x84, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x8a}, {.addr=0xd99b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd99c, .a=0x8a, .x=0xcc, .y=0xdf, .sp=0x84, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x8a}, {.addr=0xd99b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd99b, .value=0xbf, .type=IO_READ},
        {.addr=0xd99c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_020B) {
    const struct CPU_State initial_cpu = {.pc=0xa99f, .a=0xc6, .x=0xd2, .y=0xb0, .sp=0x11, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x6a}, {.addr=0xa99f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa9a0, .a=0x6a, .x=0xd3, .y=0xb0, .sp=0x11, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x6a}, {.addr=0xa99f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa99f, .value=0xbf, .type=IO_READ},
        {.addr=0xa9a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_020C) {
    const struct CPU_State initial_cpu = {.pc=0x7009, .a=0x69, .x=0x81, .y=0x62, .sp=0x79, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x5d}, {.addr=0x7009, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x700a, .a=0x5d, .x=0x82, .y=0x62, .sp=0x79, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x5d}, {.addr=0x7009, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7009, .value=0xbf, .type=IO_READ},
        {.addr=0x700a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_020D) {
    const struct CPU_State initial_cpu = {.pc=0x377d, .a=0xfd, .x=0x5f, .y=0x09, .sp=0x7a, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0xc9}, {.addr=0x377d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x377e, .a=0xc9, .x=0x60, .y=0x09, .sp=0x7a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0xc9}, {.addr=0x377d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x377d, .value=0xbf, .type=IO_READ},
        {.addr=0x377e, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_020E) {
    const struct CPU_State initial_cpu = {.pc=0x399a, .a=0x4f, .x=0x9d, .y=0x37, .sp=0xa8, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x52}, {.addr=0x399a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x399b, .a=0x52, .x=0x9e, .y=0x37, .sp=0xa8, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x52}, {.addr=0x399a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x399a, .value=0xbf, .type=IO_READ},
        {.addr=0x399b, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_020F) {
    const struct CPU_State initial_cpu = {.pc=0xda9d, .a=0xc3, .x=0xd8, .y=0xe5, .sp=0x34, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0xb8}, {.addr=0xda9d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xda9e, .a=0xb8, .x=0xd9, .y=0xe5, .sp=0x34, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0xb8}, {.addr=0xda9d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xda9d, .value=0xbf, .type=IO_READ},
        {.addr=0xda9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0210) {
    const struct CPU_State initial_cpu = {.pc=0xf55d, .a=0xea, .x=0xbc, .y=0xd3, .sp=0x7f, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x6b}, {.addr=0xf55d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf55e, .a=0x6b, .x=0xbd, .y=0xd3, .sp=0x7f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x6b}, {.addr=0xf55d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf55d, .value=0xbf, .type=IO_READ},
        {.addr=0xf55e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0211) {
    const struct CPU_State initial_cpu = {.pc=0x0be7, .a=0x80, .x=0x17, .y=0x74, .sp=0x3a, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xd0}, {.addr=0x0be7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0be8, .a=0xd0, .x=0x18, .y=0x74, .sp=0x3a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xd0}, {.addr=0x0be7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0be7, .value=0xbf, .type=IO_READ},
        {.addr=0x0be8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0212) {
    const struct CPU_State initial_cpu = {.pc=0xad8d, .a=0x6b, .x=0x78, .y=0x01, .sp=0xe8, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0xa3}, {.addr=0xad8d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xad8e, .a=0xa3, .x=0x79, .y=0x01, .sp=0xe8, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0xa3}, {.addr=0xad8d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xad8d, .value=0xbf, .type=IO_READ},
        {.addr=0xad8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0213) {
    const struct CPU_State initial_cpu = {.pc=0x6a8c, .a=0x81, .x=0xd4, .y=0xe7, .sp=0x9d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xc4}, {.addr=0x6a8c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6a8d, .a=0xc4, .x=0xd5, .y=0xe7, .sp=0x9d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xc4}, {.addr=0x6a8c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6a8c, .value=0xbf, .type=IO_READ},
        {.addr=0x6a8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0214) {
    const struct CPU_State initial_cpu = {.pc=0xf892, .a=0xd3, .x=0x09, .y=0xa5, .sp=0x92, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x21}, {.addr=0xf892, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf893, .a=0x21, .x=0x0a, .y=0xa5, .sp=0x92, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x21}, {.addr=0xf892, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf892, .value=0xbf, .type=IO_READ},
        {.addr=0xf893, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0215) {
    const struct CPU_State initial_cpu = {.pc=0x9f3f, .a=0x4a, .x=0x2a, .y=0xfc, .sp=0x49, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x22}, {.addr=0x9f3f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9f40, .a=0x22, .x=0x2b, .y=0xfc, .sp=0x49, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x22}, {.addr=0x9f3f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9f3f, .value=0xbf, .type=IO_READ},
        {.addr=0x9f40, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0216) {
    const struct CPU_State initial_cpu = {.pc=0xa1c8, .a=0x5f, .x=0x8b, .y=0x87, .sp=0x9d, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x9f}, {.addr=0xa1c8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa1c9, .a=0x9f, .x=0x8c, .y=0x87, .sp=0x9d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x9f}, {.addr=0xa1c8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa1c8, .value=0xbf, .type=IO_READ},
        {.addr=0xa1c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0217) {
    const struct CPU_State initial_cpu = {.pc=0xed8e, .a=0xe1, .x=0x40, .y=0x15, .sp=0xa2, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0xde}, {.addr=0xed8e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xed8f, .a=0xde, .x=0x41, .y=0x15, .sp=0xa2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0xde}, {.addr=0xed8e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xed8e, .value=0xbf, .type=IO_READ},
        {.addr=0xed8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0218) {
    const struct CPU_State initial_cpu = {.pc=0xf08f, .a=0x1b, .x=0x6f, .y=0xb3, .sp=0x47, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x89}, {.addr=0xf08f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf090, .a=0x89, .x=0x70, .y=0xb3, .sp=0x47, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x89}, {.addr=0xf08f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf08f, .value=0xbf, .type=IO_READ},
        {.addr=0xf090, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0219) {
    const struct CPU_State initial_cpu = {.pc=0x1917, .a=0xbe, .x=0xbe, .y=0x2c, .sp=0x6e, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0xb1}, {.addr=0x1917, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1918, .a=0xb1, .x=0xbf, .y=0x2c, .sp=0x6e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xb1}, {.addr=0x1917, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1917, .value=0xbf, .type=IO_READ},
        {.addr=0x1918, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_021A) {
    const struct CPU_State initial_cpu = {.pc=0x18b2, .a=0x60, .x=0xb1, .y=0x75, .sp=0x0d, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x1c}, {.addr=0x18b2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x18b3, .a=0x1c, .x=0xb2, .y=0x75, .sp=0x0d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x1c}, {.addr=0x18b2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x18b2, .value=0xbf, .type=IO_READ},
        {.addr=0x18b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_021B) {
    const struct CPU_State initial_cpu = {.pc=0x1d9d, .a=0xe8, .x=0xd7, .y=0x5e, .sp=0xd5, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x2f}, {.addr=0x1d9d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1d9e, .a=0x2f, .x=0xd8, .y=0x5e, .sp=0xd5, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x2f}, {.addr=0x1d9d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1d9d, .value=0xbf, .type=IO_READ},
        {.addr=0x1d9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_021C) {
    const struct CPU_State initial_cpu = {.pc=0x4037, .a=0x35, .x=0x9f, .y=0x66, .sp=0xa4, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x4f}, {.addr=0x4037, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4038, .a=0x4f, .x=0xa0, .y=0x66, .sp=0xa4, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x4f}, {.addr=0x4037, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4037, .value=0xbf, .type=IO_READ},
        {.addr=0x4038, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_021D) {
    const struct CPU_State initial_cpu = {.pc=0x0c45, .a=0x74, .x=0x38, .y=0x2d, .sp=0x41, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0xec}, {.addr=0x0c45, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0c46, .a=0xec, .x=0x39, .y=0x2d, .sp=0x41, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xec}, {.addr=0x0c45, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0c45, .value=0xbf, .type=IO_READ},
        {.addr=0x0c46, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_021E) {
    const struct CPU_State initial_cpu = {.pc=0xa7c4, .a=0x55, .x=0x9f, .y=0xcf, .sp=0xf6, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x0f}, {.addr=0xa7c4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa7c5, .a=0x0f, .x=0xa0, .y=0xcf, .sp=0xf6, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x0f}, {.addr=0xa7c4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa7c4, .value=0xbf, .type=IO_READ},
        {.addr=0xa7c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_021F) {
    const struct CPU_State initial_cpu = {.pc=0x721a, .a=0x12, .x=0xb4, .y=0xf5, .sp=0x92, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xa9}, {.addr=0x721a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x721b, .a=0xa9, .x=0xb5, .y=0xf5, .sp=0x92, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xa9}, {.addr=0x721a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x721a, .value=0xbf, .type=IO_READ},
        {.addr=0x721b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0220) {
    const struct CPU_State initial_cpu = {.pc=0x97ff, .a=0x3c, .x=0xda, .y=0x54, .sp=0x70, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0xea}, {.addr=0x97ff, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9800, .a=0xea, .x=0xdb, .y=0x54, .sp=0x70, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0xea}, {.addr=0x97ff, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x97ff, .value=0xbf, .type=IO_READ},
        {.addr=0x9800, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0221) {
    const struct CPU_State initial_cpu = {.pc=0x316e, .a=0xf3, .x=0xcf, .y=0x42, .sp=0xad, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x0c}, {.addr=0x316e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x316f, .a=0x0c, .x=0xd0, .y=0x42, .sp=0xad, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x0c}, {.addr=0x316e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x316e, .value=0xbf, .type=IO_READ},
        {.addr=0x316f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0222) {
    const struct CPU_State initial_cpu = {.pc=0x7790, .a=0x88, .x=0x28, .y=0x80, .sp=0x2e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x18}, {.addr=0x7790, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7791, .a=0x18, .x=0x29, .y=0x80, .sp=0x2e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0x18}, {.addr=0x7790, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7790, .value=0xbf, .type=IO_READ},
        {.addr=0x7791, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0223) {
    const struct CPU_State initial_cpu = {.pc=0x0fd3, .a=0x74, .x=0x84, .y=0xf0, .sp=0xca, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x6d}, {.addr=0x0fd3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0fd4, .a=0x6d, .x=0x85, .y=0xf0, .sp=0xca, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x6d}, {.addr=0x0fd3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0fd3, .value=0xbf, .type=IO_READ},
        {.addr=0x0fd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0224) {
    const struct CPU_State initial_cpu = {.pc=0x0989, .a=0x3f, .x=0xad, .y=0x9b, .sp=0x65, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x28}, {.addr=0x0989, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x098a, .a=0x28, .x=0xae, .y=0x9b, .sp=0x65, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x28}, {.addr=0x0989, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0989, .value=0xbf, .type=IO_READ},
        {.addr=0x098a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0225) {
    const struct CPU_State initial_cpu = {.pc=0x8531, .a=0x1b, .x=0xb9, .y=0xd9, .sp=0x34, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x2f}, {.addr=0x8531, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8532, .a=0x2f, .x=0xba, .y=0xd9, .sp=0x34, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x2f}, {.addr=0x8531, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8531, .value=0xbf, .type=IO_READ},
        {.addr=0x8532, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0226) {
    const struct CPU_State initial_cpu = {.pc=0x56b3, .a=0x7a, .x=0x05, .y=0xd4, .sp=0x56, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x30}, {.addr=0x56b3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x56b4, .a=0x30, .x=0x06, .y=0xd4, .sp=0x56, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x30}, {.addr=0x56b3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x56b3, .value=0xbf, .type=IO_READ},
        {.addr=0x56b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0227) {
    const struct CPU_State initial_cpu = {.pc=0xf93b, .a=0x60, .x=0x0d, .y=0x7e, .sp=0xc2, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xfe}, {.addr=0xf93b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf93c, .a=0xfe, .x=0x0e, .y=0x7e, .sp=0xc2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xfe}, {.addr=0xf93b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf93b, .value=0xbf, .type=IO_READ},
        {.addr=0xf93c, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0228) {
    const struct CPU_State initial_cpu = {.pc=0x26ec, .a=0x17, .x=0x42, .y=0x9a, .sp=0x11, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x1c}, {.addr=0x26ec, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x26ed, .a=0x1c, .x=0x43, .y=0x9a, .sp=0x11, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x1c}, {.addr=0x26ec, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x26ec, .value=0xbf, .type=IO_READ},
        {.addr=0x26ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0229) {
    const struct CPU_State initial_cpu = {.pc=0x8e84, .a=0x55, .x=0x71, .y=0x7f, .sp=0x69, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xde}, {.addr=0x8e84, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8e85, .a=0xde, .x=0x72, .y=0x7f, .sp=0x69, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xde}, {.addr=0x8e84, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8e84, .value=0xbf, .type=IO_READ},
        {.addr=0x8e85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_022A) {
    const struct CPU_State initial_cpu = {.pc=0xf739, .a=0x1b, .x=0xc5, .y=0xac, .sp=0x8c, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x64}, {.addr=0xf739, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf73a, .a=0x64, .x=0xc6, .y=0xac, .sp=0x8c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x64}, {.addr=0xf739, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf739, .value=0xbf, .type=IO_READ},
        {.addr=0xf73a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_022B) {
    const struct CPU_State initial_cpu = {.pc=0x3bbd, .a=0xe9, .x=0xde, .y=0x07, .sp=0x07, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xdf}, {.addr=0x3bbd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3bbe, .a=0xdf, .x=0xdf, .y=0x07, .sp=0x07, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xdf}, {.addr=0x3bbd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3bbd, .value=0xbf, .type=IO_READ},
        {.addr=0x3bbe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_022C) {
    const struct CPU_State initial_cpu = {.pc=0x96af, .a=0xd5, .x=0xde, .y=0x71, .sp=0x71, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x9e}, {.addr=0x96af, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x96b0, .a=0x9e, .x=0xdf, .y=0x71, .sp=0x71, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x9e}, {.addr=0x96af, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x96af, .value=0xbf, .type=IO_READ},
        {.addr=0x96b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_022D) {
    const struct CPU_State initial_cpu = {.pc=0xa794, .a=0xfe, .x=0x9b, .y=0xb1, .sp=0x9f, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x85}, {.addr=0xa794, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa795, .a=0x85, .x=0x9c, .y=0xb1, .sp=0x9f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x85}, {.addr=0xa794, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa794, .value=0xbf, .type=IO_READ},
        {.addr=0xa795, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_022E) {
    const struct CPU_State initial_cpu = {.pc=0x7abb, .a=0x11, .x=0x83, .y=0x78, .sp=0x59, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x1d}, {.addr=0x7abb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7abc, .a=0x1d, .x=0x84, .y=0x78, .sp=0x59, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x1d}, {.addr=0x7abb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7abb, .value=0xbf, .type=IO_READ},
        {.addr=0x7abc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_022F) {
    const struct CPU_State initial_cpu = {.pc=0xafed, .a=0x82, .x=0xf0, .y=0x26, .sp=0x26, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x75}, {.addr=0xafed, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xafee, .a=0x75, .x=0xf1, .y=0x26, .sp=0x26, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x75}, {.addr=0xafed, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xafed, .value=0xbf, .type=IO_READ},
        {.addr=0xafee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0230) {
    const struct CPU_State initial_cpu = {.pc=0xc53a, .a=0xe0, .x=0xb2, .y=0xc8, .sp=0xce, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x7f}, {.addr=0xc53a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc53b, .a=0x7f, .x=0xb3, .y=0xc8, .sp=0xce, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x7f}, {.addr=0xc53a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc53a, .value=0xbf, .type=IO_READ},
        {.addr=0xc53b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0231) {
    const struct CPU_State initial_cpu = {.pc=0x9fb7, .a=0xdf, .x=0xe4, .y=0xf2, .sp=0xdf, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xc1}, {.addr=0x9fb7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9fb8, .a=0xc1, .x=0xe5, .y=0xf2, .sp=0xdf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xc1}, {.addr=0x9fb7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9fb7, .value=0xbf, .type=IO_READ},
        {.addr=0x9fb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0232) {
    const struct CPU_State initial_cpu = {.pc=0x8fee, .a=0xa3, .x=0x30, .y=0xd4, .sp=0xe7, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x1c}, {.addr=0x8fee, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8fef, .a=0x1c, .x=0x31, .y=0xd4, .sp=0xe7, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x1c}, {.addr=0x8fee, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8fee, .value=0xbf, .type=IO_READ},
        {.addr=0x8fef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0233) {
    const struct CPU_State initial_cpu = {.pc=0x3d7d, .a=0x72, .x=0x95, .y=0xe2, .sp=0x73, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xd8}, {.addr=0x3d7d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3d7e, .a=0xd8, .x=0x96, .y=0xe2, .sp=0x73, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xd8}, {.addr=0x3d7d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3d7d, .value=0xbf, .type=IO_READ},
        {.addr=0x3d7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0234) {
    const struct CPU_State initial_cpu = {.pc=0x0e94, .a=0xd9, .x=0x20, .y=0x35, .sp=0x53, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x24}, {.addr=0x0e94, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0e95, .a=0x24, .x=0x21, .y=0x35, .sp=0x53, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x24}, {.addr=0x0e94, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0e94, .value=0xbf, .type=IO_READ},
        {.addr=0x0e95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0235) {
    const struct CPU_State initial_cpu = {.pc=0x9bb9, .a=0x12, .x=0x57, .y=0xb3, .sp=0x0f, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x93}, {.addr=0x9bb9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9bba, .a=0x93, .x=0x58, .y=0xb3, .sp=0x0f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x93}, {.addr=0x9bb9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9bb9, .value=0xbf, .type=IO_READ},
        {.addr=0x9bba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0236) {
    const struct CPU_State initial_cpu = {.pc=0x3e0e, .a=0x2f, .x=0x6c, .y=0x69, .sp=0x61, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x87}, {.addr=0x3e0e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3e0f, .a=0x87, .x=0x6d, .y=0x69, .sp=0x61, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x87}, {.addr=0x3e0e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3e0e, .value=0xbf, .type=IO_READ},
        {.addr=0x3e0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0237) {
    const struct CPU_State initial_cpu = {.pc=0xd05f, .a=0xad, .x=0xea, .y=0xaa, .sp=0xca, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x0a}, {.addr=0xd05f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd060, .a=0x0a, .x=0xeb, .y=0xaa, .sp=0xca, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x0a}, {.addr=0xd05f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd05f, .value=0xbf, .type=IO_READ},
        {.addr=0xd060, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0238) {
    const struct CPU_State initial_cpu = {.pc=0xed22, .a=0x6f, .x=0xbb, .y=0x79, .sp=0x33, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x40}, {.addr=0xed22, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xed23, .a=0x40, .x=0xbc, .y=0x79, .sp=0x33, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x40}, {.addr=0xed22, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xed22, .value=0xbf, .type=IO_READ},
        {.addr=0xed23, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0239) {
    const struct CPU_State initial_cpu = {.pc=0x3fb8, .a=0xb6, .x=0x4b, .y=0xcc, .sp=0x04, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x0f}, {.addr=0x3fb8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3fb9, .a=0x0f, .x=0x4c, .y=0xcc, .sp=0x04, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x0f}, {.addr=0x3fb8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3fb8, .value=0xbf, .type=IO_READ},
        {.addr=0x3fb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_023A) {
    const struct CPU_State initial_cpu = {.pc=0xd51c, .a=0x97, .x=0xfd, .y=0x06, .sp=0x19, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x5a}, {.addr=0xd51c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd51d, .a=0x5a, .x=0xfe, .y=0x06, .sp=0x19, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x5a}, {.addr=0xd51c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd51c, .value=0xbf, .type=IO_READ},
        {.addr=0xd51d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_023B) {
    const struct CPU_State initial_cpu = {.pc=0x55b6, .a=0xdd, .x=0x10, .y=0xf0, .sp=0x49, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x36}, {.addr=0x55b6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x55b7, .a=0x36, .x=0x11, .y=0xf0, .sp=0x49, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x36}, {.addr=0x55b6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x55b6, .value=0xbf, .type=IO_READ},
        {.addr=0x55b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_023C) {
    const struct CPU_State initial_cpu = {.pc=0xb05f, .a=0x34, .x=0x82, .y=0x84, .sp=0x6e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xd7}, {.addr=0xb05f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb060, .a=0xd7, .x=0x83, .y=0x84, .sp=0x6e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xd7}, {.addr=0xb05f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb05f, .value=0xbf, .type=IO_READ},
        {.addr=0xb060, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_023D) {
    const struct CPU_State initial_cpu = {.pc=0x661f, .a=0xe6, .x=0xc1, .y=0x29, .sp=0xc6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x82}, {.addr=0x661f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6620, .a=0x82, .x=0xc2, .y=0x29, .sp=0xc6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x82}, {.addr=0x661f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x661f, .value=0xbf, .type=IO_READ},
        {.addr=0x6620, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_023E) {
    const struct CPU_State initial_cpu = {.pc=0x935f, .a=0x02, .x=0x1c, .y=0x61, .sp=0x36, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x44}, {.addr=0x935f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9360, .a=0x44, .x=0x1d, .y=0x61, .sp=0x36, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x44}, {.addr=0x935f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x935f, .value=0xbf, .type=IO_READ},
        {.addr=0x9360, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_023F) {
    const struct CPU_State initial_cpu = {.pc=0x1653, .a=0x2c, .x=0x9f, .y=0x81, .sp=0xe2, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xef}, {.addr=0x1653, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1654, .a=0xef, .x=0xa0, .y=0x81, .sp=0xe2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xef}, {.addr=0x1653, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1653, .value=0xbf, .type=IO_READ},
        {.addr=0x1654, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0240) {
    const struct CPU_State initial_cpu = {.pc=0xcba4, .a=0x71, .x=0x4d, .y=0x3a, .sp=0x72, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xc4}, {.addr=0xcba4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcba5, .a=0xc4, .x=0x4e, .y=0x3a, .sp=0x72, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xc4}, {.addr=0xcba4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcba4, .value=0xbf, .type=IO_READ},
        {.addr=0xcba5, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0241) {
    const struct CPU_State initial_cpu = {.pc=0x9020, .a=0xfe, .x=0x86, .y=0x91, .sp=0xf6, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xa9}, {.addr=0x9020, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9021, .a=0xa9, .x=0x87, .y=0x91, .sp=0xf6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xa9}, {.addr=0x9020, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9020, .value=0xbf, .type=IO_READ},
        {.addr=0x9021, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0242) {
    const struct CPU_State initial_cpu = {.pc=0xc6f4, .a=0xae, .x=0xa4, .y=0x3b, .sp=0x8a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x16}, {.addr=0xc6f4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc6f5, .a=0x16, .x=0xa5, .y=0x3b, .sp=0x8a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x16}, {.addr=0xc6f4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc6f4, .value=0xbf, .type=IO_READ},
        {.addr=0xc6f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0243) {
    const struct CPU_State initial_cpu = {.pc=0x9fb4, .a=0x5d, .x=0xc7, .y=0x77, .sp=0xfc, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x7e}, {.addr=0x9fb4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9fb5, .a=0x7e, .x=0xc8, .y=0x77, .sp=0xfc, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x7e}, {.addr=0x9fb4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9fb4, .value=0xbf, .type=IO_READ},
        {.addr=0x9fb5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0244) {
    const struct CPU_State initial_cpu = {.pc=0xac28, .a=0x44, .x=0x03, .y=0xeb, .sp=0xf0, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xe7}, {.addr=0xac28, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xac29, .a=0xe7, .x=0x04, .y=0xeb, .sp=0xf0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xe7}, {.addr=0xac28, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xac28, .value=0xbf, .type=IO_READ},
        {.addr=0xac29, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0245) {
    const struct CPU_State initial_cpu = {.pc=0x2cce, .a=0x05, .x=0x63, .y=0x47, .sp=0xad, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0xf5}, {.addr=0x2cce, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2ccf, .a=0xf5, .x=0x64, .y=0x47, .sp=0xad, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0xf5}, {.addr=0x2cce, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2cce, .value=0xbf, .type=IO_READ},
        {.addr=0x2ccf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0246) {
    const struct CPU_State initial_cpu = {.pc=0xd55d, .a=0xef, .x=0x7c, .y=0x32, .sp=0xf8, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x4d}, {.addr=0xd55d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd55e, .a=0x4d, .x=0x7d, .y=0x32, .sp=0xf8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x4d}, {.addr=0xd55d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd55d, .value=0xbf, .type=IO_READ},
        {.addr=0xd55e, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0247) {
    const struct CPU_State initial_cpu = {.pc=0x33a4, .a=0x83, .x=0x82, .y=0xbf, .sp=0x91, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xc2}, {.addr=0x33a4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x33a5, .a=0xc2, .x=0x83, .y=0xbf, .sp=0x91, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xc2}, {.addr=0x33a4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x33a4, .value=0xbf, .type=IO_READ},
        {.addr=0x33a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0248) {
    const struct CPU_State initial_cpu = {.pc=0x9fdf, .a=0xc7, .x=0x98, .y=0x5e, .sp=0xfa, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x6b}, {.addr=0x9fdf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9fe0, .a=0x6b, .x=0x99, .y=0x5e, .sp=0xfa, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x6b}, {.addr=0x9fdf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9fdf, .value=0xbf, .type=IO_READ},
        {.addr=0x9fe0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0249) {
    const struct CPU_State initial_cpu = {.pc=0xbaf8, .a=0x5d, .x=0x87, .y=0xc4, .sp=0x95, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xf8}, {.addr=0xbaf8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbaf9, .a=0xf8, .x=0x88, .y=0xc4, .sp=0x95, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xf8}, {.addr=0xbaf8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbaf8, .value=0xbf, .type=IO_READ},
        {.addr=0xbaf9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_024A) {
    const struct CPU_State initial_cpu = {.pc=0x66cf, .a=0x3b, .x=0x6c, .y=0xc8, .sp=0x4e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x26}, {.addr=0x66cf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x66d0, .a=0x26, .x=0x6d, .y=0xc8, .sp=0x4e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x26}, {.addr=0x66cf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x66cf, .value=0xbf, .type=IO_READ},
        {.addr=0x66d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_024B) {
    const struct CPU_State initial_cpu = {.pc=0xc533, .a=0xa2, .x=0x73, .y=0x4d, .sp=0x37, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xc6}, {.addr=0xc533, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc534, .a=0xc6, .x=0x74, .y=0x4d, .sp=0x37, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xc6}, {.addr=0xc533, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc533, .value=0xbf, .type=IO_READ},
        {.addr=0xc534, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_024C) {
    const struct CPU_State initial_cpu = {.pc=0xaad8, .a=0x69, .x=0x02, .y=0xd0, .sp=0x64, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0xb0}, {.addr=0xaad8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xaad9, .a=0xb0, .x=0x03, .y=0xd0, .sp=0x64, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0xb0}, {.addr=0xaad8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xaad8, .value=0xbf, .type=IO_READ},
        {.addr=0xaad9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_024D) {
    const struct CPU_State initial_cpu = {.pc=0xe8df, .a=0x61, .x=0x2a, .y=0x64, .sp=0x4d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x2a}, {.addr=0xe8df, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe8e0, .a=0x2a, .x=0x2b, .y=0x64, .sp=0x4d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x2a}, {.addr=0xe8df, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe8df, .value=0xbf, .type=IO_READ},
        {.addr=0xe8e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_024E) {
    const struct CPU_State initial_cpu = {.pc=0xbbc7, .a=0xcb, .x=0xb7, .y=0x37, .sp=0xef, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0xc2}, {.addr=0xbbc7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbbc8, .a=0xc2, .x=0xb8, .y=0x37, .sp=0xef, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0xc2}, {.addr=0xbbc7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbbc7, .value=0xbf, .type=IO_READ},
        {.addr=0xbbc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_024F) {
    const struct CPU_State initial_cpu = {.pc=0x49e4, .a=0x62, .x=0xe4, .y=0xb8, .sp=0xa7, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xf0}, {.addr=0x49e4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x49e5, .a=0xf0, .x=0xe5, .y=0xb8, .sp=0xa7, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xf0}, {.addr=0x49e4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x49e4, .value=0xbf, .type=IO_READ},
        {.addr=0x49e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0250) {
    const struct CPU_State initial_cpu = {.pc=0x1cb4, .a=0x56, .x=0xff, .y=0xc2, .sp=0x0d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x72}, {.addr=0x1cb4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1cb5, .a=0x72, .x=0x00, .y=0xc2, .sp=0x0d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x72}, {.addr=0x1cb4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1cb4, .value=0xbf, .type=IO_READ},
        {.addr=0x1cb5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0251) {
    const struct CPU_State initial_cpu = {.pc=0x44b1, .a=0x3f, .x=0x3f, .y=0xfc, .sp=0x1b, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x01}, {.addr=0x44b1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x44b2, .a=0x01, .x=0x40, .y=0xfc, .sp=0x1b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x01}, {.addr=0x44b1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x44b1, .value=0xbf, .type=IO_READ},
        {.addr=0x44b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0252) {
    const struct CPU_State initial_cpu = {.pc=0xa6d7, .a=0xad, .x=0x07, .y=0x49, .sp=0x95, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x25}, {.addr=0xa6d7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa6d8, .a=0x25, .x=0x08, .y=0x49, .sp=0x95, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x25}, {.addr=0xa6d7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa6d7, .value=0xbf, .type=IO_READ},
        {.addr=0xa6d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0253) {
    const struct CPU_State initial_cpu = {.pc=0xcd7b, .a=0x2e, .x=0xd8, .y=0xf2, .sp=0x1e, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x65}, {.addr=0xcd7b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcd7c, .a=0x65, .x=0xd9, .y=0xf2, .sp=0x1e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x65}, {.addr=0xcd7b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcd7b, .value=0xbf, .type=IO_READ},
        {.addr=0xcd7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0254) {
    const struct CPU_State initial_cpu = {.pc=0x385d, .a=0x18, .x=0x0b, .y=0x23, .sp=0x9c, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x29}, {.addr=0x385d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x385e, .a=0x29, .x=0x0c, .y=0x23, .sp=0x9c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x29}, {.addr=0x385d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x385d, .value=0xbf, .type=IO_READ},
        {.addr=0x385e, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0255) {
    const struct CPU_State initial_cpu = {.pc=0xbadd, .a=0x29, .x=0x29, .y=0xaa, .sp=0x85, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x9e}, {.addr=0xbadd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbade, .a=0x9e, .x=0x2a, .y=0xaa, .sp=0x85, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x9e}, {.addr=0xbadd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbadd, .value=0xbf, .type=IO_READ},
        {.addr=0xbade, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0256) {
    const struct CPU_State initial_cpu = {.pc=0x8fd5, .a=0xef, .x=0x51, .y=0xf3, .sp=0xfb, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x4f}, {.addr=0x8fd5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8fd6, .a=0x4f, .x=0x52, .y=0xf3, .sp=0xfb, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x4f}, {.addr=0x8fd5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8fd5, .value=0xbf, .type=IO_READ},
        {.addr=0x8fd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0257) {
    const struct CPU_State initial_cpu = {.pc=0x4556, .a=0x79, .x=0xe0, .y=0xe5, .sp=0x8c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0xdb}, {.addr=0x4556, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4557, .a=0xdb, .x=0xe1, .y=0xe5, .sp=0x8c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0xdb}, {.addr=0x4556, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4556, .value=0xbf, .type=IO_READ},
        {.addr=0x4557, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0258) {
    const struct CPU_State initial_cpu = {.pc=0x86a2, .a=0xb5, .x=0xbe, .y=0xf0, .sp=0x28, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x1e}, {.addr=0x86a2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x86a3, .a=0x1e, .x=0xbf, .y=0xf0, .sp=0x28, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x1e}, {.addr=0x86a2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x86a2, .value=0xbf, .type=IO_READ},
        {.addr=0x86a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0259) {
    const struct CPU_State initial_cpu = {.pc=0xfe8c, .a=0x0b, .x=0xd5, .y=0xb4, .sp=0xf7, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0xc8}, {.addr=0xfe8c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfe8d, .a=0xc8, .x=0xd6, .y=0xb4, .sp=0xf7, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0xc8}, {.addr=0xfe8c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfe8c, .value=0xbf, .type=IO_READ},
        {.addr=0xfe8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_025A) {
    const struct CPU_State initial_cpu = {.pc=0x5b01, .a=0x1c, .x=0xb6, .y=0xc4, .sp=0x2c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x82}, {.addr=0x5b01, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5b02, .a=0x82, .x=0xb7, .y=0xc4, .sp=0x2c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x82}, {.addr=0x5b01, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5b01, .value=0xbf, .type=IO_READ},
        {.addr=0x5b02, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_025B) {
    const struct CPU_State initial_cpu = {.pc=0x0e9b, .a=0x99, .x=0x5b, .y=0x81, .sp=0x93, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x74}, {.addr=0x0e9b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0e9c, .a=0x74, .x=0x5c, .y=0x81, .sp=0x93, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x74}, {.addr=0x0e9b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0e9b, .value=0xbf, .type=IO_READ},
        {.addr=0x0e9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_025C) {
    const struct CPU_State initial_cpu = {.pc=0x7235, .a=0xc5, .x=0x1a, .y=0xad, .sp=0x7b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x1a}, {.addr=0x7235, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7236, .a=0x1a, .x=0x1b, .y=0xad, .sp=0x7b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x1a}, {.addr=0x7235, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7235, .value=0xbf, .type=IO_READ},
        {.addr=0x7236, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_025D) {
    const struct CPU_State initial_cpu = {.pc=0x3f50, .a=0x01, .x=0xe2, .y=0x7d, .sp=0xc4, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0xce}, {.addr=0x3f50, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3f51, .a=0xce, .x=0xe3, .y=0x7d, .sp=0xc4, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xce}, {.addr=0x3f50, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3f50, .value=0xbf, .type=IO_READ},
        {.addr=0x3f51, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_025E) {
    const struct CPU_State initial_cpu = {.pc=0x0e15, .a=0x40, .x=0x32, .y=0xe7, .sp=0xad, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x9f}, {.addr=0x0e15, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0e16, .a=0x9f, .x=0x33, .y=0xe7, .sp=0xad, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x9f}, {.addr=0x0e15, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0e15, .value=0xbf, .type=IO_READ},
        {.addr=0x0e16, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_025F) {
    const struct CPU_State initial_cpu = {.pc=0xf30d, .a=0xc9, .x=0xf6, .y=0x04, .sp=0x29, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x17}, {.addr=0xf30d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf30e, .a=0x17, .x=0xf7, .y=0x04, .sp=0x29, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x17}, {.addr=0xf30d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf30d, .value=0xbf, .type=IO_READ},
        {.addr=0xf30e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0260) {
    const struct CPU_State initial_cpu = {.pc=0x9d04, .a=0x56, .x=0x32, .y=0x0d, .sp=0xcd, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x3e}, {.addr=0x9d04, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9d05, .a=0x3e, .x=0x33, .y=0x0d, .sp=0xcd, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x3e}, {.addr=0x9d04, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9d04, .value=0xbf, .type=IO_READ},
        {.addr=0x9d05, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0261) {
    const struct CPU_State initial_cpu = {.pc=0x61ee, .a=0x7c, .x=0x85, .y=0x68, .sp=0x55, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x48}, {.addr=0x61ee, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x61ef, .a=0x48, .x=0x86, .y=0x68, .sp=0x55, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x48}, {.addr=0x61ee, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x61ee, .value=0xbf, .type=IO_READ},
        {.addr=0x61ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0262) {
    const struct CPU_State initial_cpu = {.pc=0x5521, .a=0xa3, .x=0xdc, .y=0x72, .sp=0x14, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x8c}, {.addr=0x5521, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5522, .a=0x8c, .x=0xdd, .y=0x72, .sp=0x14, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x8c}, {.addr=0x5521, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5521, .value=0xbf, .type=IO_READ},
        {.addr=0x5522, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0263) {
    const struct CPU_State initial_cpu = {.pc=0xf854, .a=0x40, .x=0x3f, .y=0xbf, .sp=0x82, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x25}, {.addr=0xf854, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf855, .a=0x25, .x=0x40, .y=0xbf, .sp=0x82, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x25}, {.addr=0xf854, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf854, .value=0xbf, .type=IO_READ},
        {.addr=0xf855, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0264) {
    const struct CPU_State initial_cpu = {.pc=0xe13c, .a=0xec, .x=0xac, .y=0xe9, .sp=0x6b, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xee}, {.addr=0xe13c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe13d, .a=0xee, .x=0xad, .y=0xe9, .sp=0x6b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xee}, {.addr=0xe13c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe13c, .value=0xbf, .type=IO_READ},
        {.addr=0xe13d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0265) {
    const struct CPU_State initial_cpu = {.pc=0xe06c, .a=0xd3, .x=0x1a, .y=0x68, .sp=0x18, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x3a}, {.addr=0xe06c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe06d, .a=0x3a, .x=0x1b, .y=0x68, .sp=0x18, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x3a}, {.addr=0xe06c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe06c, .value=0xbf, .type=IO_READ},
        {.addr=0xe06d, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0266) {
    const struct CPU_State initial_cpu = {.pc=0xb57d, .a=0x77, .x=0x25, .y=0xa2, .sp=0xa9, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x0f}, {.addr=0xb57d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb57e, .a=0x0f, .x=0x26, .y=0xa2, .sp=0xa9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x0f}, {.addr=0xb57d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb57d, .value=0xbf, .type=IO_READ},
        {.addr=0xb57e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0267) {
    const struct CPU_State initial_cpu = {.pc=0x3524, .a=0x10, .x=0x49, .y=0x49, .sp=0x17, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xc6}, {.addr=0x3524, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3525, .a=0xc6, .x=0x4a, .y=0x49, .sp=0x17, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xc6}, {.addr=0x3524, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3524, .value=0xbf, .type=IO_READ},
        {.addr=0x3525, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0268) {
    const struct CPU_State initial_cpu = {.pc=0x0808, .a=0x5f, .x=0xb7, .y=0x01, .sp=0xef, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x41}, {.addr=0x0808, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0809, .a=0x41, .x=0xb8, .y=0x01, .sp=0xef, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x41}, {.addr=0x0808, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0808, .value=0xbf, .type=IO_READ},
        {.addr=0x0809, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0269) {
    const struct CPU_State initial_cpu = {.pc=0x9d4f, .a=0xd9, .x=0x0f, .y=0x88, .sp=0x49, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x6a}, {.addr=0x9d4f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9d50, .a=0x6a, .x=0x10, .y=0x88, .sp=0x49, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x6a}, {.addr=0x9d4f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9d4f, .value=0xbf, .type=IO_READ},
        {.addr=0x9d50, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_026A) {
    const struct CPU_State initial_cpu = {.pc=0x4502, .a=0x64, .x=0x26, .y=0x78, .sp=0xaf, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xed}, {.addr=0x4502, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4503, .a=0xed, .x=0x27, .y=0x78, .sp=0xaf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xed}, {.addr=0x4502, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4502, .value=0xbf, .type=IO_READ},
        {.addr=0x4503, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_026B) {
    const struct CPU_State initial_cpu = {.pc=0x2977, .a=0x91, .x=0x8a, .y=0x09, .sp=0xa2, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x13}, {.addr=0x2977, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2978, .a=0x13, .x=0x8b, .y=0x09, .sp=0xa2, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x13}, {.addr=0x2977, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2977, .value=0xbf, .type=IO_READ},
        {.addr=0x2978, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_026C) {
    const struct CPU_State initial_cpu = {.pc=0x5442, .a=0x23, .x=0x10, .y=0x94, .sp=0x63, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x11}, {.addr=0x5442, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5443, .a=0x11, .x=0x11, .y=0x94, .sp=0x63, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x11}, {.addr=0x5442, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5442, .value=0xbf, .type=IO_READ},
        {.addr=0x5443, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_026D) {
    const struct CPU_State initial_cpu = {.pc=0x798e, .a=0x84, .x=0x3b, .y=0xeb, .sp=0xa3, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x98}, {.addr=0x798e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x798f, .a=0x98, .x=0x3c, .y=0xeb, .sp=0xa3, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x98}, {.addr=0x798e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x798e, .value=0xbf, .type=IO_READ},
        {.addr=0x798f, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_026E) {
    const struct CPU_State initial_cpu = {.pc=0xe101, .a=0x5d, .x=0xc8, .y=0xae, .sp=0x95, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x6e}, {.addr=0xe101, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe102, .a=0x6e, .x=0xc9, .y=0xae, .sp=0x95, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x6e}, {.addr=0xe101, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe101, .value=0xbf, .type=IO_READ},
        {.addr=0xe102, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_026F) {
    const struct CPU_State initial_cpu = {.pc=0x4093, .a=0xf2, .x=0x53, .y=0xb1, .sp=0x7c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x67}, {.addr=0x4093, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4094, .a=0x67, .x=0x54, .y=0xb1, .sp=0x7c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x67}, {.addr=0x4093, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4093, .value=0xbf, .type=IO_READ},
        {.addr=0x4094, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0270) {
    const struct CPU_State initial_cpu = {.pc=0x7106, .a=0x1a, .x=0x41, .y=0x28, .sp=0x29, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x06}, {.addr=0x7106, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7107, .a=0x06, .x=0x42, .y=0x28, .sp=0x29, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0x06}, {.addr=0x7106, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7106, .value=0xbf, .type=IO_READ},
        {.addr=0x7107, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0271) {
    const struct CPU_State initial_cpu = {.pc=0xfd6c, .a=0xdc, .x=0xf1, .y=0xca, .sp=0x3a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x98}, {.addr=0xfd6c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfd6d, .a=0x98, .x=0xf2, .y=0xca, .sp=0x3a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x98}, {.addr=0xfd6c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfd6c, .value=0xbf, .type=IO_READ},
        {.addr=0xfd6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0272) {
    const struct CPU_State initial_cpu = {.pc=0x90a3, .a=0x87, .x=0xb1, .y=0x9a, .sp=0xa6, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0xe1}, {.addr=0x90a3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x90a4, .a=0xe1, .x=0xb2, .y=0x9a, .sp=0xa6, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xe1}, {.addr=0x90a3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x90a3, .value=0xbf, .type=IO_READ},
        {.addr=0x90a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0273) {
    const struct CPU_State initial_cpu = {.pc=0x705e, .a=0xae, .x=0x15, .y=0xd0, .sp=0x0f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0xfa}, {.addr=0x705e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x705f, .a=0xfa, .x=0x16, .y=0xd0, .sp=0x0f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xfa}, {.addr=0x705e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x705e, .value=0xbf, .type=IO_READ},
        {.addr=0x705f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0274) {
    const struct CPU_State initial_cpu = {.pc=0x1320, .a=0xa1, .x=0xc9, .y=0x35, .sp=0xe8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xa4}, {.addr=0x1320, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1321, .a=0xa4, .x=0xca, .y=0x35, .sp=0xe8, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xa4}, {.addr=0x1320, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1320, .value=0xbf, .type=IO_READ},
        {.addr=0x1321, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0275) {
    const struct CPU_State initial_cpu = {.pc=0x1f95, .a=0xa8, .x=0x05, .y=0x4e, .sp=0xdc, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x66}, {.addr=0x1f95, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1f96, .a=0x66, .x=0x06, .y=0x4e, .sp=0xdc, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x66}, {.addr=0x1f95, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1f95, .value=0xbf, .type=IO_READ},
        {.addr=0x1f96, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0276) {
    const struct CPU_State initial_cpu = {.pc=0x7e2b, .a=0x69, .x=0x17, .y=0x17, .sp=0xaf, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x10}, {.addr=0x7e2b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7e2c, .a=0x10, .x=0x18, .y=0x17, .sp=0xaf, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x10}, {.addr=0x7e2b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7e2b, .value=0xbf, .type=IO_READ},
        {.addr=0x7e2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0277) {
    const struct CPU_State initial_cpu = {.pc=0x6ea1, .a=0xae, .x=0x04, .y=0x0e, .sp=0x75, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0xcb}, {.addr=0x6ea1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6ea2, .a=0xcb, .x=0x05, .y=0x0e, .sp=0x75, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xcb}, {.addr=0x6ea1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6ea1, .value=0xbf, .type=IO_READ},
        {.addr=0x6ea2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0278) {
    const struct CPU_State initial_cpu = {.pc=0x8403, .a=0x02, .x=0xce, .y=0xa2, .sp=0x56, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x0d}, {.addr=0x8403, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8404, .a=0x0d, .x=0xcf, .y=0xa2, .sp=0x56, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x0d}, {.addr=0x8403, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8403, .value=0xbf, .type=IO_READ},
        {.addr=0x8404, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0279) {
    const struct CPU_State initial_cpu = {.pc=0x8658, .a=0x63, .x=0xea, .y=0x13, .sp=0x88, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x56}, {.addr=0x8658, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8659, .a=0x56, .x=0xeb, .y=0x13, .sp=0x88, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x56}, {.addr=0x8658, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8658, .value=0xbf, .type=IO_READ},
        {.addr=0x8659, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_027A) {
    const struct CPU_State initial_cpu = {.pc=0xed7e, .a=0x8f, .x=0x69, .y=0x57, .sp=0xf2, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x15}, {.addr=0xed7e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xed7f, .a=0x15, .x=0x6a, .y=0x57, .sp=0xf2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x15}, {.addr=0xed7e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xed7e, .value=0xbf, .type=IO_READ},
        {.addr=0xed7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_027B) {
    const struct CPU_State initial_cpu = {.pc=0xc9ad, .a=0x4b, .x=0x0b, .y=0x77, .sp=0x82, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x2e}, {.addr=0xc9ad, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc9ae, .a=0x2e, .x=0x0c, .y=0x77, .sp=0x82, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x2e}, {.addr=0xc9ad, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc9ad, .value=0xbf, .type=IO_READ},
        {.addr=0xc9ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_027C) {
    const struct CPU_State initial_cpu = {.pc=0x36db, .a=0x97, .x=0xc6, .y=0xe3, .sp=0x1f, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xd7}, {.addr=0x36db, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x36dc, .a=0xd7, .x=0xc7, .y=0xe3, .sp=0x1f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xd7}, {.addr=0x36db, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x36db, .value=0xbf, .type=IO_READ},
        {.addr=0x36dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_027D) {
    const struct CPU_State initial_cpu = {.pc=0xddc1, .a=0x3a, .x=0xec, .y=0x67, .sp=0xbf, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0xca}, {.addr=0xddc1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xddc2, .a=0xca, .x=0xed, .y=0x67, .sp=0xbf, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0xca}, {.addr=0xddc1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xddc1, .value=0xbf, .type=IO_READ},
        {.addr=0xddc2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_027E) {
    const struct CPU_State initial_cpu = {.pc=0xf9a4, .a=0x00, .x=0xe6, .y=0x9e, .sp=0xbb, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x28}, {.addr=0xf9a4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf9a5, .a=0x28, .x=0xe7, .y=0x9e, .sp=0xbb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x28}, {.addr=0xf9a4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf9a4, .value=0xbf, .type=IO_READ},
        {.addr=0xf9a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_027F) {
    const struct CPU_State initial_cpu = {.pc=0x67ad, .a=0xbd, .x=0xc2, .y=0x3d, .sp=0x9a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0xc5}, {.addr=0x67ad, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x67ae, .a=0xc5, .x=0xc3, .y=0x3d, .sp=0x9a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0xc5}, {.addr=0x67ad, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x67ad, .value=0xbf, .type=IO_READ},
        {.addr=0x67ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0280) {
    const struct CPU_State initial_cpu = {.pc=0xff8c, .a=0xbf, .x=0x8d, .y=0xe4, .sp=0xe7, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0xbb}, {.addr=0xff8c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xff8d, .a=0xbb, .x=0x8e, .y=0xe4, .sp=0xe7, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0xbb}, {.addr=0xff8c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xff8c, .value=0xbf, .type=IO_READ},
        {.addr=0xff8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0281) {
    const struct CPU_State initial_cpu = {.pc=0x9cfa, .a=0x53, .x=0x95, .y=0x05, .sp=0x12, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x18}, {.addr=0x9cfa, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9cfb, .a=0x18, .x=0x96, .y=0x05, .sp=0x12, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x18}, {.addr=0x9cfa, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9cfa, .value=0xbf, .type=IO_READ},
        {.addr=0x9cfb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0282) {
    const struct CPU_State initial_cpu = {.pc=0x5543, .a=0x51, .x=0xe8, .y=0x58, .sp=0x4c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xaa}, {.addr=0x5543, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5544, .a=0xaa, .x=0xe9, .y=0x58, .sp=0x4c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xaa}, {.addr=0x5543, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5543, .value=0xbf, .type=IO_READ},
        {.addr=0x5544, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0283) {
    const struct CPU_State initial_cpu = {.pc=0x1534, .a=0xa0, .x=0x92, .y=0x68, .sp=0x77, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x44}, {.addr=0x1534, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1535, .a=0x44, .x=0x93, .y=0x68, .sp=0x77, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x44}, {.addr=0x1534, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1534, .value=0xbf, .type=IO_READ},
        {.addr=0x1535, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0284) {
    const struct CPU_State initial_cpu = {.pc=0x6b99, .a=0x00, .x=0x07, .y=0x8e, .sp=0xa1, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xcc}, {.addr=0x6b99, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6b9a, .a=0xcc, .x=0x08, .y=0x8e, .sp=0xa1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xcc}, {.addr=0x6b99, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6b99, .value=0xbf, .type=IO_READ},
        {.addr=0x6b9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0285) {
    const struct CPU_State initial_cpu = {.pc=0x29fb, .a=0xb8, .x=0x5b, .y=0x8a, .sp=0xf7, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x9f}, {.addr=0x29fb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x29fc, .a=0x9f, .x=0x5c, .y=0x8a, .sp=0xf7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x9f}, {.addr=0x29fb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x29fb, .value=0xbf, .type=IO_READ},
        {.addr=0x29fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0286) {
    const struct CPU_State initial_cpu = {.pc=0xb5a4, .a=0x5f, .x=0x86, .y=0xeb, .sp=0x29, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x0e}, {.addr=0xb5a4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb5a5, .a=0x0e, .x=0x87, .y=0xeb, .sp=0x29, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x0e}, {.addr=0xb5a4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb5a4, .value=0xbf, .type=IO_READ},
        {.addr=0xb5a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0287) {
    const struct CPU_State initial_cpu = {.pc=0xb83c, .a=0x02, .x=0x87, .y=0xbf, .sp=0x0d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xf9}, {.addr=0xb83c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb83d, .a=0xf9, .x=0x88, .y=0xbf, .sp=0x0d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xf9}, {.addr=0xb83c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb83c, .value=0xbf, .type=IO_READ},
        {.addr=0xb83d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0288) {
    const struct CPU_State initial_cpu = {.pc=0x09f0, .a=0x78, .x=0xc7, .y=0x2a, .sp=0xad, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x2f}, {.addr=0x09f0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x09f1, .a=0x2f, .x=0xc8, .y=0x2a, .sp=0xad, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x2f}, {.addr=0x09f0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x09f0, .value=0xbf, .type=IO_READ},
        {.addr=0x09f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0289) {
    const struct CPU_State initial_cpu = {.pc=0xa020, .a=0x63, .x=0xc7, .y=0x35, .sp=0x0c, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x4e}, {.addr=0xa020, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa021, .a=0x4e, .x=0xc8, .y=0x35, .sp=0x0c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x4e}, {.addr=0xa020, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa020, .value=0xbf, .type=IO_READ},
        {.addr=0xa021, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_028A) {
    const struct CPU_State initial_cpu = {.pc=0x301e, .a=0x75, .x=0x0b, .y=0xee, .sp=0xc7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xac}, {.addr=0x301e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x301f, .a=0xac, .x=0x0c, .y=0xee, .sp=0xc7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xac}, {.addr=0x301e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x301e, .value=0xbf, .type=IO_READ},
        {.addr=0x301f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_028B) {
    const struct CPU_State initial_cpu = {.pc=0xda6e, .a=0x80, .x=0xcf, .y=0xbb, .sp=0x3f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x3f}, {.addr=0xda6e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xda6f, .a=0x3f, .x=0xd0, .y=0xbb, .sp=0x3f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x3f}, {.addr=0xda6e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xda6e, .value=0xbf, .type=IO_READ},
        {.addr=0xda6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_028C) {
    const struct CPU_State initial_cpu = {.pc=0x0075, .a=0x41, .x=0xd3, .y=0xa2, .sp=0x8c, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xbf}, {.addr=0x01d3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0076, .a=0x06, .x=0xd4, .y=0xa2, .sp=0x8c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xbf}, {.addr=0x01d3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0075, .value=0xbf, .type=IO_READ},
        {.addr=0x0076, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_028D) {
    const struct CPU_State initial_cpu = {.pc=0x95ef, .a=0x46, .x=0x62, .y=0xf8, .sp=0xf2, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x82}, {.addr=0x95ef, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x95f0, .a=0x82, .x=0x63, .y=0xf8, .sp=0xf2, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x82}, {.addr=0x95ef, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x95ef, .value=0xbf, .type=IO_READ},
        {.addr=0x95f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_028E) {
    const struct CPU_State initial_cpu = {.pc=0x440b, .a=0x52, .x=0x5d, .y=0xf8, .sp=0x47, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x8a}, {.addr=0x440b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x440c, .a=0x8a, .x=0x5e, .y=0xf8, .sp=0x47, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x8a}, {.addr=0x440b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x440b, .value=0xbf, .type=IO_READ},
        {.addr=0x440c, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_028F) {
    const struct CPU_State initial_cpu = {.pc=0xf80b, .a=0xb8, .x=0xc8, .y=0x3c, .sp=0xbd, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x7c}, {.addr=0xf80b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf80c, .a=0x7c, .x=0xc9, .y=0x3c, .sp=0xbd, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x7c}, {.addr=0xf80b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf80b, .value=0xbf, .type=IO_READ},
        {.addr=0xf80c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0290) {
    const struct CPU_State initial_cpu = {.pc=0x1713, .a=0xd0, .x=0x77, .y=0x33, .sp=0x9c, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x4f}, {.addr=0x1713, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1714, .a=0x4f, .x=0x78, .y=0x33, .sp=0x9c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x4f}, {.addr=0x1713, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1713, .value=0xbf, .type=IO_READ},
        {.addr=0x1714, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0291) {
    const struct CPU_State initial_cpu = {.pc=0x55e6, .a=0x1f, .x=0xc5, .y=0xdd, .sp=0x8e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0xe2}, {.addr=0x55e6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x55e7, .a=0xe2, .x=0xc6, .y=0xdd, .sp=0x8e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xe2}, {.addr=0x55e6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x55e6, .value=0xbf, .type=IO_READ},
        {.addr=0x55e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0292) {
    const struct CPU_State initial_cpu = {.pc=0x8e7f, .a=0x33, .x=0x96, .y=0xc5, .sp=0x8c, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x9e}, {.addr=0x8e7f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8e80, .a=0x9e, .x=0x97, .y=0xc5, .sp=0x8c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x9e}, {.addr=0x8e7f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8e7f, .value=0xbf, .type=IO_READ},
        {.addr=0x8e80, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0293) {
    const struct CPU_State initial_cpu = {.pc=0x3722, .a=0x8a, .x=0xe4, .y=0x86, .sp=0x24, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x5f}, {.addr=0x3722, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3723, .a=0x5f, .x=0xe5, .y=0x86, .sp=0x24, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x5f}, {.addr=0x3722, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3722, .value=0xbf, .type=IO_READ},
        {.addr=0x3723, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0294) {
    const struct CPU_State initial_cpu = {.pc=0xe3e9, .a=0xdd, .x=0x15, .y=0xa4, .sp=0x59, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0x1b}, {.addr=0xe3e9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe3ea, .a=0x1b, .x=0x16, .y=0xa4, .sp=0x59, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0x1b}, {.addr=0xe3e9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe3e9, .value=0xbf, .type=IO_READ},
        {.addr=0xe3ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0295) {
    const struct CPU_State initial_cpu = {.pc=0x3cb6, .a=0xb8, .x=0x72, .y=0xdc, .sp=0x1f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0xf2}, {.addr=0x3cb6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3cb7, .a=0xf2, .x=0x73, .y=0xdc, .sp=0x1f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0xf2}, {.addr=0x3cb6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3cb6, .value=0xbf, .type=IO_READ},
        {.addr=0x3cb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0296) {
    const struct CPU_State initial_cpu = {.pc=0x4f88, .a=0xac, .x=0x43, .y=0x77, .sp=0x97, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xdd}, {.addr=0x4f88, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4f89, .a=0xdd, .x=0x44, .y=0x77, .sp=0x97, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xdd}, {.addr=0x4f88, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4f88, .value=0xbf, .type=IO_READ},
        {.addr=0x4f89, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0297) {
    const struct CPU_State initial_cpu = {.pc=0x7a5b, .a=0x0e, .x=0xe1, .y=0xf7, .sp=0xe6, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x04}, {.addr=0x7a5b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7a5c, .a=0x04, .x=0xe2, .y=0xf7, .sp=0xe6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x04}, {.addr=0x7a5b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7a5b, .value=0xbf, .type=IO_READ},
        {.addr=0x7a5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0298) {
    const struct CPU_State initial_cpu = {.pc=0x991c, .a=0xb0, .x=0xb0, .y=0x5f, .sp=0x07, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x43}, {.addr=0x991c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x991d, .a=0x43, .x=0xb1, .y=0x5f, .sp=0x07, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x43}, {.addr=0x991c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x991c, .value=0xbf, .type=IO_READ},
        {.addr=0x991d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0299) {
    const struct CPU_State initial_cpu = {.pc=0x5e98, .a=0x4d, .x=0xae, .y=0x90, .sp=0xeb, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x1f}, {.addr=0x5e98, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5e99, .a=0x1f, .x=0xaf, .y=0x90, .sp=0xeb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x1f}, {.addr=0x5e98, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5e98, .value=0xbf, .type=IO_READ},
        {.addr=0x5e99, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_029A) {
    const struct CPU_State initial_cpu = {.pc=0x4092, .a=0x4b, .x=0xeb, .y=0x7f, .sp=0x76, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x6f}, {.addr=0x4092, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4093, .a=0x6f, .x=0xec, .y=0x7f, .sp=0x76, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x6f}, {.addr=0x4092, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4092, .value=0xbf, .type=IO_READ},
        {.addr=0x4093, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_029B) {
    const struct CPU_State initial_cpu = {.pc=0x19f9, .a=0xd9, .x=0xa4, .y=0x36, .sp=0x1e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x86}, {.addr=0x19f9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x19fa, .a=0x86, .x=0xa5, .y=0x36, .sp=0x1e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x86}, {.addr=0x19f9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x19f9, .value=0xbf, .type=IO_READ},
        {.addr=0x19fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc5ff, .a=0xec, .x=0x61, .y=0x13, .sp=0x0a, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x03}, {.addr=0xc5ff, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc600, .a=0x03, .x=0x62, .y=0x13, .sp=0x0a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x03}, {.addr=0xc5ff, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc5ff, .value=0xbf, .type=IO_READ},
        {.addr=0xc600, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_029D) {
    const struct CPU_State initial_cpu = {.pc=0x6d3d, .a=0x52, .x=0x0a, .y=0x9a, .sp=0x4a, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x75}, {.addr=0x6d3d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6d3e, .a=0x75, .x=0x0b, .y=0x9a, .sp=0x4a, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x75}, {.addr=0x6d3d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6d3d, .value=0xbf, .type=IO_READ},
        {.addr=0x6d3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_029E) {
    const struct CPU_State initial_cpu = {.pc=0x1296, .a=0x8e, .x=0x78, .y=0xc3, .sp=0x2b, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0xda}, {.addr=0x1296, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1297, .a=0xda, .x=0x79, .y=0xc3, .sp=0x2b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0xda}, {.addr=0x1296, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1296, .value=0xbf, .type=IO_READ},
        {.addr=0x1297, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x042e, .a=0xef, .x=0xe9, .y=0x5a, .sp=0x0f, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0xa2}, {.addr=0x042e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x042f, .a=0xa2, .x=0xea, .y=0x5a, .sp=0x0f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0xa2}, {.addr=0x042e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x042e, .value=0xbf, .type=IO_READ},
        {.addr=0x042f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x85c5, .a=0xcf, .x=0xf1, .y=0x0c, .sp=0x04, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xe0}, {.addr=0x85c5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x85c6, .a=0xe0, .x=0xf2, .y=0x0c, .sp=0x04, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xe0}, {.addr=0x85c5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x85c5, .value=0xbf, .type=IO_READ},
        {.addr=0x85c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x5414, .a=0x0c, .x=0x19, .y=0x64, .sp=0x91, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0x21}, {.addr=0x5414, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5415, .a=0x21, .x=0x1a, .y=0x64, .sp=0x91, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0x21}, {.addr=0x5414, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5414, .value=0xbf, .type=IO_READ},
        {.addr=0x5415, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x0dc6, .a=0x53, .x=0x09, .y=0x64, .sp=0x8f, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x70}, {.addr=0x0dc6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0dc7, .a=0x70, .x=0x0a, .y=0x64, .sp=0x8f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x70}, {.addr=0x0dc6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0dc6, .value=0xbf, .type=IO_READ},
        {.addr=0x0dc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xbc24, .a=0x55, .x=0xa1, .y=0x76, .sp=0xb2, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x55}, {.addr=0xbc24, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbc25, .a=0x55, .x=0xa2, .y=0x76, .sp=0xb2, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x55}, {.addr=0xbc24, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbc24, .value=0xbf, .type=IO_READ},
        {.addr=0xbc25, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x5379, .a=0x9f, .x=0x02, .y=0x70, .sp=0xac, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0x72}, {.addr=0x5379, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x537a, .a=0x72, .x=0x03, .y=0x70, .sp=0xac, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x72}, {.addr=0x5379, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5379, .value=0xbf, .type=IO_READ},
        {.addr=0x537a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x4ccb, .a=0x2a, .x=0xdd, .y=0xf9, .sp=0x0e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x68}, {.addr=0x4ccb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4ccc, .a=0x68, .x=0xde, .y=0xf9, .sp=0x0e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x68}, {.addr=0x4ccb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4ccb, .value=0xbf, .type=IO_READ},
        {.addr=0x4ccc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x4fd5, .a=0x3a, .x=0x3a, .y=0xc3, .sp=0x94, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x33}, {.addr=0x4fd5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4fd6, .a=0x33, .x=0x3b, .y=0xc3, .sp=0x94, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x33}, {.addr=0x4fd5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4fd5, .value=0xbf, .type=IO_READ},
        {.addr=0x4fd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x3a8d, .a=0x9c, .x=0xb3, .y=0xe8, .sp=0xdb, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xf9}, {.addr=0x3a8d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3a8e, .a=0xf9, .x=0xb4, .y=0xe8, .sp=0xdb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xf9}, {.addr=0x3a8d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3a8d, .value=0xbf, .type=IO_READ},
        {.addr=0x3a8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xe5fc, .a=0x0a, .x=0x1a, .y=0xf7, .sp=0xed, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0x18}, {.addr=0xe5fc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe5fd, .a=0x18, .x=0x1b, .y=0xf7, .sp=0xed, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0x18}, {.addr=0xe5fc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe5fc, .value=0xbf, .type=IO_READ},
        {.addr=0xe5fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x43c9, .a=0x14, .x=0x86, .y=0xfe, .sp=0xd5, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xca}, {.addr=0x43c9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x43ca, .a=0xca, .x=0x87, .y=0xfe, .sp=0xd5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xca}, {.addr=0x43c9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x43c9, .value=0xbf, .type=IO_READ},
        {.addr=0x43ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x6820, .a=0x42, .x=0xe3, .y=0xc5, .sp=0x2d, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xdc}, {.addr=0x6820, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6821, .a=0xdc, .x=0xe4, .y=0xc5, .sp=0x2d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xdc}, {.addr=0x6820, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6820, .value=0xbf, .type=IO_READ},
        {.addr=0x6821, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xf49d, .a=0xec, .x=0xd3, .y=0x42, .sp=0xc2, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xa5}, {.addr=0xf49d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf49e, .a=0xa5, .x=0xd4, .y=0x42, .sp=0xc2, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xa5}, {.addr=0xf49d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf49d, .value=0xbf, .type=IO_READ},
        {.addr=0xf49e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x0409, .a=0x4f, .x=0xf4, .y=0xce, .sp=0xd3, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xa2}, {.addr=0x0409, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x040a, .a=0xa2, .x=0xf5, .y=0xce, .sp=0xd3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xa2}, {.addr=0x0409, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0409, .value=0xbf, .type=IO_READ},
        {.addr=0x040a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x8639, .a=0xac, .x=0xa4, .y=0x88, .sp=0x5b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x6b}, {.addr=0x8639, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x863a, .a=0x6b, .x=0xa5, .y=0x88, .sp=0x5b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x6b}, {.addr=0x8639, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8639, .value=0xbf, .type=IO_READ},
        {.addr=0x863a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x9f04, .a=0x34, .x=0xc2, .y=0x62, .sp=0xdd, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x11}, {.addr=0x9f04, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9f05, .a=0x11, .x=0xc3, .y=0x62, .sp=0xdd, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x11}, {.addr=0x9f04, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9f04, .value=0xbf, .type=IO_READ},
        {.addr=0x9f05, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x9218, .a=0x32, .x=0x04, .y=0x3a, .sp=0x28, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0xe2}, {.addr=0x9218, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9219, .a=0xe2, .x=0x05, .y=0x3a, .sp=0x28, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xe2}, {.addr=0x9218, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9218, .value=0xbf, .type=IO_READ},
        {.addr=0x9219, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xd2f8, .a=0xcc, .x=0xd8, .y=0x12, .sp=0x3e, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x40}, {.addr=0xd2f8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd2f9, .a=0x40, .x=0xd9, .y=0x12, .sp=0x3e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x40}, {.addr=0xd2f8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd2f8, .value=0xbf, .type=IO_READ},
        {.addr=0xd2f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xd4b6, .a=0xec, .x=0xf6, .y=0xae, .sp=0x41, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xcb}, {.addr=0xd4b6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd4b7, .a=0xcb, .x=0xf7, .y=0xae, .sp=0x41, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xcb}, {.addr=0xd4b6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd4b6, .value=0xbf, .type=IO_READ},
        {.addr=0xd4b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xb39e, .a=0x8a, .x=0x32, .y=0xab, .sp=0xfc, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x50}, {.addr=0xb39e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb39f, .a=0x50, .x=0x33, .y=0xab, .sp=0xfc, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x50}, {.addr=0xb39e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb39e, .value=0xbf, .type=IO_READ},
        {.addr=0xb39f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x045c, .a=0xcc, .x=0xb4, .y=0xfd, .sp=0x35, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x0d}, {.addr=0x045c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x045d, .a=0x0d, .x=0xb5, .y=0xfd, .sp=0x35, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0x0d}, {.addr=0x045c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x045c, .value=0xbf, .type=IO_READ},
        {.addr=0x045d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x5aed, .a=0x49, .x=0xba, .y=0x29, .sp=0x48, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x39}, {.addr=0x5aed, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5aee, .a=0x39, .x=0xbb, .y=0x29, .sp=0x48, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x39}, {.addr=0x5aed, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5aed, .value=0xbf, .type=IO_READ},
        {.addr=0x5aee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xbd7a, .a=0xa6, .x=0xfc, .y=0x12, .sp=0x85, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x03}, {.addr=0xbd7a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbd7b, .a=0x03, .x=0xfd, .y=0x12, .sp=0x85, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x03}, {.addr=0xbd7a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbd7a, .value=0xbf, .type=IO_READ},
        {.addr=0xbd7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xc7d5, .a=0x2b, .x=0xc0, .y=0x8a, .sp=0xc0, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x6c}, {.addr=0xc7d5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc7d6, .a=0x6c, .x=0xc1, .y=0x8a, .sp=0xc0, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x6c}, {.addr=0xc7d5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc7d5, .value=0xbf, .type=IO_READ},
        {.addr=0xc7d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x3690, .a=0x09, .x=0x56, .y=0xc3, .sp=0x97, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0xae}, {.addr=0x3690, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3691, .a=0xae, .x=0x57, .y=0xc3, .sp=0x97, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0xae}, {.addr=0x3690, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3690, .value=0xbf, .type=IO_READ},
        {.addr=0x3691, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x0614, .a=0x2d, .x=0xb0, .y=0xe6, .sp=0x9c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xb0}, {.addr=0x0614, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0615, .a=0xb0, .x=0xb1, .y=0xe6, .sp=0x9c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xb0}, {.addr=0x0614, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0614, .value=0xbf, .type=IO_READ},
        {.addr=0x0615, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x80dd, .a=0x26, .x=0xef, .y=0x9a, .sp=0x84, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x16}, {.addr=0x80dd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x80de, .a=0x16, .x=0xf0, .y=0x9a, .sp=0x84, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x16}, {.addr=0x80dd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x80dd, .value=0xbf, .type=IO_READ},
        {.addr=0x80de, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x14ea, .a=0xb4, .x=0x17, .y=0x48, .sp=0x6f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xcc}, {.addr=0x14ea, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x14eb, .a=0xcc, .x=0x18, .y=0x48, .sp=0x6f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xcc}, {.addr=0x14ea, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x14ea, .value=0xbf, .type=IO_READ},
        {.addr=0x14eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x52a3, .a=0xaf, .x=0x4d, .y=0x5b, .sp=0xe8, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xfa}, {.addr=0x52a3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x52a4, .a=0xfa, .x=0x4e, .y=0x5b, .sp=0xe8, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xfa}, {.addr=0x52a3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x52a3, .value=0xbf, .type=IO_READ},
        {.addr=0x52a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x01b3, .a=0x54, .x=0x23, .y=0x41, .sp=0x43, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x45}, {.addr=0x01b3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x01b4, .a=0x45, .x=0x24, .y=0x41, .sp=0x43, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x45}, {.addr=0x01b3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x01b3, .value=0xbf, .type=IO_READ},
        {.addr=0x01b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x16f2, .a=0xe7, .x=0xee, .y=0xd1, .sp=0x10, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x5f}, {.addr=0x16f2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x16f3, .a=0x5f, .x=0xef, .y=0xd1, .sp=0x10, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x5f}, {.addr=0x16f2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x16f2, .value=0xbf, .type=IO_READ},
        {.addr=0x16f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x1965, .a=0x08, .x=0xd3, .y=0xcf, .sp=0x8b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x51}, {.addr=0x1965, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1966, .a=0x51, .x=0xd4, .y=0xcf, .sp=0x8b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x51}, {.addr=0x1965, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1965, .value=0xbf, .type=IO_READ},
        {.addr=0x1966, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x5f54, .a=0x0c, .x=0xea, .y=0xe6, .sp=0x0a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x8a}, {.addr=0x5f54, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5f55, .a=0x8a, .x=0xeb, .y=0xe6, .sp=0x0a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x8a}, {.addr=0x5f54, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5f54, .value=0xbf, .type=IO_READ},
        {.addr=0x5f55, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xd2da, .a=0x7e, .x=0x20, .y=0x77, .sp=0xb6, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x4c}, {.addr=0xd2da, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd2db, .a=0x4c, .x=0x21, .y=0x77, .sp=0xb6, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x4c}, {.addr=0xd2da, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd2da, .value=0xbf, .type=IO_READ},
        {.addr=0xd2db, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x9887, .a=0xef, .x=0x0a, .y=0x22, .sp=0xb8, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x9e}, {.addr=0x9887, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9888, .a=0x9e, .x=0x0b, .y=0x22, .sp=0xb8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x9e}, {.addr=0x9887, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9887, .value=0xbf, .type=IO_READ},
        {.addr=0x9888, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x4f9b, .a=0x48, .x=0xaf, .y=0x31, .sp=0xff, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x69}, {.addr=0x4f9b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4f9c, .a=0x69, .x=0xb0, .y=0x31, .sp=0xff, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x69}, {.addr=0x4f9b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4f9b, .value=0xbf, .type=IO_READ},
        {.addr=0x4f9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2367, .a=0x9b, .x=0x51, .y=0x21, .sp=0xd2, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xfe}, {.addr=0x2367, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2368, .a=0xfe, .x=0x52, .y=0x21, .sp=0xd2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xfe}, {.addr=0x2367, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2367, .value=0xbf, .type=IO_READ},
        {.addr=0x2368, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xba5a, .a=0x3e, .x=0x6a, .y=0x31, .sp=0x11, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x25}, {.addr=0xba5a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xba5b, .a=0x25, .x=0x6b, .y=0x31, .sp=0x11, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x25}, {.addr=0xba5a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xba5a, .value=0xbf, .type=IO_READ},
        {.addr=0xba5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x22d7, .a=0xbe, .x=0x94, .y=0x2f, .sp=0x79, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x27}, {.addr=0x22d7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x22d8, .a=0x27, .x=0x95, .y=0x2f, .sp=0x79, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x27}, {.addr=0x22d7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x22d7, .value=0xbf, .type=IO_READ},
        {.addr=0x22d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x29dd, .a=0x4e, .x=0x2b, .y=0x2b, .sp=0x43, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xa8}, {.addr=0x29dd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x29de, .a=0xa8, .x=0x2c, .y=0x2b, .sp=0x43, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xa8}, {.addr=0x29dd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x29dd, .value=0xbf, .type=IO_READ},
        {.addr=0x29de, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xeb99, .a=0x94, .x=0xe2, .y=0xf5, .sp=0x40, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0xea}, {.addr=0xeb99, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xeb9a, .a=0xea, .x=0xe3, .y=0xf5, .sp=0x40, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xea}, {.addr=0xeb99, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xeb99, .value=0xbf, .type=IO_READ},
        {.addr=0xeb9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x49c9, .a=0x74, .x=0xd9, .y=0x21, .sp=0x35, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x96}, {.addr=0x49c9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x49ca, .a=0x96, .x=0xda, .y=0x21, .sp=0x35, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x96}, {.addr=0x49c9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x49c9, .value=0xbf, .type=IO_READ},
        {.addr=0x49ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x03fb, .a=0x17, .x=0xc9, .y=0x09, .sp=0x9d, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0xee}, {.addr=0x03fb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x03fc, .a=0xee, .x=0xca, .y=0x09, .sp=0x9d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xee}, {.addr=0x03fb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x03fb, .value=0xbf, .type=IO_READ},
        {.addr=0x03fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x8f7e, .a=0x6e, .x=0xc0, .y=0x36, .sp=0x68, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x7d}, {.addr=0x8f7e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8f7f, .a=0x7d, .x=0xc1, .y=0x36, .sp=0x68, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x7d}, {.addr=0x8f7e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8f7e, .value=0xbf, .type=IO_READ},
        {.addr=0x8f7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xd8ef, .a=0x2b, .x=0xdf, .y=0x1c, .sp=0x73, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x49}, {.addr=0xd8ef, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd8f0, .a=0x49, .x=0xe0, .y=0x1c, .sp=0x73, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x49}, {.addr=0xd8ef, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd8ef, .value=0xbf, .type=IO_READ},
        {.addr=0xd8f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x2cf4, .a=0x13, .x=0x6a, .y=0x33, .sp=0x62, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x87}, {.addr=0x2cf4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2cf5, .a=0x87, .x=0x6b, .y=0x33, .sp=0x62, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x87}, {.addr=0x2cf4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2cf4, .value=0xbf, .type=IO_READ},
        {.addr=0x2cf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x6d6f, .a=0xa9, .x=0x2f, .y=0xcc, .sp=0xf5, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x67}, {.addr=0x6d6f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6d70, .a=0x67, .x=0x30, .y=0xcc, .sp=0xf5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x67}, {.addr=0x6d6f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6d6f, .value=0xbf, .type=IO_READ},
        {.addr=0x6d70, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x55a5, .a=0x71, .x=0x66, .y=0xb0, .sp=0x8e, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x1f}, {.addr=0x55a5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x55a6, .a=0x1f, .x=0x67, .y=0xb0, .sp=0x8e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x1f}, {.addr=0x55a5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x55a5, .value=0xbf, .type=IO_READ},
        {.addr=0x55a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xae93, .a=0x25, .x=0xe1, .y=0x0f, .sp=0x83, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x20}, {.addr=0xae93, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xae94, .a=0x20, .x=0xe2, .y=0x0f, .sp=0x83, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x20}, {.addr=0xae93, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xae93, .value=0xbf, .type=IO_READ},
        {.addr=0xae94, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xc076, .a=0x16, .x=0x16, .y=0x21, .sp=0xa4, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x23}, {.addr=0xc076, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc077, .a=0x23, .x=0x17, .y=0x21, .sp=0xa4, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x23}, {.addr=0xc076, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc076, .value=0xbf, .type=IO_READ},
        {.addr=0xc077, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xed7c, .a=0x8e, .x=0x1d, .y=0x5a, .sp=0xed, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x6e}, {.addr=0xed7c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xed7d, .a=0x6e, .x=0x1e, .y=0x5a, .sp=0xed, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x6e}, {.addr=0xed7c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xed7c, .value=0xbf, .type=IO_READ},
        {.addr=0xed7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x25f5, .a=0xe3, .x=0x32, .y=0xf2, .sp=0x62, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x25}, {.addr=0x25f5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x25f6, .a=0x25, .x=0x33, .y=0xf2, .sp=0x62, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x25}, {.addr=0x25f5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x25f5, .value=0xbf, .type=IO_READ},
        {.addr=0x25f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xbf2f, .a=0x93, .x=0x64, .y=0xff, .sp=0xab, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x3d}, {.addr=0xbf2f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbf30, .a=0x3d, .x=0x65, .y=0xff, .sp=0xab, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x3d}, {.addr=0xbf2f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbf2f, .value=0xbf, .type=IO_READ},
        {.addr=0xbf30, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x3ab3, .a=0x40, .x=0xd0, .y=0x32, .sp=0x5e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xc2}, {.addr=0x3ab3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3ab4, .a=0xc2, .x=0xd1, .y=0x32, .sp=0x5e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xc2}, {.addr=0x3ab3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3ab3, .value=0xbf, .type=IO_READ},
        {.addr=0x3ab4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xd96a, .a=0x06, .x=0x04, .y=0xfe, .sp=0x38, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x0d}, {.addr=0xd96a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd96b, .a=0x0d, .x=0x05, .y=0xfe, .sp=0x38, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x0d}, {.addr=0xd96a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd96a, .value=0xbf, .type=IO_READ},
        {.addr=0xd96b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xa5fc, .a=0x1a, .x=0x07, .y=0x75, .sp=0x5e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x05}, {.addr=0xa5fc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa5fd, .a=0x05, .x=0x08, .y=0x75, .sp=0x5e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x05}, {.addr=0xa5fc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa5fc, .value=0xbf, .type=IO_READ},
        {.addr=0xa5fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x6477, .a=0x70, .x=0x44, .y=0x9b, .sp=0xc8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0x97}, {.addr=0x6477, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6478, .a=0x97, .x=0x45, .y=0x9b, .sp=0xc8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0x97}, {.addr=0x6477, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6477, .value=0xbf, .type=IO_READ},
        {.addr=0x6478, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x0a93, .a=0x7b, .x=0xa0, .y=0xf3, .sp=0xa7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x29}, {.addr=0x0a93, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0a94, .a=0x29, .x=0xa1, .y=0xf3, .sp=0xa7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x29}, {.addr=0x0a93, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0a93, .value=0xbf, .type=IO_READ},
        {.addr=0x0a94, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x3460, .a=0x33, .x=0x9c, .y=0x23, .sp=0x2e, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x5a}, {.addr=0x3460, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3461, .a=0x5a, .x=0x9d, .y=0x23, .sp=0x2e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x5a}, {.addr=0x3460, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3460, .value=0xbf, .type=IO_READ},
        {.addr=0x3461, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xf5ea, .a=0xb9, .x=0x06, .y=0x32, .sp=0x92, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0x42}, {.addr=0xf5ea, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf5eb, .a=0x42, .x=0x07, .y=0x32, .sp=0x92, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0x42}, {.addr=0xf5ea, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf5ea, .value=0xbf, .type=IO_READ},
        {.addr=0xf5eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xb6db, .a=0xb9, .x=0x8c, .y=0xaf, .sp=0xa0, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x5a}, {.addr=0xb6db, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb6dc, .a=0x5a, .x=0x8d, .y=0xaf, .sp=0xa0, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x5a}, {.addr=0xb6db, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb6db, .value=0xbf, .type=IO_READ},
        {.addr=0xb6dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x029f, .a=0x2b, .x=0x74, .y=0xc8, .sp=0x54, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x7c}, {.addr=0x029f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x02a0, .a=0x7c, .x=0x75, .y=0xc8, .sp=0x54, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x7c}, {.addr=0x029f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x029f, .value=0xbf, .type=IO_READ},
        {.addr=0x02a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xb74c, .a=0xf6, .x=0xd2, .y=0x94, .sp=0xe4, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x4c}, {.addr=0xb74c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb74d, .a=0x4c, .x=0xd3, .y=0x94, .sp=0xe4, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x4c}, {.addr=0xb74c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb74c, .value=0xbf, .type=IO_READ},
        {.addr=0xb74d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x0a28, .a=0x62, .x=0x6c, .y=0x2d, .sp=0x19, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x06}, {.addr=0x0a28, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0a29, .a=0x06, .x=0x6d, .y=0x2d, .sp=0x19, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x06}, {.addr=0x0a28, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0a28, .value=0xbf, .type=IO_READ},
        {.addr=0x0a29, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xa04d, .a=0xf7, .x=0xbb, .y=0xad, .sp=0xdd, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x88}, {.addr=0xa04d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa04e, .a=0x88, .x=0xbc, .y=0xad, .sp=0xdd, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x88}, {.addr=0xa04d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa04d, .value=0xbf, .type=IO_READ},
        {.addr=0xa04e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x6b24, .a=0x65, .x=0x61, .y=0x9d, .sp=0x97, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0xc4}, {.addr=0x6b24, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6b25, .a=0xc4, .x=0x62, .y=0x9d, .sp=0x97, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0xc4}, {.addr=0x6b24, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6b24, .value=0xbf, .type=IO_READ},
        {.addr=0x6b25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x1764, .a=0xd5, .x=0xab, .y=0x9f, .sp=0x7f, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xb3}, {.addr=0x1764, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1765, .a=0xb3, .x=0xac, .y=0x9f, .sp=0x7f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xb3}, {.addr=0x1764, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1764, .value=0xbf, .type=IO_READ},
        {.addr=0x1765, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x5317, .a=0xd2, .x=0x37, .y=0x77, .sp=0x96, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xf1}, {.addr=0x5317, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5318, .a=0xf1, .x=0x38, .y=0x77, .sp=0x96, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xf1}, {.addr=0x5317, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5317, .value=0xbf, .type=IO_READ},
        {.addr=0x5318, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x6ce9, .a=0xb9, .x=0x22, .y=0x8c, .sp=0xf6, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0xa4}, {.addr=0x6ce9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6cea, .a=0xa4, .x=0x23, .y=0x8c, .sp=0xf6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0xa4}, {.addr=0x6ce9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6ce9, .value=0xbf, .type=IO_READ},
        {.addr=0x6cea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0022, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x88bc, .a=0x70, .x=0x41, .y=0xbe, .sp=0xba, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x28}, {.addr=0x88bc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x88bd, .a=0x28, .x=0x42, .y=0xbe, .sp=0xba, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x28}, {.addr=0x88bc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x88bc, .value=0xbf, .type=IO_READ},
        {.addr=0x88bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xebb1, .a=0x6e, .x=0x13, .y=0x9d, .sp=0xc5, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x05}, {.addr=0xebb1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xebb2, .a=0x05, .x=0x14, .y=0x9d, .sp=0xc5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x05}, {.addr=0xebb1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xebb1, .value=0xbf, .type=IO_READ},
        {.addr=0xebb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xf06d, .a=0x67, .x=0x60, .y=0x5e, .sp=0x8c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x57}, {.addr=0xf06d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf06e, .a=0x57, .x=0x61, .y=0x5e, .sp=0x8c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x57}, {.addr=0xf06d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf06d, .value=0xbf, .type=IO_READ},
        {.addr=0xf06e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xedf0, .a=0xf6, .x=0x3e, .y=0xec, .sp=0x64, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xbb}, {.addr=0xedf0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xedf1, .a=0xbb, .x=0x3f, .y=0xec, .sp=0x64, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xbb}, {.addr=0xedf0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xedf0, .value=0xbf, .type=IO_READ},
        {.addr=0xedf1, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xd3c4, .a=0x3a, .x=0xa7, .y=0xf6, .sp=0x05, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0xf2}, {.addr=0xd3c4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd3c5, .a=0xf2, .x=0xa8, .y=0xf6, .sp=0x05, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0xf2}, {.addr=0xd3c4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd3c4, .value=0xbf, .type=IO_READ},
        {.addr=0xd3c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x3ccb, .a=0x5d, .x=0xcc, .y=0x39, .sp=0x2a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x20}, {.addr=0x3ccb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3ccc, .a=0x20, .x=0xcd, .y=0x39, .sp=0x2a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x20}, {.addr=0x3ccb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3ccb, .value=0xbf, .type=IO_READ},
        {.addr=0x3ccc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x9f54, .a=0x84, .x=0x71, .y=0x4e, .sp=0x8c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x79}, {.addr=0x9f54, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9f55, .a=0x79, .x=0x72, .y=0x4e, .sp=0x8c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x79}, {.addr=0x9f54, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9f54, .value=0xbf, .type=IO_READ},
        {.addr=0x9f55, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x2f19, .a=0x9d, .x=0x96, .y=0x3d, .sp=0xd9, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x2d}, {.addr=0x2f19, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2f1a, .a=0x2d, .x=0x97, .y=0x3d, .sp=0xd9, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x2d}, {.addr=0x2f19, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2f19, .value=0xbf, .type=IO_READ},
        {.addr=0x2f1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xdba0, .a=0xba, .x=0x3c, .y=0x99, .sp=0xd0, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x66}, {.addr=0xdba0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdba1, .a=0x66, .x=0x3d, .y=0x99, .sp=0xd0, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x66}, {.addr=0xdba0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdba0, .value=0xbf, .type=IO_READ},
        {.addr=0xdba1, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xa66c, .a=0x31, .x=0xdd, .y=0x10, .sp=0x91, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x78}, {.addr=0xa66c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa66d, .a=0x78, .x=0xde, .y=0x10, .sp=0x91, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x78}, {.addr=0xa66c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa66c, .value=0xbf, .type=IO_READ},
        {.addr=0xa66d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xc1ef, .a=0x1e, .x=0x04, .y=0x2a, .sp=0x9e, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0x84}, {.addr=0xc1ef, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc1f0, .a=0x84, .x=0x05, .y=0x2a, .sp=0x9e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0x84}, {.addr=0xc1ef, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc1ef, .value=0xbf, .type=IO_READ},
        {.addr=0xc1f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x354d, .a=0x40, .x=0x1d, .y=0x97, .sp=0xd6, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x1f}, {.addr=0x354d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x354e, .a=0x1f, .x=0x1e, .y=0x97, .sp=0xd6, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x1f}, {.addr=0x354d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x354d, .value=0xbf, .type=IO_READ},
        {.addr=0x354e, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x8b20, .a=0x79, .x=0x13, .y=0x6e, .sp=0x2d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xdc}, {.addr=0x8b20, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8b21, .a=0xdc, .x=0x14, .y=0x6e, .sp=0x2d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xdc}, {.addr=0x8b20, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8b20, .value=0xbf, .type=IO_READ},
        {.addr=0x8b21, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x775f, .a=0x8d, .x=0x36, .y=0x1f, .sp=0xaa, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0xa3}, {.addr=0x775f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7760, .a=0xa3, .x=0x37, .y=0x1f, .sp=0xaa, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0xa3}, {.addr=0x775f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x775f, .value=0xbf, .type=IO_READ},
        {.addr=0x7760, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x6c58, .a=0xd7, .x=0x76, .y=0x10, .sp=0xf3, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x85}, {.addr=0x6c58, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6c59, .a=0x85, .x=0x77, .y=0x10, .sp=0xf3, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x85}, {.addr=0x6c58, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6c58, .value=0xbf, .type=IO_READ},
        {.addr=0x6c59, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x9f7f, .a=0x32, .x=0xa7, .y=0x5a, .sp=0x9c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x61}, {.addr=0x9f7f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9f80, .a=0x61, .x=0xa8, .y=0x5a, .sp=0x9c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x61}, {.addr=0x9f7f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9f7f, .value=0xbf, .type=IO_READ},
        {.addr=0x9f80, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x1d84, .a=0x81, .x=0x3b, .y=0x9d, .sp=0xe9, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0xba}, {.addr=0x1d84, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1d85, .a=0xba, .x=0x3c, .y=0x9d, .sp=0xe9, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0xba}, {.addr=0x1d84, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1d84, .value=0xbf, .type=IO_READ},
        {.addr=0x1d85, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xb66c, .a=0x10, .x=0xc5, .y=0x3c, .sp=0xc1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x34}, {.addr=0xb66c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb66d, .a=0x34, .x=0xc6, .y=0x3c, .sp=0xc1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x34}, {.addr=0xb66c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb66c, .value=0xbf, .type=IO_READ},
        {.addr=0xb66d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x1d83, .a=0xea, .x=0x57, .y=0x98, .sp=0x75, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x76}, {.addr=0x1d83, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1d84, .a=0x76, .x=0x58, .y=0x98, .sp=0x75, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x76}, {.addr=0x1d83, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1d83, .value=0xbf, .type=IO_READ},
        {.addr=0x1d84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xe280, .a=0xfe, .x=0x36, .y=0x2c, .sp=0xcb, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x23}, {.addr=0xe280, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe281, .a=0x23, .x=0x37, .y=0x2c, .sp=0xcb, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x23}, {.addr=0xe280, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe280, .value=0xbf, .type=IO_READ},
        {.addr=0xe281, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xbc46, .a=0x49, .x=0x8b, .y=0x92, .sp=0xf9, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xa9}, {.addr=0xbc46, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbc47, .a=0xa9, .x=0x8c, .y=0x92, .sp=0xf9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xa9}, {.addr=0xbc46, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbc46, .value=0xbf, .type=IO_READ},
        {.addr=0xbc47, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xd1d0, .a=0xe2, .x=0x85, .y=0xb0, .sp=0x6f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xb9}, {.addr=0xd1d0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd1d1, .a=0xb9, .x=0x86, .y=0xb0, .sp=0x6f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xb9}, {.addr=0xd1d0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd1d0, .value=0xbf, .type=IO_READ},
        {.addr=0xd1d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x860d, .a=0x81, .x=0x46, .y=0x6d, .sp=0x35, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0xb0}, {.addr=0x860d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x860e, .a=0xb0, .x=0x47, .y=0x6d, .sp=0x35, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0xb0}, {.addr=0x860d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x860d, .value=0xbf, .type=IO_READ},
        {.addr=0x860e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xc577, .a=0x99, .x=0xd4, .y=0xac, .sp=0x48, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x14}, {.addr=0xc577, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc578, .a=0x14, .x=0xd5, .y=0xac, .sp=0x48, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x14}, {.addr=0xc577, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc577, .value=0xbf, .type=IO_READ},
        {.addr=0xc578, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x5fa9, .a=0x39, .x=0x20, .y=0xe3, .sp=0x58, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x4d}, {.addr=0x5fa9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5faa, .a=0x4d, .x=0x21, .y=0xe3, .sp=0x58, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x4d}, {.addr=0x5fa9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5fa9, .value=0xbf, .type=IO_READ},
        {.addr=0x5faa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0300) {
    const struct CPU_State initial_cpu = {.pc=0x7749, .a=0x26, .x=0xb4, .y=0xe4, .sp=0x06, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x11}, {.addr=0x7749, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x774a, .a=0x11, .x=0xb5, .y=0xe4, .sp=0x06, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x11}, {.addr=0x7749, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7749, .value=0xbf, .type=IO_READ},
        {.addr=0x774a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0301) {
    const struct CPU_State initial_cpu = {.pc=0x8038, .a=0xc3, .x=0x4c, .y=0x10, .sp=0x39, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xc6}, {.addr=0x8038, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8039, .a=0xc6, .x=0x4d, .y=0x10, .sp=0x39, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xc6}, {.addr=0x8038, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8038, .value=0xbf, .type=IO_READ},
        {.addr=0x8039, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0302) {
    const struct CPU_State initial_cpu = {.pc=0x11b4, .a=0x7d, .x=0x41, .y=0xcc, .sp=0x55, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0xa5}, {.addr=0x11b4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x11b5, .a=0xa5, .x=0x42, .y=0xcc, .sp=0x55, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xa5}, {.addr=0x11b4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x11b4, .value=0xbf, .type=IO_READ},
        {.addr=0x11b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0303) {
    const struct CPU_State initial_cpu = {.pc=0xb548, .a=0xf3, .x=0xc7, .y=0x06, .sp=0xc6, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x16}, {.addr=0xb548, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb549, .a=0x16, .x=0xc8, .y=0x06, .sp=0xc6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x16}, {.addr=0xb548, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb548, .value=0xbf, .type=IO_READ},
        {.addr=0xb549, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0304) {
    const struct CPU_State initial_cpu = {.pc=0x84a2, .a=0xe5, .x=0xda, .y=0xa8, .sp=0x2c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xa3}, {.addr=0x84a2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x84a3, .a=0xa3, .x=0xdb, .y=0xa8, .sp=0x2c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xa3}, {.addr=0x84a2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x84a2, .value=0xbf, .type=IO_READ},
        {.addr=0x84a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0305) {
    const struct CPU_State initial_cpu = {.pc=0x2350, .a=0x22, .x=0x8a, .y=0xc1, .sp=0x96, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0xad}, {.addr=0x2350, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2351, .a=0xad, .x=0x8b, .y=0xc1, .sp=0x96, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xad}, {.addr=0x2350, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2350, .value=0xbf, .type=IO_READ},
        {.addr=0x2351, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0306) {
    const struct CPU_State initial_cpu = {.pc=0xfe28, .a=0x8d, .x=0x8e, .y=0x2d, .sp=0x55, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x63}, {.addr=0xfe28, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfe29, .a=0x63, .x=0x8f, .y=0x2d, .sp=0x55, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x63}, {.addr=0xfe28, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfe28, .value=0xbf, .type=IO_READ},
        {.addr=0xfe29, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0307) {
    const struct CPU_State initial_cpu = {.pc=0x1b60, .a=0x01, .x=0x6a, .y=0x5a, .sp=0x6a, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x79}, {.addr=0x1b60, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1b61, .a=0x79, .x=0x6b, .y=0x5a, .sp=0x6a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x79}, {.addr=0x1b60, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1b60, .value=0xbf, .type=IO_READ},
        {.addr=0x1b61, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0308) {
    const struct CPU_State initial_cpu = {.pc=0x3ece, .a=0x12, .x=0x43, .y=0x17, .sp=0x4e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x9e}, {.addr=0x3ece, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3ecf, .a=0x9e, .x=0x44, .y=0x17, .sp=0x4e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x9e}, {.addr=0x3ece, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3ece, .value=0xbf, .type=IO_READ},
        {.addr=0x3ecf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0309) {
    const struct CPU_State initial_cpu = {.pc=0xce08, .a=0x71, .x=0xc1, .y=0x30, .sp=0xda, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x59}, {.addr=0xce08, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xce09, .a=0x59, .x=0xc2, .y=0x30, .sp=0xda, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x59}, {.addr=0xce08, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xce08, .value=0xbf, .type=IO_READ},
        {.addr=0xce09, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_030A) {
    const struct CPU_State initial_cpu = {.pc=0xab85, .a=0x95, .x=0x6b, .y=0xbc, .sp=0x16, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x0d}, {.addr=0xab85, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xab86, .a=0x0d, .x=0x6c, .y=0xbc, .sp=0x16, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x0d}, {.addr=0xab85, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xab85, .value=0xbf, .type=IO_READ},
        {.addr=0xab86, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_030B) {
    const struct CPU_State initial_cpu = {.pc=0x7afb, .a=0x97, .x=0x97, .y=0x77, .sp=0x16, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x7b}, {.addr=0x7afb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7afc, .a=0x7b, .x=0x98, .y=0x77, .sp=0x16, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x7b}, {.addr=0x7afb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7afb, .value=0xbf, .type=IO_READ},
        {.addr=0x7afc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_030C) {
    const struct CPU_State initial_cpu = {.pc=0x64d3, .a=0xf4, .x=0x1c, .y=0xbe, .sp=0x3e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x95}, {.addr=0x64d3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x64d4, .a=0x95, .x=0x1d, .y=0xbe, .sp=0x3e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x95}, {.addr=0x64d3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x64d3, .value=0xbf, .type=IO_READ},
        {.addr=0x64d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_030D) {
    const struct CPU_State initial_cpu = {.pc=0x635b, .a=0x82, .x=0xb6, .y=0x68, .sp=0x31, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x22}, {.addr=0x635b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x635c, .a=0x22, .x=0xb7, .y=0x68, .sp=0x31, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x22}, {.addr=0x635b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x635b, .value=0xbf, .type=IO_READ},
        {.addr=0x635c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_030E) {
    const struct CPU_State initial_cpu = {.pc=0x2d64, .a=0x42, .x=0x8e, .y=0x33, .sp=0x68, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x21}, {.addr=0x2d64, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2d65, .a=0x21, .x=0x8f, .y=0x33, .sp=0x68, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x21}, {.addr=0x2d64, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2d64, .value=0xbf, .type=IO_READ},
        {.addr=0x2d65, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_030F) {
    const struct CPU_State initial_cpu = {.pc=0xd8d8, .a=0x99, .x=0x5b, .y=0x9d, .sp=0xde, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x41}, {.addr=0xd8d8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd8d9, .a=0x41, .x=0x5c, .y=0x9d, .sp=0xde, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x41}, {.addr=0xd8d8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd8d8, .value=0xbf, .type=IO_READ},
        {.addr=0xd8d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0310) {
    const struct CPU_State initial_cpu = {.pc=0xbde7, .a=0x0a, .x=0xe4, .y=0x5f, .sp=0xf9, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x6c}, {.addr=0xbde7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbde8, .a=0x6c, .x=0xe5, .y=0x5f, .sp=0xf9, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x6c}, {.addr=0xbde7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbde7, .value=0xbf, .type=IO_READ},
        {.addr=0xbde8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0311) {
    const struct CPU_State initial_cpu = {.pc=0x53aa, .a=0x5e, .x=0x0c, .y=0x60, .sp=0x0b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x01}, {.addr=0x53aa, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x53ab, .a=0x01, .x=0x0d, .y=0x60, .sp=0x0b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x01}, {.addr=0x53aa, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x53aa, .value=0xbf, .type=IO_READ},
        {.addr=0x53ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0312) {
    const struct CPU_State initial_cpu = {.pc=0xa0b0, .a=0x14, .x=0x44, .y=0xf4, .sp=0xd2, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0xee}, {.addr=0xa0b0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa0b1, .a=0xee, .x=0x45, .y=0xf4, .sp=0xd2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0xee}, {.addr=0xa0b0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa0b0, .value=0xbf, .type=IO_READ},
        {.addr=0xa0b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0313) {
    const struct CPU_State initial_cpu = {.pc=0x4717, .a=0xee, .x=0x70, .y=0x9e, .sp=0xe9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0xf3}, {.addr=0x4717, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4718, .a=0xf3, .x=0x71, .y=0x9e, .sp=0xe9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xf3}, {.addr=0x4717, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4717, .value=0xbf, .type=IO_READ},
        {.addr=0x4718, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0314) {
    const struct CPU_State initial_cpu = {.pc=0x5b6e, .a=0x81, .x=0xeb, .y=0xcf, .sp=0xb2, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0xda}, {.addr=0x5b6e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5b6f, .a=0xda, .x=0xec, .y=0xcf, .sp=0xb2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0xda}, {.addr=0x5b6e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5b6e, .value=0xbf, .type=IO_READ},
        {.addr=0x5b6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0315) {
    const struct CPU_State initial_cpu = {.pc=0x2fdd, .a=0x9e, .x=0x99, .y=0xbf, .sp=0x1e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x7f}, {.addr=0x2fdd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2fde, .a=0x7f, .x=0x9a, .y=0xbf, .sp=0x1e, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x7f}, {.addr=0x2fdd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2fdd, .value=0xbf, .type=IO_READ},
        {.addr=0x2fde, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0316) {
    const struct CPU_State initial_cpu = {.pc=0x4f11, .a=0x45, .x=0xce, .y=0xae, .sp=0xa5, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0xbb}, {.addr=0x4f11, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4f12, .a=0xbb, .x=0xcf, .y=0xae, .sp=0xa5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0xbb}, {.addr=0x4f11, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4f11, .value=0xbf, .type=IO_READ},
        {.addr=0x4f12, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0317) {
    const struct CPU_State initial_cpu = {.pc=0x16ae, .a=0x34, .x=0x40, .y=0xd4, .sp=0x37, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x76}, {.addr=0x16ae, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x16af, .a=0x76, .x=0x41, .y=0xd4, .sp=0x37, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x76}, {.addr=0x16ae, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x16ae, .value=0xbf, .type=IO_READ},
        {.addr=0x16af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0318) {
    const struct CPU_State initial_cpu = {.pc=0x052a, .a=0xbc, .x=0xd1, .y=0xad, .sp=0x8b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x40}, {.addr=0x052a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x052b, .a=0x40, .x=0xd2, .y=0xad, .sp=0x8b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x40}, {.addr=0x052a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x052a, .value=0xbf, .type=IO_READ},
        {.addr=0x052b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_031A) {
    const struct CPU_State initial_cpu = {.pc=0xf54c, .a=0xf3, .x=0x80, .y=0x82, .sp=0x54, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0xf2}, {.addr=0xf54c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf54d, .a=0xf2, .x=0x81, .y=0x82, .sp=0x54, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0xf2}, {.addr=0xf54c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf54c, .value=0xbf, .type=IO_READ},
        {.addr=0xf54d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_031B) {
    const struct CPU_State initial_cpu = {.pc=0xda88, .a=0x9c, .x=0xa9, .y=0x71, .sp=0x01, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xd3}, {.addr=0xda88, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xda89, .a=0xd3, .x=0xaa, .y=0x71, .sp=0x01, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xd3}, {.addr=0xda88, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xda88, .value=0xbf, .type=IO_READ},
        {.addr=0xda89, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_031C) {
    const struct CPU_State initial_cpu = {.pc=0xa1e0, .a=0xa0, .x=0x5c, .y=0x9b, .sp=0xa7, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x8d}, {.addr=0xa1e0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa1e1, .a=0x8d, .x=0x5d, .y=0x9b, .sp=0xa7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x8d}, {.addr=0xa1e0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa1e0, .value=0xbf, .type=IO_READ},
        {.addr=0xa1e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_031D) {
    const struct CPU_State initial_cpu = {.pc=0xa314, .a=0x5c, .x=0x0d, .y=0x0b, .sp=0xec, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0xd7}, {.addr=0xa314, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa315, .a=0xd7, .x=0x0e, .y=0x0b, .sp=0xec, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0xd7}, {.addr=0xa314, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa314, .value=0xbf, .type=IO_READ},
        {.addr=0xa315, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_031E) {
    const struct CPU_State initial_cpu = {.pc=0x5f69, .a=0xfd, .x=0x4b, .y=0x14, .sp=0xa2, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xc9}, {.addr=0x5f69, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5f6a, .a=0xc9, .x=0x4c, .y=0x14, .sp=0xa2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0xc9}, {.addr=0x5f69, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5f69, .value=0xbf, .type=IO_READ},
        {.addr=0x5f6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_031F) {
    const struct CPU_State initial_cpu = {.pc=0xcb8f, .a=0x8a, .x=0xec, .y=0x32, .sp=0x62, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0xaa}, {.addr=0xcb8f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcb90, .a=0xaa, .x=0xed, .y=0x32, .sp=0x62, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0xaa}, {.addr=0xcb8f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcb8f, .value=0xbf, .type=IO_READ},
        {.addr=0xcb90, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0320) {
    const struct CPU_State initial_cpu = {.pc=0x2e88, .a=0xd1, .x=0x23, .y=0xbb, .sp=0x9c, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xaf}, {.addr=0x2e88, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2e89, .a=0xaf, .x=0x24, .y=0xbb, .sp=0x9c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xaf}, {.addr=0x2e88, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2e88, .value=0xbf, .type=IO_READ},
        {.addr=0x2e89, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0321) {
    const struct CPU_State initial_cpu = {.pc=0xedda, .a=0x30, .x=0x63, .y=0x04, .sp=0x29, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0xea}, {.addr=0xedda, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xeddb, .a=0xea, .x=0x64, .y=0x04, .sp=0x29, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0xea}, {.addr=0xedda, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xedda, .value=0xbf, .type=IO_READ},
        {.addr=0xeddb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0322) {
    const struct CPU_State initial_cpu = {.pc=0xf20e, .a=0x9d, .x=0x07, .y=0x67, .sp=0x90, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x7b}, {.addr=0xf20e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf20f, .a=0x7b, .x=0x08, .y=0x67, .sp=0x90, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x7b}, {.addr=0xf20e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf20e, .value=0xbf, .type=IO_READ},
        {.addr=0xf20f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0323) {
    const struct CPU_State initial_cpu = {.pc=0x8c7a, .a=0x01, .x=0x66, .y=0x28, .sp=0x5f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x8f}, {.addr=0x8c7a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8c7b, .a=0x8f, .x=0x67, .y=0x28, .sp=0x5f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x8f}, {.addr=0x8c7a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8c7a, .value=0xbf, .type=IO_READ},
        {.addr=0x8c7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0324) {
    const struct CPU_State initial_cpu = {.pc=0x7117, .a=0xbf, .x=0x41, .y=0x90, .sp=0xfe, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x34}, {.addr=0x7117, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7118, .a=0x34, .x=0x42, .y=0x90, .sp=0xfe, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0x34}, {.addr=0x7117, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7117, .value=0xbf, .type=IO_READ},
        {.addr=0x7118, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0325) {
    const struct CPU_State initial_cpu = {.pc=0x89cb, .a=0x8a, .x=0x58, .y=0x4b, .sp=0x8d, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0xde}, {.addr=0x89cb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x89cc, .a=0xde, .x=0x59, .y=0x4b, .sp=0x8d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0xde}, {.addr=0x89cb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x89cb, .value=0xbf, .type=IO_READ},
        {.addr=0x89cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0326) {
    const struct CPU_State initial_cpu = {.pc=0xf9a8, .a=0xcc, .x=0x89, .y=0xbd, .sp=0x1a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x44}, {.addr=0xf9a8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf9a9, .a=0x44, .x=0x8a, .y=0xbd, .sp=0x1a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x44}, {.addr=0xf9a8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf9a8, .value=0xbf, .type=IO_READ},
        {.addr=0xf9a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0327) {
    const struct CPU_State initial_cpu = {.pc=0xf951, .a=0x7f, .x=0xb4, .y=0x81, .sp=0xf7, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xb6}, {.addr=0xf951, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf952, .a=0xb6, .x=0xb5, .y=0x81, .sp=0xf7, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xb6}, {.addr=0xf951, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf951, .value=0xbf, .type=IO_READ},
        {.addr=0xf952, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0328) {
    const struct CPU_State initial_cpu = {.pc=0xf2ad, .a=0xe4, .x=0x92, .y=0x10, .sp=0x79, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x6b}, {.addr=0xf2ad, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf2ae, .a=0x6b, .x=0x93, .y=0x10, .sp=0x79, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x6b}, {.addr=0xf2ad, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf2ad, .value=0xbf, .type=IO_READ},
        {.addr=0xf2ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0329) {
    const struct CPU_State initial_cpu = {.pc=0xf89e, .a=0xa2, .x=0xb9, .y=0x7c, .sp=0xad, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x89}, {.addr=0xf89e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf89f, .a=0x89, .x=0xba, .y=0x7c, .sp=0xad, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x89}, {.addr=0xf89e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf89e, .value=0xbf, .type=IO_READ},
        {.addr=0xf89f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_032A) {
    const struct CPU_State initial_cpu = {.pc=0xac40, .a=0x72, .x=0x3c, .y=0xd8, .sp=0xa9, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x2d}, {.addr=0xac40, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xac41, .a=0x2d, .x=0x3d, .y=0xd8, .sp=0xa9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x2d}, {.addr=0xac40, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xac40, .value=0xbf, .type=IO_READ},
        {.addr=0xac41, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_032B) {
    const struct CPU_State initial_cpu = {.pc=0x8444, .a=0x56, .x=0x73, .y=0x81, .sp=0x0e, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x39}, {.addr=0x8444, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8445, .a=0x39, .x=0x74, .y=0x81, .sp=0x0e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x39}, {.addr=0x8444, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8444, .value=0xbf, .type=IO_READ},
        {.addr=0x8445, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_032C) {
    const struct CPU_State initial_cpu = {.pc=0x06cf, .a=0x98, .x=0x8b, .y=0xcf, .sp=0x72, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0x99}, {.addr=0x06cf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x06d0, .a=0x99, .x=0x8c, .y=0xcf, .sp=0x72, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0x99}, {.addr=0x06cf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x06cf, .value=0xbf, .type=IO_READ},
        {.addr=0x06d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_032D) {
    const struct CPU_State initial_cpu = {.pc=0x0783, .a=0x85, .x=0x17, .y=0xc4, .sp=0xaf, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x5a}, {.addr=0x0783, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0784, .a=0x5a, .x=0x18, .y=0xc4, .sp=0xaf, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x5a}, {.addr=0x0783, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0783, .value=0xbf, .type=IO_READ},
        {.addr=0x0784, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_032E) {
    const struct CPU_State initial_cpu = {.pc=0xe9ed, .a=0x3d, .x=0x36, .y=0x87, .sp=0xac, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xe3}, {.addr=0xe9ed, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe9ee, .a=0xe3, .x=0x37, .y=0x87, .sp=0xac, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xe3}, {.addr=0xe9ed, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe9ed, .value=0xbf, .type=IO_READ},
        {.addr=0xe9ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_032F) {
    const struct CPU_State initial_cpu = {.pc=0x5231, .a=0xdf, .x=0x56, .y=0xa2, .sp=0x6c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0xd5}, {.addr=0x5231, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5232, .a=0xd5, .x=0x57, .y=0xa2, .sp=0x6c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0xd5}, {.addr=0x5231, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5231, .value=0xbf, .type=IO_READ},
        {.addr=0x5232, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0330) {
    const struct CPU_State initial_cpu = {.pc=0x1215, .a=0x00, .x=0x5a, .y=0x95, .sp=0x6e, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x33}, {.addr=0x1215, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1216, .a=0x33, .x=0x5b, .y=0x95, .sp=0x6e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x33}, {.addr=0x1215, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1215, .value=0xbf, .type=IO_READ},
        {.addr=0x1216, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0331) {
    const struct CPU_State initial_cpu = {.pc=0x21d2, .a=0xb3, .x=0x71, .y=0x73, .sp=0xfa, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xf2}, {.addr=0x21d2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x21d3, .a=0xf2, .x=0x72, .y=0x73, .sp=0xfa, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xf2}, {.addr=0x21d2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x21d2, .value=0xbf, .type=IO_READ},
        {.addr=0x21d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0332) {
    const struct CPU_State initial_cpu = {.pc=0x0476, .a=0x8d, .x=0x3c, .y=0xfc, .sp=0x91, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x1b}, {.addr=0x0476, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0477, .a=0x1b, .x=0x3d, .y=0xfc, .sp=0x91, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x1b}, {.addr=0x0476, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0476, .value=0xbf, .type=IO_READ},
        {.addr=0x0477, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0333) {
    const struct CPU_State initial_cpu = {.pc=0xad16, .a=0x17, .x=0xb1, .y=0xc3, .sp=0xb2, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x67}, {.addr=0xad16, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xad17, .a=0x67, .x=0xb2, .y=0xc3, .sp=0xb2, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x67}, {.addr=0xad16, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xad16, .value=0xbf, .type=IO_READ},
        {.addr=0xad17, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0334) {
    const struct CPU_State initial_cpu = {.pc=0x9483, .a=0xfd, .x=0x4d, .y=0x16, .sp=0xe4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0x5c}, {.addr=0x9483, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9484, .a=0x5c, .x=0x4e, .y=0x16, .sp=0xe4, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0x5c}, {.addr=0x9483, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9483, .value=0xbf, .type=IO_READ},
        {.addr=0x9484, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0335) {
    const struct CPU_State initial_cpu = {.pc=0xcea4, .a=0x8a, .x=0xe0, .y=0x4f, .sp=0x8b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xd5}, {.addr=0xcea4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcea5, .a=0xd5, .x=0xe1, .y=0x4f, .sp=0x8b, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xd5}, {.addr=0xcea4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcea4, .value=0xbf, .type=IO_READ},
        {.addr=0xcea5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0336) {
    const struct CPU_State initial_cpu = {.pc=0x7d1c, .a=0x44, .x=0xb8, .y=0xf7, .sp=0x3e, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0xb4}, {.addr=0x7d1c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7d1d, .a=0xb4, .x=0xb9, .y=0xf7, .sp=0x3e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xb4}, {.addr=0x7d1c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7d1c, .value=0xbf, .type=IO_READ},
        {.addr=0x7d1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0337) {
    const struct CPU_State initial_cpu = {.pc=0x18de, .a=0x39, .x=0x5f, .y=0x97, .sp=0x51, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0xa6}, {.addr=0x18de, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x18df, .a=0xa6, .x=0x60, .y=0x97, .sp=0x51, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0xa6}, {.addr=0x18de, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x18de, .value=0xbf, .type=IO_READ},
        {.addr=0x18df, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0338) {
    const struct CPU_State initial_cpu = {.pc=0x7cfc, .a=0x2d, .x=0x96, .y=0x48, .sp=0xa8, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xe8}, {.addr=0x7cfc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7cfd, .a=0xe8, .x=0x97, .y=0x48, .sp=0xa8, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xe8}, {.addr=0x7cfc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7cfc, .value=0xbf, .type=IO_READ},
        {.addr=0x7cfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0339) {
    const struct CPU_State initial_cpu = {.pc=0x489a, .a=0xbf, .x=0x19, .y=0xd7, .sp=0xf7, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0xfa}, {.addr=0x489a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x489b, .a=0xfa, .x=0x1a, .y=0xd7, .sp=0xf7, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xfa}, {.addr=0x489a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x489a, .value=0xbf, .type=IO_READ},
        {.addr=0x489b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_033A) {
    const struct CPU_State initial_cpu = {.pc=0x52b0, .a=0x68, .x=0xac, .y=0x1c, .sp=0x7b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x37}, {.addr=0x52b0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x52b1, .a=0x37, .x=0xad, .y=0x1c, .sp=0x7b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x37}, {.addr=0x52b0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x52b0, .value=0xbf, .type=IO_READ},
        {.addr=0x52b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_033B) {
    const struct CPU_State initial_cpu = {.pc=0x7205, .a=0x35, .x=0xfc, .y=0x2b, .sp=0x5f, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x4a}, {.addr=0x7205, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7206, .a=0x4a, .x=0xfd, .y=0x2b, .sp=0x5f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x4a}, {.addr=0x7205, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7205, .value=0xbf, .type=IO_READ},
        {.addr=0x7206, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_033C) {
    const struct CPU_State initial_cpu = {.pc=0x2e82, .a=0xf0, .x=0x2d, .y=0xb7, .sp=0x9b, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xa9}, {.addr=0x2e82, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2e83, .a=0xa9, .x=0x2e, .y=0xb7, .sp=0x9b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0xa9}, {.addr=0x2e82, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2e82, .value=0xbf, .type=IO_READ},
        {.addr=0x2e83, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_033D) {
    const struct CPU_State initial_cpu = {.pc=0x9d13, .a=0x60, .x=0xfc, .y=0x87, .sp=0x49, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x14}, {.addr=0x9d13, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9d14, .a=0x14, .x=0xfd, .y=0x87, .sp=0x49, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x14}, {.addr=0x9d13, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9d13, .value=0xbf, .type=IO_READ},
        {.addr=0x9d14, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_033E) {
    const struct CPU_State initial_cpu = {.pc=0xfaba, .a=0x6b, .x=0x0d, .y=0xb4, .sp=0xbe, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x92}, {.addr=0xfaba, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfabb, .a=0x92, .x=0x0e, .y=0xb4, .sp=0xbe, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x92}, {.addr=0xfaba, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfaba, .value=0xbf, .type=IO_READ},
        {.addr=0xfabb, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_033F) {
    const struct CPU_State initial_cpu = {.pc=0xdaae, .a=0xd7, .x=0x28, .y=0x29, .sp=0x0f, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x33}, {.addr=0xdaae, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdaaf, .a=0x33, .x=0x29, .y=0x29, .sp=0x0f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x33}, {.addr=0xdaae, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdaae, .value=0xbf, .type=IO_READ},
        {.addr=0xdaaf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0340) {
    const struct CPU_State initial_cpu = {.pc=0x3dc4, .a=0xb8, .x=0xb3, .y=0x62, .sp=0x6b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x3f}, {.addr=0x3dc4, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3dc5, .a=0x3f, .x=0xb4, .y=0x62, .sp=0x6b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x3f}, {.addr=0x3dc4, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3dc4, .value=0xbf, .type=IO_READ},
        {.addr=0x3dc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0341) {
    const struct CPU_State initial_cpu = {.pc=0x2814, .a=0x49, .x=0xd7, .y=0x08, .sp=0x35, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x16}, {.addr=0x2814, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2815, .a=0x16, .x=0xd8, .y=0x08, .sp=0x35, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x16}, {.addr=0x2814, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2814, .value=0xbf, .type=IO_READ},
        {.addr=0x2815, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0342) {
    const struct CPU_State initial_cpu = {.pc=0x35cc, .a=0x76, .x=0x02, .y=0x2f, .sp=0x55, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0xa9}, {.addr=0x35cc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x35cd, .a=0xa9, .x=0x03, .y=0x2f, .sp=0x55, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0xa9}, {.addr=0x35cc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x35cc, .value=0xbf, .type=IO_READ},
        {.addr=0x35cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0343) {
    const struct CPU_State initial_cpu = {.pc=0x4bdb, .a=0xad, .x=0xce, .y=0xe2, .sp=0xc8, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xb0}, {.addr=0x4bdb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4bdc, .a=0xb0, .x=0xcf, .y=0xe2, .sp=0xc8, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xb0}, {.addr=0x4bdb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4bdb, .value=0xbf, .type=IO_READ},
        {.addr=0x4bdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0344) {
    const struct CPU_State initial_cpu = {.pc=0xb9f8, .a=0x14, .x=0xa9, .y=0x0f, .sp=0x2e, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xfd}, {.addr=0xb9f8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb9f9, .a=0xfd, .x=0xaa, .y=0x0f, .sp=0x2e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xfd}, {.addr=0xb9f8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb9f8, .value=0xbf, .type=IO_READ},
        {.addr=0xb9f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0345) {
    const struct CPU_State initial_cpu = {.pc=0x5af2, .a=0x60, .x=0x5c, .y=0x2e, .sp=0x15, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x69}, {.addr=0x5af2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5af3, .a=0x69, .x=0x5d, .y=0x2e, .sp=0x15, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x69}, {.addr=0x5af2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5af2, .value=0xbf, .type=IO_READ},
        {.addr=0x5af3, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0346) {
    const struct CPU_State initial_cpu = {.pc=0x7f2a, .a=0x33, .x=0x38, .y=0xa6, .sp=0x85, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x95}, {.addr=0x7f2a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7f2b, .a=0x95, .x=0x39, .y=0xa6, .sp=0x85, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x95}, {.addr=0x7f2a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7f2a, .value=0xbf, .type=IO_READ},
        {.addr=0x7f2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0347) {
    const struct CPU_State initial_cpu = {.pc=0xd2fb, .a=0xd9, .x=0x07, .y=0x9a, .sp=0x13, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x2e}, {.addr=0xd2fb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd2fc, .a=0x2e, .x=0x08, .y=0x9a, .sp=0x13, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x2e}, {.addr=0xd2fb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd2fb, .value=0xbf, .type=IO_READ},
        {.addr=0xd2fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0348) {
    const struct CPU_State initial_cpu = {.pc=0xe3e8, .a=0x34, .x=0x4d, .y=0xf0, .sp=0x57, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0xbf}, {.addr=0xe3e8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe3e9, .a=0xbf, .x=0x4e, .y=0xf0, .sp=0x57, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0xbf}, {.addr=0xe3e8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe3e8, .value=0xbf, .type=IO_READ},
        {.addr=0xe3e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0349) {
    const struct CPU_State initial_cpu = {.pc=0x4cee, .a=0xb2, .x=0x68, .y=0x24, .sp=0x91, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xc4}, {.addr=0x4cee, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4cef, .a=0xc4, .x=0x69, .y=0x24, .sp=0x91, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xc4}, {.addr=0x4cee, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4cee, .value=0xbf, .type=IO_READ},
        {.addr=0x4cef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_034A) {
    const struct CPU_State initial_cpu = {.pc=0x2a45, .a=0x48, .x=0xdd, .y=0xd3, .sp=0x40, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0xc6}, {.addr=0x2a45, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2a46, .a=0xc6, .x=0xde, .y=0xd3, .sp=0x40, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xc6}, {.addr=0x2a45, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2a45, .value=0xbf, .type=IO_READ},
        {.addr=0x2a46, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_034B) {
    const struct CPU_State initial_cpu = {.pc=0xb297, .a=0x9b, .x=0x2c, .y=0x2d, .sp=0x50, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xfa}, {.addr=0xb297, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb298, .a=0xfa, .x=0x2d, .y=0x2d, .sp=0x50, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xfa}, {.addr=0xb297, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb297, .value=0xbf, .type=IO_READ},
        {.addr=0xb298, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_034C) {
    const struct CPU_State initial_cpu = {.pc=0x3461, .a=0xbe, .x=0x11, .y=0xb3, .sp=0xd1, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0xfe}, {.addr=0x3461, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3462, .a=0xfe, .x=0x12, .y=0xb3, .sp=0xd1, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0xfe}, {.addr=0x3461, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3461, .value=0xbf, .type=IO_READ},
        {.addr=0x3462, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_034D) {
    const struct CPU_State initial_cpu = {.pc=0x4b26, .a=0x20, .x=0xcd, .y=0x04, .sp=0x87, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0xf5}, {.addr=0x4b26, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4b27, .a=0xf5, .x=0xce, .y=0x04, .sp=0x87, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0xf5}, {.addr=0x4b26, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4b26, .value=0xbf, .type=IO_READ},
        {.addr=0x4b27, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0350) {
    const struct CPU_State initial_cpu = {.pc=0x0193, .a=0x2d, .x=0xe6, .y=0x0b, .sp=0xfc, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x91}, {.addr=0x0193, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0194, .a=0x91, .x=0xe7, .y=0x0b, .sp=0xfc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x91}, {.addr=0x0193, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0193, .value=0xbf, .type=IO_READ},
        {.addr=0x0194, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0352) {
    const struct CPU_State initial_cpu = {.pc=0x814d, .a=0x62, .x=0xe8, .y=0xba, .sp=0x40, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x6d}, {.addr=0x814d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x814e, .a=0x6d, .x=0xe9, .y=0xba, .sp=0x40, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x6d}, {.addr=0x814d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x814d, .value=0xbf, .type=IO_READ},
        {.addr=0x814e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0353) {
    const struct CPU_State initial_cpu = {.pc=0x1e07, .a=0x34, .x=0xf6, .y=0x6d, .sp=0xaf, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x94}, {.addr=0x1e07, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1e08, .a=0x94, .x=0xf7, .y=0x6d, .sp=0xaf, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x94}, {.addr=0x1e07, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1e07, .value=0xbf, .type=IO_READ},
        {.addr=0x1e08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0354) {
    const struct CPU_State initial_cpu = {.pc=0xd9d8, .a=0xb2, .x=0x33, .y=0xde, .sp=0x32, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x27}, {.addr=0xd9d8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd9d9, .a=0x27, .x=0x34, .y=0xde, .sp=0x32, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x27}, {.addr=0xd9d8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd9d8, .value=0xbf, .type=IO_READ},
        {.addr=0xd9d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0355) {
    const struct CPU_State initial_cpu = {.pc=0xb5e8, .a=0x3c, .x=0x68, .y=0x41, .sp=0x50, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xf7}, {.addr=0xb5e8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb5e9, .a=0xf7, .x=0x69, .y=0x41, .sp=0x50, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xf7}, {.addr=0xb5e8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb5e8, .value=0xbf, .type=IO_READ},
        {.addr=0xb5e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0356) {
    const struct CPU_State initial_cpu = {.pc=0x9582, .a=0xc1, .x=0x47, .y=0x90, .sp=0x17, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xac}, {.addr=0x9582, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9583, .a=0xac, .x=0x48, .y=0x90, .sp=0x17, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xac}, {.addr=0x9582, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9582, .value=0xbf, .type=IO_READ},
        {.addr=0x9583, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0357) {
    const struct CPU_State initial_cpu = {.pc=0x199c, .a=0xa7, .x=0x78, .y=0xf9, .sp=0x61, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xc2}, {.addr=0x199c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x199d, .a=0xc2, .x=0x79, .y=0xf9, .sp=0x61, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xc2}, {.addr=0x199c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x199c, .value=0xbf, .type=IO_READ},
        {.addr=0x199d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0358) {
    const struct CPU_State initial_cpu = {.pc=0xc56c, .a=0xf4, .x=0xad, .y=0xdd, .sp=0x7c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0xdb}, {.addr=0xc56c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc56d, .a=0xdb, .x=0xae, .y=0xdd, .sp=0x7c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0xdb}, {.addr=0xc56c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc56c, .value=0xbf, .type=IO_READ},
        {.addr=0xc56d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0359) {
    const struct CPU_State initial_cpu = {.pc=0x7b74, .a=0x3e, .x=0xe7, .y=0x3b, .sp=0xea, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xcb}, {.addr=0x7b74, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7b75, .a=0xcb, .x=0xe8, .y=0x3b, .sp=0xea, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xcb}, {.addr=0x7b74, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7b74, .value=0xbf, .type=IO_READ},
        {.addr=0x7b75, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_035A) {
    const struct CPU_State initial_cpu = {.pc=0x38dc, .a=0xaa, .x=0x3a, .y=0x90, .sp=0x4d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x5b}, {.addr=0x38dc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x38dd, .a=0x5b, .x=0x3b, .y=0x90, .sp=0x4d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x5b}, {.addr=0x38dc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x38dc, .value=0xbf, .type=IO_READ},
        {.addr=0x38dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_035B) {
    const struct CPU_State initial_cpu = {.pc=0x16f3, .a=0x1c, .x=0xa6, .y=0xca, .sp=0x20, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0xe7}, {.addr=0x16f3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x16f4, .a=0xe7, .x=0xa7, .y=0xca, .sp=0x20, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0xe7}, {.addr=0x16f3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x16f3, .value=0xbf, .type=IO_READ},
        {.addr=0x16f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_035C) {
    const struct CPU_State initial_cpu = {.pc=0xd556, .a=0xfc, .x=0xea, .y=0x28, .sp=0x9d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x1a}, {.addr=0xd556, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd557, .a=0x1a, .x=0xeb, .y=0x28, .sp=0x9d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x1a}, {.addr=0xd556, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd556, .value=0xbf, .type=IO_READ},
        {.addr=0xd557, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_035D) {
    const struct CPU_State initial_cpu = {.pc=0x3189, .a=0x2f, .x=0x60, .y=0xd3, .sp=0x48, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0xe7}, {.addr=0x3189, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x318a, .a=0xe7, .x=0x61, .y=0xd3, .sp=0x48, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0xe7}, {.addr=0x3189, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3189, .value=0xbf, .type=IO_READ},
        {.addr=0x318a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_035E) {
    const struct CPU_State initial_cpu = {.pc=0x7821, .a=0x36, .x=0xa3, .y=0xa5, .sp=0x43, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x88}, {.addr=0x7821, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7822, .a=0x88, .x=0xa4, .y=0xa5, .sp=0x43, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x88}, {.addr=0x7821, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7821, .value=0xbf, .type=IO_READ},
        {.addr=0x7822, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_035F) {
    const struct CPU_State initial_cpu = {.pc=0xd464, .a=0x01, .x=0x87, .y=0x89, .sp=0x45, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xad}, {.addr=0xd464, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd465, .a=0xad, .x=0x88, .y=0x89, .sp=0x45, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xad}, {.addr=0xd464, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd464, .value=0xbf, .type=IO_READ},
        {.addr=0xd465, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0360) {
    const struct CPU_State initial_cpu = {.pc=0x5965, .a=0xeb, .x=0xb1, .y=0x8b, .sp=0x12, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x38}, {.addr=0x5965, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5966, .a=0x38, .x=0xb2, .y=0x8b, .sp=0x12, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x38}, {.addr=0x5965, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5965, .value=0xbf, .type=IO_READ},
        {.addr=0x5966, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0361) {
    const struct CPU_State initial_cpu = {.pc=0xe764, .a=0x6a, .x=0x0d, .y=0x7f, .sp=0x10, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x34}, {.addr=0xe764, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe765, .a=0x34, .x=0x0e, .y=0x7f, .sp=0x10, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x34}, {.addr=0xe764, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe764, .value=0xbf, .type=IO_READ},
        {.addr=0xe765, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0362) {
    const struct CPU_State initial_cpu = {.pc=0xf4a9, .a=0xb7, .x=0xbe, .y=0x7f, .sp=0x5e, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0xdf}, {.addr=0xf4a9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf4aa, .a=0xdf, .x=0xbf, .y=0x7f, .sp=0x5e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0xdf}, {.addr=0xf4a9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf4a9, .value=0xbf, .type=IO_READ},
        {.addr=0xf4aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0363) {
    const struct CPU_State initial_cpu = {.pc=0x1e98, .a=0x6c, .x=0xc2, .y=0x69, .sp=0x65, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xcc}, {.addr=0x1e98, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1e99, .a=0xcc, .x=0xc3, .y=0x69, .sp=0x65, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xcc}, {.addr=0x1e98, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1e98, .value=0xbf, .type=IO_READ},
        {.addr=0x1e99, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0364) {
    const struct CPU_State initial_cpu = {.pc=0xc479, .a=0xcb, .x=0x0c, .y=0x29, .sp=0x99, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0xef}, {.addr=0xc479, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc47a, .a=0xef, .x=0x0d, .y=0x29, .sp=0x99, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xef}, {.addr=0xc479, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc479, .value=0xbf, .type=IO_READ},
        {.addr=0xc47a, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0365) {
    const struct CPU_State initial_cpu = {.pc=0xf317, .a=0xb5, .x=0xa8, .y=0xe0, .sp=0xa2, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xa4}, {.addr=0xf317, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf318, .a=0xa4, .x=0xa9, .y=0xe0, .sp=0xa2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xa4}, {.addr=0xf317, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf317, .value=0xbf, .type=IO_READ},
        {.addr=0xf318, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0366) {
    const struct CPU_State initial_cpu = {.pc=0x68ec, .a=0xe9, .x=0x5c, .y=0x0e, .sp=0x1f, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x3b}, {.addr=0x68ec, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x68ed, .a=0x3b, .x=0x5d, .y=0x0e, .sp=0x1f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x3b}, {.addr=0x68ec, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x68ec, .value=0xbf, .type=IO_READ},
        {.addr=0x68ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0367) {
    const struct CPU_State initial_cpu = {.pc=0x66d1, .a=0x6f, .x=0x50, .y=0xe7, .sp=0x53, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x9e}, {.addr=0x66d1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x66d2, .a=0x9e, .x=0x51, .y=0xe7, .sp=0x53, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x9e}, {.addr=0x66d1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x66d1, .value=0xbf, .type=IO_READ},
        {.addr=0x66d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0368) {
    const struct CPU_State initial_cpu = {.pc=0x21c3, .a=0x22, .x=0x91, .y=0x90, .sp=0xd0, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0xba}, {.addr=0x21c3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x21c4, .a=0xba, .x=0x92, .y=0x90, .sp=0xd0, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0xba}, {.addr=0x21c3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x21c3, .value=0xbf, .type=IO_READ},
        {.addr=0x21c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0091, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0369) {
    const struct CPU_State initial_cpu = {.pc=0x532a, .a=0xc6, .x=0xdd, .y=0xc2, .sp=0xf2, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x5d}, {.addr=0x532a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x532b, .a=0x5d, .x=0xde, .y=0xc2, .sp=0xf2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x5d}, {.addr=0x532a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x532a, .value=0xbf, .type=IO_READ},
        {.addr=0x532b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_036A) {
    const struct CPU_State initial_cpu = {.pc=0xef97, .a=0x26, .x=0x04, .y=0xc8, .sp=0x0e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0xe8}, {.addr=0xef97, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xef98, .a=0xe8, .x=0x05, .y=0xc8, .sp=0x0e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xe8}, {.addr=0xef97, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xef97, .value=0xbf, .type=IO_READ},
        {.addr=0xef98, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_036B) {
    const struct CPU_State initial_cpu = {.pc=0xad22, .a=0x22, .x=0xc0, .y=0x47, .sp=0xc3, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x40}, {.addr=0xad22, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xad23, .a=0x40, .x=0xc1, .y=0x47, .sp=0xc3, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x40}, {.addr=0xad22, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xad22, .value=0xbf, .type=IO_READ},
        {.addr=0xad23, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_036C) {
    const struct CPU_State initial_cpu = {.pc=0x4441, .a=0xf5, .x=0x1e, .y=0xbe, .sp=0x8c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0x1e}, {.addr=0x4441, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4442, .a=0x1e, .x=0x1f, .y=0xbe, .sp=0x8c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0x1e}, {.addr=0x4441, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4441, .value=0xbf, .type=IO_READ},
        {.addr=0x4442, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_036D) {
    const struct CPU_State initial_cpu = {.pc=0xdab5, .a=0xe1, .x=0x06, .y=0x17, .sp=0xb6, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x52}, {.addr=0xdab5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdab6, .a=0x52, .x=0x07, .y=0x17, .sp=0xb6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x52}, {.addr=0xdab5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdab5, .value=0xbf, .type=IO_READ},
        {.addr=0xdab6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_036E) {
    const struct CPU_State initial_cpu = {.pc=0xfbb6, .a=0x58, .x=0xe9, .y=0xe0, .sp=0xd0, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0xbb}, {.addr=0xfbb6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfbb7, .a=0xbb, .x=0xea, .y=0xe0, .sp=0xd0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0xbb}, {.addr=0xfbb6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfbb6, .value=0xbf, .type=IO_READ},
        {.addr=0xfbb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_036F) {
    const struct CPU_State initial_cpu = {.pc=0x3234, .a=0xf2, .x=0x66, .y=0x56, .sp=0x6e, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xf0}, {.addr=0x3234, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3235, .a=0xf0, .x=0x67, .y=0x56, .sp=0x6e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xf0}, {.addr=0x3234, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3234, .value=0xbf, .type=IO_READ},
        {.addr=0x3235, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0370) {
    const struct CPU_State initial_cpu = {.pc=0x2b2f, .a=0x4d, .x=0x7e, .y=0x25, .sp=0xc1, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x7b}, {.addr=0x2b2f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2b30, .a=0x7b, .x=0x7f, .y=0x25, .sp=0xc1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0x7b}, {.addr=0x2b2f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2b2f, .value=0xbf, .type=IO_READ},
        {.addr=0x2b30, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0371) {
    const struct CPU_State initial_cpu = {.pc=0x5ece, .a=0xc1, .x=0x4f, .y=0x80, .sp=0xf6, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0xfc}, {.addr=0x5ece, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5ecf, .a=0xfc, .x=0x50, .y=0x80, .sp=0xf6, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xfc}, {.addr=0x5ece, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5ece, .value=0xbf, .type=IO_READ},
        {.addr=0x5ecf, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0372) {
    const struct CPU_State initial_cpu = {.pc=0xfe26, .a=0x24, .x=0x40, .y=0xb5, .sp=0x8b, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0x45}, {.addr=0xfe26, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfe27, .a=0x45, .x=0x41, .y=0xb5, .sp=0x8b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0x45}, {.addr=0xfe26, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfe26, .value=0xbf, .type=IO_READ},
        {.addr=0xfe27, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0373) {
    const struct CPU_State initial_cpu = {.pc=0x20c5, .a=0xb0, .x=0x56, .y=0xca, .sp=0xb6, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xb4}, {.addr=0x20c5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x20c6, .a=0xb4, .x=0x57, .y=0xca, .sp=0xb6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xb4}, {.addr=0x20c5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x20c5, .value=0xbf, .type=IO_READ},
        {.addr=0x20c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0374) {
    const struct CPU_State initial_cpu = {.pc=0x9497, .a=0x99, .x=0xc0, .y=0xb0, .sp=0x05, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0xb1}, {.addr=0x9497, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9498, .a=0xb1, .x=0xc1, .y=0xb0, .sp=0x05, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0xb1}, {.addr=0x9497, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9497, .value=0xbf, .type=IO_READ},
        {.addr=0x9498, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0375) {
    const struct CPU_State initial_cpu = {.pc=0xdb9c, .a=0x00, .x=0x29, .y=0xfc, .sp=0x97, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xfc}, {.addr=0xdb9c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdb9d, .a=0xfc, .x=0x2a, .y=0xfc, .sp=0x97, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xfc}, {.addr=0xdb9c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdb9c, .value=0xbf, .type=IO_READ},
        {.addr=0xdb9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0376) {
    const struct CPU_State initial_cpu = {.pc=0xfba8, .a=0x3d, .x=0xb9, .y=0xc5, .sp=0x09, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x48}, {.addr=0xfba8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfba9, .a=0x48, .x=0xba, .y=0xc5, .sp=0x09, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0x48}, {.addr=0xfba8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfba8, .value=0xbf, .type=IO_READ},
        {.addr=0xfba9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0377) {
    const struct CPU_State initial_cpu = {.pc=0x86fd, .a=0xa8, .x=0xdf, .y=0xe1, .sp=0x01, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x96}, {.addr=0x86fd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x86fe, .a=0x96, .x=0xe0, .y=0xe1, .sp=0x01, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x96}, {.addr=0x86fd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x86fd, .value=0xbf, .type=IO_READ},
        {.addr=0x86fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0378) {
    const struct CPU_State initial_cpu = {.pc=0xcb59, .a=0x7b, .x=0x65, .y=0x4a, .sp=0x73, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x84}, {.addr=0xcb59, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcb5a, .a=0x84, .x=0x66, .y=0x4a, .sp=0x73, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x84}, {.addr=0xcb59, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xcb59, .value=0xbf, .type=IO_READ},
        {.addr=0xcb5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0379) {
    const struct CPU_State initial_cpu = {.pc=0xe254, .a=0x71, .x=0x64, .y=0xf3, .sp=0xe5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xe1}, {.addr=0xe254, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe255, .a=0xe1, .x=0x65, .y=0xf3, .sp=0xe5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xe1}, {.addr=0xe254, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe254, .value=0xbf, .type=IO_READ},
        {.addr=0xe255, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_037A) {
    const struct CPU_State initial_cpu = {.pc=0x6274, .a=0x0d, .x=0x70, .y=0x11, .sp=0x8a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x98}, {.addr=0x6274, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6275, .a=0x98, .x=0x71, .y=0x11, .sp=0x8a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x98}, {.addr=0x6274, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6274, .value=0xbf, .type=IO_READ},
        {.addr=0x6275, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_037B) {
    const struct CPU_State initial_cpu = {.pc=0x9aaf, .a=0x05, .x=0xfe, .y=0xbb, .sp=0xf6, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x3f}, {.addr=0x9aaf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9ab0, .a=0x3f, .x=0xff, .y=0xbb, .sp=0xf6, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x3f}, {.addr=0x9aaf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9aaf, .value=0xbf, .type=IO_READ},
        {.addr=0x9ab0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_037C) {
    const struct CPU_State initial_cpu = {.pc=0x1493, .a=0x75, .x=0x5e, .y=0xf1, .sp=0xd8, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x4a}, {.addr=0x1493, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1494, .a=0x4a, .x=0x5f, .y=0xf1, .sp=0xd8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x4a}, {.addr=0x1493, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1493, .value=0xbf, .type=IO_READ},
        {.addr=0x1494, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_037D) {
    const struct CPU_State initial_cpu = {.pc=0x3517, .a=0x6d, .x=0x96, .y=0x20, .sp=0xf5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x75}, {.addr=0x3517, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3518, .a=0x75, .x=0x97, .y=0x20, .sp=0xf5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x75}, {.addr=0x3517, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3517, .value=0xbf, .type=IO_READ},
        {.addr=0x3518, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_037E) {
    const struct CPU_State initial_cpu = {.pc=0x8df3, .a=0x0d, .x=0x29, .y=0xa8, .sp=0xc6, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x5b}, {.addr=0x8df3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8df4, .a=0x5b, .x=0x2a, .y=0xa8, .sp=0xc6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x5b}, {.addr=0x8df3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8df3, .value=0xbf, .type=IO_READ},
        {.addr=0x8df4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_037F) {
    const struct CPU_State initial_cpu = {.pc=0x181c, .a=0x36, .x=0x34, .y=0x74, .sp=0x94, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x6a}, {.addr=0x181c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x181d, .a=0x6a, .x=0x35, .y=0x74, .sp=0x94, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x6a}, {.addr=0x181c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x181c, .value=0xbf, .type=IO_READ},
        {.addr=0x181d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0380) {
    const struct CPU_State initial_cpu = {.pc=0xe5c3, .a=0xde, .x=0xa5, .y=0x8a, .sp=0x4e, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x05}, {.addr=0xe5c3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe5c4, .a=0x05, .x=0xa6, .y=0x8a, .sp=0x4e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x05}, {.addr=0xe5c3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe5c3, .value=0xbf, .type=IO_READ},
        {.addr=0xe5c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0381) {
    const struct CPU_State initial_cpu = {.pc=0xf8bb, .a=0xca, .x=0xa4, .y=0x94, .sp=0xdd, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0xa8}, {.addr=0xf8bb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf8bc, .a=0xa8, .x=0xa5, .y=0x94, .sp=0xdd, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xa8}, {.addr=0xf8bb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf8bb, .value=0xbf, .type=IO_READ},
        {.addr=0xf8bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0382) {
    const struct CPU_State initial_cpu = {.pc=0xc420, .a=0x21, .x=0xf7, .y=0x9b, .sp=0x9a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xa7}, {.addr=0xc420, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc421, .a=0xa7, .x=0xf8, .y=0x9b, .sp=0x9a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xa7}, {.addr=0xc420, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc420, .value=0xbf, .type=IO_READ},
        {.addr=0xc421, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0384) {
    const struct CPU_State initial_cpu = {.pc=0xe16c, .a=0x7a, .x=0x4a, .y=0x56, .sp=0xd0, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xde}, {.addr=0xe16c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe16d, .a=0xde, .x=0x4b, .y=0x56, .sp=0xd0, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xde}, {.addr=0xe16c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe16c, .value=0xbf, .type=IO_READ},
        {.addr=0xe16d, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0385) {
    const struct CPU_State initial_cpu = {.pc=0x83ec, .a=0xa8, .x=0x0f, .y=0x33, .sp=0x01, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0xf2}, {.addr=0x83ec, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x83ed, .a=0xf2, .x=0x10, .y=0x33, .sp=0x01, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0xf2}, {.addr=0x83ec, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x83ec, .value=0xbf, .type=IO_READ},
        {.addr=0x83ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0386) {
    const struct CPU_State initial_cpu = {.pc=0x12e5, .a=0x94, .x=0x3d, .y=0x18, .sp=0x35, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x09}, {.addr=0x12e5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x12e6, .a=0x09, .x=0x3e, .y=0x18, .sp=0x35, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x09}, {.addr=0x12e5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x12e5, .value=0xbf, .type=IO_READ},
        {.addr=0x12e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0387) {
    const struct CPU_State initial_cpu = {.pc=0x9bc0, .a=0x04, .x=0xe0, .y=0x6f, .sp=0xfc, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xf6}, {.addr=0x9bc0, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9bc1, .a=0xf6, .x=0xe1, .y=0x6f, .sp=0xfc, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xf6}, {.addr=0x9bc0, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9bc0, .value=0xbf, .type=IO_READ},
        {.addr=0x9bc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0388) {
    const struct CPU_State initial_cpu = {.pc=0x1653, .a=0x8d, .x=0x4b, .y=0xfa, .sp=0x72, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x6f}, {.addr=0x1653, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1654, .a=0x6f, .x=0x4c, .y=0xfa, .sp=0x72, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x6f}, {.addr=0x1653, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1653, .value=0xbf, .type=IO_READ},
        {.addr=0x1654, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0389) {
    const struct CPU_State initial_cpu = {.pc=0x8f51, .a=0x3a, .x=0x75, .y=0x59, .sp=0x3b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xaa}, {.addr=0x8f51, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8f52, .a=0xaa, .x=0x76, .y=0x59, .sp=0x3b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xaa}, {.addr=0x8f51, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8f51, .value=0xbf, .type=IO_READ},
        {.addr=0x8f52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_038A) {
    const struct CPU_State initial_cpu = {.pc=0x317d, .a=0x72, .x=0x5d, .y=0xaf, .sp=0x66, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xa6}, {.addr=0x317d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x317e, .a=0xa6, .x=0x5e, .y=0xaf, .sp=0x66, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xa6}, {.addr=0x317d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x317d, .value=0xbf, .type=IO_READ},
        {.addr=0x317e, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_038B) {
    const struct CPU_State initial_cpu = {.pc=0x0236, .a=0xfa, .x=0x74, .y=0xa0, .sp=0x13, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x36}, {.addr=0x0236, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0237, .a=0x36, .x=0x75, .y=0xa0, .sp=0x13, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x36}, {.addr=0x0236, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0236, .value=0xbf, .type=IO_READ},
        {.addr=0x0237, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_038C) {
    const struct CPU_State initial_cpu = {.pc=0x0d24, .a=0xdc, .x=0x33, .y=0x4b, .sp=0xfb, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xf6}, {.addr=0x0d24, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0d25, .a=0xf6, .x=0x34, .y=0x4b, .sp=0xfb, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xf6}, {.addr=0x0d24, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0d24, .value=0xbf, .type=IO_READ},
        {.addr=0x0d25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_038D) {
    const struct CPU_State initial_cpu = {.pc=0x65bb, .a=0x01, .x=0x59, .y=0x03, .sp=0xf4, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0xb9}, {.addr=0x65bb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x65bc, .a=0xb9, .x=0x5a, .y=0x03, .sp=0xf4, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0xb9}, {.addr=0x65bb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x65bb, .value=0xbf, .type=IO_READ},
        {.addr=0x65bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_038E) {
    const struct CPU_State initial_cpu = {.pc=0xbc05, .a=0x78, .x=0x17, .y=0x9b, .sp=0xe6, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xa4}, {.addr=0xbc05, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbc06, .a=0xa4, .x=0x18, .y=0x9b, .sp=0xe6, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xa4}, {.addr=0xbc05, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbc05, .value=0xbf, .type=IO_READ},
        {.addr=0xbc06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_038F) {
    const struct CPU_State initial_cpu = {.pc=0x6e1b, .a=0xe9, .x=0xe4, .y=0xa3, .sp=0x3b, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x4f}, {.addr=0x6e1b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6e1c, .a=0x4f, .x=0xe5, .y=0xa3, .sp=0x3b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x4f}, {.addr=0x6e1b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6e1b, .value=0xbf, .type=IO_READ},
        {.addr=0x6e1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0390) {
    const struct CPU_State initial_cpu = {.pc=0x1cae, .a=0x06, .x=0xe5, .y=0x5e, .sp=0xf6, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x0d}, {.addr=0x1cae, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1caf, .a=0x0d, .x=0xe6, .y=0x5e, .sp=0xf6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x0d}, {.addr=0x1cae, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1cae, .value=0xbf, .type=IO_READ},
        {.addr=0x1caf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0391) {
    const struct CPU_State initial_cpu = {.pc=0x5f7a, .a=0x3f, .x=0xd4, .y=0x05, .sp=0x12, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xd0}, {.addr=0x5f7a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5f7b, .a=0xd0, .x=0xd5, .y=0x05, .sp=0x12, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xd0}, {.addr=0x5f7a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5f7a, .value=0xbf, .type=IO_READ},
        {.addr=0x5f7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0392) {
    const struct CPU_State initial_cpu = {.pc=0x9d64, .a=0xe8, .x=0x27, .y=0xb7, .sp=0x9a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0xe9}, {.addr=0x9d64, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9d65, .a=0xe9, .x=0x28, .y=0xb7, .sp=0x9a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0xe9}, {.addr=0x9d64, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9d64, .value=0xbf, .type=IO_READ},
        {.addr=0x9d65, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0393) {
    const struct CPU_State initial_cpu = {.pc=0xeccb, .a=0x6a, .x=0x0c, .y=0x12, .sp=0x14, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x29}, {.addr=0xeccb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xeccc, .a=0x29, .x=0x0d, .y=0x12, .sp=0x14, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x29}, {.addr=0xeccb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xeccb, .value=0xbf, .type=IO_READ},
        {.addr=0xeccc, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0394) {
    const struct CPU_State initial_cpu = {.pc=0x9abf, .a=0xab, .x=0x57, .y=0x71, .sp=0x01, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0xbc}, {.addr=0x9abf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9ac0, .a=0xbc, .x=0x58, .y=0x71, .sp=0x01, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xbc}, {.addr=0x9abf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9abf, .value=0xbf, .type=IO_READ},
        {.addr=0x9ac0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0395) {
    const struct CPU_State initial_cpu = {.pc=0x8f06, .a=0x8a, .x=0x37, .y=0xec, .sp=0x29, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0xc5}, {.addr=0x8f06, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8f07, .a=0xc5, .x=0x38, .y=0xec, .sp=0x29, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xc5}, {.addr=0x8f06, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8f06, .value=0xbf, .type=IO_READ},
        {.addr=0x8f07, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0396) {
    const struct CPU_State initial_cpu = {.pc=0x834d, .a=0x6d, .x=0x3b, .y=0x64, .sp=0xd9, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x90}, {.addr=0x834d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x834e, .a=0x90, .x=0x3c, .y=0x64, .sp=0xd9, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x90}, {.addr=0x834d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x834d, .value=0xbf, .type=IO_READ},
        {.addr=0x834e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0397) {
    const struct CPU_State initial_cpu = {.pc=0xe1e8, .a=0x89, .x=0xe2, .y=0x08, .sp=0x9c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x44}, {.addr=0xe1e8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe1e9, .a=0x44, .x=0xe3, .y=0x08, .sp=0x9c, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x44}, {.addr=0xe1e8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe1e8, .value=0xbf, .type=IO_READ},
        {.addr=0xe1e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0398) {
    const struct CPU_State initial_cpu = {.pc=0x3433, .a=0x06, .x=0xd0, .y=0x1b, .sp=0x21, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0x1b}, {.addr=0x3433, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3434, .a=0x1b, .x=0xd1, .y=0x1b, .sp=0x21, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0x1b}, {.addr=0x3433, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3433, .value=0xbf, .type=IO_READ},
        {.addr=0x3434, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_0399) {
    const struct CPU_State initial_cpu = {.pc=0x40ec, .a=0x91, .x=0x2b, .y=0x01, .sp=0x8c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x97}, {.addr=0x40ec, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x40ed, .a=0x97, .x=0x2c, .y=0x01, .sp=0x8c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x97}, {.addr=0x40ec, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x40ec, .value=0xbf, .type=IO_READ},
        {.addr=0x40ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_039A) {
    const struct CPU_State initial_cpu = {.pc=0xf5e7, .a=0x2a, .x=0x35, .y=0x66, .sp=0x34, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0x04}, {.addr=0xf5e7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf5e8, .a=0x04, .x=0x36, .y=0x66, .sp=0x34, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x04}, {.addr=0xf5e7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf5e7, .value=0xbf, .type=IO_READ},
        {.addr=0xf5e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_039B) {
    const struct CPU_State initial_cpu = {.pc=0x590c, .a=0xa0, .x=0x48, .y=0xe1, .sp=0x6f, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x09}, {.addr=0x590c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x590d, .a=0x09, .x=0x49, .y=0xe1, .sp=0x6f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x09}, {.addr=0x590c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x590c, .value=0xbf, .type=IO_READ},
        {.addr=0x590d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_039C) {
    const struct CPU_State initial_cpu = {.pc=0x9056, .a=0x85, .x=0xc6, .y=0x18, .sp=0xd5, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0xc9}, {.addr=0x9056, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9057, .a=0xc9, .x=0xc7, .y=0x18, .sp=0xd5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0xc9}, {.addr=0x9056, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9056, .value=0xbf, .type=IO_READ},
        {.addr=0x9057, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_039D) {
    const struct CPU_State initial_cpu = {.pc=0xc49d, .a=0xd8, .x=0x1c, .y=0x67, .sp=0xc3, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x1b}, {.addr=0xc49d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc49e, .a=0x1b, .x=0x1d, .y=0x67, .sp=0xc3, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x1b}, {.addr=0xc49d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc49d, .value=0xbf, .type=IO_READ},
        {.addr=0xc49e, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_039E) {
    const struct CPU_State initial_cpu = {.pc=0xc306, .a=0xda, .x=0x7a, .y=0x2b, .sp=0x93, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x49}, {.addr=0xc306, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc307, .a=0x49, .x=0x7b, .y=0x2b, .sp=0x93, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x49}, {.addr=0xc306, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc306, .value=0xbf, .type=IO_READ},
        {.addr=0xc307, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_039F) {
    const struct CPU_State initial_cpu = {.pc=0x142f, .a=0x6a, .x=0x6c, .y=0xe9, .sp=0x1a, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0xd1}, {.addr=0x142f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1430, .a=0xd1, .x=0x6d, .y=0xe9, .sp=0x1a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xd1}, {.addr=0x142f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x142f, .value=0xbf, .type=IO_READ},
        {.addr=0x1430, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x0c28, .a=0x9f, .x=0x2b, .y=0x1b, .sp=0x71, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xe8}, {.addr=0x0c28, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0c29, .a=0xe8, .x=0x2c, .y=0x1b, .sp=0x71, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xe8}, {.addr=0x0c28, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0c28, .value=0xbf, .type=IO_READ},
        {.addr=0x0c29, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xf8fd, .a=0xcc, .x=0xa4, .y=0xb1, .sp=0x50, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xd9}, {.addr=0xf8fd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf8fe, .a=0xd9, .x=0xa5, .y=0xb1, .sp=0x50, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xd9}, {.addr=0xf8fd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf8fd, .value=0xbf, .type=IO_READ},
        {.addr=0xf8fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x52c8, .a=0xdd, .x=0x79, .y=0x10, .sp=0xe1, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x1d}, {.addr=0x52c8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x52c9, .a=0x1d, .x=0x7a, .y=0x10, .sp=0xe1, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x1d}, {.addr=0x52c8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x52c8, .value=0xbf, .type=IO_READ},
        {.addr=0x52c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x7b9d, .a=0x5b, .x=0xce, .y=0xa6, .sp=0xd2, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x41}, {.addr=0x7b9d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7b9e, .a=0x41, .x=0xcf, .y=0xa6, .sp=0xd2, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x41}, {.addr=0x7b9d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7b9d, .value=0xbf, .type=IO_READ},
        {.addr=0x7b9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x3282, .a=0xe7, .x=0x42, .y=0x59, .sp=0x37, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xee}, {.addr=0x3282, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3283, .a=0xee, .x=0x43, .y=0x59, .sp=0x37, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xee}, {.addr=0x3282, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3282, .value=0xbf, .type=IO_READ},
        {.addr=0x3283, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x534e, .a=0xc6, .x=0x2c, .y=0x96, .sp=0xbf, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x31}, {.addr=0x534e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x534f, .a=0x31, .x=0x2d, .y=0x96, .sp=0xbf, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x31}, {.addr=0x534e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x534e, .value=0xbf, .type=IO_READ},
        {.addr=0x534f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xb32d, .a=0x90, .x=0x7e, .y=0xa8, .sp=0x07, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x6e}, {.addr=0xb32d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb32e, .a=0x6e, .x=0x7f, .y=0xa8, .sp=0x07, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x6e}, {.addr=0xb32d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb32d, .value=0xbf, .type=IO_READ},
        {.addr=0xb32e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x6e01, .a=0xfc, .x=0x74, .y=0x44, .sp=0x60, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x8a}, {.addr=0x6e01, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6e02, .a=0x8a, .x=0x75, .y=0x44, .sp=0x60, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x8a}, {.addr=0x6e01, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6e01, .value=0xbf, .type=IO_READ},
        {.addr=0x6e02, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x136c, .a=0x62, .x=0x4c, .y=0xe6, .sp=0x02, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xa2}, {.addr=0x136c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x136d, .a=0xa2, .x=0x4d, .y=0xe6, .sp=0x02, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xa2}, {.addr=0x136c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x136c, .value=0xbf, .type=IO_READ},
        {.addr=0x136d, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xccff, .a=0x1f, .x=0x5a, .y=0xed, .sp=0x98, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x06}, {.addr=0xccff, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xcd00, .a=0x06, .x=0x5b, .y=0xed, .sp=0x98, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x06}, {.addr=0xccff, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xccff, .value=0xbf, .type=IO_READ},
        {.addr=0xcd00, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x45da, .a=0x13, .x=0x0d, .y=0x3f, .sp=0x1e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xde}, {.addr=0x45da, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x45db, .a=0xde, .x=0x0e, .y=0x3f, .sp=0x1e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xde}, {.addr=0x45da, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x45da, .value=0xbf, .type=IO_READ},
        {.addr=0x45db, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xbc68, .a=0xdf, .x=0x33, .y=0xfe, .sp=0x6a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x3d}, {.addr=0xbc68, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbc69, .a=0x3d, .x=0x34, .y=0xfe, .sp=0x6a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x3d}, {.addr=0xbc68, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbc68, .value=0xbf, .type=IO_READ},
        {.addr=0xbc69, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x1a31, .a=0xf1, .x=0xf1, .y=0x95, .sp=0x43, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x35}, {.addr=0x1a31, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1a32, .a=0x35, .x=0xf2, .y=0x95, .sp=0x43, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x35}, {.addr=0x1a31, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1a31, .value=0xbf, .type=IO_READ},
        {.addr=0x1a32, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x7cb3, .a=0x4e, .x=0x70, .y=0xef, .sp=0xb4, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x5d}, {.addr=0x7cb3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7cb4, .a=0x5d, .x=0x71, .y=0xef, .sp=0xb4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x5d}, {.addr=0x7cb3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7cb3, .value=0xbf, .type=IO_READ},
        {.addr=0x7cb4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x3662, .a=0x10, .x=0x7b, .y=0xa2, .sp=0xc2, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0xd3}, {.addr=0x3662, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3663, .a=0xd3, .x=0x7c, .y=0xa2, .sp=0xc2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xd3}, {.addr=0x3662, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3662, .value=0xbf, .type=IO_READ},
        {.addr=0x3663, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x4be8, .a=0x04, .x=0xab, .y=0xe0, .sp=0x00, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x8c}, {.addr=0x4be8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4be9, .a=0x8c, .x=0xac, .y=0xe0, .sp=0x00, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x8c}, {.addr=0x4be8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4be8, .value=0xbf, .type=IO_READ},
        {.addr=0x4be9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x416d, .a=0xca, .x=0x74, .y=0x2a, .sp=0x65, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x37}, {.addr=0x416d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x416e, .a=0x37, .x=0x75, .y=0x2a, .sp=0x65, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x37}, {.addr=0x416d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x416d, .value=0xbf, .type=IO_READ},
        {.addr=0x416e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x0717, .a=0x9a, .x=0x66, .y=0x5c, .sp=0x85, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0xd7}, {.addr=0x0717, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0718, .a=0xd7, .x=0x67, .y=0x5c, .sp=0x85, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0xd7}, {.addr=0x0717, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0717, .value=0xbf, .type=IO_READ},
        {.addr=0x0718, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x19f6, .a=0x37, .x=0xfa, .y=0x4b, .sp=0xde, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xe5}, {.addr=0x19f6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x19f7, .a=0xe5, .x=0xfb, .y=0x4b, .sp=0xde, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xe5}, {.addr=0x19f6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x19f6, .value=0xbf, .type=IO_READ},
        {.addr=0x19f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xddef, .a=0x88, .x=0xe7, .y=0x83, .sp=0xc7, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x0c}, {.addr=0xddef, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xddf0, .a=0x0c, .x=0xe8, .y=0x83, .sp=0xc7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x0c}, {.addr=0xddef, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xddef, .value=0xbf, .type=IO_READ},
        {.addr=0xddf0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xe37f, .a=0xf4, .x=0x2e, .y=0x30, .sp=0xd2, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xd3}, {.addr=0xe37f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe380, .a=0xd3, .x=0x2f, .y=0x30, .sp=0xd2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xd3}, {.addr=0xe37f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe37f, .value=0xbf, .type=IO_READ},
        {.addr=0xe380, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xef9a, .a=0x63, .x=0xe1, .y=0xd7, .sp=0x8a, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x69}, {.addr=0xef9a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xef9b, .a=0x69, .x=0xe2, .y=0xd7, .sp=0x8a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x69}, {.addr=0xef9a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xef9a, .value=0xbf, .type=IO_READ},
        {.addr=0xef9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x1799, .a=0x2f, .x=0x3a, .y=0x2c, .sp=0xdc, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xc5}, {.addr=0x1799, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x179a, .a=0xc5, .x=0x3b, .y=0x2c, .sp=0xdc, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xc5}, {.addr=0x1799, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1799, .value=0xbf, .type=IO_READ},
        {.addr=0x179a, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x9e83, .a=0x42, .x=0x89, .y=0xfa, .sp=0x6d, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x05}, {.addr=0x9e83, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9e84, .a=0x05, .x=0x8a, .y=0xfa, .sp=0x6d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x05}, {.addr=0x9e83, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9e83, .value=0xbf, .type=IO_READ},
        {.addr=0x9e84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x52e7, .a=0x8a, .x=0x1a, .y=0x79, .sp=0xab, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xc8}, {.addr=0x52e7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x52e8, .a=0xc8, .x=0x1b, .y=0x79, .sp=0xab, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xc8}, {.addr=0x52e7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x52e7, .value=0xbf, .type=IO_READ},
        {.addr=0x52e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x33b8, .a=0xb2, .x=0xc1, .y=0xb6, .sp=0x4a, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0xc7}, {.addr=0x33b8, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x33b9, .a=0xc7, .x=0xc2, .y=0xb6, .sp=0x4a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0xc7}, {.addr=0x33b8, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x33b8, .value=0xbf, .type=IO_READ},
        {.addr=0x33b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xe23f, .a=0xa3, .x=0x9e, .y=0x25, .sp=0xa9, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xa1}, {.addr=0xe23f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xe240, .a=0xa1, .x=0x9f, .y=0x25, .sp=0xa9, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xa1}, {.addr=0xe23f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xe23f, .value=0xbf, .type=IO_READ},
        {.addr=0xe240, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x5f65, .a=0xff, .x=0x92, .y=0xee, .sp=0xe5, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x95}, {.addr=0x5f65, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5f66, .a=0x95, .x=0x93, .y=0xee, .sp=0xe5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x95}, {.addr=0x5f65, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5f65, .value=0xbf, .type=IO_READ},
        {.addr=0x5f66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x3e42, .a=0x92, .x=0x1c, .y=0x40, .sp=0x30, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x51}, {.addr=0x3e42, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3e43, .a=0x51, .x=0x1d, .y=0x40, .sp=0x30, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x51}, {.addr=0x3e42, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3e42, .value=0xbf, .type=IO_READ},
        {.addr=0x3e43, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x201e, .a=0xc0, .x=0x42, .y=0x09, .sp=0x52, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x7b}, {.addr=0x201e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x201f, .a=0x7b, .x=0x43, .y=0x09, .sp=0x52, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x7b}, {.addr=0x201e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x201e, .value=0xbf, .type=IO_READ},
        {.addr=0x201f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb2dd, .a=0x30, .x=0xc4, .y=0xbe, .sp=0xb2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0xa5}, {.addr=0xb2dd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb2de, .a=0xa5, .x=0xc5, .y=0xbe, .sp=0xb2, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xa5}, {.addr=0xb2dd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb2dd, .value=0xbf, .type=IO_READ},
        {.addr=0xb2de, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x011e, .a=0x5c, .x=0x51, .y=0x9a, .sp=0x25, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x3c}, {.addr=0x011e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x011f, .a=0x3c, .x=0x52, .y=0x9a, .sp=0x25, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x3c}, {.addr=0x011e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x011e, .value=0xbf, .type=IO_READ},
        {.addr=0x011f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xa9ab, .a=0xd0, .x=0xda, .y=0xab, .sp=0x48, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x83}, {.addr=0xa9ab, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xa9ac, .a=0x83, .x=0xdb, .y=0xab, .sp=0x48, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0x83}, {.addr=0xa9ab, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xa9ab, .value=0xbf, .type=IO_READ},
        {.addr=0xa9ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xd893, .a=0xbc, .x=0xe6, .y=0x0e, .sp=0x67, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xee}, {.addr=0xd893, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd894, .a=0xee, .x=0xe7, .y=0x0e, .sp=0x67, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xee}, {.addr=0xd893, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd893, .value=0xbf, .type=IO_READ},
        {.addr=0xd894, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xc577, .a=0xa7, .x=0xe7, .y=0x10, .sp=0x62, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x29}, {.addr=0xc577, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xc578, .a=0x29, .x=0xe8, .y=0x10, .sp=0x62, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x29}, {.addr=0xc577, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xc577, .value=0xbf, .type=IO_READ},
        {.addr=0xc578, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x19d7, .a=0xa9, .x=0x47, .y=0x3c, .sp=0x3f, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xe5}, {.addr=0x19d7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x19d8, .a=0xe5, .x=0x48, .y=0x3c, .sp=0x3f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xe5}, {.addr=0x19d7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x19d7, .value=0xbf, .type=IO_READ},
        {.addr=0x19d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x8692, .a=0xd6, .x=0xeb, .y=0xda, .sp=0xcc, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xd9}, {.addr=0x8692, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8693, .a=0xd9, .x=0xec, .y=0xda, .sp=0xcc, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xd9}, {.addr=0x8692, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x8692, .value=0xbf, .type=IO_READ},
        {.addr=0x8693, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x5266, .a=0xa3, .x=0x42, .y=0x02, .sp=0x73, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x40}, {.addr=0x5266, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5267, .a=0x40, .x=0x43, .y=0x02, .sp=0x73, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x40}, {.addr=0x5266, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5266, .value=0xbf, .type=IO_READ},
        {.addr=0x5267, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x20fd, .a=0xb0, .x=0xbd, .y=0xe5, .sp=0xd5, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xbd}, {.addr=0x20fd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x20fe, .a=0xbd, .x=0xbe, .y=0xe5, .sp=0xd5, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xbd}, {.addr=0x20fd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x20fd, .value=0xbf, .type=IO_READ},
        {.addr=0x20fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xbc40, .a=0x35, .x=0xd0, .y=0x75, .sp=0x9c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0x82}, {.addr=0xbc40, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbc41, .a=0x82, .x=0xd1, .y=0x75, .sp=0x9c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0x82}, {.addr=0xbc40, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbc40, .value=0xbf, .type=IO_READ},
        {.addr=0xbc41, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x921c, .a=0x6a, .x=0x90, .y=0xd7, .sp=0x59, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x40}, {.addr=0x921c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x921d, .a=0x40, .x=0x91, .y=0xd7, .sp=0x59, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x40}, {.addr=0x921c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x921c, .value=0xbf, .type=IO_READ},
        {.addr=0x921d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x7219, .a=0x36, .x=0xdb, .y=0x14, .sp=0x80, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xe5}, {.addr=0x7219, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x721a, .a=0xe5, .x=0xdc, .y=0x14, .sp=0x80, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xe5}, {.addr=0x7219, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7219, .value=0xbf, .type=IO_READ},
        {.addr=0x721a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x801f, .a=0x3f, .x=0xd2, .y=0x8b, .sp=0xe3, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x12}, {.addr=0x801f, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x8020, .a=0x12, .x=0xd3, .y=0x8b, .sp=0xe3, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x12}, {.addr=0x801f, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x801f, .value=0xbf, .type=IO_READ},
        {.addr=0x8020, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xdbfc, .a=0xd4, .x=0x97, .y=0xa3, .sp=0x05, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x6e}, {.addr=0xdbfc, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xdbfd, .a=0x6e, .x=0x98, .y=0xa3, .sp=0x05, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x6e}, {.addr=0xdbfc, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xdbfc, .value=0xbf, .type=IO_READ},
        {.addr=0xdbfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x6003, .a=0xc3, .x=0x17, .y=0x3b, .sp=0x2e, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x09}, {.addr=0x6003, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6004, .a=0x09, .x=0x18, .y=0x3b, .sp=0x2e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x09}, {.addr=0x6003, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6003, .value=0xbf, .type=IO_READ},
        {.addr=0x6004, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x0cbf, .a=0xeb, .x=0xa1, .y=0x8c, .sp=0xe7, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x69}, {.addr=0x0cbf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0cc0, .a=0x69, .x=0xa2, .y=0x8c, .sp=0xe7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x69}, {.addr=0x0cbf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0cbf, .value=0xbf, .type=IO_READ},
        {.addr=0x0cc0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x2a30, .a=0xaa, .x=0x33, .y=0x28, .sp=0x63, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xc8}, {.addr=0x2a30, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2a31, .a=0xc8, .x=0x34, .y=0x28, .sp=0x63, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xc8}, {.addr=0x2a30, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2a30, .value=0xbf, .type=IO_READ},
        {.addr=0x2a31, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x25d6, .a=0x1a, .x=0x07, .y=0xba, .sp=0x70, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0xda}, {.addr=0x25d6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x25d7, .a=0xda, .x=0x08, .y=0xba, .sp=0x70, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xda}, {.addr=0x25d6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x25d6, .value=0xbf, .type=IO_READ},
        {.addr=0x25d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x6dc1, .a=0xb2, .x=0xd3, .y=0x93, .sp=0x40, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xe0}, {.addr=0x6dc1, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x6dc2, .a=0xe0, .x=0xd4, .y=0x93, .sp=0x40, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xe0}, {.addr=0x6dc1, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x6dc1, .value=0xbf, .type=IO_READ},
        {.addr=0x6dc2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x1b58, .a=0xc8, .x=0x13, .y=0xaf, .sp=0x06, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x73}, {.addr=0x1b58, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1b59, .a=0x73, .x=0x14, .y=0xaf, .sp=0x06, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x73}, {.addr=0x1b58, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1b58, .value=0xbf, .type=IO_READ},
        {.addr=0x1b59, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x41b6, .a=0x5c, .x=0x28, .y=0x9a, .sp=0x71, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0xe6}, {.addr=0x41b6, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x41b7, .a=0xe6, .x=0x29, .y=0x9a, .sp=0x71, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xe6}, {.addr=0x41b6, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x41b6, .value=0xbf, .type=IO_READ},
        {.addr=0x41b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x7cbf, .a=0x56, .x=0x82, .y=0xbe, .sp=0x0c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xe9}, {.addr=0x7cbf, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7cc0, .a=0xe9, .x=0x83, .y=0xbe, .sp=0x0c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xe9}, {.addr=0x7cbf, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7cbf, .value=0xbf, .type=IO_READ},
        {.addr=0x7cc0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xf1b3, .a=0xbf, .x=0x01, .y=0x3d, .sp=0x2e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0xe6}, {.addr=0xf1b3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf1b4, .a=0xe6, .x=0x02, .y=0x3d, .sp=0x2e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xe6}, {.addr=0xf1b3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf1b3, .value=0xbf, .type=IO_READ},
        {.addr=0xf1b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xbb03, .a=0x55, .x=0xb2, .y=0x38, .sp=0xdf, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xd4}, {.addr=0xbb03, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbb04, .a=0xd4, .x=0xb3, .y=0x38, .sp=0xdf, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xd4}, {.addr=0xbb03, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbb03, .value=0xbf, .type=IO_READ},
        {.addr=0xbb04, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xecfb, .a=0x12, .x=0x5b, .y=0x06, .sp=0xa7, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xcf}, {.addr=0xecfb, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xecfc, .a=0xcf, .x=0x5c, .y=0x06, .sp=0xa7, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xcf}, {.addr=0xecfb, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xecfb, .value=0xbf, .type=IO_READ},
        {.addr=0xecfc, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x269d, .a=0x9b, .x=0x29, .y=0xc2, .sp=0x53, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x8b}, {.addr=0x269d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x269e, .a=0x8b, .x=0x2a, .y=0xc2, .sp=0x53, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x8b}, {.addr=0x269d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x269d, .value=0xbf, .type=IO_READ},
        {.addr=0x269e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xd475, .a=0x32, .x=0x0c, .y=0x38, .sp=0x87, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x5f}, {.addr=0xd475, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd476, .a=0x5f, .x=0x0d, .y=0x38, .sp=0x87, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x5f}, {.addr=0xd475, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd475, .value=0xbf, .type=IO_READ},
        {.addr=0xd476, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xbfb2, .a=0x71, .x=0xa2, .y=0x59, .sp=0x0e, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x9d}, {.addr=0xbfb2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xbfb3, .a=0x9d, .x=0xa3, .y=0x59, .sp=0x0e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x9d}, {.addr=0xbfb2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xbfb2, .value=0xbf, .type=IO_READ},
        {.addr=0xbfb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xd0e7, .a=0x36, .x=0x27, .y=0x2a, .sp=0xab, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x40}, {.addr=0xd0e7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xd0e8, .a=0x40, .x=0x28, .y=0x2a, .sp=0xab, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x40}, {.addr=0xd0e7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xd0e7, .value=0xbf, .type=IO_READ},
        {.addr=0xd0e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xfbb5, .a=0x35, .x=0xbf, .y=0x3f, .sp=0x23, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0xbb}, {.addr=0xfbb5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xfbb6, .a=0xbb, .x=0xc0, .y=0x3f, .sp=0x23, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0xbb}, {.addr=0xfbb5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xfbb5, .value=0xbf, .type=IO_READ},
        {.addr=0xfbb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x4164, .a=0x45, .x=0x33, .y=0x3e, .sp=0x7f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x1a}, {.addr=0x4164, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x4165, .a=0x1a, .x=0x34, .y=0x3e, .sp=0x7f, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x1a}, {.addr=0x4164, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x4164, .value=0xbf, .type=IO_READ},
        {.addr=0x4165, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x17c9, .a=0x29, .x=0x7a, .y=0x1e, .sp=0x38, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0xcc}, {.addr=0x17c9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x17ca, .a=0xcc, .x=0x7b, .y=0x1e, .sp=0x38, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0xcc}, {.addr=0x17c9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x17c9, .value=0xbf, .type=IO_READ},
        {.addr=0x17ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xf979, .a=0xbf, .x=0xe2, .y=0x07, .sp=0xe9, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x7b}, {.addr=0xf979, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf97a, .a=0x7b, .x=0xe3, .y=0x07, .sp=0xe9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x7b}, {.addr=0xf979, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf979, .value=0xbf, .type=IO_READ},
        {.addr=0xf97a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x2b41, .a=0xec, .x=0xcc, .y=0x6a, .sp=0x2d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0xd2}, {.addr=0x2b41, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2b42, .a=0xd2, .x=0xcd, .y=0x6a, .sp=0x2d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xd2}, {.addr=0x2b41, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2b41, .value=0xbf, .type=IO_READ},
        {.addr=0x2b42, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x2bf5, .a=0x9e, .x=0x5d, .y=0xea, .sp=0xc3, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0xdb}, {.addr=0x2bf5, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2bf6, .a=0xdb, .x=0x5e, .y=0xea, .sp=0xc3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0xdb}, {.addr=0x2bf5, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2bf5, .value=0xbf, .type=IO_READ},
        {.addr=0x2bf6, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x87d3, .a=0x1c, .x=0xc5, .y=0x88, .sp=0xbb, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x4d}, {.addr=0x87d3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x87d4, .a=0x4d, .x=0xc6, .y=0x88, .sp=0xbb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x4d}, {.addr=0x87d3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x87d3, .value=0xbf, .type=IO_READ},
        {.addr=0x87d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xb91b, .a=0x4e, .x=0x8a, .y=0x6c, .sp=0x71, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x34}, {.addr=0xb91b, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb91c, .a=0x34, .x=0x8b, .y=0x6c, .sp=0x71, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x34}, {.addr=0xb91b, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb91b, .value=0xbf, .type=IO_READ},
        {.addr=0xb91c, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BF, _BF_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xde25, .a=0x0f, .x=0x4e, .y=0x09, .sp=0xf6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x66}, {.addr=0xde25, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xde26, .a=0x66, .x=0x4f, .y=0x09, .sp=0xf6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x66}, {.addr=0xde25, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xde25, .value=0xbf, .type=IO_READ},
        {.addr=0xde26, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BF 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
