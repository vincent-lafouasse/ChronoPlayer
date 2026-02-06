#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_FD, _FD_0000) {
    const struct CPU_State initial_cpu = {.pc=0x83d3, .a=0x26, .x=0x6e, .y=0x8b, .sp=0xb6, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x83d3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x83d4, .a=0x26, .x=0x6e, .y=0x26, .sp=0xb6, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x83d3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x83d3, .value=0xfd, .type=IO_READ},
        {.addr=0x83d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0001) {
    const struct CPU_State initial_cpu = {.pc=0x0483, .a=0x7f, .x=0xa1, .y=0xa5, .sp=0x05, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0483, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0484, .a=0x7f, .x=0xa1, .y=0x7f, .sp=0x05, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0483, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0483, .value=0xfd, .type=IO_READ},
        {.addr=0x0484, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0002) {
    const struct CPU_State initial_cpu = {.pc=0x5700, .a=0x2a, .x=0xc5, .y=0x0d, .sp=0xe1, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x5700, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5701, .a=0x2a, .x=0xc5, .y=0x2a, .sp=0xe1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5700, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5700, .value=0xfd, .type=IO_READ},
        {.addr=0x5701, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0003) {
    const struct CPU_State initial_cpu = {.pc=0x3f5c, .a=0x9e, .x=0xb0, .y=0xf0, .sp=0xee, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x3f5c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3f5d, .a=0x9e, .x=0xb0, .y=0x9e, .sp=0xee, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3f5c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3f5c, .value=0xfd, .type=IO_READ},
        {.addr=0x3f5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0004) {
    const struct CPU_State initial_cpu = {.pc=0x83d9, .a=0x63, .x=0xfb, .y=0xbe, .sp=0xfa, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x83d9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x83da, .a=0x63, .x=0xfb, .y=0x63, .sp=0xfa, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x83d9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x83d9, .value=0xfd, .type=IO_READ},
        {.addr=0x83da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0005) {
    const struct CPU_State initial_cpu = {.pc=0xaa38, .a=0xbc, .x=0x91, .y=0x29, .sp=0x2a, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xaa38, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaa39, .a=0xbc, .x=0x91, .y=0xbc, .sp=0x2a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xaa38, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaa38, .value=0xfd, .type=IO_READ},
        {.addr=0xaa39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0006) {
    const struct CPU_State initial_cpu = {.pc=0xbb97, .a=0xdc, .x=0xe6, .y=0x37, .sp=0xbe, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xbb97, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbb98, .a=0xdc, .x=0xe6, .y=0xdc, .sp=0xbe, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xbb97, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbb97, .value=0xfd, .type=IO_READ},
        {.addr=0xbb98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0007) {
    const struct CPU_State initial_cpu = {.pc=0xed30, .a=0x17, .x=0x90, .y=0xf6, .sp=0x72, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xed30, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xed31, .a=0x17, .x=0x90, .y=0x17, .sp=0x72, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xed30, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xed30, .value=0xfd, .type=IO_READ},
        {.addr=0xed31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0008) {
    const struct CPU_State initial_cpu = {.pc=0x96f6, .a=0x2d, .x=0xb9, .y=0x37, .sp=0xdc, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x96f6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x96f7, .a=0x2d, .x=0xb9, .y=0x2d, .sp=0xdc, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x96f6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x96f6, .value=0xfd, .type=IO_READ},
        {.addr=0x96f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0009) {
    const struct CPU_State initial_cpu = {.pc=0xd7fd, .a=0x78, .x=0xb2, .y=0xe2, .sp=0x8e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xd7fd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd7fe, .a=0x78, .x=0xb2, .y=0x78, .sp=0x8e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd7fd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd7fd, .value=0xfd, .type=IO_READ},
        {.addr=0xd7fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_000A) {
    const struct CPU_State initial_cpu = {.pc=0x0db5, .a=0x06, .x=0x9b, .y=0x3e, .sp=0x5d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0db5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0db6, .a=0x06, .x=0x9b, .y=0x06, .sp=0x5d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0db5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0db5, .value=0xfd, .type=IO_READ},
        {.addr=0x0db6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_000B) {
    const struct CPU_State initial_cpu = {.pc=0xd485, .a=0x1d, .x=0x19, .y=0xc2, .sp=0xcf, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xd485, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd486, .a=0x1d, .x=0x19, .y=0x1d, .sp=0xcf, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd485, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd485, .value=0xfd, .type=IO_READ},
        {.addr=0xd486, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_000C) {
    const struct CPU_State initial_cpu = {.pc=0xb702, .a=0x37, .x=0xd2, .y=0xa6, .sp=0x97, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb702, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb703, .a=0x37, .x=0xd2, .y=0x37, .sp=0x97, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb702, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb702, .value=0xfd, .type=IO_READ},
        {.addr=0xb703, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_000D) {
    const struct CPU_State initial_cpu = {.pc=0x4095, .a=0xab, .x=0xf7, .y=0x70, .sp=0x0a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x4095, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4096, .a=0xab, .x=0xf7, .y=0xab, .sp=0x0a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4095, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4095, .value=0xfd, .type=IO_READ},
        {.addr=0x4096, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_000E) {
    const struct CPU_State initial_cpu = {.pc=0x17ce, .a=0x8a, .x=0x6b, .y=0x4e, .sp=0x21, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x17ce, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x17cf, .a=0x8a, .x=0x6b, .y=0x8a, .sp=0x21, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x17ce, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x17ce, .value=0xfd, .type=IO_READ},
        {.addr=0x17cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_000F) {
    const struct CPU_State initial_cpu = {.pc=0x17e7, .a=0x1e, .x=0x77, .y=0x1f, .sp=0xeb, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x17e7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x17e8, .a=0x1e, .x=0x77, .y=0x1e, .sp=0xeb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x17e7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x17e7, .value=0xfd, .type=IO_READ},
        {.addr=0x17e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0010) {
    const struct CPU_State initial_cpu = {.pc=0xf304, .a=0x88, .x=0x8c, .y=0x31, .sp=0x51, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xf304, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf305, .a=0x88, .x=0x8c, .y=0x88, .sp=0x51, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf304, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf304, .value=0xfd, .type=IO_READ},
        {.addr=0xf305, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0011) {
    const struct CPU_State initial_cpu = {.pc=0x1f5d, .a=0xf5, .x=0x27, .y=0xb7, .sp=0x72, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1f5d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1f5e, .a=0xf5, .x=0x27, .y=0xf5, .sp=0x72, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x1f5d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1f5d, .value=0xfd, .type=IO_READ},
        {.addr=0x1f5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0012) {
    const struct CPU_State initial_cpu = {.pc=0x1219, .a=0xfc, .x=0xe9, .y=0x5f, .sp=0xdd, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x1219, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x121a, .a=0xfc, .x=0xe9, .y=0xfc, .sp=0xdd, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1219, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1219, .value=0xfd, .type=IO_READ},
        {.addr=0x121a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0013) {
    const struct CPU_State initial_cpu = {.pc=0x8ddf, .a=0x89, .x=0xa4, .y=0xb1, .sp=0xe1, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8ddf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8de0, .a=0x89, .x=0xa4, .y=0x89, .sp=0xe1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8ddf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8ddf, .value=0xfd, .type=IO_READ},
        {.addr=0x8de0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0014) {
    const struct CPU_State initial_cpu = {.pc=0x8078, .a=0x39, .x=0x2f, .y=0xb5, .sp=0x3f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x8078, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8079, .a=0x39, .x=0x2f, .y=0x39, .sp=0x3f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8078, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8078, .value=0xfd, .type=IO_READ},
        {.addr=0x8079, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0015) {
    const struct CPU_State initial_cpu = {.pc=0xfc76, .a=0xca, .x=0xe5, .y=0x8f, .sp=0xb1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfc76, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfc77, .a=0xca, .x=0xe5, .y=0xca, .sp=0xb1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfc76, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfc76, .value=0xfd, .type=IO_READ},
        {.addr=0xfc77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0016) {
    const struct CPU_State initial_cpu = {.pc=0x7ef9, .a=0x9f, .x=0xf3, .y=0xc8, .sp=0x3d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x7ef9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7efa, .a=0x9f, .x=0xf3, .y=0x9f, .sp=0x3d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7ef9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7ef9, .value=0xfd, .type=IO_READ},
        {.addr=0x7efa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0017) {
    const struct CPU_State initial_cpu = {.pc=0xf825, .a=0xaa, .x=0xd9, .y=0x5c, .sp=0xdc, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xf825, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf826, .a=0xaa, .x=0xd9, .y=0xaa, .sp=0xdc, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf825, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf825, .value=0xfd, .type=IO_READ},
        {.addr=0xf826, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0018) {
    const struct CPU_State initial_cpu = {.pc=0x8c08, .a=0x4f, .x=0x65, .y=0x29, .sp=0xc0, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x8c08, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8c09, .a=0x4f, .x=0x65, .y=0x4f, .sp=0xc0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8c08, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8c08, .value=0xfd, .type=IO_READ},
        {.addr=0x8c09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0019) {
    const struct CPU_State initial_cpu = {.pc=0xbaea, .a=0xcf, .x=0x05, .y=0x4b, .sp=0x10, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xbaea, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbaeb, .a=0xcf, .x=0x05, .y=0xcf, .sp=0x10, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xbaea, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbaea, .value=0xfd, .type=IO_READ},
        {.addr=0xbaeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_001A) {
    const struct CPU_State initial_cpu = {.pc=0xe8b9, .a=0x17, .x=0x57, .y=0xde, .sp=0x8b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe8ba, .a=0x17, .x=0x57, .y=0x17, .sp=0x8b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe8b9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe8b9, .value=0xfd, .type=IO_READ},
        {.addr=0xe8ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_001B) {
    const struct CPU_State initial_cpu = {.pc=0x984e, .a=0x1f, .x=0x3f, .y=0x20, .sp=0x6c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x984e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x984f, .a=0x1f, .x=0x3f, .y=0x1f, .sp=0x6c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x984e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x984e, .value=0xfd, .type=IO_READ},
        {.addr=0x984f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_001C) {
    const struct CPU_State initial_cpu = {.pc=0x1dfb, .a=0x3a, .x=0xa0, .y=0xd9, .sp=0x38, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x1dfb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1dfc, .a=0x3a, .x=0xa0, .y=0x3a, .sp=0x38, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1dfb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1dfb, .value=0xfd, .type=IO_READ},
        {.addr=0x1dfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_001D) {
    const struct CPU_State initial_cpu = {.pc=0xbfd0, .a=0x32, .x=0x91, .y=0xce, .sp=0xf7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbfd1, .a=0x32, .x=0x91, .y=0x32, .sp=0xf7, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xbfd0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbfd0, .value=0xfd, .type=IO_READ},
        {.addr=0xbfd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_001E) {
    const struct CPU_State initial_cpu = {.pc=0x85db, .a=0x36, .x=0xb5, .y=0x21, .sp=0x39, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x85db, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x85dc, .a=0x36, .x=0xb5, .y=0x36, .sp=0x39, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x85db, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x85db, .value=0xfd, .type=IO_READ},
        {.addr=0x85dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_001F) {
    const struct CPU_State initial_cpu = {.pc=0x9ea7, .a=0x52, .x=0x5b, .y=0x5b, .sp=0x8f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x9ea7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9ea8, .a=0x52, .x=0x5b, .y=0x52, .sp=0x8f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9ea7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9ea7, .value=0xfd, .type=IO_READ},
        {.addr=0x9ea8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0020) {
    const struct CPU_State initial_cpu = {.pc=0xfbc9, .a=0x06, .x=0x51, .y=0xde, .sp=0xbd, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xfbc9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfbca, .a=0x06, .x=0x51, .y=0x06, .sp=0xbd, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xfbc9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfbc9, .value=0xfd, .type=IO_READ},
        {.addr=0xfbca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0021) {
    const struct CPU_State initial_cpu = {.pc=0x2a81, .a=0x0a, .x=0xc7, .y=0x84, .sp=0xf8, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2a81, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2a82, .a=0x0a, .x=0xc7, .y=0x0a, .sp=0xf8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2a81, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2a81, .value=0xfd, .type=IO_READ},
        {.addr=0x2a82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0022) {
    const struct CPU_State initial_cpu = {.pc=0xa326, .a=0xd0, .x=0x30, .y=0x66, .sp=0x4a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xa326, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa327, .a=0xd0, .x=0x30, .y=0xd0, .sp=0x4a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa326, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa326, .value=0xfd, .type=IO_READ},
        {.addr=0xa327, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0023) {
    const struct CPU_State initial_cpu = {.pc=0x9fe8, .a=0xfe, .x=0xa0, .y=0x7e, .sp=0xa7, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9fe9, .a=0xfe, .x=0xa0, .y=0xfe, .sp=0xa7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9fe8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9fe8, .value=0xfd, .type=IO_READ},
        {.addr=0x9fe9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0024) {
    const struct CPU_State initial_cpu = {.pc=0xca22, .a=0xa5, .x=0xa4, .y=0xa4, .sp=0x4e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xca22, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xca23, .a=0xa5, .x=0xa4, .y=0xa5, .sp=0x4e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xca22, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xca22, .value=0xfd, .type=IO_READ},
        {.addr=0xca23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0025) {
    const struct CPU_State initial_cpu = {.pc=0x8d98, .a=0xef, .x=0x8f, .y=0xdd, .sp=0xeb, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x8d98, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8d99, .a=0xef, .x=0x8f, .y=0xef, .sp=0xeb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8d98, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8d98, .value=0xfd, .type=IO_READ},
        {.addr=0x8d99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0026) {
    const struct CPU_State initial_cpu = {.pc=0x768e, .a=0x29, .x=0x8f, .y=0xdb, .sp=0x6e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x768e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x768f, .a=0x29, .x=0x8f, .y=0x29, .sp=0x6e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x768e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x768e, .value=0xfd, .type=IO_READ},
        {.addr=0x768f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0027) {
    const struct CPU_State initial_cpu = {.pc=0xef0a, .a=0x4c, .x=0x97, .y=0x0f, .sp=0x14, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xef0a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xef0b, .a=0x4c, .x=0x97, .y=0x4c, .sp=0x14, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xef0a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xef0a, .value=0xfd, .type=IO_READ},
        {.addr=0xef0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0028) {
    const struct CPU_State initial_cpu = {.pc=0x83de, .a=0xae, .x=0x82, .y=0x6f, .sp=0xbb, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x83de, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x83df, .a=0xae, .x=0x82, .y=0xae, .sp=0xbb, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x83de, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x83de, .value=0xfd, .type=IO_READ},
        {.addr=0x83df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0029) {
    const struct CPU_State initial_cpu = {.pc=0x777b, .a=0xfc, .x=0xd8, .y=0x8d, .sp=0x84, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x777b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x777c, .a=0xfc, .x=0xd8, .y=0xfc, .sp=0x84, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x777b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x777b, .value=0xfd, .type=IO_READ},
        {.addr=0x777c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_002A) {
    const struct CPU_State initial_cpu = {.pc=0x3ed0, .a=0x34, .x=0x79, .y=0x17, .sp=0x2d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x3ed0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3ed1, .a=0x34, .x=0x79, .y=0x34, .sp=0x2d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x3ed0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3ed0, .value=0xfd, .type=IO_READ},
        {.addr=0x3ed1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_002B) {
    const struct CPU_State initial_cpu = {.pc=0xfde4, .a=0xb0, .x=0xfb, .y=0xd6, .sp=0x7f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xfde4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfde5, .a=0xb0, .x=0xfb, .y=0xb0, .sp=0x7f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xfde4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfde4, .value=0xfd, .type=IO_READ},
        {.addr=0xfde5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_002C) {
    const struct CPU_State initial_cpu = {.pc=0x5ee5, .a=0xdc, .x=0xc9, .y=0xcc, .sp=0x5e, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5ee6, .a=0xdc, .x=0xc9, .y=0xdc, .sp=0x5e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5ee5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5ee5, .value=0xfd, .type=IO_READ},
        {.addr=0x5ee6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_002D) {
    const struct CPU_State initial_cpu = {.pc=0x3eb1, .a=0x74, .x=0x6a, .y=0x78, .sp=0x56, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3eb2, .a=0x74, .x=0x6a, .y=0x74, .sp=0x56, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3eb1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3eb1, .value=0xfd, .type=IO_READ},
        {.addr=0x3eb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_002E) {
    const struct CPU_State initial_cpu = {.pc=0xa2cb, .a=0x16, .x=0x21, .y=0x26, .sp=0x52, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xa2cb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa2cc, .a=0x16, .x=0x21, .y=0x16, .sp=0x52, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa2cb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa2cb, .value=0xfd, .type=IO_READ},
        {.addr=0xa2cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_002F) {
    const struct CPU_State initial_cpu = {.pc=0xc84c, .a=0xce, .x=0x1f, .y=0x66, .sp=0x21, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xc84c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc84d, .a=0xce, .x=0x1f, .y=0xce, .sp=0x21, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc84c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc84c, .value=0xfd, .type=IO_READ},
        {.addr=0xc84d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0030) {
    const struct CPU_State initial_cpu = {.pc=0x9499, .a=0x66, .x=0x0e, .y=0x5d, .sp=0x4a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9499, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x949a, .a=0x66, .x=0x0e, .y=0x66, .sp=0x4a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9499, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9499, .value=0xfd, .type=IO_READ},
        {.addr=0x949a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0031) {
    const struct CPU_State initial_cpu = {.pc=0x9bf9, .a=0xd9, .x=0xff, .y=0xc8, .sp=0x97, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x9bf9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9bfa, .a=0xd9, .x=0xff, .y=0xd9, .sp=0x97, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x9bf9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9bf9, .value=0xfd, .type=IO_READ},
        {.addr=0x9bfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0032) {
    const struct CPU_State initial_cpu = {.pc=0x6660, .a=0x92, .x=0x7c, .y=0xe9, .sp=0xb9, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x6660, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6661, .a=0x92, .x=0x7c, .y=0x92, .sp=0xb9, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6660, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6660, .value=0xfd, .type=IO_READ},
        {.addr=0x6661, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0033) {
    const struct CPU_State initial_cpu = {.pc=0x9bde, .a=0xb8, .x=0xaa, .y=0x8f, .sp=0xae, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x9bde, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9bdf, .a=0xb8, .x=0xaa, .y=0xb8, .sp=0xae, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9bde, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9bde, .value=0xfd, .type=IO_READ},
        {.addr=0x9bdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0034) {
    const struct CPU_State initial_cpu = {.pc=0x4b8d, .a=0xb4, .x=0x72, .y=0xb3, .sp=0x5a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4b8d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4b8e, .a=0xb4, .x=0x72, .y=0xb4, .sp=0x5a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4b8d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4b8d, .value=0xfd, .type=IO_READ},
        {.addr=0x4b8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0035) {
    const struct CPU_State initial_cpu = {.pc=0x1f31, .a=0xdd, .x=0x22, .y=0x28, .sp=0x27, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x1f31, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1f32, .a=0xdd, .x=0x22, .y=0xdd, .sp=0x27, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1f31, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1f31, .value=0xfd, .type=IO_READ},
        {.addr=0x1f32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0036) {
    const struct CPU_State initial_cpu = {.pc=0xeb02, .a=0x83, .x=0xb5, .y=0xbc, .sp=0x9b, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xeb02, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xeb03, .a=0x83, .x=0xb5, .y=0x83, .sp=0x9b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xeb02, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xeb02, .value=0xfd, .type=IO_READ},
        {.addr=0xeb03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0037) {
    const struct CPU_State initial_cpu = {.pc=0x42a5, .a=0x69, .x=0x45, .y=0x97, .sp=0xba, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x42a5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x42a6, .a=0x69, .x=0x45, .y=0x69, .sp=0xba, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x42a5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x42a5, .value=0xfd, .type=IO_READ},
        {.addr=0x42a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0038) {
    const struct CPU_State initial_cpu = {.pc=0x6e9e, .a=0xe5, .x=0xa3, .y=0xbe, .sp=0x3a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x6e9e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6e9f, .a=0xe5, .x=0xa3, .y=0xe5, .sp=0x3a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6e9e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6e9e, .value=0xfd, .type=IO_READ},
        {.addr=0x6e9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0039) {
    const struct CPU_State initial_cpu = {.pc=0x84b3, .a=0x0e, .x=0x28, .y=0x0d, .sp=0x56, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x84b3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x84b4, .a=0x0e, .x=0x28, .y=0x0e, .sp=0x56, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x84b3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x84b3, .value=0xfd, .type=IO_READ},
        {.addr=0x84b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_003A) {
    const struct CPU_State initial_cpu = {.pc=0xb5e9, .a=0x7c, .x=0xff, .y=0xe2, .sp=0xa6, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb5ea, .a=0x7c, .x=0xff, .y=0x7c, .sp=0xa6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb5e9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb5e9, .value=0xfd, .type=IO_READ},
        {.addr=0xb5ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_003B) {
    const struct CPU_State initial_cpu = {.pc=0xcebb, .a=0x8a, .x=0xc0, .y=0x5a, .sp=0xa8, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xcebb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcebc, .a=0x8a, .x=0xc0, .y=0x8a, .sp=0xa8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xcebb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcebb, .value=0xfd, .type=IO_READ},
        {.addr=0xcebc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_003C) {
    const struct CPU_State initial_cpu = {.pc=0x097d, .a=0x50, .x=0xba, .y=0x9e, .sp=0x2d, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x097d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x097e, .a=0x50, .x=0xba, .y=0x50, .sp=0x2d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x097d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x097d, .value=0xfd, .type=IO_READ},
        {.addr=0x097e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_003D) {
    const struct CPU_State initial_cpu = {.pc=0x7e9b, .a=0x1d, .x=0x86, .y=0xfa, .sp=0xf1, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x7e9b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7e9c, .a=0x1d, .x=0x86, .y=0x1d, .sp=0xf1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7e9b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7e9b, .value=0xfd, .type=IO_READ},
        {.addr=0x7e9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_003E) {
    const struct CPU_State initial_cpu = {.pc=0xde99, .a=0x6c, .x=0x0c, .y=0x02, .sp=0x2e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xde99, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xde9a, .a=0x6c, .x=0x0c, .y=0x6c, .sp=0x2e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xde99, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xde99, .value=0xfd, .type=IO_READ},
        {.addr=0xde9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_003F) {
    const struct CPU_State initial_cpu = {.pc=0x4953, .a=0xb2, .x=0x89, .y=0x7a, .sp=0x6d, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4953, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4954, .a=0xb2, .x=0x89, .y=0xb2, .sp=0x6d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x4953, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4953, .value=0xfd, .type=IO_READ},
        {.addr=0x4954, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0040) {
    const struct CPU_State initial_cpu = {.pc=0x5589, .a=0x4b, .x=0x8f, .y=0xbc, .sp=0xc4, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x5589, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x558a, .a=0x4b, .x=0x8f, .y=0x4b, .sp=0xc4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5589, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5589, .value=0xfd, .type=IO_READ},
        {.addr=0x558a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0041) {
    const struct CPU_State initial_cpu = {.pc=0xa00e, .a=0x7d, .x=0x73, .y=0x54, .sp=0x9a, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xa00e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa00f, .a=0x7d, .x=0x73, .y=0x7d, .sp=0x9a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xa00e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa00e, .value=0xfd, .type=IO_READ},
        {.addr=0xa00f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0042) {
    const struct CPU_State initial_cpu = {.pc=0x09a1, .a=0xe3, .x=0x20, .y=0x57, .sp=0x01, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x09a1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x09a2, .a=0xe3, .x=0x20, .y=0xe3, .sp=0x01, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x09a1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x09a1, .value=0xfd, .type=IO_READ},
        {.addr=0x09a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0043) {
    const struct CPU_State initial_cpu = {.pc=0xe2ad, .a=0xb4, .x=0xbb, .y=0xc8, .sp=0x90, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ad, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe2ae, .a=0xb4, .x=0xbb, .y=0xb4, .sp=0x90, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xe2ad, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe2ad, .value=0xfd, .type=IO_READ},
        {.addr=0xe2ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0044) {
    const struct CPU_State initial_cpu = {.pc=0x6356, .a=0x86, .x=0x2b, .y=0xb6, .sp=0x3a, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6356, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6357, .a=0x86, .x=0x2b, .y=0x86, .sp=0x3a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6356, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6356, .value=0xfd, .type=IO_READ},
        {.addr=0x6357, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0045) {
    const struct CPU_State initial_cpu = {.pc=0x4432, .a=0x8b, .x=0x44, .y=0xd9, .sp=0xa6, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x4432, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4433, .a=0x8b, .x=0x44, .y=0x8b, .sp=0xa6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4432, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4432, .value=0xfd, .type=IO_READ},
        {.addr=0x4433, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0046) {
    const struct CPU_State initial_cpu = {.pc=0xb652, .a=0x3d, .x=0xdc, .y=0xe3, .sp=0xdc, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xb652, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb653, .a=0x3d, .x=0xdc, .y=0x3d, .sp=0xdc, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb652, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb652, .value=0xfd, .type=IO_READ},
        {.addr=0xb653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2ac7, .a=0x62, .x=0xd5, .y=0xbb, .sp=0x2c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x2ac7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2ac8, .a=0x62, .x=0xd5, .y=0x62, .sp=0x2c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2ac7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2ac7, .value=0xfd, .type=IO_READ},
        {.addr=0x2ac8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0048) {
    const struct CPU_State initial_cpu = {.pc=0xd8a0, .a=0x73, .x=0x6f, .y=0x25, .sp=0xc3, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xd8a0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd8a1, .a=0x73, .x=0x6f, .y=0x73, .sp=0xc3, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xd8a0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd8a0, .value=0xfd, .type=IO_READ},
        {.addr=0xd8a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0049) {
    const struct CPU_State initial_cpu = {.pc=0x6fea, .a=0xf8, .x=0x78, .y=0x51, .sp=0x5f, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x6fea, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6feb, .a=0xf8, .x=0x78, .y=0xf8, .sp=0x5f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x6fea, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6fea, .value=0xfd, .type=IO_READ},
        {.addr=0x6feb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_004A) {
    const struct CPU_State initial_cpu = {.pc=0xc611, .a=0xae, .x=0xe7, .y=0x12, .sp=0xd0, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc611, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc612, .a=0xae, .x=0xe7, .y=0xae, .sp=0xd0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc611, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc611, .value=0xfd, .type=IO_READ},
        {.addr=0xc612, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_004B) {
    const struct CPU_State initial_cpu = {.pc=0x61c9, .a=0xaa, .x=0xbf, .y=0x6c, .sp=0xf9, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x61c9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x61ca, .a=0xaa, .x=0xbf, .y=0xaa, .sp=0xf9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x61c9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x61c9, .value=0xfd, .type=IO_READ},
        {.addr=0x61ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_004C) {
    const struct CPU_State initial_cpu = {.pc=0x0262, .a=0xe2, .x=0xdb, .y=0x9b, .sp=0x76, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0262, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0263, .a=0xe2, .x=0xdb, .y=0xe2, .sp=0x76, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0262, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0262, .value=0xfd, .type=IO_READ},
        {.addr=0x0263, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_004D) {
    const struct CPU_State initial_cpu = {.pc=0xf4c1, .a=0xeb, .x=0xc5, .y=0x31, .sp=0x31, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xf4c1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf4c2, .a=0xeb, .x=0xc5, .y=0xeb, .sp=0x31, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf4c1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf4c1, .value=0xfd, .type=IO_READ},
        {.addr=0xf4c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_004E) {
    const struct CPU_State initial_cpu = {.pc=0xb7fb, .a=0x44, .x=0x41, .y=0xd9, .sp=0xed, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xb7fb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb7fc, .a=0x44, .x=0x41, .y=0x44, .sp=0xed, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xb7fb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb7fb, .value=0xfd, .type=IO_READ},
        {.addr=0xb7fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_004F) {
    const struct CPU_State initial_cpu = {.pc=0xd4a1, .a=0x92, .x=0x06, .y=0x3b, .sp=0xd6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xd4a1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd4a2, .a=0x92, .x=0x06, .y=0x92, .sp=0xd6, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xd4a1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd4a1, .value=0xfd, .type=IO_READ},
        {.addr=0xd4a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0050) {
    const struct CPU_State initial_cpu = {.pc=0xa11b, .a=0x25, .x=0x5d, .y=0x35, .sp=0xd0, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xa11b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa11c, .a=0x25, .x=0x5d, .y=0x25, .sp=0xd0, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa11b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa11b, .value=0xfd, .type=IO_READ},
        {.addr=0xa11c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0051) {
    const struct CPU_State initial_cpu = {.pc=0xd7dc, .a=0x10, .x=0xf2, .y=0x4c, .sp=0xc8, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd7dc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd7dd, .a=0x10, .x=0xf2, .y=0x10, .sp=0xc8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xd7dc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd7dc, .value=0xfd, .type=IO_READ},
        {.addr=0xd7dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0052) {
    const struct CPU_State initial_cpu = {.pc=0x928c, .a=0x8d, .x=0x36, .y=0xb6, .sp=0xb5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x928c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x928d, .a=0x8d, .x=0x36, .y=0x8d, .sp=0xb5, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x928c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x928c, .value=0xfd, .type=IO_READ},
        {.addr=0x928d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0053) {
    const struct CPU_State initial_cpu = {.pc=0x2d87, .a=0x2e, .x=0x3e, .y=0x47, .sp=0x6b, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x2d87, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2d88, .a=0x2e, .x=0x3e, .y=0x2e, .sp=0x6b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2d87, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2d87, .value=0xfd, .type=IO_READ},
        {.addr=0x2d88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0054) {
    const struct CPU_State initial_cpu = {.pc=0x0fda, .a=0x57, .x=0xd5, .y=0xa5, .sp=0x1b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0fda, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0fdb, .a=0x57, .x=0xd5, .y=0x57, .sp=0x1b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0fda, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0fda, .value=0xfd, .type=IO_READ},
        {.addr=0x0fdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0055) {
    const struct CPU_State initial_cpu = {.pc=0x8f7f, .a=0x1f, .x=0xd8, .y=0x77, .sp=0x04, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x8f7f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8f80, .a=0x1f, .x=0xd8, .y=0x1f, .sp=0x04, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8f7f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8f7f, .value=0xfd, .type=IO_READ},
        {.addr=0x8f80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0056) {
    const struct CPU_State initial_cpu = {.pc=0xa650, .a=0x2e, .x=0xc2, .y=0x19, .sp=0xc3, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa650, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa651, .a=0x2e, .x=0xc2, .y=0x2e, .sp=0xc3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa650, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa650, .value=0xfd, .type=IO_READ},
        {.addr=0xa651, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0057) {
    const struct CPU_State initial_cpu = {.pc=0x29e7, .a=0x53, .x=0xfa, .y=0x2a, .sp=0xeb, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x29e7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x29e8, .a=0x53, .x=0xfa, .y=0x53, .sp=0xeb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x29e7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x29e7, .value=0xfd, .type=IO_READ},
        {.addr=0x29e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0058) {
    const struct CPU_State initial_cpu = {.pc=0x6a5a, .a=0x9b, .x=0x1a, .y=0x82, .sp=0xe0, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x6a5a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6a5b, .a=0x9b, .x=0x1a, .y=0x9b, .sp=0xe0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6a5a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6a5a, .value=0xfd, .type=IO_READ},
        {.addr=0x6a5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0059) {
    const struct CPU_State initial_cpu = {.pc=0x6db8, .a=0x1e, .x=0x79, .y=0xb4, .sp=0xce, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6db8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6db9, .a=0x1e, .x=0x79, .y=0x1e, .sp=0xce, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6db8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6db8, .value=0xfd, .type=IO_READ},
        {.addr=0x6db9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_005A) {
    const struct CPU_State initial_cpu = {.pc=0x994f, .a=0x4b, .x=0x92, .y=0x2e, .sp=0xeb, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x994f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9950, .a=0x4b, .x=0x92, .y=0x4b, .sp=0xeb, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x994f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x994f, .value=0xfd, .type=IO_READ},
        {.addr=0x9950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_005B) {
    const struct CPU_State initial_cpu = {.pc=0x81e5, .a=0x5b, .x=0x5d, .y=0x7b, .sp=0x20, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x81e5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x81e6, .a=0x5b, .x=0x5d, .y=0x5b, .sp=0x20, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x81e5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x81e5, .value=0xfd, .type=IO_READ},
        {.addr=0x81e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_005C) {
    const struct CPU_State initial_cpu = {.pc=0x2e60, .a=0x6f, .x=0xb0, .y=0xf4, .sp=0x22, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2e60, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2e61, .a=0x6f, .x=0xb0, .y=0x6f, .sp=0x22, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x2e60, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2e60, .value=0xfd, .type=IO_READ},
        {.addr=0x2e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_005D) {
    const struct CPU_State initial_cpu = {.pc=0x1c24, .a=0xf6, .x=0x2b, .y=0x88, .sp=0x18, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1c24, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1c25, .a=0xf6, .x=0x2b, .y=0xf6, .sp=0x18, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1c24, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1c24, .value=0xfd, .type=IO_READ},
        {.addr=0x1c25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_005E) {
    const struct CPU_State initial_cpu = {.pc=0xfb7b, .a=0xfe, .x=0x31, .y=0x0d, .sp=0x0e, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xfb7b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfb7c, .a=0xfe, .x=0x31, .y=0xfe, .sp=0x0e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xfb7b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfb7b, .value=0xfd, .type=IO_READ},
        {.addr=0xfb7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_005F) {
    const struct CPU_State initial_cpu = {.pc=0xfaa1, .a=0x43, .x=0xf6, .y=0xcd, .sp=0x84, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfaa2, .a=0x43, .x=0xf6, .y=0x43, .sp=0x84, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xfaa1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfaa1, .value=0xfd, .type=IO_READ},
        {.addr=0xfaa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0060) {
    const struct CPU_State initial_cpu = {.pc=0xdb5b, .a=0xcc, .x=0xb5, .y=0x1d, .sp=0xab, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xdb5b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdb5c, .a=0xcc, .x=0xb5, .y=0xcc, .sp=0xab, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xdb5b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdb5b, .value=0xfd, .type=IO_READ},
        {.addr=0xdb5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0061) {
    const struct CPU_State initial_cpu = {.pc=0x836f, .a=0xbd, .x=0x14, .y=0x22, .sp=0x30, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x836f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8370, .a=0xbd, .x=0x14, .y=0xbd, .sp=0x30, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x836f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x836f, .value=0xfd, .type=IO_READ},
        {.addr=0x8370, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0062) {
    const struct CPU_State initial_cpu = {.pc=0x2066, .a=0x9b, .x=0x23, .y=0x3a, .sp=0x04, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x2066, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2067, .a=0x9b, .x=0x23, .y=0x9b, .sp=0x04, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2066, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2066, .value=0xfd, .type=IO_READ},
        {.addr=0x2067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0063) {
    const struct CPU_State initial_cpu = {.pc=0x8c95, .a=0x00, .x=0xfc, .y=0x43, .sp=0x21, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x8c95, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8c96, .a=0x00, .x=0xfc, .y=0x00, .sp=0x21, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x8c95, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8c95, .value=0xfd, .type=IO_READ},
        {.addr=0x8c96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0064) {
    const struct CPU_State initial_cpu = {.pc=0x6c95, .a=0x6d, .x=0xb6, .y=0xab, .sp=0x4d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x6c95, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6c96, .a=0x6d, .x=0xb6, .y=0x6d, .sp=0x4d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6c95, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6c95, .value=0xfd, .type=IO_READ},
        {.addr=0x6c96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0065) {
    const struct CPU_State initial_cpu = {.pc=0x60ac, .a=0x48, .x=0x4d, .y=0x04, .sp=0x5c, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x60ac, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x60ad, .a=0x48, .x=0x4d, .y=0x48, .sp=0x5c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x60ac, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x60ac, .value=0xfd, .type=IO_READ},
        {.addr=0x60ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0066) {
    const struct CPU_State initial_cpu = {.pc=0x7fbc, .a=0x74, .x=0xc0, .y=0x4f, .sp=0xdd, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x7fbc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7fbd, .a=0x74, .x=0xc0, .y=0x74, .sp=0xdd, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7fbc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7fbc, .value=0xfd, .type=IO_READ},
        {.addr=0x7fbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0067) {
    const struct CPU_State initial_cpu = {.pc=0x9726, .a=0xe8, .x=0x61, .y=0x1c, .sp=0x68, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x9726, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9727, .a=0xe8, .x=0x61, .y=0xe8, .sp=0x68, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9726, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9726, .value=0xfd, .type=IO_READ},
        {.addr=0x9727, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0068) {
    const struct CPU_State initial_cpu = {.pc=0x2fb5, .a=0x8f, .x=0xc4, .y=0xdd, .sp=0x29, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x2fb5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2fb6, .a=0x8f, .x=0xc4, .y=0x8f, .sp=0x29, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2fb5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2fb5, .value=0xfd, .type=IO_READ},
        {.addr=0x2fb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0069) {
    const struct CPU_State initial_cpu = {.pc=0x7122, .a=0xf2, .x=0xe0, .y=0x3e, .sp=0x3c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7122, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7123, .a=0xf2, .x=0xe0, .y=0xf2, .sp=0x3c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7122, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7122, .value=0xfd, .type=IO_READ},
        {.addr=0x7123, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_006A) {
    const struct CPU_State initial_cpu = {.pc=0xc13d, .a=0xb7, .x=0x2e, .y=0xb0, .sp=0x7e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xc13d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc13e, .a=0xb7, .x=0x2e, .y=0xb7, .sp=0x7e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xc13d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc13d, .value=0xfd, .type=IO_READ},
        {.addr=0xc13e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_006B) {
    const struct CPU_State initial_cpu = {.pc=0xffc5, .a=0xc0, .x=0xe7, .y=0x39, .sp=0x66, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xffc5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xffc6, .a=0xc0, .x=0xe7, .y=0xc0, .sp=0x66, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xffc5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xffc5, .value=0xfd, .type=IO_READ},
        {.addr=0xffc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_006C) {
    const struct CPU_State initial_cpu = {.pc=0x9f81, .a=0x9b, .x=0x8a, .y=0x8b, .sp=0x69, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9f81, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9f82, .a=0x9b, .x=0x8a, .y=0x9b, .sp=0x69, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9f81, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9f81, .value=0xfd, .type=IO_READ},
        {.addr=0x9f82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_006D) {
    const struct CPU_State initial_cpu = {.pc=0x491e, .a=0x11, .x=0x95, .y=0x31, .sp=0x31, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x491e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x491f, .a=0x11, .x=0x95, .y=0x11, .sp=0x31, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x491e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x491e, .value=0xfd, .type=IO_READ},
        {.addr=0x491f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_006E) {
    const struct CPU_State initial_cpu = {.pc=0x3755, .a=0xe8, .x=0xd6, .y=0x40, .sp=0x72, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x3755, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3756, .a=0xe8, .x=0xd6, .y=0xe8, .sp=0x72, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3755, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3755, .value=0xfd, .type=IO_READ},
        {.addr=0x3756, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_006F) {
    const struct CPU_State initial_cpu = {.pc=0xb4f9, .a=0xff, .x=0x6f, .y=0xc1, .sp=0xbe, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb4fa, .a=0xff, .x=0x6f, .y=0xff, .sp=0xbe, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb4f9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb4f9, .value=0xfd, .type=IO_READ},
        {.addr=0xb4fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0070) {
    const struct CPU_State initial_cpu = {.pc=0x956b, .a=0x2e, .x=0xff, .y=0xfa, .sp=0x51, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x956b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x956c, .a=0x2e, .x=0xff, .y=0x2e, .sp=0x51, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x956b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x956b, .value=0xfd, .type=IO_READ},
        {.addr=0x956c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0071) {
    const struct CPU_State initial_cpu = {.pc=0xf62e, .a=0x62, .x=0x6f, .y=0x4b, .sp=0x9a, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xf62e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf62f, .a=0x62, .x=0x6f, .y=0x62, .sp=0x9a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf62e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf62e, .value=0xfd, .type=IO_READ},
        {.addr=0xf62f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0072) {
    const struct CPU_State initial_cpu = {.pc=0xe944, .a=0x0e, .x=0x88, .y=0x8e, .sp=0x8c, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xe944, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe945, .a=0x0e, .x=0x88, .y=0x0e, .sp=0x8c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe944, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe944, .value=0xfd, .type=IO_READ},
        {.addr=0xe945, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0073) {
    const struct CPU_State initial_cpu = {.pc=0x13ec, .a=0x7b, .x=0xeb, .y=0x04, .sp=0x56, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x13ec, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x13ed, .a=0x7b, .x=0xeb, .y=0x7b, .sp=0x56, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x13ec, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x13ec, .value=0xfd, .type=IO_READ},
        {.addr=0x13ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0074) {
    const struct CPU_State initial_cpu = {.pc=0x84a9, .a=0x80, .x=0x89, .y=0x67, .sp=0xfe, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x84a9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x84aa, .a=0x80, .x=0x89, .y=0x80, .sp=0xfe, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x84a9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x84a9, .value=0xfd, .type=IO_READ},
        {.addr=0x84aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0075) {
    const struct CPU_State initial_cpu = {.pc=0x76bd, .a=0x44, .x=0xab, .y=0xfe, .sp=0x75, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x76bd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x76be, .a=0x44, .x=0xab, .y=0x44, .sp=0x75, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x76bd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x76bd, .value=0xfd, .type=IO_READ},
        {.addr=0x76be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0076) {
    const struct CPU_State initial_cpu = {.pc=0x06d7, .a=0xe9, .x=0xe5, .y=0x20, .sp=0xf7, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x06d7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x06d8, .a=0xe9, .x=0xe5, .y=0xe9, .sp=0xf7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x06d7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x06d7, .value=0xfd, .type=IO_READ},
        {.addr=0x06d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0077) {
    const struct CPU_State initial_cpu = {.pc=0x41e1, .a=0x40, .x=0xe7, .y=0xa6, .sp=0xd6, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x41e1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x41e2, .a=0x40, .x=0xe7, .y=0x40, .sp=0xd6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x41e1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x41e1, .value=0xfd, .type=IO_READ},
        {.addr=0x41e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0078) {
    const struct CPU_State initial_cpu = {.pc=0x4fbb, .a=0xe3, .x=0xd8, .y=0x87, .sp=0x78, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4fbb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4fbc, .a=0xe3, .x=0xd8, .y=0xe3, .sp=0x78, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4fbb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4fbb, .value=0xfd, .type=IO_READ},
        {.addr=0x4fbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0079) {
    const struct CPU_State initial_cpu = {.pc=0x45fa, .a=0x34, .x=0x5d, .y=0x7c, .sp=0x9b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x45fa, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x45fb, .a=0x34, .x=0x5d, .y=0x34, .sp=0x9b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x45fa, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x45fa, .value=0xfd, .type=IO_READ},
        {.addr=0x45fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_007A) {
    const struct CPU_State initial_cpu = {.pc=0xa36f, .a=0x46, .x=0xae, .y=0x89, .sp=0xff, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xa36f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa370, .a=0x46, .x=0xae, .y=0x46, .sp=0xff, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa36f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa36f, .value=0xfd, .type=IO_READ},
        {.addr=0xa370, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_007B) {
    const struct CPU_State initial_cpu = {.pc=0x8f57, .a=0x6a, .x=0x6a, .y=0x04, .sp=0x00, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8f57, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8f58, .a=0x6a, .x=0x6a, .y=0x6a, .sp=0x00, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8f57, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8f57, .value=0xfd, .type=IO_READ},
        {.addr=0x8f58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_007C) {
    const struct CPU_State initial_cpu = {.pc=0x75c8, .a=0xe0, .x=0x35, .y=0x8b, .sp=0x4a, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x75c8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x75c9, .a=0xe0, .x=0x35, .y=0xe0, .sp=0x4a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x75c8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x75c8, .value=0xfd, .type=IO_READ},
        {.addr=0x75c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_007D) {
    const struct CPU_State initial_cpu = {.pc=0x2007, .a=0x38, .x=0x90, .y=0xaa, .sp=0x54, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2007, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2008, .a=0x38, .x=0x90, .y=0x38, .sp=0x54, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2007, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2007, .value=0xfd, .type=IO_READ},
        {.addr=0x2008, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_007E) {
    const struct CPU_State initial_cpu = {.pc=0x98fc, .a=0xb4, .x=0x0a, .y=0x89, .sp=0x42, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x98fc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x98fd, .a=0xb4, .x=0x0a, .y=0xb4, .sp=0x42, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x98fc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x98fc, .value=0xfd, .type=IO_READ},
        {.addr=0x98fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_007F) {
    const struct CPU_State initial_cpu = {.pc=0x66b9, .a=0x43, .x=0x57, .y=0xcb, .sp=0xaa, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x66b9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x66ba, .a=0x43, .x=0x57, .y=0x43, .sp=0xaa, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x66b9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x66b9, .value=0xfd, .type=IO_READ},
        {.addr=0x66ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0080) {
    const struct CPU_State initial_cpu = {.pc=0xb49a, .a=0x83, .x=0xf5, .y=0x1c, .sp=0xc3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xb49a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb49b, .a=0x83, .x=0xf5, .y=0x83, .sp=0xc3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xb49a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb49a, .value=0xfd, .type=IO_READ},
        {.addr=0xb49b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0081) {
    const struct CPU_State initial_cpu = {.pc=0xc05c, .a=0x8f, .x=0x16, .y=0x43, .sp=0xe4, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc05c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc05d, .a=0x8f, .x=0x16, .y=0x8f, .sp=0xe4, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc05c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc05c, .value=0xfd, .type=IO_READ},
        {.addr=0xc05d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0082) {
    const struct CPU_State initial_cpu = {.pc=0x2aab, .a=0xb3, .x=0x06, .y=0xf9, .sp=0x0b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x2aab, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2aac, .a=0xb3, .x=0x06, .y=0xb3, .sp=0x0b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2aab, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2aab, .value=0xfd, .type=IO_READ},
        {.addr=0x2aac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0083) {
    const struct CPU_State initial_cpu = {.pc=0x6d08, .a=0x60, .x=0x82, .y=0xcc, .sp=0x5e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x6d08, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6d09, .a=0x60, .x=0x82, .y=0x60, .sp=0x5e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6d08, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6d08, .value=0xfd, .type=IO_READ},
        {.addr=0x6d09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0084) {
    const struct CPU_State initial_cpu = {.pc=0x5ee8, .a=0x4d, .x=0xcf, .y=0xb1, .sp=0x29, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5ee9, .a=0x4d, .x=0xcf, .y=0x4d, .sp=0x29, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5ee8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5ee8, .value=0xfd, .type=IO_READ},
        {.addr=0x5ee9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0085) {
    const struct CPU_State initial_cpu = {.pc=0x2e49, .a=0x70, .x=0x3f, .y=0x61, .sp=0x72, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x2e49, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2e4a, .a=0x70, .x=0x3f, .y=0x70, .sp=0x72, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2e49, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2e49, .value=0xfd, .type=IO_READ},
        {.addr=0x2e4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0086) {
    const struct CPU_State initial_cpu = {.pc=0xd5c8, .a=0xe5, .x=0xc8, .y=0xe6, .sp=0x99, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd5c9, .a=0xe5, .x=0xc8, .y=0xe5, .sp=0x99, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd5c8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd5c8, .value=0xfd, .type=IO_READ},
        {.addr=0xd5c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0087) {
    const struct CPU_State initial_cpu = {.pc=0xebec, .a=0x33, .x=0x7a, .y=0x8b, .sp=0x8b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xebec, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xebed, .a=0x33, .x=0x7a, .y=0x33, .sp=0x8b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xebec, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xebec, .value=0xfd, .type=IO_READ},
        {.addr=0xebed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0088) {
    const struct CPU_State initial_cpu = {.pc=0x5037, .a=0x23, .x=0xfa, .y=0x45, .sp=0xf4, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x5037, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5038, .a=0x23, .x=0xfa, .y=0x23, .sp=0xf4, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5037, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5037, .value=0xfd, .type=IO_READ},
        {.addr=0x5038, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0089) {
    const struct CPU_State initial_cpu = {.pc=0x96f5, .a=0x6e, .x=0x7b, .y=0x84, .sp=0x92, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x96f5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x96f6, .a=0x6e, .x=0x7b, .y=0x6e, .sp=0x92, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x96f5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x96f5, .value=0xfd, .type=IO_READ},
        {.addr=0x96f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_008A) {
    const struct CPU_State initial_cpu = {.pc=0xbea9, .a=0xef, .x=0x18, .y=0xda, .sp=0xc8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xbea9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbeaa, .a=0xef, .x=0x18, .y=0xef, .sp=0xc8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbea9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbea9, .value=0xfd, .type=IO_READ},
        {.addr=0xbeaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_008B) {
    const struct CPU_State initial_cpu = {.pc=0x42b7, .a=0x5c, .x=0xad, .y=0xdf, .sp=0x6b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x42b7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x42b8, .a=0x5c, .x=0xad, .y=0x5c, .sp=0x6b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x42b7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x42b7, .value=0xfd, .type=IO_READ},
        {.addr=0x42b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_008C) {
    const struct CPU_State initial_cpu = {.pc=0xab95, .a=0x1c, .x=0x14, .y=0x6f, .sp=0xdc, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xab95, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xab96, .a=0x1c, .x=0x14, .y=0x1c, .sp=0xdc, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xab95, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xab95, .value=0xfd, .type=IO_READ},
        {.addr=0xab96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_008D) {
    const struct CPU_State initial_cpu = {.pc=0xde73, .a=0xf2, .x=0x7f, .y=0x25, .sp=0xb0, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xde73, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xde74, .a=0xf2, .x=0x7f, .y=0xf2, .sp=0xb0, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xde73, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xde73, .value=0xfd, .type=IO_READ},
        {.addr=0xde74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_008E) {
    const struct CPU_State initial_cpu = {.pc=0xede4, .a=0x6b, .x=0xb0, .y=0xf3, .sp=0xe6, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xede4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xede5, .a=0x6b, .x=0xb0, .y=0x6b, .sp=0xe6, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xede4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xede4, .value=0xfd, .type=IO_READ},
        {.addr=0xede5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_008F) {
    const struct CPU_State initial_cpu = {.pc=0xfb2e, .a=0x9a, .x=0x78, .y=0x0b, .sp=0x22, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xfb2e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfb2f, .a=0x9a, .x=0x78, .y=0x9a, .sp=0x22, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xfb2e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfb2e, .value=0xfd, .type=IO_READ},
        {.addr=0xfb2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0090) {
    const struct CPU_State initial_cpu = {.pc=0x9907, .a=0x72, .x=0x06, .y=0xe0, .sp=0xdc, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x9907, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9908, .a=0x72, .x=0x06, .y=0x72, .sp=0xdc, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9907, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9907, .value=0xfd, .type=IO_READ},
        {.addr=0x9908, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0091) {
    const struct CPU_State initial_cpu = {.pc=0x175c, .a=0x0d, .x=0x69, .y=0xd3, .sp=0x77, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x175c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x175d, .a=0x0d, .x=0x69, .y=0x0d, .sp=0x77, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x175c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x175c, .value=0xfd, .type=IO_READ},
        {.addr=0x175d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0092) {
    const struct CPU_State initial_cpu = {.pc=0x802b, .a=0x9e, .x=0xac, .y=0xbd, .sp=0x82, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x802b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x802c, .a=0x9e, .x=0xac, .y=0x9e, .sp=0x82, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x802b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x802b, .value=0xfd, .type=IO_READ},
        {.addr=0x802c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0093) {
    const struct CPU_State initial_cpu = {.pc=0x7c14, .a=0x4d, .x=0x48, .y=0xe9, .sp=0xb4, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7c14, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7c15, .a=0x4d, .x=0x48, .y=0x4d, .sp=0xb4, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7c14, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7c14, .value=0xfd, .type=IO_READ},
        {.addr=0x7c15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0094) {
    const struct CPU_State initial_cpu = {.pc=0x080a, .a=0x98, .x=0x61, .y=0xd5, .sp=0x47, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x080a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x080b, .a=0x98, .x=0x61, .y=0x98, .sp=0x47, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x080a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x080a, .value=0xfd, .type=IO_READ},
        {.addr=0x080b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0095) {
    const struct CPU_State initial_cpu = {.pc=0xec4f, .a=0x07, .x=0x49, .y=0x20, .sp=0x4b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xec4f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xec50, .a=0x07, .x=0x49, .y=0x07, .sp=0x4b, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xec4f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xec4f, .value=0xfd, .type=IO_READ},
        {.addr=0xec50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0096) {
    const struct CPU_State initial_cpu = {.pc=0xe975, .a=0x84, .x=0x6e, .y=0x07, .sp=0x61, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe975, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe976, .a=0x84, .x=0x6e, .y=0x84, .sp=0x61, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe975, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe975, .value=0xfd, .type=IO_READ},
        {.addr=0xe976, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0097) {
    const struct CPU_State initial_cpu = {.pc=0x4af2, .a=0xf3, .x=0x72, .y=0x41, .sp=0x22, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x4af2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4af3, .a=0xf3, .x=0x72, .y=0xf3, .sp=0x22, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x4af2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4af2, .value=0xfd, .type=IO_READ},
        {.addr=0x4af3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0098) {
    const struct CPU_State initial_cpu = {.pc=0xfa3d, .a=0x95, .x=0x12, .y=0x58, .sp=0x91, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xfa3d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfa3e, .a=0x95, .x=0x12, .y=0x95, .sp=0x91, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xfa3d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfa3d, .value=0xfd, .type=IO_READ},
        {.addr=0xfa3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0099) {
    const struct CPU_State initial_cpu = {.pc=0x208a, .a=0x37, .x=0xbe, .y=0x5a, .sp=0xc8, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x208a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x208b, .a=0x37, .x=0xbe, .y=0x37, .sp=0xc8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x208a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x208a, .value=0xfd, .type=IO_READ},
        {.addr=0x208b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_009A) {
    const struct CPU_State initial_cpu = {.pc=0xae2d, .a=0x68, .x=0x15, .y=0x68, .sp=0x38, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xae2d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xae2e, .a=0x68, .x=0x15, .y=0x68, .sp=0x38, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xae2d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xae2d, .value=0xfd, .type=IO_READ},
        {.addr=0xae2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_009B) {
    const struct CPU_State initial_cpu = {.pc=0x20b9, .a=0x99, .x=0x68, .y=0xfa, .sp=0xb9, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x20b9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x20ba, .a=0x99, .x=0x68, .y=0x99, .sp=0xb9, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x20b9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x20b9, .value=0xfd, .type=IO_READ},
        {.addr=0x20ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_009C) {
    const struct CPU_State initial_cpu = {.pc=0x01fd, .a=0xfe, .x=0x6a, .y=0xa8, .sp=0xcd, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x01fe, .a=0xfe, .x=0x6a, .y=0xfe, .sp=0xcd, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x01fd, .value=0xfd, .type=IO_READ},
        {.addr=0x01fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_009D) {
    const struct CPU_State initial_cpu = {.pc=0xcc97, .a=0x6d, .x=0xd1, .y=0x89, .sp=0x9e, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xcc97, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcc98, .a=0x6d, .x=0xd1, .y=0x6d, .sp=0x9e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcc97, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcc97, .value=0xfd, .type=IO_READ},
        {.addr=0xcc98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_009E) {
    const struct CPU_State initial_cpu = {.pc=0xb4a7, .a=0xdf, .x=0x7c, .y=0x7c, .sp=0xc2, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xb4a7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb4a8, .a=0xdf, .x=0x7c, .y=0xdf, .sp=0xc2, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb4a7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb4a7, .value=0xfd, .type=IO_READ},
        {.addr=0xb4a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_009F) {
    const struct CPU_State initial_cpu = {.pc=0x7abf, .a=0x2b, .x=0xdf, .y=0x40, .sp=0x5b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x7abf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7ac0, .a=0x2b, .x=0xdf, .y=0x2b, .sp=0x5b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7abf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7abf, .value=0xfd, .type=IO_READ},
        {.addr=0x7ac0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xce41, .a=0x58, .x=0xcb, .y=0x24, .sp=0xc5, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xce41, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xce42, .a=0x58, .x=0xcb, .y=0x58, .sp=0xc5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xce41, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xce41, .value=0xfd, .type=IO_READ},
        {.addr=0xce42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xe191, .a=0xb1, .x=0xac, .y=0x2c, .sp=0x54, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xe191, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe192, .a=0xb1, .x=0xac, .y=0xb1, .sp=0x54, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xe191, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe191, .value=0xfd, .type=IO_READ},
        {.addr=0xe192, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x3981, .a=0xfc, .x=0xc9, .y=0x81, .sp=0x70, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x3981, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3982, .a=0xfc, .x=0xc9, .y=0xfc, .sp=0x70, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x3981, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3981, .value=0xfd, .type=IO_READ},
        {.addr=0x3982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xe03d, .a=0xf8, .x=0xd0, .y=0xbe, .sp=0x57, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xe03d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe03e, .a=0xf8, .x=0xd0, .y=0xf8, .sp=0x57, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe03d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe03d, .value=0xfd, .type=IO_READ},
        {.addr=0xe03e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x9115, .a=0xd7, .x=0x34, .y=0x6a, .sp=0x69, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x9115, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9116, .a=0xd7, .x=0x34, .y=0xd7, .sp=0x69, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x9115, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9115, .value=0xfd, .type=IO_READ},
        {.addr=0x9116, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x3f2e, .a=0x06, .x=0x69, .y=0xb2, .sp=0x42, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x3f2e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3f2f, .a=0x06, .x=0x69, .y=0x06, .sp=0x42, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3f2e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3f2e, .value=0xfd, .type=IO_READ},
        {.addr=0x3f2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x019c, .a=0x74, .x=0xb0, .y=0x30, .sp=0x8f, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x019d, .a=0x74, .x=0xb0, .y=0x74, .sp=0x8f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x019c, .value=0xfd, .type=IO_READ},
        {.addr=0x019d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x143a, .a=0x28, .x=0xd9, .y=0x23, .sp=0xcd, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x143a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x143b, .a=0x28, .x=0xd9, .y=0x28, .sp=0xcd, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x143a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x143a, .value=0xfd, .type=IO_READ},
        {.addr=0x143b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x077d, .a=0xad, .x=0x77, .y=0xff, .sp=0x23, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x077d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x077e, .a=0xad, .x=0x77, .y=0xad, .sp=0x23, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x077d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x077d, .value=0xfd, .type=IO_READ},
        {.addr=0x077e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x841e, .a=0x51, .x=0x18, .y=0x8a, .sp=0xe8, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x841e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x841f, .a=0x51, .x=0x18, .y=0x51, .sp=0xe8, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x841e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x841e, .value=0xfd, .type=IO_READ},
        {.addr=0x841f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xf676, .a=0x74, .x=0x2c, .y=0x48, .sp=0xb2, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xf676, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf677, .a=0x74, .x=0x2c, .y=0x74, .sp=0xb2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xf676, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf676, .value=0xfd, .type=IO_READ},
        {.addr=0xf677, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x1618, .a=0x42, .x=0x4d, .y=0xd6, .sp=0x94, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x1618, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1619, .a=0x42, .x=0x4d, .y=0x42, .sp=0x94, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1618, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1618, .value=0xfd, .type=IO_READ},
        {.addr=0x1619, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x274c, .a=0x28, .x=0x6f, .y=0x6c, .sp=0xf9, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x274c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x274d, .a=0x28, .x=0x6f, .y=0x28, .sp=0xf9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x274c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x274c, .value=0xfd, .type=IO_READ},
        {.addr=0x274d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x945e, .a=0xe0, .x=0xb4, .y=0x00, .sp=0xa9, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x945e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x945f, .a=0xe0, .x=0xb4, .y=0xe0, .sp=0xa9, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x945e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x945e, .value=0xfd, .type=IO_READ},
        {.addr=0x945f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x8b09, .a=0x82, .x=0x19, .y=0xaf, .sp=0xec, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x8b09, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8b0a, .a=0x82, .x=0x19, .y=0x82, .sp=0xec, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8b09, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8b09, .value=0xfd, .type=IO_READ},
        {.addr=0x8b0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xc602, .a=0x48, .x=0xff, .y=0xb2, .sp=0x00, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc602, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc603, .a=0x48, .x=0xff, .y=0x48, .sp=0x00, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc602, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc602, .value=0xfd, .type=IO_READ},
        {.addr=0xc603, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x063d, .a=0x9d, .x=0xe2, .y=0xfe, .sp=0x49, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x063d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x063e, .a=0x9d, .x=0xe2, .y=0x9d, .sp=0x49, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x063d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x063d, .value=0xfd, .type=IO_READ},
        {.addr=0x063e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x8392, .a=0xec, .x=0x5b, .y=0xde, .sp=0xc6, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8392, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8393, .a=0xec, .x=0x5b, .y=0xec, .sp=0xc6, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8392, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8392, .value=0xfd, .type=IO_READ},
        {.addr=0x8393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x4237, .a=0x56, .x=0x34, .y=0xf0, .sp=0xde, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4237, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4238, .a=0x56, .x=0x34, .y=0x56, .sp=0xde, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4237, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4237, .value=0xfd, .type=IO_READ},
        {.addr=0x4238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xb605, .a=0xa2, .x=0x61, .y=0xf0, .sp=0x8d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb605, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb606, .a=0xa2, .x=0x61, .y=0xa2, .sp=0x8d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb605, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb605, .value=0xfd, .type=IO_READ},
        {.addr=0xb606, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x0d5f, .a=0x93, .x=0xa5, .y=0xdb, .sp=0x7e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0d5f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0d60, .a=0x93, .x=0xa5, .y=0x93, .sp=0x7e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0d5f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0d5f, .value=0xfd, .type=IO_READ},
        {.addr=0x0d60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xa731, .a=0xf3, .x=0x2c, .y=0x20, .sp=0xcb, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa731, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa732, .a=0xf3, .x=0x2c, .y=0xf3, .sp=0xcb, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa731, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa731, .value=0xfd, .type=IO_READ},
        {.addr=0xa732, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x08bc, .a=0x87, .x=0x63, .y=0xc2, .sp=0x7f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x08bc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x08bd, .a=0x87, .x=0x63, .y=0x87, .sp=0x7f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x08bc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x08bc, .value=0xfd, .type=IO_READ},
        {.addr=0x08bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xdc81, .a=0x21, .x=0x27, .y=0xca, .sp=0xfa, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xdc81, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdc82, .a=0x21, .x=0x27, .y=0x21, .sp=0xfa, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xdc81, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdc81, .value=0xfd, .type=IO_READ},
        {.addr=0xdc82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xc005, .a=0x51, .x=0x9c, .y=0x95, .sp=0xd1, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xc005, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc006, .a=0x51, .x=0x9c, .y=0x51, .sp=0xd1, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xc005, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc005, .value=0xfd, .type=IO_READ},
        {.addr=0xc006, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x008b, .a=0x69, .x=0x79, .y=0x56, .sp=0x46, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x008c, .a=0x69, .x=0x79, .y=0x69, .sp=0x46, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x008b, .value=0xfd, .type=IO_READ},
        {.addr=0x008c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xbb31, .a=0x9e, .x=0xd4, .y=0xfa, .sp=0xee, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xbb31, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbb32, .a=0x9e, .x=0xd4, .y=0x9e, .sp=0xee, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xbb31, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbb31, .value=0xfd, .type=IO_READ},
        {.addr=0xbb32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xdedf, .a=0x9f, .x=0x30, .y=0x08, .sp=0xa9, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xdedf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdee0, .a=0x9f, .x=0x30, .y=0x9f, .sp=0xa9, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xdedf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdedf, .value=0xfd, .type=IO_READ},
        {.addr=0xdee0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x54e0, .a=0x19, .x=0x20, .y=0x24, .sp=0xe7, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x54e0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x54e1, .a=0x19, .x=0x20, .y=0x19, .sp=0xe7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x54e0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x54e0, .value=0xfd, .type=IO_READ},
        {.addr=0x54e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x69bc, .a=0x97, .x=0x8a, .y=0x4f, .sp=0xd2, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x69bc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x69bd, .a=0x97, .x=0x8a, .y=0x97, .sp=0xd2, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x69bc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x69bc, .value=0xfd, .type=IO_READ},
        {.addr=0x69bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x3a10, .a=0x6b, .x=0x86, .y=0x97, .sp=0xee, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x3a10, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3a11, .a=0x6b, .x=0x86, .y=0x6b, .sp=0xee, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3a10, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3a10, .value=0xfd, .type=IO_READ},
        {.addr=0x3a11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x8901, .a=0xb2, .x=0xdc, .y=0x6c, .sp=0x02, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x8901, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8902, .a=0xb2, .x=0xdc, .y=0xb2, .sp=0x02, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8901, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8901, .value=0xfd, .type=IO_READ},
        {.addr=0x8902, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x6198, .a=0x3b, .x=0x0d, .y=0x44, .sp=0x94, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x6198, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6199, .a=0x3b, .x=0x0d, .y=0x3b, .sp=0x94, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6198, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6198, .value=0xfd, .type=IO_READ},
        {.addr=0x6199, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xaf73, .a=0x20, .x=0xc3, .y=0xc6, .sp=0x8b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xaf73, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaf74, .a=0x20, .x=0xc3, .y=0x20, .sp=0x8b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xaf73, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaf73, .value=0xfd, .type=IO_READ},
        {.addr=0xaf74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x26f4, .a=0x68, .x=0x0a, .y=0xba, .sp=0xb6, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x26f4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x26f5, .a=0x68, .x=0x0a, .y=0x68, .sp=0xb6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x26f4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x26f4, .value=0xfd, .type=IO_READ},
        {.addr=0x26f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x3a67, .a=0x80, .x=0xef, .y=0xe5, .sp=0xc4, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x3a67, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3a68, .a=0x80, .x=0xef, .y=0x80, .sp=0xc4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3a67, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3a67, .value=0xfd, .type=IO_READ},
        {.addr=0x3a68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xc49a, .a=0xad, .x=0x49, .y=0x20, .sp=0x48, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc49a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc49b, .a=0xad, .x=0x49, .y=0xad, .sp=0x48, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc49a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc49a, .value=0xfd, .type=IO_READ},
        {.addr=0xc49b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xba3b, .a=0xb2, .x=0x12, .y=0xb7, .sp=0x79, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xba3b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xba3c, .a=0xb2, .x=0x12, .y=0xb2, .sp=0x79, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xba3b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xba3b, .value=0xfd, .type=IO_READ},
        {.addr=0xba3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xe280, .a=0x95, .x=0x7e, .y=0xd5, .sp=0xf2, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe280, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe281, .a=0x95, .x=0x7e, .y=0x95, .sp=0xf2, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xe280, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe280, .value=0xfd, .type=IO_READ},
        {.addr=0xe281, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x175e, .a=0x5a, .x=0x41, .y=0xb6, .sp=0x6e, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x175e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x175f, .a=0x5a, .x=0x41, .y=0x5a, .sp=0x6e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x175e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x175e, .value=0xfd, .type=IO_READ},
        {.addr=0x175f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xd999, .a=0x8e, .x=0x8a, .y=0x52, .sp=0xc5, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd999, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd99a, .a=0x8e, .x=0x8a, .y=0x8e, .sp=0xc5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd999, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd999, .value=0xfd, .type=IO_READ},
        {.addr=0xd99a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x1293, .a=0x96, .x=0x56, .y=0x64, .sp=0xcb, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x1293, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1294, .a=0x96, .x=0x56, .y=0x96, .sp=0xcb, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x1293, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1293, .value=0xfd, .type=IO_READ},
        {.addr=0x1294, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xce9c, .a=0x5d, .x=0x9e, .y=0x62, .sp=0x6f, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xce9c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xce9d, .a=0x5d, .x=0x9e, .y=0x5d, .sp=0x6f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xce9c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xce9c, .value=0xfd, .type=IO_READ},
        {.addr=0xce9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x7a00, .a=0xea, .x=0xd0, .y=0xd0, .sp=0x61, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x7a00, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7a01, .a=0xea, .x=0xd0, .y=0xea, .sp=0x61, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7a00, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7a00, .value=0xfd, .type=IO_READ},
        {.addr=0x7a01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xa8bc, .a=0x9f, .x=0xe8, .y=0x69, .sp=0x93, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xa8bc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa8bd, .a=0x9f, .x=0xe8, .y=0x9f, .sp=0x93, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa8bc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa8bc, .value=0xfd, .type=IO_READ},
        {.addr=0xa8bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x1dcd, .a=0x5a, .x=0x1f, .y=0x4e, .sp=0xf1, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x1dcd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1dce, .a=0x5a, .x=0x1f, .y=0x5a, .sp=0xf1, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1dcd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1dcd, .value=0xfd, .type=IO_READ},
        {.addr=0x1dce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x6520, .a=0x51, .x=0xf9, .y=0x07, .sp=0x30, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6520, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6521, .a=0x51, .x=0xf9, .y=0x51, .sp=0x30, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6520, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6520, .value=0xfd, .type=IO_READ},
        {.addr=0x6521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x9de1, .a=0x75, .x=0xf8, .y=0xbe, .sp=0xa2, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x9de1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9de2, .a=0x75, .x=0xf8, .y=0x75, .sp=0xa2, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9de1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9de1, .value=0xfd, .type=IO_READ},
        {.addr=0x9de2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x03d0, .a=0xbe, .x=0xa5, .y=0xbf, .sp=0xb1, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x03d0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x03d1, .a=0xbe, .x=0xa5, .y=0xbe, .sp=0xb1, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x03d0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x03d0, .value=0xfd, .type=IO_READ},
        {.addr=0x03d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x53de, .a=0xb1, .x=0x9e, .y=0xc3, .sp=0x18, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x53de, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x53df, .a=0xb1, .x=0x9e, .y=0xb1, .sp=0x18, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x53de, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x53de, .value=0xfd, .type=IO_READ},
        {.addr=0x53df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x84ac, .a=0xaa, .x=0x66, .y=0x39, .sp=0x9e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x84ac, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x84ad, .a=0xaa, .x=0x66, .y=0xaa, .sp=0x9e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x84ac, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x84ac, .value=0xfd, .type=IO_READ},
        {.addr=0x84ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x59c3, .a=0x50, .x=0xd0, .y=0x52, .sp=0xdb, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x59c3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x59c4, .a=0x50, .x=0xd0, .y=0x50, .sp=0xdb, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x59c3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x59c3, .value=0xfd, .type=IO_READ},
        {.addr=0x59c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x29f6, .a=0xb8, .x=0x48, .y=0xb0, .sp=0x5a, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x29f6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x29f7, .a=0xb8, .x=0x48, .y=0xb8, .sp=0x5a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x29f6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x29f6, .value=0xfd, .type=IO_READ},
        {.addr=0x29f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xd1fb, .a=0xc8, .x=0xe4, .y=0x10, .sp=0x49, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd1fb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd1fc, .a=0xc8, .x=0xe4, .y=0xc8, .sp=0x49, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd1fb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd1fb, .value=0xfd, .type=IO_READ},
        {.addr=0xd1fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x65f3, .a=0x11, .x=0x73, .y=0x28, .sp=0x78, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x65f3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x65f4, .a=0x11, .x=0x73, .y=0x11, .sp=0x78, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x65f3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x65f3, .value=0xfd, .type=IO_READ},
        {.addr=0x65f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x2fa4, .a=0x16, .x=0x2b, .y=0x72, .sp=0x50, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2fa5, .a=0x16, .x=0x2b, .y=0x16, .sp=0x50, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2fa4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2fa4, .value=0xfd, .type=IO_READ},
        {.addr=0x2fa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xd69e, .a=0x29, .x=0x6a, .y=0x33, .sp=0x46, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd69e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd69f, .a=0x29, .x=0x6a, .y=0x29, .sp=0x46, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xd69e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd69e, .value=0xfd, .type=IO_READ},
        {.addr=0xd69f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x5abe, .a=0xfb, .x=0x83, .y=0x66, .sp=0xad, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x5abe, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5abf, .a=0xfb, .x=0x83, .y=0xfb, .sp=0xad, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5abe, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5abe, .value=0xfd, .type=IO_READ},
        {.addr=0x5abf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x6570, .a=0xd7, .x=0xcf, .y=0x7f, .sp=0xbc, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6570, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6571, .a=0xd7, .x=0xcf, .y=0xd7, .sp=0xbc, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6570, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6570, .value=0xfd, .type=IO_READ},
        {.addr=0x6571, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x2280, .a=0x92, .x=0x6e, .y=0x8b, .sp=0xb7, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x2280, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2281, .a=0x92, .x=0x6e, .y=0x92, .sp=0xb7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2280, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2280, .value=0xfd, .type=IO_READ},
        {.addr=0x2281, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x164f, .a=0xda, .x=0x3a, .y=0xe4, .sp=0x5f, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x164f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1650, .a=0xda, .x=0x3a, .y=0xda, .sp=0x5f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x164f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x164f, .value=0xfd, .type=IO_READ},
        {.addr=0x1650, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xbdb3, .a=0xc7, .x=0xf3, .y=0xa1, .sp=0x4d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xbdb3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbdb4, .a=0xc7, .x=0xf3, .y=0xc7, .sp=0x4d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xbdb3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbdb3, .value=0xfd, .type=IO_READ},
        {.addr=0xbdb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x6ed7, .a=0x79, .x=0xb8, .y=0xac, .sp=0x67, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x6ed7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6ed8, .a=0x79, .x=0xb8, .y=0x79, .sp=0x67, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6ed7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6ed7, .value=0xfd, .type=IO_READ},
        {.addr=0x6ed8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xb6f1, .a=0x8c, .x=0x48, .y=0x2c, .sp=0xc7, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xb6f1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb6f2, .a=0x8c, .x=0x48, .y=0x8c, .sp=0xc7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb6f1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb6f1, .value=0xfd, .type=IO_READ},
        {.addr=0xb6f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x2d3c, .a=0x7a, .x=0x70, .y=0x3e, .sp=0x4e, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2d3c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2d3d, .a=0x7a, .x=0x70, .y=0x7a, .sp=0x4e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2d3c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2d3c, .value=0xfd, .type=IO_READ},
        {.addr=0x2d3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x85ee, .a=0x2f, .x=0xfd, .y=0xe2, .sp=0x2d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x85ee, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x85ef, .a=0x2f, .x=0xfd, .y=0x2f, .sp=0x2d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x85ee, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x85ee, .value=0xfd, .type=IO_READ},
        {.addr=0x85ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xe1ef, .a=0x2c, .x=0x73, .y=0x45, .sp=0x26, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xe1ef, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe1f0, .a=0x2c, .x=0x73, .y=0x2c, .sp=0x26, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe1ef, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe1ef, .value=0xfd, .type=IO_READ},
        {.addr=0xe1f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x48df, .a=0x21, .x=0x39, .y=0x2f, .sp=0x0e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x48df, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x48e0, .a=0x21, .x=0x39, .y=0x21, .sp=0x0e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x48df, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x48df, .value=0xfd, .type=IO_READ},
        {.addr=0x48e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x494d, .a=0x4e, .x=0xf3, .y=0x42, .sp=0x96, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x494d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x494e, .a=0x4e, .x=0xf3, .y=0x4e, .sp=0x96, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x494d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x494d, .value=0xfd, .type=IO_READ},
        {.addr=0x494e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x127a, .a=0x50, .x=0x21, .y=0xfd, .sp=0x19, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x127a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x127b, .a=0x50, .x=0x21, .y=0x50, .sp=0x19, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x127a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x127a, .value=0xfd, .type=IO_READ},
        {.addr=0x127b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x558c, .a=0x67, .x=0xc6, .y=0x3e, .sp=0x95, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x558c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x558d, .a=0x67, .x=0xc6, .y=0x67, .sp=0x95, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x558c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x558c, .value=0xfd, .type=IO_READ},
        {.addr=0x558d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xac34, .a=0xfa, .x=0x42, .y=0xac, .sp=0x34, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xac34, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xac35, .a=0xfa, .x=0x42, .y=0xfa, .sp=0x34, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xac34, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xac34, .value=0xfd, .type=IO_READ},
        {.addr=0xac35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x963a, .a=0x69, .x=0x2f, .y=0x89, .sp=0xe7, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x963a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x963b, .a=0x69, .x=0x2f, .y=0x69, .sp=0xe7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x963a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x963a, .value=0xfd, .type=IO_READ},
        {.addr=0x963b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xb2f7, .a=0x85, .x=0x37, .y=0x4a, .sp=0xed, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xb2f7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb2f8, .a=0x85, .x=0x37, .y=0x85, .sp=0xed, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb2f7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb2f7, .value=0xfd, .type=IO_READ},
        {.addr=0xb2f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xc700, .a=0x12, .x=0x3d, .y=0x1b, .sp=0x1f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xc700, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc701, .a=0x12, .x=0x3d, .y=0x12, .sp=0x1f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xc700, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc700, .value=0xfd, .type=IO_READ},
        {.addr=0xc701, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x4ce2, .a=0x3f, .x=0x20, .y=0x65, .sp=0x21, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x4ce2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4ce3, .a=0x3f, .x=0x20, .y=0x3f, .sp=0x21, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x4ce2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4ce2, .value=0xfd, .type=IO_READ},
        {.addr=0x4ce3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x2969, .a=0x33, .x=0x45, .y=0x94, .sp=0x61, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2969, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x296a, .a=0x33, .x=0x45, .y=0x33, .sp=0x61, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2969, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2969, .value=0xfd, .type=IO_READ},
        {.addr=0x296a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xfbb3, .a=0x94, .x=0xa2, .y=0x3c, .sp=0x34, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfbb4, .a=0x94, .x=0xa2, .y=0x94, .sp=0x34, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xfbb3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfbb3, .value=0xfd, .type=IO_READ},
        {.addr=0xfbb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xc165, .a=0xa3, .x=0x24, .y=0x7f, .sp=0xb4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xc165, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc166, .a=0xa3, .x=0x24, .y=0xa3, .sp=0xb4, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xc165, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc165, .value=0xfd, .type=IO_READ},
        {.addr=0xc166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x69b7, .a=0x84, .x=0x18, .y=0x91, .sp=0x97, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x69b7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x69b8, .a=0x84, .x=0x18, .y=0x84, .sp=0x97, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x69b7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x69b7, .value=0xfd, .type=IO_READ},
        {.addr=0x69b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x27b5, .a=0x74, .x=0x82, .y=0x4d, .sp=0x84, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x27b5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x27b6, .a=0x74, .x=0x82, .y=0x74, .sp=0x84, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x27b5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x27b5, .value=0xfd, .type=IO_READ},
        {.addr=0x27b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x0551, .a=0xc7, .x=0xbe, .y=0x5d, .sp=0xa8, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0551, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0552, .a=0xc7, .x=0xbe, .y=0xc7, .sp=0xa8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0551, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0551, .value=0xfd, .type=IO_READ},
        {.addr=0x0552, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xd6ee, .a=0x9b, .x=0x68, .y=0x58, .sp=0x34, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xd6ee, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd6ef, .a=0x9b, .x=0x68, .y=0x9b, .sp=0x34, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd6ee, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd6ee, .value=0xfd, .type=IO_READ},
        {.addr=0xd6ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xae89, .a=0x9c, .x=0xb1, .y=0xb9, .sp=0xcd, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xae89, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xae8a, .a=0x9c, .x=0xb1, .y=0x9c, .sp=0xcd, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xae89, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xae89, .value=0xfd, .type=IO_READ},
        {.addr=0xae8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x947f, .a=0x0c, .x=0xa4, .y=0xc0, .sp=0xa7, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x947f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9480, .a=0x0c, .x=0xa4, .y=0x0c, .sp=0xa7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x947f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x947f, .value=0xfd, .type=IO_READ},
        {.addr=0x9480, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x4305, .a=0x8b, .x=0x63, .y=0x45, .sp=0x9c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4305, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4306, .a=0x8b, .x=0x63, .y=0x8b, .sp=0x9c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x4305, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4305, .value=0xfd, .type=IO_READ},
        {.addr=0x4306, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x0507, .a=0xe3, .x=0xf9, .y=0xd2, .sp=0x61, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0507, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0508, .a=0xe3, .x=0xf9, .y=0xe3, .sp=0x61, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0507, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0507, .value=0xfd, .type=IO_READ},
        {.addr=0x0508, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x73c3, .a=0x92, .x=0x57, .y=0x91, .sp=0x52, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x73c3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x73c4, .a=0x92, .x=0x57, .y=0x92, .sp=0x52, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x73c3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x73c3, .value=0xfd, .type=IO_READ},
        {.addr=0x73c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xdd69, .a=0xb9, .x=0x38, .y=0xa0, .sp=0xf2, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xdd69, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdd6a, .a=0xb9, .x=0x38, .y=0xb9, .sp=0xf2, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xdd69, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdd69, .value=0xfd, .type=IO_READ},
        {.addr=0xdd6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x3f0d, .a=0x45, .x=0x08, .y=0x26, .sp=0xfb, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x3f0d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3f0e, .a=0x45, .x=0x08, .y=0x45, .sp=0xfb, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x3f0d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3f0d, .value=0xfd, .type=IO_READ},
        {.addr=0x3f0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x2abf, .a=0x44, .x=0x90, .y=0xda, .sp=0xb5, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x2abf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2ac0, .a=0x44, .x=0x90, .y=0x44, .sp=0xb5, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x2abf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2abf, .value=0xfd, .type=IO_READ},
        {.addr=0x2ac0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xa7f3, .a=0x2b, .x=0xd9, .y=0x96, .sp=0xb1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xa7f3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa7f4, .a=0x2b, .x=0xd9, .y=0x2b, .sp=0xb1, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa7f3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa7f3, .value=0xfd, .type=IO_READ},
        {.addr=0xa7f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xd0df, .a=0x2b, .x=0xac, .y=0x98, .sp=0x06, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd0df, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd0e0, .a=0x2b, .x=0xac, .y=0x2b, .sp=0x06, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xd0df, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd0df, .value=0xfd, .type=IO_READ},
        {.addr=0xd0e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x5c94, .a=0xf0, .x=0x25, .y=0xd4, .sp=0xe6, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x5c94, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5c95, .a=0xf0, .x=0x25, .y=0xf0, .sp=0xe6, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5c94, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5c94, .value=0xfd, .type=IO_READ},
        {.addr=0x5c95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x5c7f, .a=0xb1, .x=0xd9, .y=0xc4, .sp=0xd2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x5c7f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5c80, .a=0xb1, .x=0xd9, .y=0xb1, .sp=0xd2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5c7f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5c7f, .value=0xfd, .type=IO_READ},
        {.addr=0x5c80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xd75c, .a=0x0a, .x=0x47, .y=0x37, .sp=0x5e, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xd75c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd75d, .a=0x0a, .x=0x47, .y=0x0a, .sp=0x5e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd75c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd75c, .value=0xfd, .type=IO_READ},
        {.addr=0xd75d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0100) {
    const struct CPU_State initial_cpu = {.pc=0xc6bc, .a=0x0b, .x=0x7b, .y=0xc8, .sp=0xfb, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc6bc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc6bd, .a=0x0b, .x=0x7b, .y=0x0b, .sp=0xfb, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc6bc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc6bc, .value=0xfd, .type=IO_READ},
        {.addr=0xc6bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0101) {
    const struct CPU_State initial_cpu = {.pc=0x9640, .a=0x26, .x=0x21, .y=0xd2, .sp=0x79, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x9640, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9641, .a=0x26, .x=0x21, .y=0x26, .sp=0x79, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9640, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9640, .value=0xfd, .type=IO_READ},
        {.addr=0x9641, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0102) {
    const struct CPU_State initial_cpu = {.pc=0x01c5, .a=0x32, .x=0x5f, .y=0x43, .sp=0x89, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x01c6, .a=0x32, .x=0x5f, .y=0x32, .sp=0x89, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x01c5, .value=0xfd, .type=IO_READ},
        {.addr=0x01c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0103) {
    const struct CPU_State initial_cpu = {.pc=0x076f, .a=0xda, .x=0x93, .y=0x6f, .sp=0x25, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x076f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0770, .a=0xda, .x=0x93, .y=0xda, .sp=0x25, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x076f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x076f, .value=0xfd, .type=IO_READ},
        {.addr=0x0770, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0104) {
    const struct CPU_State initial_cpu = {.pc=0x0f42, .a=0x2f, .x=0x00, .y=0xb8, .sp=0xca, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0f42, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0f43, .a=0x2f, .x=0x00, .y=0x2f, .sp=0xca, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0f42, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0f42, .value=0xfd, .type=IO_READ},
        {.addr=0x0f43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0105) {
    const struct CPU_State initial_cpu = {.pc=0x0ebf, .a=0xc2, .x=0x19, .y=0x57, .sp=0x78, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0ebf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0ec0, .a=0xc2, .x=0x19, .y=0xc2, .sp=0x78, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0ebf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0ebf, .value=0xfd, .type=IO_READ},
        {.addr=0x0ec0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0106) {
    const struct CPU_State initial_cpu = {.pc=0xfd1f, .a=0xb1, .x=0x9e, .y=0xc6, .sp=0x03, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfd20, .a=0xb1, .x=0x9e, .y=0xb1, .sp=0x03, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xfd1f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfd1f, .value=0xfd, .type=IO_READ},
        {.addr=0xfd20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0107) {
    const struct CPU_State initial_cpu = {.pc=0x0714, .a=0xc2, .x=0x09, .y=0x00, .sp=0xd9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0714, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0715, .a=0xc2, .x=0x09, .y=0xc2, .sp=0xd9, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0714, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0714, .value=0xfd, .type=IO_READ},
        {.addr=0x0715, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0108) {
    const struct CPU_State initial_cpu = {.pc=0x85b7, .a=0x4b, .x=0x62, .y=0x5e, .sp=0x61, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x85b7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x85b8, .a=0x4b, .x=0x62, .y=0x4b, .sp=0x61, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x85b7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x85b7, .value=0xfd, .type=IO_READ},
        {.addr=0x85b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0109) {
    const struct CPU_State initial_cpu = {.pc=0xe356, .a=0xa3, .x=0x72, .y=0xe0, .sp=0xa0, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xe356, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe357, .a=0xa3, .x=0x72, .y=0xa3, .sp=0xa0, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe356, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe356, .value=0xfd, .type=IO_READ},
        {.addr=0xe357, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_010A) {
    const struct CPU_State initial_cpu = {.pc=0xd5c0, .a=0x11, .x=0x45, .y=0x22, .sp=0x30, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd5c1, .a=0x11, .x=0x45, .y=0x11, .sp=0x30, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xd5c0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd5c0, .value=0xfd, .type=IO_READ},
        {.addr=0xd5c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_010B) {
    const struct CPU_State initial_cpu = {.pc=0xc9f7, .a=0x61, .x=0xd7, .y=0x64, .sp=0xe1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc9f8, .a=0x61, .x=0xd7, .y=0x61, .sp=0xe1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc9f7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc9f7, .value=0xfd, .type=IO_READ},
        {.addr=0xc9f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_010C) {
    const struct CPU_State initial_cpu = {.pc=0x4dc6, .a=0xfc, .x=0x8d, .y=0x74, .sp=0x79, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4dc7, .a=0xfc, .x=0x8d, .y=0xfc, .sp=0x79, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x4dc6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4dc6, .value=0xfd, .type=IO_READ},
        {.addr=0x4dc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_010D) {
    const struct CPU_State initial_cpu = {.pc=0x25b7, .a=0xc0, .x=0x69, .y=0xe0, .sp=0xd9, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x25b7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x25b8, .a=0xc0, .x=0x69, .y=0xc0, .sp=0xd9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x25b7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x25b7, .value=0xfd, .type=IO_READ},
        {.addr=0x25b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_010E) {
    const struct CPU_State initial_cpu = {.pc=0x6252, .a=0x8f, .x=0x14, .y=0xfb, .sp=0xe1, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x6252, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6253, .a=0x8f, .x=0x14, .y=0x8f, .sp=0xe1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6252, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6252, .value=0xfd, .type=IO_READ},
        {.addr=0x6253, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_010F) {
    const struct CPU_State initial_cpu = {.pc=0x4531, .a=0xaf, .x=0x78, .y=0xed, .sp=0x08, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4531, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4532, .a=0xaf, .x=0x78, .y=0xaf, .sp=0x08, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4531, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4531, .value=0xfd, .type=IO_READ},
        {.addr=0x4532, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0110) {
    const struct CPU_State initial_cpu = {.pc=0x21b7, .a=0xd9, .x=0x26, .y=0xa7, .sp=0xd5, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x21b7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x21b8, .a=0xd9, .x=0x26, .y=0xd9, .sp=0xd5, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x21b7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x21b7, .value=0xfd, .type=IO_READ},
        {.addr=0x21b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0111) {
    const struct CPU_State initial_cpu = {.pc=0x0c9d, .a=0x89, .x=0xb4, .y=0x80, .sp=0x8b, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0c9d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0c9e, .a=0x89, .x=0xb4, .y=0x89, .sp=0x8b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0c9d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0c9d, .value=0xfd, .type=IO_READ},
        {.addr=0x0c9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0112) {
    const struct CPU_State initial_cpu = {.pc=0xb22a, .a=0x62, .x=0x39, .y=0x94, .sp=0x19, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xb22a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb22b, .a=0x62, .x=0x39, .y=0x62, .sp=0x19, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xb22a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb22a, .value=0xfd, .type=IO_READ},
        {.addr=0xb22b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0113) {
    const struct CPU_State initial_cpu = {.pc=0x6855, .a=0x21, .x=0x0a, .y=0x2c, .sp=0x61, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x6855, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6856, .a=0x21, .x=0x0a, .y=0x21, .sp=0x61, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6855, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6855, .value=0xfd, .type=IO_READ},
        {.addr=0x6856, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0114) {
    const struct CPU_State initial_cpu = {.pc=0x18c4, .a=0xcb, .x=0xa8, .y=0xf9, .sp=0x9e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x18c4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x18c5, .a=0xcb, .x=0xa8, .y=0xcb, .sp=0x9e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x18c4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x18c4, .value=0xfd, .type=IO_READ},
        {.addr=0x18c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0115) {
    const struct CPU_State initial_cpu = {.pc=0xf4cf, .a=0xf1, .x=0xd9, .y=0xf0, .sp=0x49, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xf4cf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf4d0, .a=0xf1, .x=0xd9, .y=0xf1, .sp=0x49, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf4cf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf4cf, .value=0xfd, .type=IO_READ},
        {.addr=0xf4d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0116) {
    const struct CPU_State initial_cpu = {.pc=0x1628, .a=0x43, .x=0xa5, .y=0x6d, .sp=0xf5, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x1628, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1629, .a=0x43, .x=0xa5, .y=0x43, .sp=0xf5, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1628, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1628, .value=0xfd, .type=IO_READ},
        {.addr=0x1629, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0117) {
    const struct CPU_State initial_cpu = {.pc=0xfde8, .a=0xc2, .x=0xa7, .y=0x4e, .sp=0xcf, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xfde8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfde9, .a=0xc2, .x=0xa7, .y=0xc2, .sp=0xcf, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xfde8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfde8, .value=0xfd, .type=IO_READ},
        {.addr=0xfde9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0118) {
    const struct CPU_State initial_cpu = {.pc=0x16f2, .a=0x15, .x=0x03, .y=0x7c, .sp=0xb8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x16f2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x16f3, .a=0x15, .x=0x03, .y=0x15, .sp=0xb8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x16f2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x16f2, .value=0xfd, .type=IO_READ},
        {.addr=0x16f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0119) {
    const struct CPU_State initial_cpu = {.pc=0x9bbc, .a=0x37, .x=0xb3, .y=0x07, .sp=0xe9, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9bbc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9bbd, .a=0x37, .x=0xb3, .y=0x37, .sp=0xe9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9bbc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9bbc, .value=0xfd, .type=IO_READ},
        {.addr=0x9bbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_011A) {
    const struct CPU_State initial_cpu = {.pc=0x4235, .a=0x30, .x=0xe4, .y=0xd3, .sp=0x1a, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x4235, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4236, .a=0x30, .x=0xe4, .y=0x30, .sp=0x1a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4235, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4235, .value=0xfd, .type=IO_READ},
        {.addr=0x4236, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_011B) {
    const struct CPU_State initial_cpu = {.pc=0x1bbf, .a=0x63, .x=0x69, .y=0x6d, .sp=0x0b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x1bbf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1bc0, .a=0x63, .x=0x69, .y=0x63, .sp=0x0b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x1bbf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1bbf, .value=0xfd, .type=IO_READ},
        {.addr=0x1bc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_011C) {
    const struct CPU_State initial_cpu = {.pc=0xcd04, .a=0xbe, .x=0xc0, .y=0x82, .sp=0xfe, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xcd04, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcd05, .a=0xbe, .x=0xc0, .y=0xbe, .sp=0xfe, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xcd04, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcd04, .value=0xfd, .type=IO_READ},
        {.addr=0xcd05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_011D) {
    const struct CPU_State initial_cpu = {.pc=0xa1be, .a=0x2e, .x=0xf0, .y=0xb3, .sp=0x45, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xa1be, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa1bf, .a=0x2e, .x=0xf0, .y=0x2e, .sp=0x45, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa1be, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa1be, .value=0xfd, .type=IO_READ},
        {.addr=0xa1bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_011E) {
    const struct CPU_State initial_cpu = {.pc=0x895b, .a=0x22, .x=0x3c, .y=0xb1, .sp=0xa7, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x895b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x895c, .a=0x22, .x=0x3c, .y=0x22, .sp=0xa7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x895b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x895b, .value=0xfd, .type=IO_READ},
        {.addr=0x895c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_011F) {
    const struct CPU_State initial_cpu = {.pc=0x642a, .a=0xaa, .x=0xb9, .y=0x07, .sp=0xfb, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x642a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x642b, .a=0xaa, .x=0xb9, .y=0xaa, .sp=0xfb, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x642a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x642a, .value=0xfd, .type=IO_READ},
        {.addr=0x642b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0120) {
    const struct CPU_State initial_cpu = {.pc=0xf039, .a=0x9c, .x=0x22, .y=0x4e, .sp=0x10, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xf039, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf03a, .a=0x9c, .x=0x22, .y=0x9c, .sp=0x10, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf039, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf039, .value=0xfd, .type=IO_READ},
        {.addr=0xf03a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0121) {
    const struct CPU_State initial_cpu = {.pc=0xdb36, .a=0x60, .x=0x7f, .y=0x7a, .sp=0x4c, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xdb36, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdb37, .a=0x60, .x=0x7f, .y=0x60, .sp=0x4c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xdb36, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdb36, .value=0xfd, .type=IO_READ},
        {.addr=0xdb37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0122) {
    const struct CPU_State initial_cpu = {.pc=0x915d, .a=0xa6, .x=0x0f, .y=0xa9, .sp=0xab, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x915d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x915e, .a=0xa6, .x=0x0f, .y=0xa6, .sp=0xab, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x915d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x915d, .value=0xfd, .type=IO_READ},
        {.addr=0x915e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0123) {
    const struct CPU_State initial_cpu = {.pc=0xa3a5, .a=0x9b, .x=0x6f, .y=0x2e, .sp=0x6d, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa3a5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa3a6, .a=0x9b, .x=0x6f, .y=0x9b, .sp=0x6d, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xa3a5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa3a5, .value=0xfd, .type=IO_READ},
        {.addr=0xa3a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0124) {
    const struct CPU_State initial_cpu = {.pc=0xb7de, .a=0x91, .x=0x19, .y=0x95, .sp=0xf9, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xb7de, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb7df, .a=0x91, .x=0x19, .y=0x91, .sp=0xf9, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xb7de, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb7de, .value=0xfd, .type=IO_READ},
        {.addr=0xb7df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0125) {
    const struct CPU_State initial_cpu = {.pc=0xeb72, .a=0x81, .x=0x0b, .y=0x50, .sp=0xa9, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xeb72, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xeb73, .a=0x81, .x=0x0b, .y=0x81, .sp=0xa9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xeb72, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xeb72, .value=0xfd, .type=IO_READ},
        {.addr=0xeb73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0126) {
    const struct CPU_State initial_cpu = {.pc=0x29ab, .a=0xbf, .x=0xba, .y=0xd1, .sp=0x5a, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x29ab, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x29ac, .a=0xbf, .x=0xba, .y=0xbf, .sp=0x5a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x29ab, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x29ab, .value=0xfd, .type=IO_READ},
        {.addr=0x29ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0127) {
    const struct CPU_State initial_cpu = {.pc=0x198d, .a=0xa5, .x=0xc7, .y=0x98, .sp=0xaa, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x198d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x198e, .a=0xa5, .x=0xc7, .y=0xa5, .sp=0xaa, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x198d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x198d, .value=0xfd, .type=IO_READ},
        {.addr=0x198e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0128) {
    const struct CPU_State initial_cpu = {.pc=0x9f96, .a=0x67, .x=0x95, .y=0x95, .sp=0xb3, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x9f96, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9f97, .a=0x67, .x=0x95, .y=0x67, .sp=0xb3, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9f96, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9f96, .value=0xfd, .type=IO_READ},
        {.addr=0x9f97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0129) {
    const struct CPU_State initial_cpu = {.pc=0x296b, .a=0xa9, .x=0xd6, .y=0x6d, .sp=0xde, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x296b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x296c, .a=0xa9, .x=0xd6, .y=0xa9, .sp=0xde, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x296b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x296b, .value=0xfd, .type=IO_READ},
        {.addr=0x296c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_012A) {
    const struct CPU_State initial_cpu = {.pc=0xcbb6, .a=0xa6, .x=0x02, .y=0x4e, .sp=0xbc, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xcbb6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcbb7, .a=0xa6, .x=0x02, .y=0xa6, .sp=0xbc, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xcbb6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcbb6, .value=0xfd, .type=IO_READ},
        {.addr=0xcbb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_012B) {
    const struct CPU_State initial_cpu = {.pc=0xc490, .a=0xa0, .x=0x00, .y=0xc3, .sp=0xdf, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xc490, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc491, .a=0xa0, .x=0x00, .y=0xa0, .sp=0xdf, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xc490, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc490, .value=0xfd, .type=IO_READ},
        {.addr=0xc491, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_012C) {
    const struct CPU_State initial_cpu = {.pc=0xc327, .a=0xa3, .x=0xf0, .y=0x3f, .sp=0xdb, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc327, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc328, .a=0xa3, .x=0xf0, .y=0xa3, .sp=0xdb, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc327, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc327, .value=0xfd, .type=IO_READ},
        {.addr=0xc328, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_012D) {
    const struct CPU_State initial_cpu = {.pc=0x9299, .a=0x1a, .x=0xe7, .y=0x2f, .sp=0x90, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x9299, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x929a, .a=0x1a, .x=0xe7, .y=0x1a, .sp=0x90, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9299, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9299, .value=0xfd, .type=IO_READ},
        {.addr=0x929a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_012E) {
    const struct CPU_State initial_cpu = {.pc=0x8c7e, .a=0x5e, .x=0xd0, .y=0x45, .sp=0x58, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x8c7e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8c7f, .a=0x5e, .x=0xd0, .y=0x5e, .sp=0x58, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8c7e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8c7e, .value=0xfd, .type=IO_READ},
        {.addr=0x8c7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_012F) {
    const struct CPU_State initial_cpu = {.pc=0x8a1d, .a=0x67, .x=0x41, .y=0xf5, .sp=0x37, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x8a1d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8a1e, .a=0x67, .x=0x41, .y=0x67, .sp=0x37, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8a1d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8a1d, .value=0xfd, .type=IO_READ},
        {.addr=0x8a1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0130) {
    const struct CPU_State initial_cpu = {.pc=0x5f66, .a=0xcd, .x=0xdd, .y=0xd8, .sp=0xed, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x5f66, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5f67, .a=0xcd, .x=0xdd, .y=0xcd, .sp=0xed, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5f66, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5f66, .value=0xfd, .type=IO_READ},
        {.addr=0x5f67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0131) {
    const struct CPU_State initial_cpu = {.pc=0x0983, .a=0x0c, .x=0xa8, .y=0x58, .sp=0xf2, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0983, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0984, .a=0x0c, .x=0xa8, .y=0x0c, .sp=0xf2, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0983, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0983, .value=0xfd, .type=IO_READ},
        {.addr=0x0984, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0132) {
    const struct CPU_State initial_cpu = {.pc=0x4e48, .a=0x53, .x=0x54, .y=0x15, .sp=0x59, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x4e48, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4e49, .a=0x53, .x=0x54, .y=0x53, .sp=0x59, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4e48, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4e48, .value=0xfd, .type=IO_READ},
        {.addr=0x4e49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0133) {
    const struct CPU_State initial_cpu = {.pc=0x8047, .a=0xed, .x=0x4a, .y=0x84, .sp=0x36, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8047, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8048, .a=0xed, .x=0x4a, .y=0xed, .sp=0x36, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8047, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8047, .value=0xfd, .type=IO_READ},
        {.addr=0x8048, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0134) {
    const struct CPU_State initial_cpu = {.pc=0x0a29, .a=0xdb, .x=0x91, .y=0x6e, .sp=0xc4, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0a29, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0a2a, .a=0xdb, .x=0x91, .y=0xdb, .sp=0xc4, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0a29, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0a29, .value=0xfd, .type=IO_READ},
        {.addr=0x0a2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0135) {
    const struct CPU_State initial_cpu = {.pc=0xcee4, .a=0x8f, .x=0x8a, .y=0xce, .sp=0x87, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xcee4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcee5, .a=0x8f, .x=0x8a, .y=0x8f, .sp=0x87, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xcee4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcee4, .value=0xfd, .type=IO_READ},
        {.addr=0xcee5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0136) {
    const struct CPU_State initial_cpu = {.pc=0x716b, .a=0xd9, .x=0x7e, .y=0x67, .sp=0x4e, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x716b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x716c, .a=0xd9, .x=0x7e, .y=0xd9, .sp=0x4e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x716b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x716b, .value=0xfd, .type=IO_READ},
        {.addr=0x716c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0137) {
    const struct CPU_State initial_cpu = {.pc=0x22f6, .a=0x4b, .x=0x18, .y=0x0f, .sp=0x93, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x22f6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x22f7, .a=0x4b, .x=0x18, .y=0x4b, .sp=0x93, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x22f6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x22f6, .value=0xfd, .type=IO_READ},
        {.addr=0x22f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0138) {
    const struct CPU_State initial_cpu = {.pc=0xa973, .a=0x0f, .x=0x64, .y=0xfc, .sp=0xf4, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa973, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa974, .a=0x0f, .x=0x64, .y=0x0f, .sp=0xf4, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa973, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa973, .value=0xfd, .type=IO_READ},
        {.addr=0xa974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0139) {
    const struct CPU_State initial_cpu = {.pc=0xe768, .a=0xfa, .x=0x4f, .y=0x11, .sp=0x8d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe768, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe769, .a=0xfa, .x=0x4f, .y=0xfa, .sp=0x8d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xe768, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe768, .value=0xfd, .type=IO_READ},
        {.addr=0xe769, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_013A) {
    const struct CPU_State initial_cpu = {.pc=0xde3b, .a=0x78, .x=0x81, .y=0x7f, .sp=0x8b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xde3b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xde3c, .a=0x78, .x=0x81, .y=0x78, .sp=0x8b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xde3b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xde3b, .value=0xfd, .type=IO_READ},
        {.addr=0xde3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_013B) {
    const struct CPU_State initial_cpu = {.pc=0xceb2, .a=0x1e, .x=0xd8, .y=0x9f, .sp=0xc9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xceb2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xceb3, .a=0x1e, .x=0xd8, .y=0x1e, .sp=0xc9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xceb2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xceb2, .value=0xfd, .type=IO_READ},
        {.addr=0xceb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_013C) {
    const struct CPU_State initial_cpu = {.pc=0x50e1, .a=0xea, .x=0xb4, .y=0xa2, .sp=0x4f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x50e1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x50e2, .a=0xea, .x=0xb4, .y=0xea, .sp=0x4f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x50e1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x50e1, .value=0xfd, .type=IO_READ},
        {.addr=0x50e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_013D) {
    const struct CPU_State initial_cpu = {.pc=0x6690, .a=0x36, .x=0x10, .y=0x01, .sp=0x36, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6690, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6691, .a=0x36, .x=0x10, .y=0x36, .sp=0x36, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6690, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6690, .value=0xfd, .type=IO_READ},
        {.addr=0x6691, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_013E) {
    const struct CPU_State initial_cpu = {.pc=0xd91e, .a=0x76, .x=0xee, .y=0xdd, .sp=0x27, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xd91e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd91f, .a=0x76, .x=0xee, .y=0x76, .sp=0x27, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd91e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd91e, .value=0xfd, .type=IO_READ},
        {.addr=0xd91f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_013F) {
    const struct CPU_State initial_cpu = {.pc=0x277c, .a=0x4b, .x=0xf8, .y=0x55, .sp=0xb3, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x277c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x277d, .a=0x4b, .x=0xf8, .y=0x4b, .sp=0xb3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x277c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x277c, .value=0xfd, .type=IO_READ},
        {.addr=0x277d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0140) {
    const struct CPU_State initial_cpu = {.pc=0x94c0, .a=0xee, .x=0x82, .y=0x67, .sp=0x2d, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x94c0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x94c1, .a=0xee, .x=0x82, .y=0xee, .sp=0x2d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x94c0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x94c0, .value=0xfd, .type=IO_READ},
        {.addr=0x94c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0141) {
    const struct CPU_State initial_cpu = {.pc=0xe675, .a=0x37, .x=0xe7, .y=0xcc, .sp=0x72, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe675, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe676, .a=0x37, .x=0xe7, .y=0x37, .sp=0x72, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe675, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe675, .value=0xfd, .type=IO_READ},
        {.addr=0xe676, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0142) {
    const struct CPU_State initial_cpu = {.pc=0x4c18, .a=0x5b, .x=0x57, .y=0x8d, .sp=0xfc, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x4c18, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4c19, .a=0x5b, .x=0x57, .y=0x5b, .sp=0xfc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4c18, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4c18, .value=0xfd, .type=IO_READ},
        {.addr=0x4c19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0143) {
    const struct CPU_State initial_cpu = {.pc=0x8391, .a=0x07, .x=0x60, .y=0xd6, .sp=0x2e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x8391, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8392, .a=0x07, .x=0x60, .y=0x07, .sp=0x2e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x8391, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8391, .value=0xfd, .type=IO_READ},
        {.addr=0x8392, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0144) {
    const struct CPU_State initial_cpu = {.pc=0xf236, .a=0xd8, .x=0xe4, .y=0x42, .sp=0xd6, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xf236, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf237, .a=0xd8, .x=0xe4, .y=0xd8, .sp=0xd6, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf236, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf236, .value=0xfd, .type=IO_READ},
        {.addr=0xf237, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0145) {
    const struct CPU_State initial_cpu = {.pc=0xc800, .a=0x69, .x=0x43, .y=0xe9, .sp=0x22, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xc800, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc801, .a=0x69, .x=0x43, .y=0x69, .sp=0x22, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc800, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc800, .value=0xfd, .type=IO_READ},
        {.addr=0xc801, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0146) {
    const struct CPU_State initial_cpu = {.pc=0x3d9d, .a=0x18, .x=0xe0, .y=0x33, .sp=0xba, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x3d9d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3d9e, .a=0x18, .x=0xe0, .y=0x18, .sp=0xba, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3d9d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3d9d, .value=0xfd, .type=IO_READ},
        {.addr=0x3d9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0147) {
    const struct CPU_State initial_cpu = {.pc=0xc887, .a=0x7b, .x=0xc8, .y=0xcd, .sp=0xf0, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc887, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc888, .a=0x7b, .x=0xc8, .y=0x7b, .sp=0xf0, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc887, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc887, .value=0xfd, .type=IO_READ},
        {.addr=0xc888, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0148) {
    const struct CPU_State initial_cpu = {.pc=0xe61a, .a=0x04, .x=0x2e, .y=0x45, .sp=0x56, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xe61a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe61b, .a=0x04, .x=0x2e, .y=0x04, .sp=0x56, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe61a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe61a, .value=0xfd, .type=IO_READ},
        {.addr=0xe61b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0149) {
    const struct CPU_State initial_cpu = {.pc=0xb3df, .a=0x13, .x=0xe1, .y=0x8c, .sp=0x0c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb3df, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb3e0, .a=0x13, .x=0xe1, .y=0x13, .sp=0x0c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb3df, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb3df, .value=0xfd, .type=IO_READ},
        {.addr=0xb3e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_014A) {
    const struct CPU_State initial_cpu = {.pc=0x8564, .a=0x12, .x=0x33, .y=0xda, .sp=0x6a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x8564, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8565, .a=0x12, .x=0x33, .y=0x12, .sp=0x6a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8564, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8564, .value=0xfd, .type=IO_READ},
        {.addr=0x8565, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_014B) {
    const struct CPU_State initial_cpu = {.pc=0x16c0, .a=0xdb, .x=0x4b, .y=0xed, .sp=0x67, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x16c0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x16c1, .a=0xdb, .x=0x4b, .y=0xdb, .sp=0x67, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x16c0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x16c0, .value=0xfd, .type=IO_READ},
        {.addr=0x16c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_014C) {
    const struct CPU_State initial_cpu = {.pc=0x680c, .a=0x6a, .x=0xb4, .y=0x17, .sp=0x74, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x680c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x680d, .a=0x6a, .x=0xb4, .y=0x6a, .sp=0x74, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x680c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x680c, .value=0xfd, .type=IO_READ},
        {.addr=0x680d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_014D) {
    const struct CPU_State initial_cpu = {.pc=0xf456, .a=0x9d, .x=0xe6, .y=0x9a, .sp=0xa7, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf456, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf457, .a=0x9d, .x=0xe6, .y=0x9d, .sp=0xa7, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xf456, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf456, .value=0xfd, .type=IO_READ},
        {.addr=0xf457, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_014E) {
    const struct CPU_State initial_cpu = {.pc=0x5c6e, .a=0xf5, .x=0x33, .y=0x0c, .sp=0xed, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x5c6e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5c6f, .a=0xf5, .x=0x33, .y=0xf5, .sp=0xed, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5c6e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5c6e, .value=0xfd, .type=IO_READ},
        {.addr=0x5c6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_014F) {
    const struct CPU_State initial_cpu = {.pc=0x944c, .a=0x02, .x=0x52, .y=0x4c, .sp=0xc7, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x944c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x944d, .a=0x02, .x=0x52, .y=0x02, .sp=0xc7, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x944c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x944c, .value=0xfd, .type=IO_READ},
        {.addr=0x944d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0150) {
    const struct CPU_State initial_cpu = {.pc=0x9c9e, .a=0xa2, .x=0xac, .y=0x4e, .sp=0xf2, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9c9e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9c9f, .a=0xa2, .x=0xac, .y=0xa2, .sp=0xf2, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9c9e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9c9e, .value=0xfd, .type=IO_READ},
        {.addr=0x9c9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0151) {
    const struct CPU_State initial_cpu = {.pc=0x1c6c, .a=0x40, .x=0x50, .y=0x22, .sp=0x50, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1c6c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1c6d, .a=0x40, .x=0x50, .y=0x40, .sp=0x50, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x1c6c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1c6c, .value=0xfd, .type=IO_READ},
        {.addr=0x1c6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0152) {
    const struct CPU_State initial_cpu = {.pc=0xc292, .a=0x69, .x=0xa6, .y=0x9e, .sp=0x66, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc292, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc293, .a=0x69, .x=0xa6, .y=0x69, .sp=0x66, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc292, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc292, .value=0xfd, .type=IO_READ},
        {.addr=0xc293, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0153) {
    const struct CPU_State initial_cpu = {.pc=0xc5f5, .a=0xd6, .x=0xb2, .y=0xba, .sp=0x99, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xc5f5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc5f6, .a=0xd6, .x=0xb2, .y=0xd6, .sp=0x99, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xc5f5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc5f5, .value=0xfd, .type=IO_READ},
        {.addr=0xc5f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0154) {
    const struct CPU_State initial_cpu = {.pc=0x4424, .a=0x62, .x=0x7b, .y=0x98, .sp=0xb4, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x4424, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4425, .a=0x62, .x=0x7b, .y=0x62, .sp=0xb4, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4424, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4424, .value=0xfd, .type=IO_READ},
        {.addr=0x4425, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0155) {
    const struct CPU_State initial_cpu = {.pc=0x9d52, .a=0xb1, .x=0xce, .y=0xb2, .sp=0xa5, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x9d52, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9d53, .a=0xb1, .x=0xce, .y=0xb1, .sp=0xa5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9d52, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9d52, .value=0xfd, .type=IO_READ},
        {.addr=0x9d53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0156) {
    const struct CPU_State initial_cpu = {.pc=0xe214, .a=0x6a, .x=0x26, .y=0xbe, .sp=0xd7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe214, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe215, .a=0x6a, .x=0x26, .y=0x6a, .sp=0xd7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe214, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe214, .value=0xfd, .type=IO_READ},
        {.addr=0xe215, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0157) {
    const struct CPU_State initial_cpu = {.pc=0xe4f6, .a=0x61, .x=0x03, .y=0x02, .sp=0x18, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe4f7, .a=0x61, .x=0x03, .y=0x61, .sp=0x18, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xe4f6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe4f6, .value=0xfd, .type=IO_READ},
        {.addr=0xe4f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0158) {
    const struct CPU_State initial_cpu = {.pc=0x1719, .a=0x4d, .x=0xd8, .y=0x57, .sp=0xfa, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x1719, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x171a, .a=0x4d, .x=0xd8, .y=0x4d, .sp=0xfa, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1719, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1719, .value=0xfd, .type=IO_READ},
        {.addr=0x171a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0159) {
    const struct CPU_State initial_cpu = {.pc=0x5fa9, .a=0x65, .x=0xa5, .y=0xde, .sp=0xa6, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5faa, .a=0x65, .x=0xa5, .y=0x65, .sp=0xa6, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5fa9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5fa9, .value=0xfd, .type=IO_READ},
        {.addr=0x5faa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_015A) {
    const struct CPU_State initial_cpu = {.pc=0xaa01, .a=0x11, .x=0xe6, .y=0x71, .sp=0x49, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xaa01, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaa02, .a=0x11, .x=0xe6, .y=0x11, .sp=0x49, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xaa01, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaa01, .value=0xfd, .type=IO_READ},
        {.addr=0xaa02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_015B) {
    const struct CPU_State initial_cpu = {.pc=0xa9f2, .a=0x21, .x=0x86, .y=0x9e, .sp=0x53, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xa9f2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa9f3, .a=0x21, .x=0x86, .y=0x21, .sp=0x53, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xa9f2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa9f2, .value=0xfd, .type=IO_READ},
        {.addr=0xa9f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_015C) {
    const struct CPU_State initial_cpu = {.pc=0x54ea, .a=0xa6, .x=0x28, .y=0x81, .sp=0xe8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x54ea, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x54eb, .a=0xa6, .x=0x28, .y=0xa6, .sp=0xe8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x54ea, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x54ea, .value=0xfd, .type=IO_READ},
        {.addr=0x54eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_015D) {
    const struct CPU_State initial_cpu = {.pc=0x69c5, .a=0x4b, .x=0x15, .y=0x98, .sp=0x28, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x69c5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x69c6, .a=0x4b, .x=0x15, .y=0x4b, .sp=0x28, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x69c5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x69c5, .value=0xfd, .type=IO_READ},
        {.addr=0x69c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_015E) {
    const struct CPU_State initial_cpu = {.pc=0xb740, .a=0xd4, .x=0x3c, .y=0x0e, .sp=0x03, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xb740, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb741, .a=0xd4, .x=0x3c, .y=0xd4, .sp=0x03, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb740, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb740, .value=0xfd, .type=IO_READ},
        {.addr=0xb741, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_015F) {
    const struct CPU_State initial_cpu = {.pc=0xa989, .a=0x85, .x=0x79, .y=0xb1, .sp=0x58, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xa989, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa98a, .a=0x85, .x=0x79, .y=0x85, .sp=0x58, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa989, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa989, .value=0xfd, .type=IO_READ},
        {.addr=0xa98a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0160) {
    const struct CPU_State initial_cpu = {.pc=0x59b3, .a=0xb7, .x=0xbb, .y=0x07, .sp=0x9c, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x59b3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x59b4, .a=0xb7, .x=0xbb, .y=0xb7, .sp=0x9c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x59b3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x59b3, .value=0xfd, .type=IO_READ},
        {.addr=0x59b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0161) {
    const struct CPU_State initial_cpu = {.pc=0x6106, .a=0x56, .x=0x17, .y=0xf9, .sp=0xa1, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x6106, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6107, .a=0x56, .x=0x17, .y=0x56, .sp=0xa1, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6106, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6106, .value=0xfd, .type=IO_READ},
        {.addr=0x6107, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0162) {
    const struct CPU_State initial_cpu = {.pc=0xec20, .a=0xe5, .x=0xb6, .y=0x31, .sp=0xeb, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xec20, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xec21, .a=0xe5, .x=0xb6, .y=0xe5, .sp=0xeb, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xec20, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xec20, .value=0xfd, .type=IO_READ},
        {.addr=0xec21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0163) {
    const struct CPU_State initial_cpu = {.pc=0x2a0f, .a=0x39, .x=0x51, .y=0x63, .sp=0x51, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x2a0f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2a10, .a=0x39, .x=0x51, .y=0x39, .sp=0x51, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2a0f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2a0f, .value=0xfd, .type=IO_READ},
        {.addr=0x2a10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0164) {
    const struct CPU_State initial_cpu = {.pc=0x4858, .a=0x64, .x=0x06, .y=0x8a, .sp=0xdb, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x4858, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4859, .a=0x64, .x=0x06, .y=0x64, .sp=0xdb, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x4858, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4858, .value=0xfd, .type=IO_READ},
        {.addr=0x4859, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0165) {
    const struct CPU_State initial_cpu = {.pc=0x29e0, .a=0x76, .x=0xe5, .y=0x5d, .sp=0x55, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x29e0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x29e1, .a=0x76, .x=0xe5, .y=0x76, .sp=0x55, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x29e0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x29e0, .value=0xfd, .type=IO_READ},
        {.addr=0x29e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0166) {
    const struct CPU_State initial_cpu = {.pc=0x75e5, .a=0xbf, .x=0x0a, .y=0xcd, .sp=0x2d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x75e5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x75e6, .a=0xbf, .x=0x0a, .y=0xbf, .sp=0x2d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x75e5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x75e5, .value=0xfd, .type=IO_READ},
        {.addr=0x75e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0167) {
    const struct CPU_State initial_cpu = {.pc=0xa464, .a=0xbb, .x=0x0b, .y=0x47, .sp=0x10, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa464, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa465, .a=0xbb, .x=0x0b, .y=0xbb, .sp=0x10, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa464, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa464, .value=0xfd, .type=IO_READ},
        {.addr=0xa465, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0168) {
    const struct CPU_State initial_cpu = {.pc=0xdf44, .a=0xe9, .x=0x9a, .y=0x90, .sp=0x2b, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xdf44, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdf45, .a=0xe9, .x=0x9a, .y=0xe9, .sp=0x2b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdf44, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdf44, .value=0xfd, .type=IO_READ},
        {.addr=0xdf45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0169) {
    const struct CPU_State initial_cpu = {.pc=0x9c90, .a=0x99, .x=0x0e, .y=0xe6, .sp=0x75, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x9c90, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9c91, .a=0x99, .x=0x0e, .y=0x99, .sp=0x75, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9c90, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9c90, .value=0xfd, .type=IO_READ},
        {.addr=0x9c91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_016A) {
    const struct CPU_State initial_cpu = {.pc=0x46a0, .a=0x09, .x=0x9f, .y=0xfa, .sp=0x27, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x46a0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x46a1, .a=0x09, .x=0x9f, .y=0x09, .sp=0x27, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x46a0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x46a0, .value=0xfd, .type=IO_READ},
        {.addr=0x46a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_016B) {
    const struct CPU_State initial_cpu = {.pc=0x5b8b, .a=0x16, .x=0x50, .y=0xe0, .sp=0x8d, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x5b8b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5b8c, .a=0x16, .x=0x50, .y=0x16, .sp=0x8d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5b8b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5b8b, .value=0xfd, .type=IO_READ},
        {.addr=0x5b8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_016C) {
    const struct CPU_State initial_cpu = {.pc=0x638b, .a=0xb9, .x=0xa3, .y=0x37, .sp=0xc1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x638b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x638c, .a=0xb9, .x=0xa3, .y=0xb9, .sp=0xc1, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x638b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x638b, .value=0xfd, .type=IO_READ},
        {.addr=0x638c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_016D) {
    const struct CPU_State initial_cpu = {.pc=0x82f5, .a=0x3f, .x=0xfb, .y=0x55, .sp=0x0f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x82f5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x82f6, .a=0x3f, .x=0xfb, .y=0x3f, .sp=0x0f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x82f5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x82f5, .value=0xfd, .type=IO_READ},
        {.addr=0x82f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_016E) {
    const struct CPU_State initial_cpu = {.pc=0xc336, .a=0xec, .x=0x97, .y=0xbe, .sp=0xdb, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xc336, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc337, .a=0xec, .x=0x97, .y=0xec, .sp=0xdb, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc336, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc336, .value=0xfd, .type=IO_READ},
        {.addr=0xc337, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_016F) {
    const struct CPU_State initial_cpu = {.pc=0xfe80, .a=0x65, .x=0xf7, .y=0x4b, .sp=0x87, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xfe80, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfe81, .a=0x65, .x=0xf7, .y=0x65, .sp=0x87, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xfe80, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfe80, .value=0xfd, .type=IO_READ},
        {.addr=0xfe81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0170) {
    const struct CPU_State initial_cpu = {.pc=0x7854, .a=0xac, .x=0x19, .y=0xdf, .sp=0x81, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x7854, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7855, .a=0xac, .x=0x19, .y=0xac, .sp=0x81, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7854, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7854, .value=0xfd, .type=IO_READ},
        {.addr=0x7855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0171) {
    const struct CPU_State initial_cpu = {.pc=0xb993, .a=0x9b, .x=0xf2, .y=0xf4, .sp=0x1c, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xb993, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb994, .a=0x9b, .x=0xf2, .y=0x9b, .sp=0x1c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb993, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb993, .value=0xfd, .type=IO_READ},
        {.addr=0xb994, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0172) {
    const struct CPU_State initial_cpu = {.pc=0x24cd, .a=0x33, .x=0x64, .y=0x06, .sp=0xc7, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x24cd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x24ce, .a=0x33, .x=0x64, .y=0x33, .sp=0xc7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x24cd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x24cd, .value=0xfd, .type=IO_READ},
        {.addr=0x24ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0173) {
    const struct CPU_State initial_cpu = {.pc=0xf8cc, .a=0x9c, .x=0x51, .y=0x9c, .sp=0x1c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xf8cc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf8cd, .a=0x9c, .x=0x51, .y=0x9c, .sp=0x1c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf8cc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf8cc, .value=0xfd, .type=IO_READ},
        {.addr=0xf8cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0174) {
    const struct CPU_State initial_cpu = {.pc=0x77b6, .a=0x96, .x=0x1a, .y=0x45, .sp=0xea, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x77b6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x77b7, .a=0x96, .x=0x1a, .y=0x96, .sp=0xea, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x77b6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x77b6, .value=0xfd, .type=IO_READ},
        {.addr=0x77b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0175) {
    const struct CPU_State initial_cpu = {.pc=0xe66d, .a=0x8d, .x=0x85, .y=0x41, .sp=0x92, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe66d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe66e, .a=0x8d, .x=0x85, .y=0x8d, .sp=0x92, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe66d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe66d, .value=0xfd, .type=IO_READ},
        {.addr=0xe66e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0176) {
    const struct CPU_State initial_cpu = {.pc=0x1aae, .a=0xa5, .x=0x89, .y=0x0a, .sp=0xb4, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x1aae, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1aaf, .a=0xa5, .x=0x89, .y=0xa5, .sp=0xb4, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1aae, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1aae, .value=0xfd, .type=IO_READ},
        {.addr=0x1aaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0177) {
    const struct CPU_State initial_cpu = {.pc=0x1897, .a=0x09, .x=0xdf, .y=0x04, .sp=0x38, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1897, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1898, .a=0x09, .x=0xdf, .y=0x09, .sp=0x38, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1897, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1897, .value=0xfd, .type=IO_READ},
        {.addr=0x1898, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0178) {
    const struct CPU_State initial_cpu = {.pc=0x02e4, .a=0x03, .x=0x8f, .y=0xf5, .sp=0xbe, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x02e4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x02e5, .a=0x03, .x=0x8f, .y=0x03, .sp=0xbe, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x02e4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x02e4, .value=0xfd, .type=IO_READ},
        {.addr=0x02e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0179) {
    const struct CPU_State initial_cpu = {.pc=0xe21b, .a=0x5f, .x=0xd2, .y=0x2e, .sp=0x3c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xe21b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe21c, .a=0x5f, .x=0xd2, .y=0x5f, .sp=0x3c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe21b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe21b, .value=0xfd, .type=IO_READ},
        {.addr=0xe21c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_017A) {
    const struct CPU_State initial_cpu = {.pc=0x9b93, .a=0x98, .x=0x6e, .y=0x54, .sp=0x0e, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x9b93, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9b94, .a=0x98, .x=0x6e, .y=0x98, .sp=0x0e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9b93, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9b93, .value=0xfd, .type=IO_READ},
        {.addr=0x9b94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_017B) {
    const struct CPU_State initial_cpu = {.pc=0x30e7, .a=0x39, .x=0xed, .y=0xb7, .sp=0x61, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x30e7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x30e8, .a=0x39, .x=0xed, .y=0x39, .sp=0x61, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x30e7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x30e7, .value=0xfd, .type=IO_READ},
        {.addr=0x30e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_017C) {
    const struct CPU_State initial_cpu = {.pc=0xc454, .a=0x42, .x=0xb2, .y=0x98, .sp=0x00, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xc454, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc455, .a=0x42, .x=0xb2, .y=0x42, .sp=0x00, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc454, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc454, .value=0xfd, .type=IO_READ},
        {.addr=0xc455, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_017D) {
    const struct CPU_State initial_cpu = {.pc=0x8976, .a=0x7a, .x=0x74, .y=0x8f, .sp=0x30, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x8976, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8977, .a=0x7a, .x=0x74, .y=0x7a, .sp=0x30, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8976, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8976, .value=0xfd, .type=IO_READ},
        {.addr=0x8977, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_017E) {
    const struct CPU_State initial_cpu = {.pc=0xa5fb, .a=0xf2, .x=0xab, .y=0x83, .sp=0xbd, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xa5fb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa5fc, .a=0xf2, .x=0xab, .y=0xf2, .sp=0xbd, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa5fb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa5fb, .value=0xfd, .type=IO_READ},
        {.addr=0xa5fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_017F) {
    const struct CPU_State initial_cpu = {.pc=0x8ad6, .a=0x95, .x=0xc1, .y=0x3f, .sp=0xe5, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8ad7, .a=0x95, .x=0xc1, .y=0x95, .sp=0xe5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8ad6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8ad6, .value=0xfd, .type=IO_READ},
        {.addr=0x8ad7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0180) {
    const struct CPU_State initial_cpu = {.pc=0x6ef6, .a=0x89, .x=0xd2, .y=0x75, .sp=0xb3, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x6ef6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6ef7, .a=0x89, .x=0xd2, .y=0x89, .sp=0xb3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6ef6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6ef6, .value=0xfd, .type=IO_READ},
        {.addr=0x6ef7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0181) {
    const struct CPU_State initial_cpu = {.pc=0xcadf, .a=0x31, .x=0xcc, .y=0xc4, .sp=0xf8, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xcadf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcae0, .a=0x31, .x=0xcc, .y=0x31, .sp=0xf8, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xcadf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcadf, .value=0xfd, .type=IO_READ},
        {.addr=0xcae0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0182) {
    const struct CPU_State initial_cpu = {.pc=0x898b, .a=0x25, .x=0x72, .y=0x89, .sp=0xb1, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x898b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x898c, .a=0x25, .x=0x72, .y=0x25, .sp=0xb1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x898b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x898b, .value=0xfd, .type=IO_READ},
        {.addr=0x898c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0183) {
    const struct CPU_State initial_cpu = {.pc=0x257c, .a=0x74, .x=0x8f, .y=0x8a, .sp=0x85, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x257c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x257d, .a=0x74, .x=0x8f, .y=0x74, .sp=0x85, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x257c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x257c, .value=0xfd, .type=IO_READ},
        {.addr=0x257d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0184) {
    const struct CPU_State initial_cpu = {.pc=0x7329, .a=0x9d, .x=0x4c, .y=0x88, .sp=0x57, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x7329, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x732a, .a=0x9d, .x=0x4c, .y=0x9d, .sp=0x57, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7329, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7329, .value=0xfd, .type=IO_READ},
        {.addr=0x732a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0185) {
    const struct CPU_State initial_cpu = {.pc=0x2177, .a=0x1b, .x=0x4f, .y=0x8f, .sp=0x5c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x2177, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2178, .a=0x1b, .x=0x4f, .y=0x1b, .sp=0x5c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2177, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2177, .value=0xfd, .type=IO_READ},
        {.addr=0x2178, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0186) {
    const struct CPU_State initial_cpu = {.pc=0x0241, .a=0xfb, .x=0x4d, .y=0xd5, .sp=0x76, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0241, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0242, .a=0xfb, .x=0x4d, .y=0xfb, .sp=0x76, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0241, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0241, .value=0xfd, .type=IO_READ},
        {.addr=0x0242, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0187) {
    const struct CPU_State initial_cpu = {.pc=0x3281, .a=0x87, .x=0x3c, .y=0x8c, .sp=0x3f, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x3281, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3282, .a=0x87, .x=0x3c, .y=0x87, .sp=0x3f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3281, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3281, .value=0xfd, .type=IO_READ},
        {.addr=0x3282, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0188) {
    const struct CPU_State initial_cpu = {.pc=0xf096, .a=0x47, .x=0x47, .y=0x61, .sp=0x16, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf096, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf097, .a=0x47, .x=0x47, .y=0x47, .sp=0x16, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xf096, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf096, .value=0xfd, .type=IO_READ},
        {.addr=0xf097, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0189) {
    const struct CPU_State initial_cpu = {.pc=0x4f7f, .a=0xa9, .x=0x1e, .y=0xe2, .sp=0xfb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x4f7f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4f80, .a=0xa9, .x=0x1e, .y=0xa9, .sp=0xfb, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4f7f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4f7f, .value=0xfd, .type=IO_READ},
        {.addr=0x4f80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_018A) {
    const struct CPU_State initial_cpu = {.pc=0x2289, .a=0x45, .x=0xf7, .y=0x6a, .sp=0x40, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x2289, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x228a, .a=0x45, .x=0xf7, .y=0x45, .sp=0x40, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2289, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2289, .value=0xfd, .type=IO_READ},
        {.addr=0x228a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_018B) {
    const struct CPU_State initial_cpu = {.pc=0xc1c3, .a=0x1d, .x=0xb0, .y=0x5b, .sp=0x86, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc1c4, .a=0x1d, .x=0xb0, .y=0x1d, .sp=0x86, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc1c3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc1c3, .value=0xfd, .type=IO_READ},
        {.addr=0xc1c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_018C) {
    const struct CPU_State initial_cpu = {.pc=0xee53, .a=0x67, .x=0x06, .y=0xd6, .sp=0x8b, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xee53, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xee54, .a=0x67, .x=0x06, .y=0x67, .sp=0x8b, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xee53, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xee53, .value=0xfd, .type=IO_READ},
        {.addr=0xee54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_018D) {
    const struct CPU_State initial_cpu = {.pc=0x3e93, .a=0xea, .x=0xa0, .y=0x6c, .sp=0xfa, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x3e93, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3e94, .a=0xea, .x=0xa0, .y=0xea, .sp=0xfa, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3e93, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3e93, .value=0xfd, .type=IO_READ},
        {.addr=0x3e94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_018E) {
    const struct CPU_State initial_cpu = {.pc=0x7be6, .a=0x3d, .x=0xb4, .y=0x9b, .sp=0x30, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x7be6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7be7, .a=0x3d, .x=0xb4, .y=0x3d, .sp=0x30, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7be6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7be6, .value=0xfd, .type=IO_READ},
        {.addr=0x7be7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_018F) {
    const struct CPU_State initial_cpu = {.pc=0xd6b8, .a=0xb2, .x=0x2c, .y=0x77, .sp=0x09, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd6b9, .a=0xb2, .x=0x2c, .y=0xb2, .sp=0x09, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd6b8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd6b8, .value=0xfd, .type=IO_READ},
        {.addr=0xd6b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0190) {
    const struct CPU_State initial_cpu = {.pc=0x41b6, .a=0x10, .x=0x83, .y=0x36, .sp=0xfd, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x41b6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x41b7, .a=0x10, .x=0x83, .y=0x10, .sp=0xfd, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x41b6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x41b6, .value=0xfd, .type=IO_READ},
        {.addr=0x41b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0191) {
    const struct CPU_State initial_cpu = {.pc=0x6b19, .a=0xcf, .x=0x7d, .y=0x8e, .sp=0x26, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x6b19, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6b1a, .a=0xcf, .x=0x7d, .y=0xcf, .sp=0x26, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6b19, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6b19, .value=0xfd, .type=IO_READ},
        {.addr=0x6b1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0192) {
    const struct CPU_State initial_cpu = {.pc=0x97df, .a=0x54, .x=0x16, .y=0x71, .sp=0x86, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x97df, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x97e0, .a=0x54, .x=0x16, .y=0x54, .sp=0x86, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x97df, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x97df, .value=0xfd, .type=IO_READ},
        {.addr=0x97e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0193) {
    const struct CPU_State initial_cpu = {.pc=0xbba8, .a=0x1f, .x=0xf9, .y=0x1d, .sp=0xef, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xbba8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbba9, .a=0x1f, .x=0xf9, .y=0x1f, .sp=0xef, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xbba8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbba8, .value=0xfd, .type=IO_READ},
        {.addr=0xbba9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0194) {
    const struct CPU_State initial_cpu = {.pc=0x0307, .a=0x28, .x=0x62, .y=0x81, .sp=0x62, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0307, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0308, .a=0x28, .x=0x62, .y=0x28, .sp=0x62, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0307, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0307, .value=0xfd, .type=IO_READ},
        {.addr=0x0308, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0195) {
    const struct CPU_State initial_cpu = {.pc=0xd0ed, .a=0x4b, .x=0xf7, .y=0xbb, .sp=0x80, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ed, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd0ee, .a=0x4b, .x=0xf7, .y=0x4b, .sp=0x80, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xd0ed, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd0ed, .value=0xfd, .type=IO_READ},
        {.addr=0xd0ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0196) {
    const struct CPU_State initial_cpu = {.pc=0x2379, .a=0x7f, .x=0xe0, .y=0x59, .sp=0xfc, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2379, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x237a, .a=0x7f, .x=0xe0, .y=0x7f, .sp=0xfc, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x2379, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2379, .value=0xfd, .type=IO_READ},
        {.addr=0x237a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0197) {
    const struct CPU_State initial_cpu = {.pc=0x210e, .a=0xda, .x=0x0a, .y=0xd3, .sp=0xb1, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x210e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x210f, .a=0xda, .x=0x0a, .y=0xda, .sp=0xb1, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x210e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x210e, .value=0xfd, .type=IO_READ},
        {.addr=0x210f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0198) {
    const struct CPU_State initial_cpu = {.pc=0x9547, .a=0xe7, .x=0xa0, .y=0xe7, .sp=0xc2, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x9547, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9548, .a=0xe7, .x=0xa0, .y=0xe7, .sp=0xc2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9547, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9547, .value=0xfd, .type=IO_READ},
        {.addr=0x9548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0199) {
    const struct CPU_State initial_cpu = {.pc=0x7d1a, .a=0x4b, .x=0x78, .y=0xc1, .sp=0x34, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x7d1a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7d1b, .a=0x4b, .x=0x78, .y=0x4b, .sp=0x34, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7d1a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7d1a, .value=0xfd, .type=IO_READ},
        {.addr=0x7d1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_019A) {
    const struct CPU_State initial_cpu = {.pc=0x0fb9, .a=0x9a, .x=0x7f, .y=0x52, .sp=0x37, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0fb9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0fba, .a=0x9a, .x=0x7f, .y=0x9a, .sp=0x37, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0fb9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0fb9, .value=0xfd, .type=IO_READ},
        {.addr=0x0fba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_019B) {
    const struct CPU_State initial_cpu = {.pc=0x1259, .a=0x9a, .x=0xef, .y=0xfd, .sp=0x27, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1259, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x125a, .a=0x9a, .x=0xef, .y=0x9a, .sp=0x27, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x1259, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1259, .value=0xfd, .type=IO_READ},
        {.addr=0x125a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_019C) {
    const struct CPU_State initial_cpu = {.pc=0x737f, .a=0xae, .x=0xcb, .y=0x3b, .sp=0x1a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x737f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7380, .a=0xae, .x=0xcb, .y=0xae, .sp=0x1a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x737f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x737f, .value=0xfd, .type=IO_READ},
        {.addr=0x7380, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_019D) {
    const struct CPU_State initial_cpu = {.pc=0x583f, .a=0xdf, .x=0xbd, .y=0x76, .sp=0xd8, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x583f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5840, .a=0xdf, .x=0xbd, .y=0xdf, .sp=0xd8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x583f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x583f, .value=0xfd, .type=IO_READ},
        {.addr=0x5840, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_019E) {
    const struct CPU_State initial_cpu = {.pc=0xddf8, .a=0xd7, .x=0x62, .y=0x7d, .sp=0xf5, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xddf8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xddf9, .a=0xd7, .x=0x62, .y=0xd7, .sp=0xf5, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xddf8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xddf8, .value=0xfd, .type=IO_READ},
        {.addr=0xddf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_019F) {
    const struct CPU_State initial_cpu = {.pc=0x7705, .a=0x2a, .x=0x35, .y=0x8b, .sp=0x76, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x7705, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7706, .a=0x2a, .x=0x35, .y=0x2a, .sp=0x76, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x7705, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7705, .value=0xfd, .type=IO_READ},
        {.addr=0x7706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x58e3, .a=0x59, .x=0x89, .y=0x39, .sp=0x90, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x58e3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x58e4, .a=0x59, .x=0x89, .y=0x59, .sp=0x90, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x58e3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x58e3, .value=0xfd, .type=IO_READ},
        {.addr=0x58e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x4453, .a=0xba, .x=0xcf, .y=0x9c, .sp=0x21, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4453, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4454, .a=0xba, .x=0xcf, .y=0xba, .sp=0x21, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4453, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4453, .value=0xfd, .type=IO_READ},
        {.addr=0x4454, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xefb2, .a=0x8b, .x=0xc7, .y=0xee, .sp=0x62, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xefb2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xefb3, .a=0x8b, .x=0xc7, .y=0x8b, .sp=0x62, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xefb2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xefb2, .value=0xfd, .type=IO_READ},
        {.addr=0xefb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xf8c0, .a=0x12, .x=0xee, .y=0xb1, .sp=0xe8, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xf8c0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf8c1, .a=0x12, .x=0xee, .y=0x12, .sp=0xe8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xf8c0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf8c0, .value=0xfd, .type=IO_READ},
        {.addr=0xf8c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xab1b, .a=0x5b, .x=0x39, .y=0x59, .sp=0x07, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xab1b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xab1c, .a=0x5b, .x=0x39, .y=0x5b, .sp=0x07, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xab1b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xab1b, .value=0xfd, .type=IO_READ},
        {.addr=0xab1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xc192, .a=0xed, .x=0x81, .y=0x55, .sp=0xa3, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xc192, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc193, .a=0xed, .x=0x81, .y=0xed, .sp=0xa3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc192, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc192, .value=0xfd, .type=IO_READ},
        {.addr=0xc193, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x1e09, .a=0xff, .x=0x15, .y=0x22, .sp=0x79, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x1e09, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1e0a, .a=0xff, .x=0x15, .y=0xff, .sp=0x79, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1e09, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1e09, .value=0xfd, .type=IO_READ},
        {.addr=0x1e0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x9e0f, .a=0x40, .x=0x39, .y=0xdc, .sp=0x06, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x9e0f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9e10, .a=0x40, .x=0x39, .y=0x40, .sp=0x06, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9e0f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9e0f, .value=0xfd, .type=IO_READ},
        {.addr=0x9e10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xafa0, .a=0xec, .x=0xb2, .y=0x95, .sp=0x1f, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xafa0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xafa1, .a=0xec, .x=0xb2, .y=0xec, .sp=0x1f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xafa0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xafa0, .value=0xfd, .type=IO_READ},
        {.addr=0xafa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x91c2, .a=0x56, .x=0x5b, .y=0x3f, .sp=0x3e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x91c2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x91c3, .a=0x56, .x=0x5b, .y=0x56, .sp=0x3e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x91c2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x91c2, .value=0xfd, .type=IO_READ},
        {.addr=0x91c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x06b3, .a=0x03, .x=0xf3, .y=0xad, .sp=0x7e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x06b3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x06b4, .a=0x03, .x=0xf3, .y=0x03, .sp=0x7e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x06b3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x06b3, .value=0xfd, .type=IO_READ},
        {.addr=0x06b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xf33d, .a=0xf5, .x=0x70, .y=0xcd, .sp=0x3a, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf33d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf33e, .a=0xf5, .x=0x70, .y=0xf5, .sp=0x3a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf33d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf33d, .value=0xfd, .type=IO_READ},
        {.addr=0xf33e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x3294, .a=0xb3, .x=0xf2, .y=0xdd, .sp=0xb4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x3294, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3295, .a=0xb3, .x=0xf2, .y=0xb3, .sp=0xb4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3294, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3294, .value=0xfd, .type=IO_READ},
        {.addr=0x3295, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xfba9, .a=0xa9, .x=0x81, .y=0x7f, .sp=0x43, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xfba9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfbaa, .a=0xa9, .x=0x81, .y=0xa9, .sp=0x43, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xfba9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfba9, .value=0xfd, .type=IO_READ},
        {.addr=0xfbaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xc382, .a=0xf3, .x=0x1e, .y=0x04, .sp=0x6a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc382, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc383, .a=0xf3, .x=0x1e, .y=0xf3, .sp=0x6a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xc382, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc382, .value=0xfd, .type=IO_READ},
        {.addr=0xc383, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x331a, .a=0x9b, .x=0x20, .y=0x08, .sp=0xdb, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x331a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x331b, .a=0x9b, .x=0x20, .y=0x9b, .sp=0xdb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x331a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x331a, .value=0xfd, .type=IO_READ},
        {.addr=0x331b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x45cf, .a=0x25, .x=0x87, .y=0x5b, .sp=0x8d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x45cf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x45d0, .a=0x25, .x=0x87, .y=0x25, .sp=0x8d, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x45cf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x45cf, .value=0xfd, .type=IO_READ},
        {.addr=0x45d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x0209, .a=0x3f, .x=0xbd, .y=0x5d, .sp=0x28, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0209, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x020a, .a=0x3f, .x=0xbd, .y=0x3f, .sp=0x28, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0209, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0209, .value=0xfd, .type=IO_READ},
        {.addr=0x020a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x5a2a, .a=0x3d, .x=0x83, .y=0x66, .sp=0x2c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x5a2a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5a2b, .a=0x3d, .x=0x83, .y=0x3d, .sp=0x2c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5a2a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5a2a, .value=0xfd, .type=IO_READ},
        {.addr=0x5a2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x7226, .a=0x23, .x=0xcd, .y=0x35, .sp=0x21, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x7226, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7227, .a=0x23, .x=0xcd, .y=0x23, .sp=0x21, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7226, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7226, .value=0xfd, .type=IO_READ},
        {.addr=0x7227, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x9747, .a=0x06, .x=0x05, .y=0x3c, .sp=0xee, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9747, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9748, .a=0x06, .x=0x05, .y=0x06, .sp=0xee, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9747, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9747, .value=0xfd, .type=IO_READ},
        {.addr=0x9748, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x769f, .a=0x0e, .x=0xfe, .y=0xa8, .sp=0x66, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x769f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x76a0, .a=0x0e, .x=0xfe, .y=0x0e, .sp=0x66, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x769f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x769f, .value=0xfd, .type=IO_READ},
        {.addr=0x76a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x204e, .a=0xa9, .x=0xce, .y=0xd5, .sp=0x7e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x204e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x204f, .a=0xa9, .x=0xce, .y=0xa9, .sp=0x7e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x204e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x204e, .value=0xfd, .type=IO_READ},
        {.addr=0x204f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x9722, .a=0xf0, .x=0x2e, .y=0x67, .sp=0xaa, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x9722, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9723, .a=0xf0, .x=0x2e, .y=0xf0, .sp=0xaa, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9722, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9722, .value=0xfd, .type=IO_READ},
        {.addr=0x9723, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xcd98, .a=0x0f, .x=0xcb, .y=0x32, .sp=0x49, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xcd98, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcd99, .a=0x0f, .x=0xcb, .y=0x0f, .sp=0x49, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xcd98, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcd98, .value=0xfd, .type=IO_READ},
        {.addr=0xcd99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x40a6, .a=0x2f, .x=0x02, .y=0x03, .sp=0x26, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x40a6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x40a7, .a=0x2f, .x=0x02, .y=0x2f, .sp=0x26, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x40a6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x40a6, .value=0xfd, .type=IO_READ},
        {.addr=0x40a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xe8b4, .a=0xd8, .x=0x8c, .y=0x66, .sp=0x83, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe8b5, .a=0xd8, .x=0x8c, .y=0xd8, .sp=0x83, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe8b4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe8b4, .value=0xfd, .type=IO_READ},
        {.addr=0xe8b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xdcb9, .a=0x24, .x=0x78, .y=0x2b, .sp=0x4d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xdcb9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdcba, .a=0x24, .x=0x78, .y=0x24, .sp=0x4d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xdcb9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdcb9, .value=0xfd, .type=IO_READ},
        {.addr=0xdcba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xf25b, .a=0xeb, .x=0xd1, .y=0xf2, .sp=0x05, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xf25b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf25c, .a=0xeb, .x=0xd1, .y=0xeb, .sp=0x05, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xf25b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf25b, .value=0xfd, .type=IO_READ},
        {.addr=0xf25c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xae96, .a=0xc5, .x=0xf1, .y=0x51, .sp=0x2a, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xae96, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xae97, .a=0xc5, .x=0xf1, .y=0xc5, .sp=0x2a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xae96, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xae96, .value=0xfd, .type=IO_READ},
        {.addr=0xae97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x8cff, .a=0x3c, .x=0x73, .y=0xb5, .sp=0x1c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8cff, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8d00, .a=0x3c, .x=0x73, .y=0x3c, .sp=0x1c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8cff, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8cff, .value=0xfd, .type=IO_READ},
        {.addr=0x8d00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x6037, .a=0xb5, .x=0x4e, .y=0xbb, .sp=0x81, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6037, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6038, .a=0xb5, .x=0x4e, .y=0xb5, .sp=0x81, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6037, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6037, .value=0xfd, .type=IO_READ},
        {.addr=0x6038, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xdf55, .a=0x9d, .x=0xfe, .y=0x5d, .sp=0x48, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xdf55, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdf56, .a=0x9d, .x=0xfe, .y=0x9d, .sp=0x48, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xdf55, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdf55, .value=0xfd, .type=IO_READ},
        {.addr=0xdf56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xecd5, .a=0x3f, .x=0x8c, .y=0xe4, .sp=0x3e, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xecd5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xecd6, .a=0x3f, .x=0x8c, .y=0x3f, .sp=0x3e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xecd5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xecd5, .value=0xfd, .type=IO_READ},
        {.addr=0xecd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xaa00, .a=0xb5, .x=0x57, .y=0x33, .sp=0xd7, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xaa00, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaa01, .a=0xb5, .x=0x57, .y=0xb5, .sp=0xd7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xaa00, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaa00, .value=0xfd, .type=IO_READ},
        {.addr=0xaa01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x43f8, .a=0x16, .x=0x6b, .y=0xe9, .sp=0x61, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x43f8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x43f9, .a=0x16, .x=0x6b, .y=0x16, .sp=0x61, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x43f8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x43f8, .value=0xfd, .type=IO_READ},
        {.addr=0x43f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x0873, .a=0x2f, .x=0x00, .y=0x61, .sp=0xc7, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0873, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0874, .a=0x2f, .x=0x00, .y=0x2f, .sp=0xc7, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0873, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0873, .value=0xfd, .type=IO_READ},
        {.addr=0x0874, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x7eec, .a=0xc6, .x=0x5b, .y=0x2e, .sp=0xf6, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7eec, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7eed, .a=0xc6, .x=0x5b, .y=0xc6, .sp=0xf6, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7eec, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7eec, .value=0xfd, .type=IO_READ},
        {.addr=0x7eed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xd539, .a=0xad, .x=0xf2, .y=0x6b, .sp=0x27, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xd539, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd53a, .a=0xad, .x=0xf2, .y=0xad, .sp=0x27, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd539, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd539, .value=0xfd, .type=IO_READ},
        {.addr=0xd53a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xd54b, .a=0x95, .x=0x4d, .y=0x38, .sp=0x63, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd54b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd54c, .a=0x95, .x=0x4d, .y=0x95, .sp=0x63, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd54b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd54b, .value=0xfd, .type=IO_READ},
        {.addr=0xd54c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xb18d, .a=0x13, .x=0x9d, .y=0xf7, .sp=0x1b, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xb18d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb18e, .a=0x13, .x=0x9d, .y=0x13, .sp=0x1b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xb18d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb18d, .value=0xfd, .type=IO_READ},
        {.addr=0xb18e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xb1d9, .a=0xc1, .x=0xd2, .y=0x6b, .sp=0x48, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb1da, .a=0xc1, .x=0xd2, .y=0xc1, .sp=0x48, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xb1d9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb1d9, .value=0xfd, .type=IO_READ},
        {.addr=0xb1da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x8151, .a=0x98, .x=0x94, .y=0xc2, .sp=0x99, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x8151, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8152, .a=0x98, .x=0x94, .y=0x98, .sp=0x99, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8151, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8151, .value=0xfd, .type=IO_READ},
        {.addr=0x8152, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x18e9, .a=0xc3, .x=0xa0, .y=0x40, .sp=0xbf, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x18e9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x18ea, .a=0xc3, .x=0xa0, .y=0xc3, .sp=0xbf, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x18e9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x18e9, .value=0xfd, .type=IO_READ},
        {.addr=0x18ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x7f90, .a=0xbc, .x=0x34, .y=0x5d, .sp=0x67, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x7f90, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7f91, .a=0xbc, .x=0x34, .y=0xbc, .sp=0x67, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x7f90, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7f90, .value=0xfd, .type=IO_READ},
        {.addr=0x7f91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xdcc6, .a=0x98, .x=0x32, .y=0x86, .sp=0x68, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdcc7, .a=0x98, .x=0x32, .y=0x98, .sp=0x68, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xdcc6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdcc6, .value=0xfd, .type=IO_READ},
        {.addr=0xdcc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xb700, .a=0x2b, .x=0xb2, .y=0xba, .sp=0xa0, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xb700, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb701, .a=0x2b, .x=0xb2, .y=0x2b, .sp=0xa0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb700, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb700, .value=0xfd, .type=IO_READ},
        {.addr=0xb701, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xb0a3, .a=0x58, .x=0xa1, .y=0xf2, .sp=0xab, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb0a4, .a=0x58, .x=0xa1, .y=0x58, .sp=0xab, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb0a3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb0a3, .value=0xfd, .type=IO_READ},
        {.addr=0xb0a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xa77c, .a=0xde, .x=0x3a, .y=0x5a, .sp=0x45, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa77c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa77d, .a=0xde, .x=0x3a, .y=0xde, .sp=0x45, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa77c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa77c, .value=0xfd, .type=IO_READ},
        {.addr=0xa77d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xf1f6, .a=0xdc, .x=0xb1, .y=0xe7, .sp=0xbc, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf1f6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf1f7, .a=0xdc, .x=0xb1, .y=0xdc, .sp=0xbc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xf1f6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf1f6, .value=0xfd, .type=IO_READ},
        {.addr=0xf1f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x056b, .a=0x2f, .x=0x13, .y=0x06, .sp=0x7d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x056b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x056c, .a=0x2f, .x=0x13, .y=0x2f, .sp=0x7d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x056b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x056b, .value=0xfd, .type=IO_READ},
        {.addr=0x056c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x99e9, .a=0x68, .x=0xfe, .y=0x69, .sp=0xab, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x99e9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x99ea, .a=0x68, .x=0xfe, .y=0x68, .sp=0xab, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x99e9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x99e9, .value=0xfd, .type=IO_READ},
        {.addr=0x99ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xd08d, .a=0x57, .x=0x7e, .y=0x2f, .sp=0xa6, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xd08d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd08e, .a=0x57, .x=0x7e, .y=0x57, .sp=0xa6, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xd08d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd08d, .value=0xfd, .type=IO_READ},
        {.addr=0xd08e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xad07, .a=0xc8, .x=0x34, .y=0x1a, .sp=0x7d, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xad07, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xad08, .a=0xc8, .x=0x34, .y=0xc8, .sp=0x7d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xad07, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xad07, .value=0xfd, .type=IO_READ},
        {.addr=0xad08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x0a6f, .a=0x6a, .x=0x51, .y=0x46, .sp=0xb8, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0a6f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0a70, .a=0x6a, .x=0x51, .y=0x6a, .sp=0xb8, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0a6f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0a6f, .value=0xfd, .type=IO_READ},
        {.addr=0x0a70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xde6f, .a=0x0f, .x=0xe8, .y=0x33, .sp=0xf3, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xde6f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xde70, .a=0x0f, .x=0xe8, .y=0x0f, .sp=0xf3, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xde6f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xde6f, .value=0xfd, .type=IO_READ},
        {.addr=0xde70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x20c8, .a=0x32, .x=0x86, .y=0x62, .sp=0x4a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x20c8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x20c9, .a=0x32, .x=0x86, .y=0x32, .sp=0x4a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x20c8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x20c8, .value=0xfd, .type=IO_READ},
        {.addr=0x20c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x1499, .a=0x9c, .x=0x48, .y=0x5c, .sp=0x59, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x1499, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x149a, .a=0x9c, .x=0x48, .y=0x9c, .sp=0x59, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1499, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1499, .value=0xfd, .type=IO_READ},
        {.addr=0x149a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x593b, .a=0xb2, .x=0x59, .y=0x1d, .sp=0xfb, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x593b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x593c, .a=0xb2, .x=0x59, .y=0xb2, .sp=0xfb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x593b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x593b, .value=0xfd, .type=IO_READ},
        {.addr=0x593c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x356c, .a=0x1a, .x=0x8b, .y=0x05, .sp=0x1a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x356c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x356d, .a=0x1a, .x=0x8b, .y=0x1a, .sp=0x1a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x356c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x356c, .value=0xfd, .type=IO_READ},
        {.addr=0x356d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xb776, .a=0x25, .x=0x51, .y=0x1d, .sp=0x0a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb776, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb777, .a=0x25, .x=0x51, .y=0x25, .sp=0x0a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb776, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb776, .value=0xfd, .type=IO_READ},
        {.addr=0xb777, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x91f8, .a=0xed, .x=0xde, .y=0xa6, .sp=0xe2, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x91f8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x91f9, .a=0xed, .x=0xde, .y=0xed, .sp=0xe2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x91f8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x91f8, .value=0xfd, .type=IO_READ},
        {.addr=0x91f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x85b2, .a=0x6c, .x=0x7e, .y=0x44, .sp=0x56, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x85b2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x85b3, .a=0x6c, .x=0x7e, .y=0x6c, .sp=0x56, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x85b2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x85b2, .value=0xfd, .type=IO_READ},
        {.addr=0x85b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xaec0, .a=0x22, .x=0x91, .y=0xc1, .sp=0x35, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xaec0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaec1, .a=0x22, .x=0x91, .y=0x22, .sp=0x35, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xaec0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaec0, .value=0xfd, .type=IO_READ},
        {.addr=0xaec1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x9994, .a=0x40, .x=0x72, .y=0xd0, .sp=0xe5, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9994, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9995, .a=0x40, .x=0x72, .y=0x40, .sp=0xe5, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9994, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9994, .value=0xfd, .type=IO_READ},
        {.addr=0x9995, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x1bdb, .a=0xb7, .x=0xb1, .y=0x07, .sp=0x9c, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x1bdb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1bdc, .a=0xb7, .x=0xb1, .y=0xb7, .sp=0x9c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1bdb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1bdb, .value=0xfd, .type=IO_READ},
        {.addr=0x1bdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x07cc, .a=0xb7, .x=0x0d, .y=0x83, .sp=0x14, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x07cc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x07cd, .a=0xb7, .x=0x0d, .y=0xb7, .sp=0x14, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x07cc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x07cc, .value=0xfd, .type=IO_READ},
        {.addr=0x07cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x9ce3, .a=0xcd, .x=0x24, .y=0xdf, .sp=0x26, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x9ce3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9ce4, .a=0xcd, .x=0x24, .y=0xcd, .sp=0x26, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9ce3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9ce3, .value=0xfd, .type=IO_READ},
        {.addr=0x9ce4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x44b8, .a=0xe9, .x=0x6a, .y=0xc3, .sp=0xf4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x44b8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x44b9, .a=0xe9, .x=0x6a, .y=0xe9, .sp=0xf4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x44b8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x44b8, .value=0xfd, .type=IO_READ},
        {.addr=0x44b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x51a5, .a=0x4d, .x=0xbf, .y=0x2b, .sp=0x05, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x51a5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x51a6, .a=0x4d, .x=0xbf, .y=0x4d, .sp=0x05, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x51a5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x51a5, .value=0xfd, .type=IO_READ},
        {.addr=0x51a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x5f6c, .a=0x9c, .x=0xf1, .y=0x17, .sp=0xb7, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x5f6c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5f6d, .a=0x9c, .x=0xf1, .y=0x9c, .sp=0xb7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x5f6c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5f6c, .value=0xfd, .type=IO_READ},
        {.addr=0x5f6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x88ae, .a=0xa2, .x=0x21, .y=0x08, .sp=0xfc, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x88ae, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x88af, .a=0xa2, .x=0x21, .y=0xa2, .sp=0xfc, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x88ae, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x88ae, .value=0xfd, .type=IO_READ},
        {.addr=0x88af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x31ab, .a=0xf0, .x=0x01, .y=0xd4, .sp=0x1f, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x31ab, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x31ac, .a=0xf0, .x=0x01, .y=0xf0, .sp=0x1f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x31ab, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x31ab, .value=0xfd, .type=IO_READ},
        {.addr=0x31ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x1237, .a=0x38, .x=0x17, .y=0x2f, .sp=0x68, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1237, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1238, .a=0x38, .x=0x17, .y=0x38, .sp=0x68, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1237, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1237, .value=0xfd, .type=IO_READ},
        {.addr=0x1238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xa330, .a=0x72, .x=0xe8, .y=0x44, .sp=0x2f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xa330, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa331, .a=0x72, .x=0xe8, .y=0x72, .sp=0x2f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa330, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa330, .value=0xfd, .type=IO_READ},
        {.addr=0xa331, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x5eaa, .a=0x2a, .x=0x48, .y=0x1a, .sp=0x73, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x5eaa, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5eab, .a=0x2a, .x=0x48, .y=0x2a, .sp=0x73, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5eaa, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5eaa, .value=0xfd, .type=IO_READ},
        {.addr=0x5eab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xa5b5, .a=0x99, .x=0x26, .y=0x31, .sp=0x74, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa5b6, .a=0x99, .x=0x26, .y=0x99, .sp=0x74, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa5b5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa5b5, .value=0xfd, .type=IO_READ},
        {.addr=0xa5b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x8d72, .a=0x63, .x=0xdb, .y=0x1b, .sp=0xe5, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x8d72, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8d73, .a=0x63, .x=0xdb, .y=0x63, .sp=0xe5, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8d72, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8d72, .value=0xfd, .type=IO_READ},
        {.addr=0x8d73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x9562, .a=0x5d, .x=0xf6, .y=0xe5, .sp=0x28, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x9562, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9563, .a=0x5d, .x=0xf6, .y=0x5d, .sp=0x28, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9562, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9562, .value=0xfd, .type=IO_READ},
        {.addr=0x9563, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xba21, .a=0x36, .x=0x96, .y=0x76, .sp=0x07, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xba21, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xba22, .a=0x36, .x=0x96, .y=0x36, .sp=0x07, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xba21, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xba21, .value=0xfd, .type=IO_READ},
        {.addr=0xba22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xb9c0, .a=0x4e, .x=0x97, .y=0x63, .sp=0xf8, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb9c0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb9c1, .a=0x4e, .x=0x97, .y=0x4e, .sp=0xf8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb9c0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb9c0, .value=0xfd, .type=IO_READ},
        {.addr=0xb9c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x2114, .a=0x94, .x=0xb4, .y=0x85, .sp=0xb0, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x2114, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2115, .a=0x94, .x=0xb4, .y=0x94, .sp=0xb0, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2114, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2114, .value=0xfd, .type=IO_READ},
        {.addr=0x2115, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x774f, .a=0x23, .x=0x52, .y=0x48, .sp=0xdc, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x774f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7750, .a=0x23, .x=0x52, .y=0x23, .sp=0xdc, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x774f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x774f, .value=0xfd, .type=IO_READ},
        {.addr=0x7750, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x431e, .a=0xd6, .x=0x6e, .y=0xeb, .sp=0x51, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x431e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x431f, .a=0xd6, .x=0x6e, .y=0xd6, .sp=0x51, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x431e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x431e, .value=0xfd, .type=IO_READ},
        {.addr=0x431f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x7366, .a=0x4f, .x=0x9b, .y=0x43, .sp=0xef, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x7366, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7367, .a=0x4f, .x=0x9b, .y=0x4f, .sp=0xef, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7366, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7366, .value=0xfd, .type=IO_READ},
        {.addr=0x7367, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xcb62, .a=0x41, .x=0xfa, .y=0x67, .sp=0xed, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xcb62, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcb63, .a=0x41, .x=0xfa, .y=0x41, .sp=0xed, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcb62, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcb62, .value=0xfd, .type=IO_READ},
        {.addr=0xcb63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x4d87, .a=0x6a, .x=0x58, .y=0xe7, .sp=0x02, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x4d87, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4d88, .a=0x6a, .x=0x58, .y=0x6a, .sp=0x02, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4d87, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4d87, .value=0xfd, .type=IO_READ},
        {.addr=0x4d88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x0914, .a=0xf9, .x=0xe3, .y=0x20, .sp=0xe5, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0914, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0915, .a=0xf9, .x=0xe3, .y=0xf9, .sp=0xe5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0914, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0914, .value=0xfd, .type=IO_READ},
        {.addr=0x0915, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x5cef, .a=0xcb, .x=0x07, .y=0x85, .sp=0x0c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x5cef, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5cf0, .a=0xcb, .x=0x07, .y=0xcb, .sp=0x0c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x5cef, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5cef, .value=0xfd, .type=IO_READ},
        {.addr=0x5cf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x21be, .a=0x31, .x=0xb2, .y=0xed, .sp=0x61, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x21be, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x21bf, .a=0x31, .x=0xb2, .y=0x31, .sp=0x61, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x21be, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x21be, .value=0xfd, .type=IO_READ},
        {.addr=0x21bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xe344, .a=0xf5, .x=0x81, .y=0x87, .sp=0xe3, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xe344, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe345, .a=0xf5, .x=0x81, .y=0xf5, .sp=0xe3, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe344, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe344, .value=0xfd, .type=IO_READ},
        {.addr=0xe345, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x8c5a, .a=0xd6, .x=0x55, .y=0x28, .sp=0x13, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x8c5a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8c5b, .a=0xd6, .x=0x55, .y=0xd6, .sp=0x13, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8c5a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8c5a, .value=0xfd, .type=IO_READ},
        {.addr=0x8c5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x7e71, .a=0xd0, .x=0x1a, .y=0xb8, .sp=0x5e, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7e71, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7e72, .a=0xd0, .x=0x1a, .y=0xd0, .sp=0x5e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x7e71, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7e71, .value=0xfd, .type=IO_READ},
        {.addr=0x7e72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x07b2, .a=0xbb, .x=0x82, .y=0xf3, .sp=0xda, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x07b2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x07b3, .a=0xbb, .x=0x82, .y=0xbb, .sp=0xda, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x07b2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x07b2, .value=0xfd, .type=IO_READ},
        {.addr=0x07b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x52e8, .a=0x06, .x=0x13, .y=0xc2, .sp=0x23, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x52e8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x52e9, .a=0x06, .x=0x13, .y=0x06, .sp=0x23, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x52e8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x52e8, .value=0xfd, .type=IO_READ},
        {.addr=0x52e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0200) {
    const struct CPU_State initial_cpu = {.pc=0xad49, .a=0xba, .x=0x87, .y=0xff, .sp=0x95, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xad49, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xad4a, .a=0xba, .x=0x87, .y=0xba, .sp=0x95, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xad49, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xad49, .value=0xfd, .type=IO_READ},
        {.addr=0xad4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0201) {
    const struct CPU_State initial_cpu = {.pc=0x4252, .a=0xad, .x=0xbb, .y=0x79, .sp=0x17, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4252, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4253, .a=0xad, .x=0xbb, .y=0xad, .sp=0x17, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4252, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4252, .value=0xfd, .type=IO_READ},
        {.addr=0x4253, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0202) {
    const struct CPU_State initial_cpu = {.pc=0x8a62, .a=0x2c, .x=0x6c, .y=0xbf, .sp=0x6f, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x8a62, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8a63, .a=0x2c, .x=0x6c, .y=0x2c, .sp=0x6f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8a62, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8a62, .value=0xfd, .type=IO_READ},
        {.addr=0x8a63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0203) {
    const struct CPU_State initial_cpu = {.pc=0xa642, .a=0xb0, .x=0xdf, .y=0x26, .sp=0x5c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xa642, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa643, .a=0xb0, .x=0xdf, .y=0xb0, .sp=0x5c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xa642, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa642, .value=0xfd, .type=IO_READ},
        {.addr=0xa643, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0204) {
    const struct CPU_State initial_cpu = {.pc=0xe78d, .a=0xc7, .x=0x2b, .y=0x12, .sp=0x86, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xe78d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe78e, .a=0xc7, .x=0x2b, .y=0xc7, .sp=0x86, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe78d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe78d, .value=0xfd, .type=IO_READ},
        {.addr=0xe78e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0205) {
    const struct CPU_State initial_cpu = {.pc=0x28f0, .a=0xec, .x=0x99, .y=0x29, .sp=0x1c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x28f0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x28f1, .a=0xec, .x=0x99, .y=0xec, .sp=0x1c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x28f0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x28f0, .value=0xfd, .type=IO_READ},
        {.addr=0x28f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0206) {
    const struct CPU_State initial_cpu = {.pc=0x3d60, .a=0x5b, .x=0x08, .y=0x11, .sp=0xb1, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x3d60, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3d61, .a=0x5b, .x=0x08, .y=0x5b, .sp=0xb1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3d60, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3d60, .value=0xfd, .type=IO_READ},
        {.addr=0x3d61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0207) {
    const struct CPU_State initial_cpu = {.pc=0x248d, .a=0xa5, .x=0xd9, .y=0xea, .sp=0x50, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x248d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x248e, .a=0xa5, .x=0xd9, .y=0xa5, .sp=0x50, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x248d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x248d, .value=0xfd, .type=IO_READ},
        {.addr=0x248e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0208) {
    const struct CPU_State initial_cpu = {.pc=0x539a, .a=0xc3, .x=0xfb, .y=0xde, .sp=0xf4, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x539a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x539b, .a=0xc3, .x=0xfb, .y=0xc3, .sp=0xf4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x539a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x539a, .value=0xfd, .type=IO_READ},
        {.addr=0x539b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0209) {
    const struct CPU_State initial_cpu = {.pc=0xa1bb, .a=0x91, .x=0x75, .y=0x7b, .sp=0x27, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xa1bb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa1bc, .a=0x91, .x=0x75, .y=0x91, .sp=0x27, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa1bb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa1bb, .value=0xfd, .type=IO_READ},
        {.addr=0xa1bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_020A) {
    const struct CPU_State initial_cpu = {.pc=0xca89, .a=0xa3, .x=0x0a, .y=0xee, .sp=0x1b, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xca89, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xca8a, .a=0xa3, .x=0x0a, .y=0xa3, .sp=0x1b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xca89, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xca89, .value=0xfd, .type=IO_READ},
        {.addr=0xca8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_020B) {
    const struct CPU_State initial_cpu = {.pc=0x6e82, .a=0x41, .x=0x1c, .y=0x63, .sp=0x49, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x6e82, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6e83, .a=0x41, .x=0x1c, .y=0x41, .sp=0x49, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x6e82, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6e82, .value=0xfd, .type=IO_READ},
        {.addr=0x6e83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_020C) {
    const struct CPU_State initial_cpu = {.pc=0x3045, .a=0xbc, .x=0xea, .y=0xb1, .sp=0xaa, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x3045, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3046, .a=0xbc, .x=0xea, .y=0xbc, .sp=0xaa, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3045, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3045, .value=0xfd, .type=IO_READ},
        {.addr=0x3046, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_020D) {
    const struct CPU_State initial_cpu = {.pc=0xcb0b, .a=0x6a, .x=0x7a, .y=0x83, .sp=0x8a, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xcb0b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcb0c, .a=0x6a, .x=0x7a, .y=0x6a, .sp=0x8a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xcb0b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcb0b, .value=0xfd, .type=IO_READ},
        {.addr=0xcb0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_020E) {
    const struct CPU_State initial_cpu = {.pc=0x883b, .a=0x70, .x=0xd1, .y=0xbf, .sp=0x22, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x883b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x883c, .a=0x70, .x=0xd1, .y=0x70, .sp=0x22, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x883b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x883b, .value=0xfd, .type=IO_READ},
        {.addr=0x883c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_020F) {
    const struct CPU_State initial_cpu = {.pc=0x0eda, .a=0xf0, .x=0x45, .y=0xd4, .sp=0xf4, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0eda, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0edb, .a=0xf0, .x=0x45, .y=0xf0, .sp=0xf4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0eda, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0eda, .value=0xfd, .type=IO_READ},
        {.addr=0x0edb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0210) {
    const struct CPU_State initial_cpu = {.pc=0x4e83, .a=0x00, .x=0x99, .y=0x5f, .sp=0xfe, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x4e83, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4e84, .a=0x00, .x=0x99, .y=0x00, .sp=0xfe, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x4e83, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4e83, .value=0xfd, .type=IO_READ},
        {.addr=0x4e84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0211) {
    const struct CPU_State initial_cpu = {.pc=0x520c, .a=0x8b, .x=0x30, .y=0x34, .sp=0xd6, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x520c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x520d, .a=0x8b, .x=0x30, .y=0x8b, .sp=0xd6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x520c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x520c, .value=0xfd, .type=IO_READ},
        {.addr=0x520d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0212) {
    const struct CPU_State initial_cpu = {.pc=0x0d37, .a=0x58, .x=0x06, .y=0x8c, .sp=0x58, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0d37, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0d38, .a=0x58, .x=0x06, .y=0x58, .sp=0x58, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0d37, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0d37, .value=0xfd, .type=IO_READ},
        {.addr=0x0d38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0213) {
    const struct CPU_State initial_cpu = {.pc=0xee64, .a=0x50, .x=0xcd, .y=0x37, .sp=0xa9, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xee64, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xee65, .a=0x50, .x=0xcd, .y=0x50, .sp=0xa9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xee64, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xee64, .value=0xfd, .type=IO_READ},
        {.addr=0xee65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0214) {
    const struct CPU_State initial_cpu = {.pc=0x8bfc, .a=0x9a, .x=0x75, .y=0x3e, .sp=0x4a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x8bfc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8bfd, .a=0x9a, .x=0x75, .y=0x9a, .sp=0x4a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8bfc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8bfc, .value=0xfd, .type=IO_READ},
        {.addr=0x8bfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0215) {
    const struct CPU_State initial_cpu = {.pc=0xe537, .a=0xaa, .x=0x7b, .y=0x71, .sp=0xfe, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xe537, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe538, .a=0xaa, .x=0x7b, .y=0xaa, .sp=0xfe, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe537, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe537, .value=0xfd, .type=IO_READ},
        {.addr=0xe538, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0216) {
    const struct CPU_State initial_cpu = {.pc=0x1d3e, .a=0x4b, .x=0x66, .y=0xd7, .sp=0xb6, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x1d3e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1d3f, .a=0x4b, .x=0x66, .y=0x4b, .sp=0xb6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x1d3e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1d3e, .value=0xfd, .type=IO_READ},
        {.addr=0x1d3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0217) {
    const struct CPU_State initial_cpu = {.pc=0x037c, .a=0x45, .x=0x7d, .y=0xbd, .sp=0x78, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x037c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x037d, .a=0x45, .x=0x7d, .y=0x45, .sp=0x78, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x037c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x037c, .value=0xfd, .type=IO_READ},
        {.addr=0x037d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0218) {
    const struct CPU_State initial_cpu = {.pc=0x3e97, .a=0x69, .x=0x7b, .y=0x35, .sp=0x8a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x3e97, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3e98, .a=0x69, .x=0x7b, .y=0x69, .sp=0x8a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3e97, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3e97, .value=0xfd, .type=IO_READ},
        {.addr=0x3e98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0219) {
    const struct CPU_State initial_cpu = {.pc=0xe3cc, .a=0x71, .x=0x75, .y=0x1d, .sp=0x4d, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xe3cc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe3cd, .a=0x71, .x=0x75, .y=0x71, .sp=0x4d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe3cc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe3cc, .value=0xfd, .type=IO_READ},
        {.addr=0xe3cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_021A) {
    const struct CPU_State initial_cpu = {.pc=0x668f, .a=0xf9, .x=0xf7, .y=0x42, .sp=0xc9, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x668f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6690, .a=0xf9, .x=0xf7, .y=0xf9, .sp=0xc9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x668f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x668f, .value=0xfd, .type=IO_READ},
        {.addr=0x6690, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_021B) {
    const struct CPU_State initial_cpu = {.pc=0x0ae1, .a=0x37, .x=0x40, .y=0x94, .sp=0xbf, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0ae2, .a=0x37, .x=0x40, .y=0x37, .sp=0xbf, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0ae1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0ae1, .value=0xfd, .type=IO_READ},
        {.addr=0x0ae2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_021C) {
    const struct CPU_State initial_cpu = {.pc=0x9e9c, .a=0xf2, .x=0x22, .y=0x95, .sp=0x04, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x9e9c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9e9d, .a=0xf2, .x=0x22, .y=0xf2, .sp=0x04, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9e9c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9e9c, .value=0xfd, .type=IO_READ},
        {.addr=0x9e9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_021D) {
    const struct CPU_State initial_cpu = {.pc=0x8c45, .a=0x4c, .x=0xdc, .y=0x49, .sp=0x6a, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x8c45, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8c46, .a=0x4c, .x=0xdc, .y=0x4c, .sp=0x6a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8c45, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8c45, .value=0xfd, .type=IO_READ},
        {.addr=0x8c46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_021E) {
    const struct CPU_State initial_cpu = {.pc=0xa559, .a=0x01, .x=0xe0, .y=0x90, .sp=0x30, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa559, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa55a, .a=0x01, .x=0xe0, .y=0x01, .sp=0x30, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa559, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa559, .value=0xfd, .type=IO_READ},
        {.addr=0xa55a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_021F) {
    const struct CPU_State initial_cpu = {.pc=0x6cf7, .a=0x15, .x=0xaf, .y=0x52, .sp=0x75, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x6cf7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6cf8, .a=0x15, .x=0xaf, .y=0x15, .sp=0x75, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6cf7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6cf7, .value=0xfd, .type=IO_READ},
        {.addr=0x6cf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0220) {
    const struct CPU_State initial_cpu = {.pc=0x7309, .a=0x81, .x=0xd9, .y=0xd3, .sp=0x2b, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x7309, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x730a, .a=0x81, .x=0xd9, .y=0x81, .sp=0x2b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7309, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7309, .value=0xfd, .type=IO_READ},
        {.addr=0x730a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0221) {
    const struct CPU_State initial_cpu = {.pc=0xe429, .a=0x37, .x=0x13, .y=0xcc, .sp=0x44, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe429, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe42a, .a=0x37, .x=0x13, .y=0x37, .sp=0x44, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe429, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe429, .value=0xfd, .type=IO_READ},
        {.addr=0xe42a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0222) {
    const struct CPU_State initial_cpu = {.pc=0x9029, .a=0x2a, .x=0xfa, .y=0x07, .sp=0xe3, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x9029, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x902a, .a=0x2a, .x=0xfa, .y=0x2a, .sp=0xe3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9029, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9029, .value=0xfd, .type=IO_READ},
        {.addr=0x902a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0223) {
    const struct CPU_State initial_cpu = {.pc=0xfd7b, .a=0x54, .x=0xd7, .y=0x08, .sp=0xdb, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xfd7b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfd7c, .a=0x54, .x=0xd7, .y=0x54, .sp=0xdb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xfd7b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfd7b, .value=0xfd, .type=IO_READ},
        {.addr=0xfd7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0224) {
    const struct CPU_State initial_cpu = {.pc=0x8351, .a=0x70, .x=0xaf, .y=0xb7, .sp=0xe9, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8351, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8352, .a=0x70, .x=0xaf, .y=0x70, .sp=0xe9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8351, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8351, .value=0xfd, .type=IO_READ},
        {.addr=0x8352, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0225) {
    const struct CPU_State initial_cpu = {.pc=0x7548, .a=0xb9, .x=0xc7, .y=0xee, .sp=0xf6, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x7548, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7549, .a=0xb9, .x=0xc7, .y=0xb9, .sp=0xf6, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7548, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7548, .value=0xfd, .type=IO_READ},
        {.addr=0x7549, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0226) {
    const struct CPU_State initial_cpu = {.pc=0xc971, .a=0x5b, .x=0x7b, .y=0x06, .sp=0xf1, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc971, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc972, .a=0x5b, .x=0x7b, .y=0x5b, .sp=0xf1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc971, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc971, .value=0xfd, .type=IO_READ},
        {.addr=0xc972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0227) {
    const struct CPU_State initial_cpu = {.pc=0x7580, .a=0xf8, .x=0x5a, .y=0x1d, .sp=0xef, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x7580, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7581, .a=0xf8, .x=0x5a, .y=0xf8, .sp=0xef, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7580, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7580, .value=0xfd, .type=IO_READ},
        {.addr=0x7581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0228) {
    const struct CPU_State initial_cpu = {.pc=0x68be, .a=0x7a, .x=0x15, .y=0xbd, .sp=0x60, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x68be, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x68bf, .a=0x7a, .x=0x15, .y=0x7a, .sp=0x60, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x68be, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x68be, .value=0xfd, .type=IO_READ},
        {.addr=0x68bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0229) {
    const struct CPU_State initial_cpu = {.pc=0x27d8, .a=0x15, .x=0x20, .y=0x45, .sp=0x11, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x27d8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x27d9, .a=0x15, .x=0x20, .y=0x15, .sp=0x11, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x27d8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x27d8, .value=0xfd, .type=IO_READ},
        {.addr=0x27d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_022A) {
    const struct CPU_State initial_cpu = {.pc=0xb877, .a=0x20, .x=0x5b, .y=0x07, .sp=0x1e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xb877, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb878, .a=0x20, .x=0x5b, .y=0x20, .sp=0x1e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb877, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb877, .value=0xfd, .type=IO_READ},
        {.addr=0xb878, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_022B) {
    const struct CPU_State initial_cpu = {.pc=0xb636, .a=0x6d, .x=0xf0, .y=0x5d, .sp=0x43, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xb636, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb637, .a=0x6d, .x=0xf0, .y=0x6d, .sp=0x43, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xb636, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb636, .value=0xfd, .type=IO_READ},
        {.addr=0xb637, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_022C) {
    const struct CPU_State initial_cpu = {.pc=0x5dfb, .a=0xc5, .x=0xc4, .y=0x08, .sp=0x60, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x5dfb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5dfc, .a=0xc5, .x=0xc4, .y=0xc5, .sp=0x60, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5dfb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5dfb, .value=0xfd, .type=IO_READ},
        {.addr=0x5dfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_022D) {
    const struct CPU_State initial_cpu = {.pc=0x8a8f, .a=0x48, .x=0x26, .y=0x8d, .sp=0xd2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x8a8f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8a90, .a=0x48, .x=0x26, .y=0x48, .sp=0xd2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8a8f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8a8f, .value=0xfd, .type=IO_READ},
        {.addr=0x8a90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_022E) {
    const struct CPU_State initial_cpu = {.pc=0x3d5f, .a=0x22, .x=0x05, .y=0xc6, .sp=0xc7, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x3d5f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3d60, .a=0x22, .x=0x05, .y=0x22, .sp=0xc7, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x3d5f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3d5f, .value=0xfd, .type=IO_READ},
        {.addr=0x3d60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_022F) {
    const struct CPU_State initial_cpu = {.pc=0xe068, .a=0x5e, .x=0x2b, .y=0xbd, .sp=0xff, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xe068, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe069, .a=0x5e, .x=0x2b, .y=0x5e, .sp=0xff, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xe068, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe068, .value=0xfd, .type=IO_READ},
        {.addr=0xe069, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0230) {
    const struct CPU_State initial_cpu = {.pc=0x67c4, .a=0xa9, .x=0x6b, .y=0x45, .sp=0x8e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x67c4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x67c5, .a=0xa9, .x=0x6b, .y=0xa9, .sp=0x8e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x67c4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x67c4, .value=0xfd, .type=IO_READ},
        {.addr=0x67c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0231) {
    const struct CPU_State initial_cpu = {.pc=0x22e3, .a=0xcf, .x=0x12, .y=0xdd, .sp=0x45, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x22e3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x22e4, .a=0xcf, .x=0x12, .y=0xcf, .sp=0x45, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x22e3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x22e3, .value=0xfd, .type=IO_READ},
        {.addr=0x22e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0232) {
    const struct CPU_State initial_cpu = {.pc=0xd8cc, .a=0x48, .x=0x18, .y=0xb8, .sp=0xab, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd8cc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd8cd, .a=0x48, .x=0x18, .y=0x48, .sp=0xab, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd8cc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd8cc, .value=0xfd, .type=IO_READ},
        {.addr=0xd8cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0233) {
    const struct CPU_State initial_cpu = {.pc=0x5d09, .a=0x24, .x=0x16, .y=0x5e, .sp=0xe7, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x5d09, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5d0a, .a=0x24, .x=0x16, .y=0x24, .sp=0xe7, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x5d09, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5d09, .value=0xfd, .type=IO_READ},
        {.addr=0x5d0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0234) {
    const struct CPU_State initial_cpu = {.pc=0x465d, .a=0xd1, .x=0xe7, .y=0x39, .sp=0x76, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x465d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x465e, .a=0xd1, .x=0xe7, .y=0xd1, .sp=0x76, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x465d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x465d, .value=0xfd, .type=IO_READ},
        {.addr=0x465e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0235) {
    const struct CPU_State initial_cpu = {.pc=0x2b37, .a=0xe3, .x=0x32, .y=0x40, .sp=0x06, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2b37, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2b38, .a=0xe3, .x=0x32, .y=0xe3, .sp=0x06, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2b37, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2b37, .value=0xfd, .type=IO_READ},
        {.addr=0x2b38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0236) {
    const struct CPU_State initial_cpu = {.pc=0x0184, .a=0x3a, .x=0x63, .y=0x04, .sp=0x5e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0185, .a=0x3a, .x=0x63, .y=0x3a, .sp=0x5e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0184, .value=0xfd, .type=IO_READ},
        {.addr=0x0185, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0237) {
    const struct CPU_State initial_cpu = {.pc=0x6bf4, .a=0xc8, .x=0xf8, .y=0x76, .sp=0x8c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6bf5, .a=0xc8, .x=0xf8, .y=0xc8, .sp=0x8c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x6bf4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6bf4, .value=0xfd, .type=IO_READ},
        {.addr=0x6bf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0238) {
    const struct CPU_State initial_cpu = {.pc=0xae37, .a=0x25, .x=0x20, .y=0xff, .sp=0x12, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xae37, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xae38, .a=0x25, .x=0x20, .y=0x25, .sp=0x12, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xae37, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xae37, .value=0xfd, .type=IO_READ},
        {.addr=0xae38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0239) {
    const struct CPU_State initial_cpu = {.pc=0x5438, .a=0x40, .x=0x8a, .y=0x0a, .sp=0xe0, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x5438, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5439, .a=0x40, .x=0x8a, .y=0x40, .sp=0xe0, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5438, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5438, .value=0xfd, .type=IO_READ},
        {.addr=0x5439, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_023A) {
    const struct CPU_State initial_cpu = {.pc=0x8911, .a=0x92, .x=0x8a, .y=0x7b, .sp=0xfc, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x8911, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8912, .a=0x92, .x=0x8a, .y=0x92, .sp=0xfc, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8911, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8911, .value=0xfd, .type=IO_READ},
        {.addr=0x8912, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_023B) {
    const struct CPU_State initial_cpu = {.pc=0x6df8, .a=0x5d, .x=0x3f, .y=0x9d, .sp=0x1d, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x6df8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6df9, .a=0x5d, .x=0x3f, .y=0x5d, .sp=0x1d, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6df8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6df8, .value=0xfd, .type=IO_READ},
        {.addr=0x6df9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_023C) {
    const struct CPU_State initial_cpu = {.pc=0x1c04, .a=0x4d, .x=0x8e, .y=0xbb, .sp=0xc7, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x1c04, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1c05, .a=0x4d, .x=0x8e, .y=0x4d, .sp=0xc7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1c04, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1c04, .value=0xfd, .type=IO_READ},
        {.addr=0x1c05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_023D) {
    const struct CPU_State initial_cpu = {.pc=0x161a, .a=0xf9, .x=0x47, .y=0xcc, .sp=0xa2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x161a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x161b, .a=0xf9, .x=0x47, .y=0xf9, .sp=0xa2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x161a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x161a, .value=0xfd, .type=IO_READ},
        {.addr=0x161b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_023E) {
    const struct CPU_State initial_cpu = {.pc=0x8eea, .a=0x5f, .x=0xe8, .y=0xe7, .sp=0x7b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x8eea, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8eeb, .a=0x5f, .x=0xe8, .y=0x5f, .sp=0x7b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8eea, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8eea, .value=0xfd, .type=IO_READ},
        {.addr=0x8eeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_023F) {
    const struct CPU_State initial_cpu = {.pc=0x9f2b, .a=0xcf, .x=0x7a, .y=0x30, .sp=0x78, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x9f2b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9f2c, .a=0xcf, .x=0x7a, .y=0xcf, .sp=0x78, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9f2b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9f2b, .value=0xfd, .type=IO_READ},
        {.addr=0x9f2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0240) {
    const struct CPU_State initial_cpu = {.pc=0xb1ae, .a=0x45, .x=0x2c, .y=0x14, .sp=0x0e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xb1ae, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb1af, .a=0x45, .x=0x2c, .y=0x45, .sp=0x0e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb1ae, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb1ae, .value=0xfd, .type=IO_READ},
        {.addr=0xb1af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0241) {
    const struct CPU_State initial_cpu = {.pc=0x1615, .a=0x4c, .x=0x92, .y=0x91, .sp=0xfe, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x1615, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1616, .a=0x4c, .x=0x92, .y=0x4c, .sp=0xfe, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1615, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1615, .value=0xfd, .type=IO_READ},
        {.addr=0x1616, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0242) {
    const struct CPU_State initial_cpu = {.pc=0x24f7, .a=0x94, .x=0xf3, .y=0xd5, .sp=0x97, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x24f7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x24f8, .a=0x94, .x=0xf3, .y=0x94, .sp=0x97, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x24f7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x24f7, .value=0xfd, .type=IO_READ},
        {.addr=0x24f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0243) {
    const struct CPU_State initial_cpu = {.pc=0x58c9, .a=0xda, .x=0xe2, .y=0x22, .sp=0xe4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x58c9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x58ca, .a=0xda, .x=0xe2, .y=0xda, .sp=0xe4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x58c9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x58c9, .value=0xfd, .type=IO_READ},
        {.addr=0x58ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0244) {
    const struct CPU_State initial_cpu = {.pc=0x252e, .a=0x3a, .x=0xb4, .y=0xfd, .sp=0x8c, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x252e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x252f, .a=0x3a, .x=0xb4, .y=0x3a, .sp=0x8c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x252e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x252e, .value=0xfd, .type=IO_READ},
        {.addr=0x252f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0245) {
    const struct CPU_State initial_cpu = {.pc=0x1148, .a=0x23, .x=0x71, .y=0x16, .sp=0xa3, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x1148, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1149, .a=0x23, .x=0x71, .y=0x23, .sp=0xa3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1148, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1148, .value=0xfd, .type=IO_READ},
        {.addr=0x1149, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0246) {
    const struct CPU_State initial_cpu = {.pc=0xf442, .a=0x3a, .x=0xf2, .y=0x31, .sp=0x9b, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xf442, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf443, .a=0x3a, .x=0xf2, .y=0x3a, .sp=0x9b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf442, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf442, .value=0xfd, .type=IO_READ},
        {.addr=0xf443, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0247) {
    const struct CPU_State initial_cpu = {.pc=0xd7d4, .a=0x94, .x=0xee, .y=0x19, .sp=0xbb, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd7d4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd7d5, .a=0x94, .x=0xee, .y=0x94, .sp=0xbb, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd7d4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd7d4, .value=0xfd, .type=IO_READ},
        {.addr=0xd7d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0248) {
    const struct CPU_State initial_cpu = {.pc=0xed41, .a=0x71, .x=0x1f, .y=0x66, .sp=0x6f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xed41, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xed42, .a=0x71, .x=0x1f, .y=0x71, .sp=0x6f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xed41, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xed41, .value=0xfd, .type=IO_READ},
        {.addr=0xed42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0249) {
    const struct CPU_State initial_cpu = {.pc=0x4fb8, .a=0x1f, .x=0x25, .y=0x5b, .sp=0x0c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x4fb8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4fb9, .a=0x1f, .x=0x25, .y=0x1f, .sp=0x0c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x4fb8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4fb8, .value=0xfd, .type=IO_READ},
        {.addr=0x4fb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_024A) {
    const struct CPU_State initial_cpu = {.pc=0xaee9, .a=0xa2, .x=0x9b, .y=0x41, .sp=0x79, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xaee9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaeea, .a=0xa2, .x=0x9b, .y=0xa2, .sp=0x79, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xaee9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaee9, .value=0xfd, .type=IO_READ},
        {.addr=0xaeea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_024B) {
    const struct CPU_State initial_cpu = {.pc=0x3894, .a=0x77, .x=0x91, .y=0xdf, .sp=0xbf, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3894, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3895, .a=0x77, .x=0x91, .y=0x77, .sp=0xbf, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3894, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3894, .value=0xfd, .type=IO_READ},
        {.addr=0x3895, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_024C) {
    const struct CPU_State initial_cpu = {.pc=0x26d8, .a=0x02, .x=0x5e, .y=0x85, .sp=0x21, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x26d8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x26d9, .a=0x02, .x=0x5e, .y=0x02, .sp=0x21, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x26d8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x26d8, .value=0xfd, .type=IO_READ},
        {.addr=0x26d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_024D) {
    const struct CPU_State initial_cpu = {.pc=0xe703, .a=0x6b, .x=0x06, .y=0x7b, .sp=0xd7, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xe703, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe704, .a=0x6b, .x=0x06, .y=0x6b, .sp=0xd7, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe703, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe703, .value=0xfd, .type=IO_READ},
        {.addr=0xe704, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_024E) {
    const struct CPU_State initial_cpu = {.pc=0xd917, .a=0xaa, .x=0x14, .y=0x06, .sp=0xd5, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xd917, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd918, .a=0xaa, .x=0x14, .y=0xaa, .sp=0xd5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd917, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd917, .value=0xfd, .type=IO_READ},
        {.addr=0xd918, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_024F) {
    const struct CPU_State initial_cpu = {.pc=0xf76d, .a=0x34, .x=0xa4, .y=0xcc, .sp=0x8b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xf76d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf76e, .a=0x34, .x=0xa4, .y=0x34, .sp=0x8b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf76d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf76d, .value=0xfd, .type=IO_READ},
        {.addr=0xf76e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0250) {
    const struct CPU_State initial_cpu = {.pc=0x76d0, .a=0xcf, .x=0x94, .y=0x85, .sp=0x2b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x76d0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x76d1, .a=0xcf, .x=0x94, .y=0xcf, .sp=0x2b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x76d0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x76d0, .value=0xfd, .type=IO_READ},
        {.addr=0x76d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0251) {
    const struct CPU_State initial_cpu = {.pc=0xbfd8, .a=0xc5, .x=0xab, .y=0x0d, .sp=0xe8, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbfd9, .a=0xc5, .x=0xab, .y=0xc5, .sp=0xe8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbfd8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbfd8, .value=0xfd, .type=IO_READ},
        {.addr=0xbfd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0252) {
    const struct CPU_State initial_cpu = {.pc=0xc7fa, .a=0x0f, .x=0x53, .y=0xf7, .sp=0xe3, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xc7fa, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc7fb, .a=0x0f, .x=0x53, .y=0x0f, .sp=0xe3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc7fa, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc7fa, .value=0xfd, .type=IO_READ},
        {.addr=0xc7fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0253) {
    const struct CPU_State initial_cpu = {.pc=0xf02f, .a=0x7f, .x=0xcc, .y=0xea, .sp=0xc0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xf02f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf030, .a=0x7f, .x=0xcc, .y=0x7f, .sp=0xc0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xf02f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf02f, .value=0xfd, .type=IO_READ},
        {.addr=0xf030, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0254) {
    const struct CPU_State initial_cpu = {.pc=0xaece, .a=0xd6, .x=0xc6, .y=0xf1, .sp=0x58, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xaece, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaecf, .a=0xd6, .x=0xc6, .y=0xd6, .sp=0x58, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xaece, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaece, .value=0xfd, .type=IO_READ},
        {.addr=0xaecf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0255) {
    const struct CPU_State initial_cpu = {.pc=0x639c, .a=0x47, .x=0x8a, .y=0x75, .sp=0x62, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x639c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x639d, .a=0x47, .x=0x8a, .y=0x47, .sp=0x62, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x639c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x639c, .value=0xfd, .type=IO_READ},
        {.addr=0x639d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0256) {
    const struct CPU_State initial_cpu = {.pc=0xc7e0, .a=0x2a, .x=0x81, .y=0x68, .sp=0x83, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc7e0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc7e1, .a=0x2a, .x=0x81, .y=0x2a, .sp=0x83, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc7e0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc7e0, .value=0xfd, .type=IO_READ},
        {.addr=0xc7e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0257) {
    const struct CPU_State initial_cpu = {.pc=0x36b0, .a=0xda, .x=0x8a, .y=0x42, .sp=0x78, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x36b0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x36b1, .a=0xda, .x=0x8a, .y=0xda, .sp=0x78, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x36b0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x36b0, .value=0xfd, .type=IO_READ},
        {.addr=0x36b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0258) {
    const struct CPU_State initial_cpu = {.pc=0x1492, .a=0x9e, .x=0xb4, .y=0xb3, .sp=0xa6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x1492, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1493, .a=0x9e, .x=0xb4, .y=0x9e, .sp=0xa6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1492, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1492, .value=0xfd, .type=IO_READ},
        {.addr=0x1493, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0259) {
    const struct CPU_State initial_cpu = {.pc=0x31f8, .a=0x78, .x=0xb3, .y=0xba, .sp=0xc8, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x31f8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x31f9, .a=0x78, .x=0xb3, .y=0x78, .sp=0xc8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x31f8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x31f8, .value=0xfd, .type=IO_READ},
        {.addr=0x31f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_025A) {
    const struct CPU_State initial_cpu = {.pc=0x1b87, .a=0x77, .x=0xd2, .y=0x3f, .sp=0xef, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1b87, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1b88, .a=0x77, .x=0xd2, .y=0x77, .sp=0xef, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1b87, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1b87, .value=0xfd, .type=IO_READ},
        {.addr=0x1b88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_025B) {
    const struct CPU_State initial_cpu = {.pc=0x9384, .a=0xa2, .x=0x9d, .y=0xfe, .sp=0xa3, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x9384, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9385, .a=0xa2, .x=0x9d, .y=0xa2, .sp=0xa3, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x9384, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9384, .value=0xfd, .type=IO_READ},
        {.addr=0x9385, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_025C) {
    const struct CPU_State initial_cpu = {.pc=0xc1d0, .a=0x99, .x=0xa4, .y=0xd2, .sp=0x84, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc1d0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc1d1, .a=0x99, .x=0xa4, .y=0x99, .sp=0x84, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc1d0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc1d0, .value=0xfd, .type=IO_READ},
        {.addr=0xc1d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_025D) {
    const struct CPU_State initial_cpu = {.pc=0xddae, .a=0x65, .x=0x35, .y=0xc2, .sp=0x45, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xddae, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xddaf, .a=0x65, .x=0x35, .y=0x65, .sp=0x45, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xddae, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xddae, .value=0xfd, .type=IO_READ},
        {.addr=0xddaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_025E) {
    const struct CPU_State initial_cpu = {.pc=0x4108, .a=0x3e, .x=0x21, .y=0xe8, .sp=0x64, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4108, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4109, .a=0x3e, .x=0x21, .y=0x3e, .sp=0x64, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4108, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4108, .value=0xfd, .type=IO_READ},
        {.addr=0x4109, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_025F) {
    const struct CPU_State initial_cpu = {.pc=0xcb4f, .a=0xd8, .x=0x93, .y=0x76, .sp=0x83, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xcb4f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcb50, .a=0xd8, .x=0x93, .y=0xd8, .sp=0x83, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xcb4f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcb4f, .value=0xfd, .type=IO_READ},
        {.addr=0xcb50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0260) {
    const struct CPU_State initial_cpu = {.pc=0xb25f, .a=0x2a, .x=0x40, .y=0xd8, .sp=0xc1, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xb25f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb260, .a=0x2a, .x=0x40, .y=0x2a, .sp=0xc1, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xb25f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb25f, .value=0xfd, .type=IO_READ},
        {.addr=0xb260, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0261) {
    const struct CPU_State initial_cpu = {.pc=0xa8fb, .a=0x61, .x=0xf1, .y=0x6e, .sp=0x80, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xa8fb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa8fc, .a=0x61, .x=0xf1, .y=0x61, .sp=0x80, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa8fb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa8fb, .value=0xfd, .type=IO_READ},
        {.addr=0xa8fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0262) {
    const struct CPU_State initial_cpu = {.pc=0x7884, .a=0x3e, .x=0x92, .y=0x70, .sp=0x2a, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7884, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7885, .a=0x3e, .x=0x92, .y=0x3e, .sp=0x2a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x7884, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7884, .value=0xfd, .type=IO_READ},
        {.addr=0x7885, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0263) {
    const struct CPU_State initial_cpu = {.pc=0x88b2, .a=0xeb, .x=0x8c, .y=0x96, .sp=0x13, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x88b2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x88b3, .a=0xeb, .x=0x8c, .y=0xeb, .sp=0x13, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x88b2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x88b2, .value=0xfd, .type=IO_READ},
        {.addr=0x88b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0264) {
    const struct CPU_State initial_cpu = {.pc=0xab89, .a=0xbf, .x=0x1e, .y=0x61, .sp=0x9d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xab89, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xab8a, .a=0xbf, .x=0x1e, .y=0xbf, .sp=0x9d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xab89, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xab89, .value=0xfd, .type=IO_READ},
        {.addr=0xab8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0265) {
    const struct CPU_State initial_cpu = {.pc=0xf114, .a=0x57, .x=0xce, .y=0x30, .sp=0xf5, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xf114, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf115, .a=0x57, .x=0xce, .y=0x57, .sp=0xf5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xf114, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf114, .value=0xfd, .type=IO_READ},
        {.addr=0xf115, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0266) {
    const struct CPU_State initial_cpu = {.pc=0x409e, .a=0xac, .x=0xa3, .y=0x53, .sp=0xbf, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x409e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x409f, .a=0xac, .x=0xa3, .y=0xac, .sp=0xbf, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x409e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x409e, .value=0xfd, .type=IO_READ},
        {.addr=0x409f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0267) {
    const struct CPU_State initial_cpu = {.pc=0x9e5c, .a=0x8f, .x=0xbf, .y=0x40, .sp=0xae, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x9e5c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9e5d, .a=0x8f, .x=0xbf, .y=0x8f, .sp=0xae, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9e5c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9e5c, .value=0xfd, .type=IO_READ},
        {.addr=0x9e5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0268) {
    const struct CPU_State initial_cpu = {.pc=0xd42a, .a=0x8a, .x=0x2a, .y=0x59, .sp=0x3f, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xd42a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd42b, .a=0x8a, .x=0x2a, .y=0x8a, .sp=0x3f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd42a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd42a, .value=0xfd, .type=IO_READ},
        {.addr=0xd42b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0269) {
    const struct CPU_State initial_cpu = {.pc=0xa04c, .a=0xfd, .x=0x22, .y=0x3d, .sp=0x85, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xa04c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa04d, .a=0xfd, .x=0x22, .y=0xfd, .sp=0x85, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xa04c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa04c, .value=0xfd, .type=IO_READ},
        {.addr=0xa04d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_026A) {
    const struct CPU_State initial_cpu = {.pc=0x3fbf, .a=0xfb, .x=0x23, .y=0x7a, .sp=0x62, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x3fbf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3fc0, .a=0xfb, .x=0x23, .y=0xfb, .sp=0x62, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x3fbf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3fbf, .value=0xfd, .type=IO_READ},
        {.addr=0x3fc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_026B) {
    const struct CPU_State initial_cpu = {.pc=0x72d9, .a=0x8b, .x=0x15, .y=0xa8, .sp=0x6f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x72d9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x72da, .a=0x8b, .x=0x15, .y=0x8b, .sp=0x6f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x72d9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x72d9, .value=0xfd, .type=IO_READ},
        {.addr=0x72da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_026C) {
    const struct CPU_State initial_cpu = {.pc=0xd0e6, .a=0x19, .x=0xc3, .y=0x10, .sp=0x91, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd0e7, .a=0x19, .x=0xc3, .y=0x19, .sp=0x91, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd0e6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd0e6, .value=0xfd, .type=IO_READ},
        {.addr=0xd0e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_026D) {
    const struct CPU_State initial_cpu = {.pc=0x68b9, .a=0x69, .x=0xaf, .y=0x7f, .sp=0xea, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x68b9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x68ba, .a=0x69, .x=0xaf, .y=0x69, .sp=0xea, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x68b9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x68b9, .value=0xfd, .type=IO_READ},
        {.addr=0x68ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_026E) {
    const struct CPU_State initial_cpu = {.pc=0xabbd, .a=0xdf, .x=0x79, .y=0x51, .sp=0x78, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xabbd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xabbe, .a=0xdf, .x=0x79, .y=0xdf, .sp=0x78, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xabbd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xabbd, .value=0xfd, .type=IO_READ},
        {.addr=0xabbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_026F) {
    const struct CPU_State initial_cpu = {.pc=0x8db6, .a=0x74, .x=0x16, .y=0xa6, .sp=0xdb, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x8db6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8db7, .a=0x74, .x=0x16, .y=0x74, .sp=0xdb, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x8db6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8db6, .value=0xfd, .type=IO_READ},
        {.addr=0x8db7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0270) {
    const struct CPU_State initial_cpu = {.pc=0xd742, .a=0x3c, .x=0xcc, .y=0xa9, .sp=0x28, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xd742, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd743, .a=0x3c, .x=0xcc, .y=0x3c, .sp=0x28, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd742, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd742, .value=0xfd, .type=IO_READ},
        {.addr=0xd743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0271) {
    const struct CPU_State initial_cpu = {.pc=0x42d2, .a=0x95, .x=0x7d, .y=0xf1, .sp=0x7e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x42d2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x42d3, .a=0x95, .x=0x7d, .y=0x95, .sp=0x7e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x42d2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x42d2, .value=0xfd, .type=IO_READ},
        {.addr=0x42d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0272) {
    const struct CPU_State initial_cpu = {.pc=0x75c2, .a=0x22, .x=0x8a, .y=0x4b, .sp=0x45, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x75c2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x75c3, .a=0x22, .x=0x8a, .y=0x22, .sp=0x45, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x75c2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x75c2, .value=0xfd, .type=IO_READ},
        {.addr=0x75c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0273) {
    const struct CPU_State initial_cpu = {.pc=0xac46, .a=0x43, .x=0x12, .y=0x33, .sp=0xfb, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xac46, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xac47, .a=0x43, .x=0x12, .y=0x43, .sp=0xfb, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xac46, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xac46, .value=0xfd, .type=IO_READ},
        {.addr=0xac47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0274) {
    const struct CPU_State initial_cpu = {.pc=0x9357, .a=0x9b, .x=0x84, .y=0x65, .sp=0x3b, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x9357, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9358, .a=0x9b, .x=0x84, .y=0x9b, .sp=0x3b, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9357, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9357, .value=0xfd, .type=IO_READ},
        {.addr=0x9358, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0275) {
    const struct CPU_State initial_cpu = {.pc=0xe71b, .a=0x66, .x=0x08, .y=0x89, .sp=0xa9, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xe71b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe71c, .a=0x66, .x=0x08, .y=0x66, .sp=0xa9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe71b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe71b, .value=0xfd, .type=IO_READ},
        {.addr=0xe71c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0276) {
    const struct CPU_State initial_cpu = {.pc=0x70b0, .a=0x65, .x=0x49, .y=0xc2, .sp=0xc0, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x70b0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x70b1, .a=0x65, .x=0x49, .y=0x65, .sp=0xc0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x70b0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x70b0, .value=0xfd, .type=IO_READ},
        {.addr=0x70b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0277) {
    const struct CPU_State initial_cpu = {.pc=0x685e, .a=0x41, .x=0x35, .y=0x57, .sp=0x44, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x685e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x685f, .a=0x41, .x=0x35, .y=0x41, .sp=0x44, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x685e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x685e, .value=0xfd, .type=IO_READ},
        {.addr=0x685f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0278) {
    const struct CPU_State initial_cpu = {.pc=0xd204, .a=0xc4, .x=0xc8, .y=0xd5, .sp=0x14, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xd204, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd205, .a=0xc4, .x=0xc8, .y=0xc4, .sp=0x14, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd204, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd204, .value=0xfd, .type=IO_READ},
        {.addr=0xd205, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0279) {
    const struct CPU_State initial_cpu = {.pc=0x043a, .a=0xcd, .x=0x44, .y=0x72, .sp=0xfe, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x043a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x043b, .a=0xcd, .x=0x44, .y=0xcd, .sp=0xfe, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x043a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x043a, .value=0xfd, .type=IO_READ},
        {.addr=0x043b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_027A) {
    const struct CPU_State initial_cpu = {.pc=0x071e, .a=0x85, .x=0x3c, .y=0xf7, .sp=0x7f, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x071e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x071f, .a=0x85, .x=0x3c, .y=0x85, .sp=0x7f, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x071e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x071e, .value=0xfd, .type=IO_READ},
        {.addr=0x071f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_027B) {
    const struct CPU_State initial_cpu = {.pc=0xbdc0, .a=0xf9, .x=0xdb, .y=0x3a, .sp=0x9a, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xbdc0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbdc1, .a=0xf9, .x=0xdb, .y=0xf9, .sp=0x9a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xbdc0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbdc0, .value=0xfd, .type=IO_READ},
        {.addr=0xbdc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_027C) {
    const struct CPU_State initial_cpu = {.pc=0xbafa, .a=0x8c, .x=0xb8, .y=0x5a, .sp=0x1a, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xbafa, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbafb, .a=0x8c, .x=0xb8, .y=0x8c, .sp=0x1a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbafa, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbafa, .value=0xfd, .type=IO_READ},
        {.addr=0xbafb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_027D) {
    const struct CPU_State initial_cpu = {.pc=0x393b, .a=0xe2, .x=0xea, .y=0x52, .sp=0xdb, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x393b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x393c, .a=0xe2, .x=0xea, .y=0xe2, .sp=0xdb, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x393b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x393b, .value=0xfd, .type=IO_READ},
        {.addr=0x393c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_027E) {
    const struct CPU_State initial_cpu = {.pc=0x188f, .a=0x6d, .x=0xe0, .y=0x03, .sp=0xdd, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x188f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1890, .a=0x6d, .x=0xe0, .y=0x6d, .sp=0xdd, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x188f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x188f, .value=0xfd, .type=IO_READ},
        {.addr=0x1890, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_027F) {
    const struct CPU_State initial_cpu = {.pc=0xff1f, .a=0xb3, .x=0xba, .y=0x59, .sp=0x41, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xff1f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xff20, .a=0xb3, .x=0xba, .y=0xb3, .sp=0x41, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xff1f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xff1f, .value=0xfd, .type=IO_READ},
        {.addr=0xff20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0280) {
    const struct CPU_State initial_cpu = {.pc=0xe5e8, .a=0xa1, .x=0xd3, .y=0x57, .sp=0x6b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe5e9, .a=0xa1, .x=0xd3, .y=0xa1, .sp=0x6b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xe5e8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe5e8, .value=0xfd, .type=IO_READ},
        {.addr=0xe5e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0281) {
    const struct CPU_State initial_cpu = {.pc=0xac62, .a=0x93, .x=0xe8, .y=0x4f, .sp=0x49, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xac62, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xac63, .a=0x93, .x=0xe8, .y=0x93, .sp=0x49, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xac62, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xac62, .value=0xfd, .type=IO_READ},
        {.addr=0xac63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0282) {
    const struct CPU_State initial_cpu = {.pc=0x5ea2, .a=0xb9, .x=0x63, .y=0xd5, .sp=0x81, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x5ea2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5ea3, .a=0xb9, .x=0x63, .y=0xb9, .sp=0x81, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x5ea2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5ea2, .value=0xfd, .type=IO_READ},
        {.addr=0x5ea3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0283) {
    const struct CPU_State initial_cpu = {.pc=0x6305, .a=0x45, .x=0x59, .y=0xc1, .sp=0xa0, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6305, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6306, .a=0x45, .x=0x59, .y=0x45, .sp=0xa0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6305, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6305, .value=0xfd, .type=IO_READ},
        {.addr=0x6306, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0284) {
    const struct CPU_State initial_cpu = {.pc=0xfe76, .a=0x7d, .x=0x8c, .y=0xd5, .sp=0xc3, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xfe76, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfe77, .a=0x7d, .x=0x8c, .y=0x7d, .sp=0xc3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfe76, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfe76, .value=0xfd, .type=IO_READ},
        {.addr=0xfe77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0285) {
    const struct CPU_State initial_cpu = {.pc=0x7f1b, .a=0xa0, .x=0xfa, .y=0x0a, .sp=0x70, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x7f1b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7f1c, .a=0xa0, .x=0xfa, .y=0xa0, .sp=0x70, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x7f1b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7f1b, .value=0xfd, .type=IO_READ},
        {.addr=0x7f1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0286) {
    const struct CPU_State initial_cpu = {.pc=0x3075, .a=0xa4, .x=0xf9, .y=0x7a, .sp=0xef, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x3075, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3076, .a=0xa4, .x=0xf9, .y=0xa4, .sp=0xef, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3075, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3075, .value=0xfd, .type=IO_READ},
        {.addr=0x3076, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0287) {
    const struct CPU_State initial_cpu = {.pc=0x6b65, .a=0xbf, .x=0x11, .y=0xe7, .sp=0x46, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x6b65, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6b66, .a=0xbf, .x=0x11, .y=0xbf, .sp=0x46, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6b65, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6b65, .value=0xfd, .type=IO_READ},
        {.addr=0x6b66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0288) {
    const struct CPU_State initial_cpu = {.pc=0xccf2, .a=0x54, .x=0x57, .y=0x9c, .sp=0xa2, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xccf2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xccf3, .a=0x54, .x=0x57, .y=0x54, .sp=0xa2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xccf2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xccf2, .value=0xfd, .type=IO_READ},
        {.addr=0xccf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0289) {
    const struct CPU_State initial_cpu = {.pc=0xecf2, .a=0x0c, .x=0x37, .y=0xee, .sp=0xb3, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xecf2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xecf3, .a=0x0c, .x=0x37, .y=0x0c, .sp=0xb3, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xecf2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xecf2, .value=0xfd, .type=IO_READ},
        {.addr=0xecf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_028A) {
    const struct CPU_State initial_cpu = {.pc=0x2301, .a=0x8f, .x=0xd5, .y=0x5b, .sp=0xcd, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2301, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2302, .a=0x8f, .x=0xd5, .y=0x8f, .sp=0xcd, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2301, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2301, .value=0xfd, .type=IO_READ},
        {.addr=0x2302, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_028B) {
    const struct CPU_State initial_cpu = {.pc=0x24ff, .a=0x3d, .x=0x47, .y=0x6d, .sp=0xb4, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x24ff, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2500, .a=0x3d, .x=0x47, .y=0x3d, .sp=0xb4, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x24ff, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x24ff, .value=0xfd, .type=IO_READ},
        {.addr=0x2500, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_028C) {
    const struct CPU_State initial_cpu = {.pc=0x2de0, .a=0x93, .x=0x10, .y=0x2d, .sp=0x5c, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2de0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2de1, .a=0x93, .x=0x10, .y=0x93, .sp=0x5c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x2de0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2de0, .value=0xfd, .type=IO_READ},
        {.addr=0x2de1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_028D) {
    const struct CPU_State initial_cpu = {.pc=0xc8b6, .a=0xeb, .x=0x0b, .y=0x3c, .sp=0x4c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xc8b6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc8b7, .a=0xeb, .x=0x0b, .y=0xeb, .sp=0x4c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc8b6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc8b6, .value=0xfd, .type=IO_READ},
        {.addr=0xc8b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_028E) {
    const struct CPU_State initial_cpu = {.pc=0x75d2, .a=0x3b, .x=0xd6, .y=0x17, .sp=0xd5, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x75d2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x75d3, .a=0x3b, .x=0xd6, .y=0x3b, .sp=0xd5, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x75d2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x75d2, .value=0xfd, .type=IO_READ},
        {.addr=0x75d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_028F) {
    const struct CPU_State initial_cpu = {.pc=0x820d, .a=0x13, .x=0xf5, .y=0x30, .sp=0xb5, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x820d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x820e, .a=0x13, .x=0xf5, .y=0x13, .sp=0xb5, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x820d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x820d, .value=0xfd, .type=IO_READ},
        {.addr=0x820e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0290) {
    const struct CPU_State initial_cpu = {.pc=0xfe1e, .a=0x5f, .x=0xed, .y=0x32, .sp=0x05, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xfe1e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfe1f, .a=0x5f, .x=0xed, .y=0x5f, .sp=0x05, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xfe1e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfe1e, .value=0xfd, .type=IO_READ},
        {.addr=0xfe1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0291) {
    const struct CPU_State initial_cpu = {.pc=0xa533, .a=0x2e, .x=0xfb, .y=0x6c, .sp=0xf6, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa533, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa534, .a=0x2e, .x=0xfb, .y=0x2e, .sp=0xf6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa533, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa533, .value=0xfd, .type=IO_READ},
        {.addr=0xa534, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0292) {
    const struct CPU_State initial_cpu = {.pc=0x95de, .a=0xfa, .x=0x3b, .y=0xe5, .sp=0xb8, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x95de, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x95df, .a=0xfa, .x=0x3b, .y=0xfa, .sp=0xb8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x95de, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x95de, .value=0xfd, .type=IO_READ},
        {.addr=0x95df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0293) {
    const struct CPU_State initial_cpu = {.pc=0x814a, .a=0x94, .x=0x82, .y=0x16, .sp=0xbe, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x814a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x814b, .a=0x94, .x=0x82, .y=0x94, .sp=0xbe, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x814a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x814a, .value=0xfd, .type=IO_READ},
        {.addr=0x814b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0294) {
    const struct CPU_State initial_cpu = {.pc=0x64e9, .a=0xf5, .x=0x2e, .y=0x3d, .sp=0x0c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x64e9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x64ea, .a=0xf5, .x=0x2e, .y=0xf5, .sp=0x0c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x64e9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x64e9, .value=0xfd, .type=IO_READ},
        {.addr=0x64ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0295) {
    const struct CPU_State initial_cpu = {.pc=0x760b, .a=0x13, .x=0xa3, .y=0x84, .sp=0x5c, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x760b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x760c, .a=0x13, .x=0xa3, .y=0x13, .sp=0x5c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x760b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x760b, .value=0xfd, .type=IO_READ},
        {.addr=0x760c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0296) {
    const struct CPU_State initial_cpu = {.pc=0x7da7, .a=0xf4, .x=0xf1, .y=0x6f, .sp=0xc2, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7da7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7da8, .a=0xf4, .x=0xf1, .y=0xf4, .sp=0xc2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7da7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7da7, .value=0xfd, .type=IO_READ},
        {.addr=0x7da8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0297) {
    const struct CPU_State initial_cpu = {.pc=0xf392, .a=0x04, .x=0x53, .y=0xf0, .sp=0xc8, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf392, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf393, .a=0x04, .x=0x53, .y=0x04, .sp=0xc8, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf392, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf392, .value=0xfd, .type=IO_READ},
        {.addr=0xf393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0298) {
    const struct CPU_State initial_cpu = {.pc=0x733c, .a=0xad, .x=0xb0, .y=0x29, .sp=0x88, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x733c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x733d, .a=0xad, .x=0xb0, .y=0xad, .sp=0x88, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x733c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x733c, .value=0xfd, .type=IO_READ},
        {.addr=0x733d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0299) {
    const struct CPU_State initial_cpu = {.pc=0xbf97, .a=0xc9, .x=0x08, .y=0xa9, .sp=0x9c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xbf97, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbf98, .a=0xc9, .x=0x08, .y=0xc9, .sp=0x9c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbf97, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbf97, .value=0xfd, .type=IO_READ},
        {.addr=0xbf98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_029A) {
    const struct CPU_State initial_cpu = {.pc=0x414b, .a=0xb8, .x=0xe1, .y=0x3a, .sp=0xea, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x414b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x414c, .a=0xb8, .x=0xe1, .y=0xb8, .sp=0xea, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x414b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x414b, .value=0xfd, .type=IO_READ},
        {.addr=0x414c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_029B) {
    const struct CPU_State initial_cpu = {.pc=0x252b, .a=0x4c, .x=0xc6, .y=0x39, .sp=0xdd, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x252b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x252c, .a=0x4c, .x=0xc6, .y=0x4c, .sp=0xdd, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x252b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x252b, .value=0xfd, .type=IO_READ},
        {.addr=0x252c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_029C) {
    const struct CPU_State initial_cpu = {.pc=0x9b0f, .a=0x7a, .x=0x47, .y=0x51, .sp=0xcb, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9b0f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9b10, .a=0x7a, .x=0x47, .y=0x7a, .sp=0xcb, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9b0f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9b0f, .value=0xfd, .type=IO_READ},
        {.addr=0x9b10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_029D) {
    const struct CPU_State initial_cpu = {.pc=0xe275, .a=0xb3, .x=0x14, .y=0x47, .sp=0x15, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xe275, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe276, .a=0xb3, .x=0x14, .y=0xb3, .sp=0x15, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xe275, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe275, .value=0xfd, .type=IO_READ},
        {.addr=0xe276, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_029E) {
    const struct CPU_State initial_cpu = {.pc=0x8778, .a=0x02, .x=0x5c, .y=0x7e, .sp=0xbf, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x8778, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8779, .a=0x02, .x=0x5c, .y=0x02, .sp=0xbf, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x8778, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8778, .value=0xfd, .type=IO_READ},
        {.addr=0x8779, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_029F) {
    const struct CPU_State initial_cpu = {.pc=0x4049, .a=0x8d, .x=0x4d, .y=0xc7, .sp=0x8d, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x4049, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x404a, .a=0x8d, .x=0x4d, .y=0x8d, .sp=0x8d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4049, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4049, .value=0xfd, .type=IO_READ},
        {.addr=0x404a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x2d2b, .a=0xf3, .x=0x25, .y=0xa8, .sp=0xf8, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x2d2b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2d2c, .a=0xf3, .x=0x25, .y=0xf3, .sp=0xf8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x2d2b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2d2b, .value=0xfd, .type=IO_READ},
        {.addr=0x2d2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xd1fd, .a=0x37, .x=0x9c, .y=0x85, .sp=0x78, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xd1fd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd1fe, .a=0x37, .x=0x9c, .y=0x37, .sp=0x78, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xd1fd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd1fd, .value=0xfd, .type=IO_READ},
        {.addr=0xd1fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x81c2, .a=0x6a, .x=0x27, .y=0x88, .sp=0x4f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x81c2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x81c3, .a=0x6a, .x=0x27, .y=0x6a, .sp=0x4f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x81c2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x81c2, .value=0xfd, .type=IO_READ},
        {.addr=0x81c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xc444, .a=0xbe, .x=0x7b, .y=0x2f, .sp=0x2e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xc444, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc445, .a=0xbe, .x=0x7b, .y=0xbe, .sp=0x2e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc444, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc444, .value=0xfd, .type=IO_READ},
        {.addr=0xc445, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x8f39, .a=0x59, .x=0x56, .y=0xd4, .sp=0x7c, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8f39, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8f3a, .a=0x59, .x=0x56, .y=0x59, .sp=0x7c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8f39, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8f39, .value=0xfd, .type=IO_READ},
        {.addr=0x8f3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x5e7d, .a=0xb5, .x=0x9b, .y=0x35, .sp=0x10, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x5e7d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5e7e, .a=0xb5, .x=0x9b, .y=0xb5, .sp=0x10, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x5e7d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5e7d, .value=0xfd, .type=IO_READ},
        {.addr=0x5e7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x7683, .a=0x5f, .x=0x1c, .y=0xe3, .sp=0x20, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x7683, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7684, .a=0x5f, .x=0x1c, .y=0x5f, .sp=0x20, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7683, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7683, .value=0xfd, .type=IO_READ},
        {.addr=0x7684, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xc83b, .a=0xde, .x=0xc1, .y=0x6b, .sp=0x38, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xc83b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc83c, .a=0xde, .x=0xc1, .y=0xde, .sp=0x38, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc83b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc83b, .value=0xfd, .type=IO_READ},
        {.addr=0xc83c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x6d6d, .a=0xf7, .x=0x65, .y=0x41, .sp=0x3d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6d6d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6d6e, .a=0xf7, .x=0x65, .y=0xf7, .sp=0x3d, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6d6d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6d6d, .value=0xfd, .type=IO_READ},
        {.addr=0x6d6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xacc5, .a=0xb8, .x=0x4d, .y=0x7a, .sp=0x61, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xacc5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xacc6, .a=0xb8, .x=0x4d, .y=0xb8, .sp=0x61, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xacc5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xacc5, .value=0xfd, .type=IO_READ},
        {.addr=0xacc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xcf67, .a=0xbf, .x=0x65, .y=0x58, .sp=0xf6, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xcf67, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcf68, .a=0xbf, .x=0x65, .y=0xbf, .sp=0xf6, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xcf67, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcf67, .value=0xfd, .type=IO_READ},
        {.addr=0xcf68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x4164, .a=0x4e, .x=0xb4, .y=0x82, .sp=0xe0, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x4164, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4165, .a=0x4e, .x=0xb4, .y=0x4e, .sp=0xe0, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4164, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4164, .value=0xfd, .type=IO_READ},
        {.addr=0x4165, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x69de, .a=0x8c, .x=0x65, .y=0xf2, .sp=0xce, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x69de, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x69df, .a=0x8c, .x=0x65, .y=0x8c, .sp=0xce, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x69de, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x69de, .value=0xfd, .type=IO_READ},
        {.addr=0x69df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xc0db, .a=0x5f, .x=0x38, .y=0x4b, .sp=0xa5, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xc0db, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc0dc, .a=0x5f, .x=0x38, .y=0x5f, .sp=0xa5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc0db, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc0db, .value=0xfd, .type=IO_READ},
        {.addr=0xc0dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x477e, .a=0x21, .x=0x5f, .y=0xfd, .sp=0x3c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x477e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x477f, .a=0x21, .x=0x5f, .y=0x21, .sp=0x3c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x477e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x477e, .value=0xfd, .type=IO_READ},
        {.addr=0x477f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xe918, .a=0x9a, .x=0xde, .y=0xd8, .sp=0x77, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xe918, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe919, .a=0x9a, .x=0xde, .y=0x9a, .sp=0x77, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe918, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe918, .value=0xfd, .type=IO_READ},
        {.addr=0xe919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x47e8, .a=0x02, .x=0xf5, .y=0x2d, .sp=0xf4, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x47e8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x47e9, .a=0x02, .x=0xf5, .y=0x02, .sp=0xf4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x47e8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x47e8, .value=0xfd, .type=IO_READ},
        {.addr=0x47e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x13bc, .a=0x46, .x=0xb1, .y=0x03, .sp=0xd8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x13bc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x13bd, .a=0x46, .x=0xb1, .y=0x46, .sp=0xd8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x13bc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x13bc, .value=0xfd, .type=IO_READ},
        {.addr=0x13bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xe75c, .a=0x23, .x=0xc4, .y=0x68, .sp=0x15, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xe75c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe75d, .a=0x23, .x=0xc4, .y=0x23, .sp=0x15, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe75c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe75c, .value=0xfd, .type=IO_READ},
        {.addr=0xe75d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xac2c, .a=0x5f, .x=0x60, .y=0xa5, .sp=0x24, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xac2c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xac2d, .a=0x5f, .x=0x60, .y=0x5f, .sp=0x24, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xac2c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xac2c, .value=0xfd, .type=IO_READ},
        {.addr=0xac2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x002e, .a=0x99, .x=0x11, .y=0x9a, .sp=0x5b, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x002f, .a=0x99, .x=0x11, .y=0x99, .sp=0x5b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x002e, .value=0xfd, .type=IO_READ},
        {.addr=0x002f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xa433, .a=0xe7, .x=0x2c, .y=0xe7, .sp=0xd2, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xa433, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa434, .a=0xe7, .x=0x2c, .y=0xe7, .sp=0xd2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa433, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa433, .value=0xfd, .type=IO_READ},
        {.addr=0xa434, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xca55, .a=0x81, .x=0xed, .y=0x29, .sp=0xf5, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xca55, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xca56, .a=0x81, .x=0xed, .y=0x81, .sp=0xf5, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xca55, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xca55, .value=0xfd, .type=IO_READ},
        {.addr=0xca56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x8883, .a=0xe5, .x=0xc8, .y=0x05, .sp=0xd3, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x8883, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8884, .a=0xe5, .x=0xc8, .y=0xe5, .sp=0xd3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8883, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8883, .value=0xfd, .type=IO_READ},
        {.addr=0x8884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x0381, .a=0x03, .x=0xa7, .y=0x94, .sp=0xb1, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0381, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0382, .a=0x03, .x=0xa7, .y=0x03, .sp=0xb1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0381, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0381, .value=0xfd, .type=IO_READ},
        {.addr=0x0382, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x2f58, .a=0xef, .x=0x42, .y=0xa5, .sp=0x0a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2f58, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2f59, .a=0xef, .x=0x42, .y=0xef, .sp=0x0a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2f58, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2f58, .value=0xfd, .type=IO_READ},
        {.addr=0x2f59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x4707, .a=0x4f, .x=0x08, .y=0xa2, .sp=0x93, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4707, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4708, .a=0x4f, .x=0x08, .y=0x4f, .sp=0x93, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4707, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4707, .value=0xfd, .type=IO_READ},
        {.addr=0x4708, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x26df, .a=0x11, .x=0x92, .y=0x37, .sp=0x23, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x26df, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x26e0, .a=0x11, .x=0x92, .y=0x11, .sp=0x23, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x26df, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x26df, .value=0xfd, .type=IO_READ},
        {.addr=0x26e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x3ec8, .a=0x8f, .x=0x9d, .y=0xe0, .sp=0x6d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x3ec8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3ec9, .a=0x8f, .x=0x9d, .y=0x8f, .sp=0x6d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3ec8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3ec8, .value=0xfd, .type=IO_READ},
        {.addr=0x3ec9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x5359, .a=0xf4, .x=0x5b, .y=0x6d, .sp=0x70, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x5359, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x535a, .a=0xf4, .x=0x5b, .y=0xf4, .sp=0x70, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5359, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5359, .value=0xfd, .type=IO_READ},
        {.addr=0x535a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x508e, .a=0x76, .x=0x30, .y=0xdf, .sp=0xb7, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x508e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x508f, .a=0x76, .x=0x30, .y=0x76, .sp=0xb7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x508e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x508e, .value=0xfd, .type=IO_READ},
        {.addr=0x508f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x618b, .a=0x81, .x=0xc7, .y=0x1e, .sp=0x52, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x618b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x618c, .a=0x81, .x=0xc7, .y=0x81, .sp=0x52, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x618b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x618b, .value=0xfd, .type=IO_READ},
        {.addr=0x618c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x2deb, .a=0xd8, .x=0x8e, .y=0x8e, .sp=0xa0, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2deb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2dec, .a=0xd8, .x=0x8e, .y=0xd8, .sp=0xa0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2deb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2deb, .value=0xfd, .type=IO_READ},
        {.addr=0x2dec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x8ce7, .a=0x07, .x=0xef, .y=0x1c, .sp=0x5a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8ce8, .a=0x07, .x=0xef, .y=0x07, .sp=0x5a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x8ce7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8ce7, .value=0xfd, .type=IO_READ},
        {.addr=0x8ce8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x2221, .a=0x0d, .x=0x02, .y=0xda, .sp=0xba, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x2221, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2222, .a=0x0d, .x=0x02, .y=0x0d, .sp=0xba, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2221, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2221, .value=0xfd, .type=IO_READ},
        {.addr=0x2222, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x7da0, .a=0x95, .x=0x08, .y=0xa3, .sp=0x6a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7da0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7da1, .a=0x95, .x=0x08, .y=0x95, .sp=0x6a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7da0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7da0, .value=0xfd, .type=IO_READ},
        {.addr=0x7da1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x8d82, .a=0x86, .x=0x18, .y=0x5b, .sp=0x88, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x8d82, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8d83, .a=0x86, .x=0x18, .y=0x86, .sp=0x88, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x8d82, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8d82, .value=0xfd, .type=IO_READ},
        {.addr=0x8d83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x875c, .a=0x2d, .x=0xb0, .y=0x1c, .sp=0x62, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x875c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x875d, .a=0x2d, .x=0xb0, .y=0x2d, .sp=0x62, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x875c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x875c, .value=0xfd, .type=IO_READ},
        {.addr=0x875d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x8635, .a=0x14, .x=0x06, .y=0x85, .sp=0x65, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x8635, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8636, .a=0x14, .x=0x06, .y=0x14, .sp=0x65, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x8635, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8635, .value=0xfd, .type=IO_READ},
        {.addr=0x8636, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xaeea, .a=0x1f, .x=0xf3, .y=0xe2, .sp=0x36, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xaeea, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaeeb, .a=0x1f, .x=0xf3, .y=0x1f, .sp=0x36, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xaeea, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaeea, .value=0xfd, .type=IO_READ},
        {.addr=0xaeeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xa4b4, .a=0xc2, .x=0x94, .y=0x3b, .sp=0xac, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa4b5, .a=0xc2, .x=0x94, .y=0xc2, .sp=0xac, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa4b4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa4b4, .value=0xfd, .type=IO_READ},
        {.addr=0xa4b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xcae8, .a=0x1a, .x=0xec, .y=0x0e, .sp=0x55, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xcae8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcae9, .a=0x1a, .x=0xec, .y=0x1a, .sp=0x55, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xcae8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcae8, .value=0xfd, .type=IO_READ},
        {.addr=0xcae9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x57c0, .a=0x5b, .x=0x4b, .y=0x43, .sp=0xd4, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x57c0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x57c1, .a=0x5b, .x=0x4b, .y=0x5b, .sp=0xd4, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x57c0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x57c0, .value=0xfd, .type=IO_READ},
        {.addr=0x57c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x07fb, .a=0xf2, .x=0x04, .y=0xbe, .sp=0x56, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x07fb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x07fc, .a=0xf2, .x=0x04, .y=0xf2, .sp=0x56, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x07fb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x07fb, .value=0xfd, .type=IO_READ},
        {.addr=0x07fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xee35, .a=0xfa, .x=0x32, .y=0x3a, .sp=0xc6, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xee35, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xee36, .a=0xfa, .x=0x32, .y=0xfa, .sp=0xc6, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xee35, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xee35, .value=0xfd, .type=IO_READ},
        {.addr=0xee36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x103d, .a=0x7b, .x=0x5c, .y=0xa2, .sp=0x7a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x103d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x103e, .a=0x7b, .x=0x5c, .y=0x7b, .sp=0x7a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x103d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x103d, .value=0xfd, .type=IO_READ},
        {.addr=0x103e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x0008, .a=0x10, .x=0x6e, .y=0x04, .sp=0xa1, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0009, .a=0x10, .x=0x6e, .y=0x10, .sp=0xa1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0008, .value=0xfd, .type=IO_READ},
        {.addr=0x0009, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x419e, .a=0x01, .x=0x6e, .y=0x58, .sp=0xa5, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x419e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x419f, .a=0x01, .x=0x6e, .y=0x01, .sp=0xa5, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x419e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x419e, .value=0xfd, .type=IO_READ},
        {.addr=0x419f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x808d, .a=0xb0, .x=0x78, .y=0x18, .sp=0xb3, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x808d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x808e, .a=0xb0, .x=0x78, .y=0xb0, .sp=0xb3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x808d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x808d, .value=0xfd, .type=IO_READ},
        {.addr=0x808e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xeb10, .a=0x5f, .x=0x6e, .y=0x6c, .sp=0x24, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb10, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xeb11, .a=0x5f, .x=0x6e, .y=0x5f, .sp=0x24, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xeb10, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xeb10, .value=0xfd, .type=IO_READ},
        {.addr=0xeb11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x9284, .a=0x75, .x=0x8e, .y=0xc1, .sp=0xc0, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x9284, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9285, .a=0x75, .x=0x8e, .y=0x75, .sp=0xc0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9284, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9284, .value=0xfd, .type=IO_READ},
        {.addr=0x9285, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x7082, .a=0xe7, .x=0x65, .y=0xb1, .sp=0xac, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x7082, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7083, .a=0xe7, .x=0x65, .y=0xe7, .sp=0xac, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7082, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7082, .value=0xfd, .type=IO_READ},
        {.addr=0x7083, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x366a, .a=0x60, .x=0x6a, .y=0x0f, .sp=0xc8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x366a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x366b, .a=0x60, .x=0x6a, .y=0x60, .sp=0xc8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x366a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x366a, .value=0xfd, .type=IO_READ},
        {.addr=0x366b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x0d5a, .a=0x04, .x=0xad, .y=0xcb, .sp=0x52, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0d5a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0d5b, .a=0x04, .x=0xad, .y=0x04, .sp=0x52, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0d5a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0d5a, .value=0xfd, .type=IO_READ},
        {.addr=0x0d5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x15f0, .a=0xc1, .x=0x2c, .y=0xb7, .sp=0x57, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x15f0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x15f1, .a=0xc1, .x=0x2c, .y=0xc1, .sp=0x57, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x15f0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x15f0, .value=0xfd, .type=IO_READ},
        {.addr=0x15f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x2596, .a=0xd5, .x=0xe7, .y=0xc1, .sp=0x44, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x2596, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2597, .a=0xd5, .x=0xe7, .y=0xd5, .sp=0x44, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2596, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2596, .value=0xfd, .type=IO_READ},
        {.addr=0x2597, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xb60d, .a=0x7b, .x=0x65, .y=0x10, .sp=0x45, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xb60d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb60e, .a=0x7b, .x=0x65, .y=0x7b, .sp=0x45, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb60d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb60d, .value=0xfd, .type=IO_READ},
        {.addr=0xb60e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xe2ab, .a=0x53, .x=0x7b, .y=0xcd, .sp=0x63, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ab, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe2ac, .a=0x53, .x=0x7b, .y=0x53, .sp=0x63, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xe2ab, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe2ab, .value=0xfd, .type=IO_READ},
        {.addr=0xe2ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xc4ea, .a=0xe5, .x=0x74, .y=0x0f, .sp=0x42, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xc4ea, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc4eb, .a=0xe5, .x=0x74, .y=0xe5, .sp=0x42, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc4ea, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc4ea, .value=0xfd, .type=IO_READ},
        {.addr=0xc4eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x0eed, .a=0x42, .x=0xc5, .y=0x50, .sp=0x38, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0eed, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0eee, .a=0x42, .x=0xc5, .y=0x42, .sp=0x38, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0eed, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0eed, .value=0xfd, .type=IO_READ},
        {.addr=0x0eee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xe3ac, .a=0x1d, .x=0xb5, .y=0x47, .sp=0x76, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xe3ac, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe3ad, .a=0x1d, .x=0xb5, .y=0x1d, .sp=0x76, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe3ac, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe3ac, .value=0xfd, .type=IO_READ},
        {.addr=0xe3ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xe0f7, .a=0xdd, .x=0x52, .y=0xb1, .sp=0xb5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe0f8, .a=0xdd, .x=0x52, .y=0xdd, .sp=0xb5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe0f7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe0f7, .value=0xfd, .type=IO_READ},
        {.addr=0xe0f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x6d0c, .a=0xe7, .x=0xe8, .y=0x88, .sp=0x7a, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6d0c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6d0d, .a=0xe7, .x=0xe8, .y=0xe7, .sp=0x7a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x6d0c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6d0c, .value=0xfd, .type=IO_READ},
        {.addr=0x6d0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x7170, .a=0x86, .x=0x99, .y=0xc7, .sp=0xff, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x7170, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7171, .a=0x86, .x=0x99, .y=0x86, .sp=0xff, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7170, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7170, .value=0xfd, .type=IO_READ},
        {.addr=0x7171, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xfcdf, .a=0xf3, .x=0x44, .y=0x03, .sp=0x47, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xfcdf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfce0, .a=0xf3, .x=0x44, .y=0xf3, .sp=0x47, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xfcdf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfcdf, .value=0xfd, .type=IO_READ},
        {.addr=0xfce0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x5a3c, .a=0xcd, .x=0x8c, .y=0x91, .sp=0xb8, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x5a3c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5a3d, .a=0xcd, .x=0x8c, .y=0xcd, .sp=0xb8, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5a3c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5a3c, .value=0xfd, .type=IO_READ},
        {.addr=0x5a3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x8fdd, .a=0x82, .x=0xda, .y=0xad, .sp=0x7a, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x8fdd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8fde, .a=0x82, .x=0xda, .y=0x82, .sp=0x7a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8fdd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8fdd, .value=0xfd, .type=IO_READ},
        {.addr=0x8fde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xa173, .a=0x75, .x=0xa7, .y=0x59, .sp=0x1f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xa173, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa174, .a=0x75, .x=0xa7, .y=0x75, .sp=0x1f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa173, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa173, .value=0xfd, .type=IO_READ},
        {.addr=0xa174, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x6c72, .a=0xc1, .x=0x48, .y=0x2e, .sp=0xda, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x6c72, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6c73, .a=0xc1, .x=0x48, .y=0xc1, .sp=0xda, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6c72, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6c72, .value=0xfd, .type=IO_READ},
        {.addr=0x6c73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xdac3, .a=0x5a, .x=0x56, .y=0xea, .sp=0xb8, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xdac3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdac4, .a=0x5a, .x=0x56, .y=0x5a, .sp=0xb8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xdac3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdac3, .value=0xfd, .type=IO_READ},
        {.addr=0xdac4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x39e5, .a=0x6a, .x=0x37, .y=0x48, .sp=0x69, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x39e5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x39e6, .a=0x6a, .x=0x37, .y=0x6a, .sp=0x69, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x39e5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x39e5, .value=0xfd, .type=IO_READ},
        {.addr=0x39e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xc551, .a=0x23, .x=0x98, .y=0x03, .sp=0x61, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xc551, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc552, .a=0x23, .x=0x98, .y=0x23, .sp=0x61, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc551, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc551, .value=0xfd, .type=IO_READ},
        {.addr=0xc552, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x6f75, .a=0x41, .x=0x7e, .y=0x9c, .sp=0xc3, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x6f75, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6f76, .a=0x41, .x=0x7e, .y=0x41, .sp=0xc3, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6f75, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6f75, .value=0xfd, .type=IO_READ},
        {.addr=0x6f76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x4307, .a=0x24, .x=0xa1, .y=0x3f, .sp=0x13, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x4307, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4308, .a=0x24, .x=0xa1, .y=0x24, .sp=0x13, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4307, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4307, .value=0xfd, .type=IO_READ},
        {.addr=0x4308, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x3403, .a=0xbb, .x=0xe9, .y=0x86, .sp=0xb3, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x3403, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3404, .a=0xbb, .x=0xe9, .y=0xbb, .sp=0xb3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3403, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3403, .value=0xfd, .type=IO_READ},
        {.addr=0x3404, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x6476, .a=0x72, .x=0x03, .y=0xe0, .sp=0x73, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x6476, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6477, .a=0x72, .x=0x03, .y=0x72, .sp=0x73, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6476, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6476, .value=0xfd, .type=IO_READ},
        {.addr=0x6477, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x4971, .a=0xc7, .x=0xc8, .y=0x44, .sp=0xdf, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x4971, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4972, .a=0xc7, .x=0xc8, .y=0xc7, .sp=0xdf, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4971, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4971, .value=0xfd, .type=IO_READ},
        {.addr=0x4972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x8252, .a=0x53, .x=0xe6, .y=0x63, .sp=0x4c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x8252, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8253, .a=0x53, .x=0xe6, .y=0x53, .sp=0x4c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x8252, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8252, .value=0xfd, .type=IO_READ},
        {.addr=0x8253, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x6ad4, .a=0x64, .x=0x0a, .y=0x21, .sp=0xf7, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x6ad4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6ad5, .a=0x64, .x=0x0a, .y=0x64, .sp=0xf7, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x6ad4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6ad4, .value=0xfd, .type=IO_READ},
        {.addr=0x6ad5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x5ab3, .a=0x34, .x=0x46, .y=0x7d, .sp=0x2d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5ab3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5ab4, .a=0x34, .x=0x46, .y=0x34, .sp=0x2d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5ab3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5ab3, .value=0xfd, .type=IO_READ},
        {.addr=0x5ab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x1caf, .a=0x05, .x=0xe0, .y=0x92, .sp=0x29, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1caf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1cb0, .a=0x05, .x=0xe0, .y=0x05, .sp=0x29, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1caf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1caf, .value=0xfd, .type=IO_READ},
        {.addr=0x1cb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xfd62, .a=0xa3, .x=0xce, .y=0x79, .sp=0x2f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xfd62, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfd63, .a=0xa3, .x=0xce, .y=0xa3, .sp=0x2f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xfd62, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfd62, .value=0xfd, .type=IO_READ},
        {.addr=0xfd63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x1eb9, .a=0x8b, .x=0xa5, .y=0xe1, .sp=0xec, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x1eb9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1eba, .a=0x8b, .x=0xa5, .y=0x8b, .sp=0xec, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1eb9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1eb9, .value=0xfd, .type=IO_READ},
        {.addr=0x1eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x0457, .a=0x45, .x=0xf7, .y=0xd5, .sp=0xde, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0457, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0458, .a=0x45, .x=0xf7, .y=0x45, .sp=0xde, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0457, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0457, .value=0xfd, .type=IO_READ},
        {.addr=0x0458, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x7da5, .a=0xa4, .x=0xea, .y=0x3e, .sp=0x56, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x7da5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7da6, .a=0xa4, .x=0xea, .y=0xa4, .sp=0x56, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x7da5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7da5, .value=0xfd, .type=IO_READ},
        {.addr=0x7da6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x21ac, .a=0xc4, .x=0x6d, .y=0x76, .sp=0x5a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x21ac, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x21ad, .a=0xc4, .x=0x6d, .y=0xc4, .sp=0x5a, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x21ac, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x21ac, .value=0xfd, .type=IO_READ},
        {.addr=0x21ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xc911, .a=0x7f, .x=0xf6, .y=0xa8, .sp=0xeb, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xc911, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc912, .a=0x7f, .x=0xf6, .y=0x7f, .sp=0xeb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc911, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc911, .value=0xfd, .type=IO_READ},
        {.addr=0xc912, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x7056, .a=0x95, .x=0x8e, .y=0x43, .sp=0x23, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x7056, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7057, .a=0x95, .x=0x8e, .y=0x95, .sp=0x23, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7056, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7056, .value=0xfd, .type=IO_READ},
        {.addr=0x7057, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x68e2, .a=0xfc, .x=0x18, .y=0x7a, .sp=0x3c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x68e2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x68e3, .a=0xfc, .x=0x18, .y=0xfc, .sp=0x3c, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x68e2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x68e2, .value=0xfd, .type=IO_READ},
        {.addr=0x68e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x5467, .a=0xaf, .x=0x00, .y=0x98, .sp=0xeb, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x5467, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5468, .a=0xaf, .x=0x00, .y=0xaf, .sp=0xeb, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5467, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5467, .value=0xfd, .type=IO_READ},
        {.addr=0x5468, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xc3a1, .a=0xfc, .x=0x1e, .y=0x46, .sp=0x48, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xc3a1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc3a2, .a=0xfc, .x=0x1e, .y=0xfc, .sp=0x48, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc3a1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc3a1, .value=0xfd, .type=IO_READ},
        {.addr=0xc3a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xf7a0, .a=0xa8, .x=0xba, .y=0x88, .sp=0x68, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf7a0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf7a1, .a=0xa8, .x=0xba, .y=0xa8, .sp=0x68, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf7a0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf7a0, .value=0xfd, .type=IO_READ},
        {.addr=0xf7a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xaa0d, .a=0x13, .x=0x79, .y=0x65, .sp=0xee, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xaa0d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaa0e, .a=0x13, .x=0x79, .y=0x13, .sp=0xee, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xaa0d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaa0d, .value=0xfd, .type=IO_READ},
        {.addr=0xaa0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xc4d1, .a=0xe2, .x=0x8e, .y=0x07, .sp=0xbc, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc4d2, .a=0xe2, .x=0x8e, .y=0xe2, .sp=0xbc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc4d1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc4d1, .value=0xfd, .type=IO_READ},
        {.addr=0xc4d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x40fe, .a=0xc7, .x=0x06, .y=0x61, .sp=0xbf, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x40fe, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x40ff, .a=0xc7, .x=0x06, .y=0xc7, .sp=0xbf, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x40fe, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x40fe, .value=0xfd, .type=IO_READ},
        {.addr=0x40ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x98a6, .a=0xbc, .x=0xd4, .y=0xd2, .sp=0x42, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x98a6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x98a7, .a=0xbc, .x=0xd4, .y=0xbc, .sp=0x42, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x98a6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x98a6, .value=0xfd, .type=IO_READ},
        {.addr=0x98a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0300) {
    const struct CPU_State initial_cpu = {.pc=0x9aad, .a=0x76, .x=0x43, .y=0x40, .sp=0xd9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x9aad, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9aae, .a=0x76, .x=0x43, .y=0x76, .sp=0xd9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9aad, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9aad, .value=0xfd, .type=IO_READ},
        {.addr=0x9aae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0301) {
    const struct CPU_State initial_cpu = {.pc=0x4951, .a=0xda, .x=0xe9, .y=0x05, .sp=0xce, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x4951, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4952, .a=0xda, .x=0xe9, .y=0xda, .sp=0xce, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4951, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4951, .value=0xfd, .type=IO_READ},
        {.addr=0x4952, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0302) {
    const struct CPU_State initial_cpu = {.pc=0x8d17, .a=0x02, .x=0x52, .y=0x09, .sp=0xce, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x8d17, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8d18, .a=0x02, .x=0x52, .y=0x02, .sp=0xce, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8d17, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8d17, .value=0xfd, .type=IO_READ},
        {.addr=0x8d18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0303) {
    const struct CPU_State initial_cpu = {.pc=0xab35, .a=0xdc, .x=0x75, .y=0x37, .sp=0x15, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xab35, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xab36, .a=0xdc, .x=0x75, .y=0xdc, .sp=0x15, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xab35, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xab35, .value=0xfd, .type=IO_READ},
        {.addr=0xab36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0304) {
    const struct CPU_State initial_cpu = {.pc=0xfdeb, .a=0x5b, .x=0xee, .y=0x16, .sp=0x21, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xfdeb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfdec, .a=0x5b, .x=0xee, .y=0x5b, .sp=0x21, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xfdeb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfdeb, .value=0xfd, .type=IO_READ},
        {.addr=0xfdec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0305) {
    const struct CPU_State initial_cpu = {.pc=0xc1e2, .a=0x41, .x=0x4f, .y=0x78, .sp=0x88, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xc1e2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc1e3, .a=0x41, .x=0x4f, .y=0x41, .sp=0x88, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc1e2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc1e2, .value=0xfd, .type=IO_READ},
        {.addr=0xc1e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0306) {
    const struct CPU_State initial_cpu = {.pc=0x992c, .a=0xbd, .x=0x15, .y=0x1b, .sp=0x81, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x992c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x992d, .a=0xbd, .x=0x15, .y=0xbd, .sp=0x81, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x992c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x992c, .value=0xfd, .type=IO_READ},
        {.addr=0x992d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0307) {
    const struct CPU_State initial_cpu = {.pc=0x6cf7, .a=0x8a, .x=0x2a, .y=0x64, .sp=0xce, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6cf7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6cf8, .a=0x8a, .x=0x2a, .y=0x8a, .sp=0xce, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6cf7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6cf7, .value=0xfd, .type=IO_READ},
        {.addr=0x6cf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0308) {
    const struct CPU_State initial_cpu = {.pc=0xbbdd, .a=0x1d, .x=0xe5, .y=0xf0, .sp=0x02, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xbbdd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbbde, .a=0x1d, .x=0xe5, .y=0x1d, .sp=0x02, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xbbdd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbbdd, .value=0xfd, .type=IO_READ},
        {.addr=0xbbde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0309) {
    const struct CPU_State initial_cpu = {.pc=0x6d15, .a=0xda, .x=0xd2, .y=0xf3, .sp=0xce, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6d15, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6d16, .a=0xda, .x=0xd2, .y=0xda, .sp=0xce, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6d15, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6d15, .value=0xfd, .type=IO_READ},
        {.addr=0x6d16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_030A) {
    const struct CPU_State initial_cpu = {.pc=0xdc62, .a=0xdc, .x=0xc0, .y=0x0b, .sp=0x14, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xdc62, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdc63, .a=0xdc, .x=0xc0, .y=0xdc, .sp=0x14, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xdc62, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdc62, .value=0xfd, .type=IO_READ},
        {.addr=0xdc63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_030B) {
    const struct CPU_State initial_cpu = {.pc=0xb945, .a=0x68, .x=0x4f, .y=0x36, .sp=0x0a, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xb945, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb946, .a=0x68, .x=0x4f, .y=0x68, .sp=0x0a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb945, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb945, .value=0xfd, .type=IO_READ},
        {.addr=0xb946, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_030C) {
    const struct CPU_State initial_cpu = {.pc=0xc877, .a=0x13, .x=0x9c, .y=0xb1, .sp=0x9b, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xc877, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc878, .a=0x13, .x=0x9c, .y=0x13, .sp=0x9b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc877, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc877, .value=0xfd, .type=IO_READ},
        {.addr=0xc878, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_030D) {
    const struct CPU_State initial_cpu = {.pc=0xb6f9, .a=0xcf, .x=0xb9, .y=0xa3, .sp=0x2d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xb6f9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb6fa, .a=0xcf, .x=0xb9, .y=0xcf, .sp=0x2d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb6f9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb6f9, .value=0xfd, .type=IO_READ},
        {.addr=0xb6fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_030E) {
    const struct CPU_State initial_cpu = {.pc=0xa9a0, .a=0xef, .x=0x2a, .y=0xf7, .sp=0xac, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa9a0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa9a1, .a=0xef, .x=0x2a, .y=0xef, .sp=0xac, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa9a0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa9a0, .value=0xfd, .type=IO_READ},
        {.addr=0xa9a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_030F) {
    const struct CPU_State initial_cpu = {.pc=0x223e, .a=0x43, .x=0x5c, .y=0x0a, .sp=0x10, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x223e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x223f, .a=0x43, .x=0x5c, .y=0x43, .sp=0x10, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x223e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x223e, .value=0xfd, .type=IO_READ},
        {.addr=0x223f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0310) {
    const struct CPU_State initial_cpu = {.pc=0x8291, .a=0x62, .x=0x76, .y=0xc5, .sp=0x51, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x8291, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8292, .a=0x62, .x=0x76, .y=0x62, .sp=0x51, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8291, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8291, .value=0xfd, .type=IO_READ},
        {.addr=0x8292, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0311) {
    const struct CPU_State initial_cpu = {.pc=0x199f, .a=0x29, .x=0x23, .y=0x2e, .sp=0x8f, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x199f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x19a0, .a=0x29, .x=0x23, .y=0x29, .sp=0x8f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x199f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x199f, .value=0xfd, .type=IO_READ},
        {.addr=0x19a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0312) {
    const struct CPU_State initial_cpu = {.pc=0x0f02, .a=0xb7, .x=0xab, .y=0x58, .sp=0x80, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0f02, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0f03, .a=0xb7, .x=0xab, .y=0xb7, .sp=0x80, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0f02, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0f02, .value=0xfd, .type=IO_READ},
        {.addr=0x0f03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0313) {
    const struct CPU_State initial_cpu = {.pc=0x6899, .a=0x1d, .x=0xe6, .y=0x13, .sp=0x87, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x6899, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x689a, .a=0x1d, .x=0xe6, .y=0x1d, .sp=0x87, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6899, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6899, .value=0xfd, .type=IO_READ},
        {.addr=0x689a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0314) {
    const struct CPU_State initial_cpu = {.pc=0x679e, .a=0x03, .x=0x0c, .y=0x30, .sp=0x63, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x679e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x679f, .a=0x03, .x=0x0c, .y=0x03, .sp=0x63, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x679e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x679e, .value=0xfd, .type=IO_READ},
        {.addr=0x679f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0315) {
    const struct CPU_State initial_cpu = {.pc=0x5ea9, .a=0x6b, .x=0xbd, .y=0x04, .sp=0x8f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5ea9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5eaa, .a=0x6b, .x=0xbd, .y=0x6b, .sp=0x8f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5ea9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5ea9, .value=0xfd, .type=IO_READ},
        {.addr=0x5eaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0316) {
    const struct CPU_State initial_cpu = {.pc=0x82ba, .a=0x12, .x=0xfc, .y=0xea, .sp=0xd6, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x82ba, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x82bb, .a=0x12, .x=0xfc, .y=0x12, .sp=0xd6, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x82ba, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x82ba, .value=0xfd, .type=IO_READ},
        {.addr=0x82bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0317) {
    const struct CPU_State initial_cpu = {.pc=0x50bf, .a=0xc1, .x=0x35, .y=0x8d, .sp=0x8e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x50bf, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x50c0, .a=0xc1, .x=0x35, .y=0xc1, .sp=0x8e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x50bf, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x50bf, .value=0xfd, .type=IO_READ},
        {.addr=0x50c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0318) {
    const struct CPU_State initial_cpu = {.pc=0x7e82, .a=0xed, .x=0x62, .y=0x8c, .sp=0x5a, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x7e82, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7e83, .a=0xed, .x=0x62, .y=0xed, .sp=0x5a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7e82, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7e82, .value=0xfd, .type=IO_READ},
        {.addr=0x7e83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0319) {
    const struct CPU_State initial_cpu = {.pc=0x29da, .a=0x18, .x=0xdc, .y=0x21, .sp=0x6c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x29da, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x29db, .a=0x18, .x=0xdc, .y=0x18, .sp=0x6c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x29da, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x29da, .value=0xfd, .type=IO_READ},
        {.addr=0x29db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_031A) {
    const struct CPU_State initial_cpu = {.pc=0xdd83, .a=0x95, .x=0xb6, .y=0x5f, .sp=0xcc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xdd83, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdd84, .a=0x95, .x=0xb6, .y=0x95, .sp=0xcc, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xdd83, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdd83, .value=0xfd, .type=IO_READ},
        {.addr=0xdd84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_031B) {
    const struct CPU_State initial_cpu = {.pc=0x2e97, .a=0xd8, .x=0x7f, .y=0x0d, .sp=0xa0, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2e97, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2e98, .a=0xd8, .x=0x7f, .y=0xd8, .sp=0xa0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2e97, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2e97, .value=0xfd, .type=IO_READ},
        {.addr=0x2e98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_031C) {
    const struct CPU_State initial_cpu = {.pc=0x3e6b, .a=0xcd, .x=0xca, .y=0xe1, .sp=0x1d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3e6b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3e6c, .a=0xcd, .x=0xca, .y=0xcd, .sp=0x1d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3e6b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3e6b, .value=0xfd, .type=IO_READ},
        {.addr=0x3e6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_031D) {
    const struct CPU_State initial_cpu = {.pc=0x5636, .a=0x30, .x=0x31, .y=0x14, .sp=0xdf, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5636, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5637, .a=0x30, .x=0x31, .y=0x30, .sp=0xdf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5636, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5636, .value=0xfd, .type=IO_READ},
        {.addr=0x5637, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_031E) {
    const struct CPU_State initial_cpu = {.pc=0x2013, .a=0x6a, .x=0x99, .y=0xda, .sp=0x6a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x2013, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2014, .a=0x6a, .x=0x99, .y=0x6a, .sp=0x6a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x2013, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2013, .value=0xfd, .type=IO_READ},
        {.addr=0x2014, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_031F) {
    const struct CPU_State initial_cpu = {.pc=0x9ce3, .a=0x14, .x=0x8c, .y=0x86, .sp=0x8a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x9ce3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9ce4, .a=0x14, .x=0x8c, .y=0x14, .sp=0x8a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9ce3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9ce3, .value=0xfd, .type=IO_READ},
        {.addr=0x9ce4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0320) {
    const struct CPU_State initial_cpu = {.pc=0xedfe, .a=0x09, .x=0x7b, .y=0xde, .sp=0xce, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xedfe, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xedff, .a=0x09, .x=0x7b, .y=0x09, .sp=0xce, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xedfe, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xedfe, .value=0xfd, .type=IO_READ},
        {.addr=0xedff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0321) {
    const struct CPU_State initial_cpu = {.pc=0x0dbc, .a=0x98, .x=0xad, .y=0xf4, .sp=0xf6, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0dbc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0dbd, .a=0x98, .x=0xad, .y=0x98, .sp=0xf6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0dbc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0dbc, .value=0xfd, .type=IO_READ},
        {.addr=0x0dbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0322) {
    const struct CPU_State initial_cpu = {.pc=0x0b8b, .a=0xd3, .x=0x13, .y=0x3d, .sp=0x5a, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0b8b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0b8c, .a=0xd3, .x=0x13, .y=0xd3, .sp=0x5a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0b8b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0b8b, .value=0xfd, .type=IO_READ},
        {.addr=0x0b8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0323) {
    const struct CPU_State initial_cpu = {.pc=0xa16f, .a=0x41, .x=0x99, .y=0xd0, .sp=0x9e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xa16f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa170, .a=0x41, .x=0x99, .y=0x41, .sp=0x9e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xa16f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa16f, .value=0xfd, .type=IO_READ},
        {.addr=0xa170, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0324) {
    const struct CPU_State initial_cpu = {.pc=0x1096, .a=0x10, .x=0x4e, .y=0xb4, .sp=0x8e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x1096, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1097, .a=0x10, .x=0x4e, .y=0x10, .sp=0x8e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x1096, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1096, .value=0xfd, .type=IO_READ},
        {.addr=0x1097, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0325) {
    const struct CPU_State initial_cpu = {.pc=0x1f62, .a=0x60, .x=0x6e, .y=0xc0, .sp=0xeb, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x1f62, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1f63, .a=0x60, .x=0x6e, .y=0x60, .sp=0xeb, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x1f62, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1f62, .value=0xfd, .type=IO_READ},
        {.addr=0x1f63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0326) {
    const struct CPU_State initial_cpu = {.pc=0x0a62, .a=0x6b, .x=0xa5, .y=0x35, .sp=0x22, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0a62, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0a63, .a=0x6b, .x=0xa5, .y=0x6b, .sp=0x22, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0a62, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0a62, .value=0xfd, .type=IO_READ},
        {.addr=0x0a63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0327) {
    const struct CPU_State initial_cpu = {.pc=0x6b91, .a=0x3b, .x=0x50, .y=0x99, .sp=0xe3, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6b91, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6b92, .a=0x3b, .x=0x50, .y=0x3b, .sp=0xe3, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6b91, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6b91, .value=0xfd, .type=IO_READ},
        {.addr=0x6b92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0328) {
    const struct CPU_State initial_cpu = {.pc=0xeabe, .a=0x4b, .x=0x58, .y=0x86, .sp=0x88, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xeabe, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xeabf, .a=0x4b, .x=0x58, .y=0x4b, .sp=0x88, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xeabe, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xeabe, .value=0xfd, .type=IO_READ},
        {.addr=0xeabf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0329) {
    const struct CPU_State initial_cpu = {.pc=0xaf02, .a=0x57, .x=0x8c, .y=0x87, .sp=0x88, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xaf02, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaf03, .a=0x57, .x=0x8c, .y=0x57, .sp=0x88, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xaf02, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaf02, .value=0xfd, .type=IO_READ},
        {.addr=0xaf03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_032A) {
    const struct CPU_State initial_cpu = {.pc=0x1bba, .a=0xd9, .x=0x4a, .y=0x81, .sp=0xdb, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x1bba, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1bbb, .a=0xd9, .x=0x4a, .y=0xd9, .sp=0xdb, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x1bba, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1bba, .value=0xfd, .type=IO_READ},
        {.addr=0x1bbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_032B) {
    const struct CPU_State initial_cpu = {.pc=0xb903, .a=0xd8, .x=0xc0, .y=0xd9, .sp=0xfc, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xb903, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb904, .a=0xd8, .x=0xc0, .y=0xd8, .sp=0xfc, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb903, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb903, .value=0xfd, .type=IO_READ},
        {.addr=0xb904, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_032C) {
    const struct CPU_State initial_cpu = {.pc=0x010c, .a=0x4a, .x=0x58, .y=0xe5, .sp=0x7e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x010d, .a=0x4a, .x=0x58, .y=0x4a, .sp=0x7e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x010c, .value=0xfd, .type=IO_READ},
        {.addr=0x010d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_032D) {
    const struct CPU_State initial_cpu = {.pc=0x9990, .a=0x50, .x=0x26, .y=0xe6, .sp=0xcf, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x9990, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9991, .a=0x50, .x=0x26, .y=0x50, .sp=0xcf, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9990, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9990, .value=0xfd, .type=IO_READ},
        {.addr=0x9991, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_032E) {
    const struct CPU_State initial_cpu = {.pc=0x5c02, .a=0xe8, .x=0x9c, .y=0x4c, .sp=0xab, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5c02, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5c03, .a=0xe8, .x=0x9c, .y=0xe8, .sp=0xab, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5c02, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5c02, .value=0xfd, .type=IO_READ},
        {.addr=0x5c03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_032F) {
    const struct CPU_State initial_cpu = {.pc=0x84d7, .a=0x01, .x=0x67, .y=0x76, .sp=0xa9, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x84d7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x84d8, .a=0x01, .x=0x67, .y=0x01, .sp=0xa9, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x84d7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x84d7, .value=0xfd, .type=IO_READ},
        {.addr=0x84d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0330) {
    const struct CPU_State initial_cpu = {.pc=0xcb41, .a=0xf5, .x=0x59, .y=0x92, .sp=0x03, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xcb41, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcb42, .a=0xf5, .x=0x59, .y=0xf5, .sp=0x03, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcb41, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcb41, .value=0xfd, .type=IO_READ},
        {.addr=0xcb42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0331) {
    const struct CPU_State initial_cpu = {.pc=0x42f1, .a=0xa5, .x=0x13, .y=0x6b, .sp=0x1b, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x42f1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x42f2, .a=0xa5, .x=0x13, .y=0xa5, .sp=0x1b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x42f1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x42f1, .value=0xfd, .type=IO_READ},
        {.addr=0x42f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0332) {
    const struct CPU_State initial_cpu = {.pc=0xabb0, .a=0xc6, .x=0x88, .y=0xe2, .sp=0x92, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xabb0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xabb1, .a=0xc6, .x=0x88, .y=0xc6, .sp=0x92, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xabb0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xabb0, .value=0xfd, .type=IO_READ},
        {.addr=0xabb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0333) {
    const struct CPU_State initial_cpu = {.pc=0x6789, .a=0xc7, .x=0xce, .y=0x23, .sp=0xf9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6789, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x678a, .a=0xc7, .x=0xce, .y=0xc7, .sp=0xf9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6789, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6789, .value=0xfd, .type=IO_READ},
        {.addr=0x678a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0334) {
    const struct CPU_State initial_cpu = {.pc=0x9350, .a=0x2e, .x=0x2d, .y=0x21, .sp=0xb5, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x9350, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9351, .a=0x2e, .x=0x2d, .y=0x2e, .sp=0xb5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9350, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9350, .value=0xfd, .type=IO_READ},
        {.addr=0x9351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0335) {
    const struct CPU_State initial_cpu = {.pc=0x02e6, .a=0x22, .x=0x99, .y=0xbf, .sp=0x0f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x02e6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x02e7, .a=0x22, .x=0x99, .y=0x22, .sp=0x0f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x02e6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x02e6, .value=0xfd, .type=IO_READ},
        {.addr=0x02e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0336) {
    const struct CPU_State initial_cpu = {.pc=0x5ed3, .a=0x23, .x=0x21, .y=0xc8, .sp=0x93, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5ed4, .a=0x23, .x=0x21, .y=0x23, .sp=0x93, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5ed3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5ed3, .value=0xfd, .type=IO_READ},
        {.addr=0x5ed4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0337) {
    const struct CPU_State initial_cpu = {.pc=0x5af1, .a=0x56, .x=0xd3, .y=0x87, .sp=0xd9, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x5af1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5af2, .a=0x56, .x=0xd3, .y=0x56, .sp=0xd9, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5af1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5af1, .value=0xfd, .type=IO_READ},
        {.addr=0x5af2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0338) {
    const struct CPU_State initial_cpu = {.pc=0xd466, .a=0x2e, .x=0xb2, .y=0xed, .sp=0x46, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd466, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd467, .a=0x2e, .x=0xb2, .y=0x2e, .sp=0x46, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd466, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd466, .value=0xfd, .type=IO_READ},
        {.addr=0xd467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0339) {
    const struct CPU_State initial_cpu = {.pc=0xb28d, .a=0x73, .x=0x5f, .y=0x78, .sp=0x7a, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xb28d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb28e, .a=0x73, .x=0x5f, .y=0x73, .sp=0x7a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb28d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb28d, .value=0xfd, .type=IO_READ},
        {.addr=0xb28e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_033A) {
    const struct CPU_State initial_cpu = {.pc=0x823a, .a=0x25, .x=0x79, .y=0xea, .sp=0xc3, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x823a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x823b, .a=0x25, .x=0x79, .y=0x25, .sp=0xc3, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x823a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x823a, .value=0xfd, .type=IO_READ},
        {.addr=0x823b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_033B) {
    const struct CPU_State initial_cpu = {.pc=0xf151, .a=0x19, .x=0x64, .y=0x31, .sp=0xd5, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf151, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf152, .a=0x19, .x=0x64, .y=0x19, .sp=0xd5, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf151, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf151, .value=0xfd, .type=IO_READ},
        {.addr=0xf152, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_033C) {
    const struct CPU_State initial_cpu = {.pc=0x8b5a, .a=0x87, .x=0x85, .y=0x83, .sp=0x12, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8b5a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8b5b, .a=0x87, .x=0x85, .y=0x87, .sp=0x12, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8b5a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8b5a, .value=0xfd, .type=IO_READ},
        {.addr=0x8b5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_033D) {
    const struct CPU_State initial_cpu = {.pc=0x96e3, .a=0xa8, .x=0xca, .y=0x3a, .sp=0x64, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x96e3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x96e4, .a=0xa8, .x=0xca, .y=0xa8, .sp=0x64, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x96e3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x96e3, .value=0xfd, .type=IO_READ},
        {.addr=0x96e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_033E) {
    const struct CPU_State initial_cpu = {.pc=0xa481, .a=0x5f, .x=0x56, .y=0xe1, .sp=0x65, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xa481, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa482, .a=0x5f, .x=0x56, .y=0x5f, .sp=0x65, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xa481, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa481, .value=0xfd, .type=IO_READ},
        {.addr=0xa482, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_033F) {
    const struct CPU_State initial_cpu = {.pc=0xd7b1, .a=0x32, .x=0xf7, .y=0x54, .sp=0x4b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd7b2, .a=0x32, .x=0xf7, .y=0x32, .sp=0x4b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd7b1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd7b1, .value=0xfd, .type=IO_READ},
        {.addr=0xd7b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0340) {
    const struct CPU_State initial_cpu = {.pc=0x6e4f, .a=0x33, .x=0xb2, .y=0x82, .sp=0xe2, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6e4f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6e50, .a=0x33, .x=0xb2, .y=0x33, .sp=0xe2, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6e4f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6e4f, .value=0xfd, .type=IO_READ},
        {.addr=0x6e50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0341) {
    const struct CPU_State initial_cpu = {.pc=0x71f8, .a=0x17, .x=0x27, .y=0x4c, .sp=0x12, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x71f8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x71f9, .a=0x17, .x=0x27, .y=0x17, .sp=0x12, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x71f8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x71f8, .value=0xfd, .type=IO_READ},
        {.addr=0x71f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0342) {
    const struct CPU_State initial_cpu = {.pc=0x2634, .a=0x93, .x=0xea, .y=0x71, .sp=0xc9, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x2634, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2635, .a=0x93, .x=0xea, .y=0x93, .sp=0xc9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2634, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2634, .value=0xfd, .type=IO_READ},
        {.addr=0x2635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0343) {
    const struct CPU_State initial_cpu = {.pc=0x0217, .a=0x32, .x=0xc3, .y=0x4d, .sp=0x71, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0217, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0218, .a=0x32, .x=0xc3, .y=0x32, .sp=0x71, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0217, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0217, .value=0xfd, .type=IO_READ},
        {.addr=0x0218, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0344) {
    const struct CPU_State initial_cpu = {.pc=0xec5e, .a=0xde, .x=0x78, .y=0x78, .sp=0x6b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xec5e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xec5f, .a=0xde, .x=0x78, .y=0xde, .sp=0x6b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xec5e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xec5e, .value=0xfd, .type=IO_READ},
        {.addr=0xec5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0345) {
    const struct CPU_State initial_cpu = {.pc=0xe396, .a=0xe5, .x=0x02, .y=0xce, .sp=0xcd, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xe396, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe397, .a=0xe5, .x=0x02, .y=0xe5, .sp=0xcd, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xe396, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe396, .value=0xfd, .type=IO_READ},
        {.addr=0xe397, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0346) {
    const struct CPU_State initial_cpu = {.pc=0xb8a6, .a=0x46, .x=0x3b, .y=0x69, .sp=0x55, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb8a6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb8a7, .a=0x46, .x=0x3b, .y=0x46, .sp=0x55, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb8a6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb8a6, .value=0xfd, .type=IO_READ},
        {.addr=0xb8a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0347) {
    const struct CPU_State initial_cpu = {.pc=0x89c2, .a=0x18, .x=0x5f, .y=0x34, .sp=0xa0, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x89c2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x89c3, .a=0x18, .x=0x5f, .y=0x18, .sp=0xa0, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x89c2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x89c2, .value=0xfd, .type=IO_READ},
        {.addr=0x89c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0348) {
    const struct CPU_State initial_cpu = {.pc=0x87c3, .a=0xe6, .x=0x09, .y=0x35, .sp=0x0d, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x87c3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x87c4, .a=0xe6, .x=0x09, .y=0xe6, .sp=0x0d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x87c3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x87c3, .value=0xfd, .type=IO_READ},
        {.addr=0x87c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0349) {
    const struct CPU_State initial_cpu = {.pc=0x0ec6, .a=0xf0, .x=0x8d, .y=0xc5, .sp=0xbb, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0ec6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0ec7, .a=0xf0, .x=0x8d, .y=0xf0, .sp=0xbb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0ec6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0ec6, .value=0xfd, .type=IO_READ},
        {.addr=0x0ec7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_034A) {
    const struct CPU_State initial_cpu = {.pc=0x781f, .a=0xb4, .x=0x34, .y=0xde, .sp=0x31, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x781f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7820, .a=0xb4, .x=0x34, .y=0xb4, .sp=0x31, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x781f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x781f, .value=0xfd, .type=IO_READ},
        {.addr=0x7820, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_034B) {
    const struct CPU_State initial_cpu = {.pc=0x7f02, .a=0xe5, .x=0xf9, .y=0xdb, .sp=0x2a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x7f02, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7f03, .a=0xe5, .x=0xf9, .y=0xe5, .sp=0x2a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7f02, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7f02, .value=0xfd, .type=IO_READ},
        {.addr=0x7f03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_034C) {
    const struct CPU_State initial_cpu = {.pc=0xc5c6, .a=0x27, .x=0x35, .y=0xce, .sp=0x82, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc5c7, .a=0x27, .x=0x35, .y=0x27, .sp=0x82, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc5c6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc5c6, .value=0xfd, .type=IO_READ},
        {.addr=0xc5c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_034D) {
    const struct CPU_State initial_cpu = {.pc=0x7a8e, .a=0x91, .x=0x4f, .y=0x01, .sp=0x0b, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x7a8e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7a8f, .a=0x91, .x=0x4f, .y=0x91, .sp=0x0b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7a8e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7a8e, .value=0xfd, .type=IO_READ},
        {.addr=0x7a8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_034E) {
    const struct CPU_State initial_cpu = {.pc=0xd028, .a=0x51, .x=0x90, .y=0xca, .sp=0x51, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xd028, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd029, .a=0x51, .x=0x90, .y=0x51, .sp=0x51, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd028, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd028, .value=0xfd, .type=IO_READ},
        {.addr=0xd029, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_034F) {
    const struct CPU_State initial_cpu = {.pc=0xac79, .a=0x78, .x=0xf6, .y=0x4e, .sp=0x3a, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xac79, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xac7a, .a=0x78, .x=0xf6, .y=0x78, .sp=0x3a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xac79, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xac79, .value=0xfd, .type=IO_READ},
        {.addr=0xac7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0350) {
    const struct CPU_State initial_cpu = {.pc=0xc867, .a=0x7a, .x=0x4a, .y=0xd2, .sp=0xd2, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xc867, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc868, .a=0x7a, .x=0x4a, .y=0x7a, .sp=0xd2, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc867, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc867, .value=0xfd, .type=IO_READ},
        {.addr=0xc868, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0351) {
    const struct CPU_State initial_cpu = {.pc=0x99cc, .a=0xd7, .x=0x57, .y=0x64, .sp=0x18, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x99cc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x99cd, .a=0xd7, .x=0x57, .y=0xd7, .sp=0x18, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x99cc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x99cc, .value=0xfd, .type=IO_READ},
        {.addr=0x99cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0352) {
    const struct CPU_State initial_cpu = {.pc=0x4e6f, .a=0xee, .x=0x78, .y=0xb5, .sp=0x79, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x4e6f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4e70, .a=0xee, .x=0x78, .y=0xee, .sp=0x79, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4e6f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4e6f, .value=0xfd, .type=IO_READ},
        {.addr=0x4e70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0353) {
    const struct CPU_State initial_cpu = {.pc=0x72f3, .a=0x50, .x=0xbf, .y=0xbe, .sp=0x23, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x72f3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x72f4, .a=0x50, .x=0xbf, .y=0x50, .sp=0x23, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x72f3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x72f3, .value=0xfd, .type=IO_READ},
        {.addr=0x72f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0354) {
    const struct CPU_State initial_cpu = {.pc=0x1102, .a=0x9e, .x=0xd2, .y=0x42, .sp=0x88, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x1102, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1103, .a=0x9e, .x=0xd2, .y=0x9e, .sp=0x88, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1102, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1102, .value=0xfd, .type=IO_READ},
        {.addr=0x1103, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0355) {
    const struct CPU_State initial_cpu = {.pc=0x507d, .a=0x45, .x=0x90, .y=0x99, .sp=0x9a, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x507d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x507e, .a=0x45, .x=0x90, .y=0x45, .sp=0x9a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x507d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x507d, .value=0xfd, .type=IO_READ},
        {.addr=0x507e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0356) {
    const struct CPU_State initial_cpu = {.pc=0x93cc, .a=0x7a, .x=0x43, .y=0x77, .sp=0x52, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x93cc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x93cd, .a=0x7a, .x=0x43, .y=0x7a, .sp=0x52, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x93cc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x93cc, .value=0xfd, .type=IO_READ},
        {.addr=0x93cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0357) {
    const struct CPU_State initial_cpu = {.pc=0x7db5, .a=0x31, .x=0x50, .y=0xbd, .sp=0x9a, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x7db5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7db6, .a=0x31, .x=0x50, .y=0x31, .sp=0x9a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7db5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7db5, .value=0xfd, .type=IO_READ},
        {.addr=0x7db6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0358) {
    const struct CPU_State initial_cpu = {.pc=0x33cb, .a=0x53, .x=0xd3, .y=0x66, .sp=0x40, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x33cb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x33cc, .a=0x53, .x=0xd3, .y=0x53, .sp=0x40, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x33cb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x33cb, .value=0xfd, .type=IO_READ},
        {.addr=0x33cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0359) {
    const struct CPU_State initial_cpu = {.pc=0x0d83, .a=0xea, .x=0x2f, .y=0x37, .sp=0x0b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0d83, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0d84, .a=0xea, .x=0x2f, .y=0xea, .sp=0x0b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0d83, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0d83, .value=0xfd, .type=IO_READ},
        {.addr=0x0d84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_035A) {
    const struct CPU_State initial_cpu = {.pc=0xb405, .a=0xf4, .x=0xb7, .y=0xd0, .sp=0xb6, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb405, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb406, .a=0xf4, .x=0xb7, .y=0xf4, .sp=0xb6, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb405, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb405, .value=0xfd, .type=IO_READ},
        {.addr=0xb406, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_035B) {
    const struct CPU_State initial_cpu = {.pc=0x9bbd, .a=0xe2, .x=0x6c, .y=0x0a, .sp=0xbb, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x9bbd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9bbe, .a=0xe2, .x=0x6c, .y=0xe2, .sp=0xbb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9bbd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9bbd, .value=0xfd, .type=IO_READ},
        {.addr=0x9bbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_035C) {
    const struct CPU_State initial_cpu = {.pc=0x2fc0, .a=0x36, .x=0x58, .y=0x8a, .sp=0xf1, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2fc1, .a=0x36, .x=0x58, .y=0x36, .sp=0xf1, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2fc0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2fc0, .value=0xfd, .type=IO_READ},
        {.addr=0x2fc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_035D) {
    const struct CPU_State initial_cpu = {.pc=0x0c44, .a=0x93, .x=0x06, .y=0x6e, .sp=0x99, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0c44, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0c45, .a=0x93, .x=0x06, .y=0x93, .sp=0x99, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0c44, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0c44, .value=0xfd, .type=IO_READ},
        {.addr=0x0c45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_035E) {
    const struct CPU_State initial_cpu = {.pc=0x203c, .a=0x74, .x=0x53, .y=0x76, .sp=0x7b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x203c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x203d, .a=0x74, .x=0x53, .y=0x74, .sp=0x7b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x203c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x203c, .value=0xfd, .type=IO_READ},
        {.addr=0x203d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_035F) {
    const struct CPU_State initial_cpu = {.pc=0xa117, .a=0x1c, .x=0x6f, .y=0xd7, .sp=0xb8, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xa117, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa118, .a=0x1c, .x=0x6f, .y=0x1c, .sp=0xb8, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa117, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa117, .value=0xfd, .type=IO_READ},
        {.addr=0xa118, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0360) {
    const struct CPU_State initial_cpu = {.pc=0x46d0, .a=0x68, .x=0xfd, .y=0xc6, .sp=0xa9, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x46d0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x46d1, .a=0x68, .x=0xfd, .y=0x68, .sp=0xa9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x46d0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x46d0, .value=0xfd, .type=IO_READ},
        {.addr=0x46d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0361) {
    const struct CPU_State initial_cpu = {.pc=0x82de, .a=0xe6, .x=0x31, .y=0x2b, .sp=0x92, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x82de, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x82df, .a=0xe6, .x=0x31, .y=0xe6, .sp=0x92, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x82de, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x82de, .value=0xfd, .type=IO_READ},
        {.addr=0x82df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0362) {
    const struct CPU_State initial_cpu = {.pc=0xfdaa, .a=0xbb, .x=0x56, .y=0xd0, .sp=0x14, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xfdaa, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfdab, .a=0xbb, .x=0x56, .y=0xbb, .sp=0x14, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xfdaa, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfdaa, .value=0xfd, .type=IO_READ},
        {.addr=0xfdab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0363) {
    const struct CPU_State initial_cpu = {.pc=0xe40c, .a=0xf0, .x=0x3a, .y=0x9c, .sp=0xee, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xe40c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe40d, .a=0xf0, .x=0x3a, .y=0xf0, .sp=0xee, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe40c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe40c, .value=0xfd, .type=IO_READ},
        {.addr=0xe40d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0364) {
    const struct CPU_State initial_cpu = {.pc=0x643b, .a=0xf0, .x=0x95, .y=0xe9, .sp=0x66, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x643b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x643c, .a=0xf0, .x=0x95, .y=0xf0, .sp=0x66, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x643b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x643b, .value=0xfd, .type=IO_READ},
        {.addr=0x643c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0365) {
    const struct CPU_State initial_cpu = {.pc=0x6aef, .a=0x90, .x=0x57, .y=0x66, .sp=0x71, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6aef, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6af0, .a=0x90, .x=0x57, .y=0x90, .sp=0x71, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6aef, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6aef, .value=0xfd, .type=IO_READ},
        {.addr=0x6af0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0366) {
    const struct CPU_State initial_cpu = {.pc=0x5e6d, .a=0x09, .x=0xc1, .y=0x13, .sp=0xf9, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5e6d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5e6e, .a=0x09, .x=0xc1, .y=0x09, .sp=0xf9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5e6d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5e6d, .value=0xfd, .type=IO_READ},
        {.addr=0x5e6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0367) {
    const struct CPU_State initial_cpu = {.pc=0x005d, .a=0x49, .x=0x68, .y=0xa4, .sp=0x22, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x005e, .a=0x49, .x=0x68, .y=0x49, .sp=0x22, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x005d, .value=0xfd, .type=IO_READ},
        {.addr=0x005e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0368) {
    const struct CPU_State initial_cpu = {.pc=0x2664, .a=0xbd, .x=0x4b, .y=0x78, .sp=0x98, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x2664, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2665, .a=0xbd, .x=0x4b, .y=0xbd, .sp=0x98, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2664, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2664, .value=0xfd, .type=IO_READ},
        {.addr=0x2665, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0369) {
    const struct CPU_State initial_cpu = {.pc=0x2590, .a=0xc4, .x=0x79, .y=0x9c, .sp=0x0a, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x2590, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2591, .a=0xc4, .x=0x79, .y=0xc4, .sp=0x0a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2590, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2590, .value=0xfd, .type=IO_READ},
        {.addr=0x2591, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_036A) {
    const struct CPU_State initial_cpu = {.pc=0x056d, .a=0xe9, .x=0x38, .y=0x14, .sp=0x44, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x056d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x056e, .a=0xe9, .x=0x38, .y=0xe9, .sp=0x44, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x056d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x056d, .value=0xfd, .type=IO_READ},
        {.addr=0x056e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_036B) {
    const struct CPU_State initial_cpu = {.pc=0x7832, .a=0x93, .x=0x04, .y=0x02, .sp=0x5b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x7832, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7833, .a=0x93, .x=0x04, .y=0x93, .sp=0x5b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x7832, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7832, .value=0xfd, .type=IO_READ},
        {.addr=0x7833, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_036C) {
    const struct CPU_State initial_cpu = {.pc=0xfa2f, .a=0xef, .x=0x7a, .y=0xb5, .sp=0xa0, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xfa2f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfa30, .a=0xef, .x=0x7a, .y=0xef, .sp=0xa0, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfa2f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfa2f, .value=0xfd, .type=IO_READ},
        {.addr=0xfa30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_036D) {
    const struct CPU_State initial_cpu = {.pc=0xfa4a, .a=0x65, .x=0x97, .y=0xe5, .sp=0xdd, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xfa4b, .a=0x65, .x=0x97, .y=0x65, .sp=0xdd, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xfa4a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xfa4a, .value=0xfd, .type=IO_READ},
        {.addr=0xfa4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_036E) {
    const struct CPU_State initial_cpu = {.pc=0xf407, .a=0x17, .x=0x15, .y=0x67, .sp=0xf5, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xf407, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf408, .a=0x17, .x=0x15, .y=0x17, .sp=0xf5, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf407, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf407, .value=0xfd, .type=IO_READ},
        {.addr=0xf408, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_036F) {
    const struct CPU_State initial_cpu = {.pc=0xaf81, .a=0x78, .x=0xc5, .y=0xb2, .sp=0x53, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xaf81, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xaf82, .a=0x78, .x=0xc5, .y=0x78, .sp=0x53, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xaf81, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xaf81, .value=0xfd, .type=IO_READ},
        {.addr=0xaf82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0370) {
    const struct CPU_State initial_cpu = {.pc=0x5f80, .a=0xe0, .x=0x83, .y=0x58, .sp=0x66, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x5f80, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5f81, .a=0xe0, .x=0x83, .y=0xe0, .sp=0x66, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5f80, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5f80, .value=0xfd, .type=IO_READ},
        {.addr=0x5f81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0371) {
    const struct CPU_State initial_cpu = {.pc=0xa30c, .a=0x2d, .x=0x94, .y=0xfe, .sp=0x94, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xa30c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa30d, .a=0x2d, .x=0x94, .y=0x2d, .sp=0x94, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xa30c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa30c, .value=0xfd, .type=IO_READ},
        {.addr=0xa30d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0372) {
    const struct CPU_State initial_cpu = {.pc=0x3bf1, .a=0x5f, .x=0x79, .y=0xfd, .sp=0xb6, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3bf1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3bf2, .a=0x5f, .x=0x79, .y=0x5f, .sp=0xb6, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3bf1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3bf1, .value=0xfd, .type=IO_READ},
        {.addr=0x3bf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0373) {
    const struct CPU_State initial_cpu = {.pc=0x3336, .a=0x0b, .x=0x0a, .y=0xb2, .sp=0x7c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x3336, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3337, .a=0x0b, .x=0x0a, .y=0x0b, .sp=0x7c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x3336, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3336, .value=0xfd, .type=IO_READ},
        {.addr=0x3337, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0374) {
    const struct CPU_State initial_cpu = {.pc=0x07d9, .a=0x8a, .x=0x8e, .y=0x4d, .sp=0xb5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x07d9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x07da, .a=0x8a, .x=0x8e, .y=0x8a, .sp=0xb5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x07d9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x07d9, .value=0xfd, .type=IO_READ},
        {.addr=0x07da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0375) {
    const struct CPU_State initial_cpu = {.pc=0x2a4a, .a=0xd7, .x=0x05, .y=0x23, .sp=0x10, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a4a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2a4b, .a=0xd7, .x=0x05, .y=0xd7, .sp=0x10, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2a4a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2a4a, .value=0xfd, .type=IO_READ},
        {.addr=0x2a4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0376) {
    const struct CPU_State initial_cpu = {.pc=0x9645, .a=0x66, .x=0xac, .y=0x06, .sp=0xe6, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9645, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9646, .a=0x66, .x=0xac, .y=0x66, .sp=0xe6, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9645, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9645, .value=0xfd, .type=IO_READ},
        {.addr=0x9646, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0377) {
    const struct CPU_State initial_cpu = {.pc=0x5aa1, .a=0x67, .x=0x37, .y=0xbb, .sp=0xad, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5aa1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5aa2, .a=0x67, .x=0x37, .y=0x67, .sp=0xad, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5aa1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5aa1, .value=0xfd, .type=IO_READ},
        {.addr=0x5aa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0378) {
    const struct CPU_State initial_cpu = {.pc=0x2dc1, .a=0x1d, .x=0xb8, .y=0x02, .sp=0x29, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2dc2, .a=0x1d, .x=0xb8, .y=0x1d, .sp=0x29, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2dc1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2dc1, .value=0xfd, .type=IO_READ},
        {.addr=0x2dc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0379) {
    const struct CPU_State initial_cpu = {.pc=0x18d2, .a=0x27, .x=0xaf, .y=0xe3, .sp=0x7e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x18d2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x18d3, .a=0x27, .x=0xaf, .y=0x27, .sp=0x7e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x18d2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x18d2, .value=0xfd, .type=IO_READ},
        {.addr=0x18d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_037A) {
    const struct CPU_State initial_cpu = {.pc=0xca51, .a=0x5d, .x=0x40, .y=0x5d, .sp=0x11, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xca51, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xca52, .a=0x5d, .x=0x40, .y=0x5d, .sp=0x11, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xca51, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xca51, .value=0xfd, .type=IO_READ},
        {.addr=0xca52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_037B) {
    const struct CPU_State initial_cpu = {.pc=0xd570, .a=0x8f, .x=0x3b, .y=0xec, .sp=0xa1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd570, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd571, .a=0x8f, .x=0x3b, .y=0x8f, .sp=0xa1, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd570, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd570, .value=0xfd, .type=IO_READ},
        {.addr=0xd571, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_037C) {
    const struct CPU_State initial_cpu = {.pc=0x8820, .a=0x5c, .x=0x6d, .y=0x50, .sp=0x20, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x8820, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8821, .a=0x5c, .x=0x6d, .y=0x5c, .sp=0x20, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x8820, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8820, .value=0xfd, .type=IO_READ},
        {.addr=0x8821, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_037D) {
    const struct CPU_State initial_cpu = {.pc=0x2f95, .a=0x68, .x=0x3d, .y=0x4e, .sp=0x27, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x2f95, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2f96, .a=0x68, .x=0x3d, .y=0x68, .sp=0x27, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2f95, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2f95, .value=0xfd, .type=IO_READ},
        {.addr=0x2f96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_037E) {
    const struct CPU_State initial_cpu = {.pc=0x9689, .a=0x02, .x=0x32, .y=0x9a, .sp=0x9c, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x9689, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x968a, .a=0x02, .x=0x32, .y=0x02, .sp=0x9c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9689, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9689, .value=0xfd, .type=IO_READ},
        {.addr=0x968a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_037F) {
    const struct CPU_State initial_cpu = {.pc=0x953e, .a=0xba, .x=0x95, .y=0xad, .sp=0xd8, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x953e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x953f, .a=0xba, .x=0x95, .y=0xba, .sp=0xd8, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x953e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x953e, .value=0xfd, .type=IO_READ},
        {.addr=0x953f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0380) {
    const struct CPU_State initial_cpu = {.pc=0xd87c, .a=0x42, .x=0x4d, .y=0x29, .sp=0xbb, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xd87c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd87d, .a=0x42, .x=0x4d, .y=0x42, .sp=0xbb, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xd87c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd87c, .value=0xfd, .type=IO_READ},
        {.addr=0xd87d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0381) {
    const struct CPU_State initial_cpu = {.pc=0x0a5d, .a=0x59, .x=0xf9, .y=0xdd, .sp=0x0f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0a5d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0a5e, .a=0x59, .x=0xf9, .y=0x59, .sp=0x0f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0a5d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0a5d, .value=0xfd, .type=IO_READ},
        {.addr=0x0a5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0382) {
    const struct CPU_State initial_cpu = {.pc=0x099b, .a=0xef, .x=0xb5, .y=0xad, .sp=0x92, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x099b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x099c, .a=0xef, .x=0xb5, .y=0xef, .sp=0x92, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x099b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x099b, .value=0xfd, .type=IO_READ},
        {.addr=0x099c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0383) {
    const struct CPU_State initial_cpu = {.pc=0xd123, .a=0xb6, .x=0x5f, .y=0xa5, .sp=0xac, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd123, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd124, .a=0xb6, .x=0x5f, .y=0xb6, .sp=0xac, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd123, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd123, .value=0xfd, .type=IO_READ},
        {.addr=0xd124, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0384) {
    const struct CPU_State initial_cpu = {.pc=0x018d, .a=0x9e, .x=0x67, .y=0xc1, .sp=0xad, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x018e, .a=0x9e, .x=0x67, .y=0x9e, .sp=0xad, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x018d, .value=0xfd, .type=IO_READ},
        {.addr=0x018e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0385) {
    const struct CPU_State initial_cpu = {.pc=0xac71, .a=0x18, .x=0x05, .y=0xd9, .sp=0x49, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xac71, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xac72, .a=0x18, .x=0x05, .y=0x18, .sp=0x49, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xac71, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xac71, .value=0xfd, .type=IO_READ},
        {.addr=0xac72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0386) {
    const struct CPU_State initial_cpu = {.pc=0xd985, .a=0x14, .x=0x16, .y=0x97, .sp=0xdb, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xd985, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd986, .a=0x14, .x=0x16, .y=0x14, .sp=0xdb, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xd985, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd985, .value=0xfd, .type=IO_READ},
        {.addr=0xd986, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0387) {
    const struct CPU_State initial_cpu = {.pc=0x1e9b, .a=0xd2, .x=0x8b, .y=0xa2, .sp=0x09, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x1e9b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1e9c, .a=0xd2, .x=0x8b, .y=0xd2, .sp=0x09, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x1e9b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1e9b, .value=0xfd, .type=IO_READ},
        {.addr=0x1e9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0388) {
    const struct CPU_State initial_cpu = {.pc=0x5f0d, .a=0x75, .x=0xc8, .y=0x46, .sp=0x07, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x5f0d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5f0e, .a=0x75, .x=0xc8, .y=0x75, .sp=0x07, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5f0d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5f0d, .value=0xfd, .type=IO_READ},
        {.addr=0x5f0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0389) {
    const struct CPU_State initial_cpu = {.pc=0x108f, .a=0xa7, .x=0x5c, .y=0x25, .sp=0xf4, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x108f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1090, .a=0xa7, .x=0x5c, .y=0xa7, .sp=0xf4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x108f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x108f, .value=0xfd, .type=IO_READ},
        {.addr=0x1090, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_038A) {
    const struct CPU_State initial_cpu = {.pc=0xc5a2, .a=0x30, .x=0x5b, .y=0x6a, .sp=0x56, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc5a3, .a=0x30, .x=0x5b, .y=0x30, .sp=0x56, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xc5a2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc5a2, .value=0xfd, .type=IO_READ},
        {.addr=0xc5a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_038B) {
    const struct CPU_State initial_cpu = {.pc=0xea6b, .a=0x55, .x=0x8f, .y=0xa2, .sp=0x7d, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xea6b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xea6c, .a=0x55, .x=0x8f, .y=0x55, .sp=0x7d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xea6b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xea6b, .value=0xfd, .type=IO_READ},
        {.addr=0xea6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_038C) {
    const struct CPU_State initial_cpu = {.pc=0x2ed5, .a=0x07, .x=0x57, .y=0x87, .sp=0x59, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x2ed5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2ed6, .a=0x07, .x=0x57, .y=0x07, .sp=0x59, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2ed5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2ed5, .value=0xfd, .type=IO_READ},
        {.addr=0x2ed6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_038D) {
    const struct CPU_State initial_cpu = {.pc=0x340a, .a=0x0f, .x=0xd0, .y=0x41, .sp=0xc0, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x340a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x340b, .a=0x0f, .x=0xd0, .y=0x0f, .sp=0xc0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x340a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x340a, .value=0xfd, .type=IO_READ},
        {.addr=0x340b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_038E) {
    const struct CPU_State initial_cpu = {.pc=0x0e0f, .a=0x90, .x=0x58, .y=0x0e, .sp=0x76, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0e0f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0e10, .a=0x90, .x=0x58, .y=0x90, .sp=0x76, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0e0f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0e0f, .value=0xfd, .type=IO_READ},
        {.addr=0x0e10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_038F) {
    const struct CPU_State initial_cpu = {.pc=0xbe3d, .a=0xfa, .x=0x36, .y=0xfb, .sp=0x0f, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xbe3d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbe3e, .a=0xfa, .x=0x36, .y=0xfa, .sp=0x0f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xbe3d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbe3d, .value=0xfd, .type=IO_READ},
        {.addr=0xbe3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0390) {
    const struct CPU_State initial_cpu = {.pc=0xbbde, .a=0x41, .x=0x26, .y=0x2d, .sp=0xc1, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xbbde, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbbdf, .a=0x41, .x=0x26, .y=0x41, .sp=0xc1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xbbde, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbbde, .value=0xfd, .type=IO_READ},
        {.addr=0xbbdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0391) {
    const struct CPU_State initial_cpu = {.pc=0x8e53, .a=0xb7, .x=0xe7, .y=0x4f, .sp=0x7a, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x8e53, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8e54, .a=0xb7, .x=0xe7, .y=0xb7, .sp=0x7a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8e53, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8e53, .value=0xfd, .type=IO_READ},
        {.addr=0x8e54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0392) {
    const struct CPU_State initial_cpu = {.pc=0x4201, .a=0x7d, .x=0x76, .y=0xf2, .sp=0x38, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x4201, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4202, .a=0x7d, .x=0x76, .y=0x7d, .sp=0x38, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4201, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4201, .value=0xfd, .type=IO_READ},
        {.addr=0x4202, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0393) {
    const struct CPU_State initial_cpu = {.pc=0xbedd, .a=0x4c, .x=0x1e, .y=0xe2, .sp=0x77, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xbedd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbede, .a=0x4c, .x=0x1e, .y=0x4c, .sp=0x77, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xbedd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbedd, .value=0xfd, .type=IO_READ},
        {.addr=0xbede, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0394) {
    const struct CPU_State initial_cpu = {.pc=0xe217, .a=0x88, .x=0xef, .y=0x9c, .sp=0xc7, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe217, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe218, .a=0x88, .x=0xef, .y=0x88, .sp=0xc7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe217, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe217, .value=0xfd, .type=IO_READ},
        {.addr=0xe218, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0395) {
    const struct CPU_State initial_cpu = {.pc=0xabc0, .a=0xc0, .x=0xb7, .y=0x28, .sp=0x5e, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xabc0, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xabc1, .a=0xc0, .x=0xb7, .y=0xc0, .sp=0x5e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xabc0, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xabc0, .value=0xfd, .type=IO_READ},
        {.addr=0xabc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0396) {
    const struct CPU_State initial_cpu = {.pc=0x1d8c, .a=0xe9, .x=0x7e, .y=0xcf, .sp=0x6f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x1d8c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1d8d, .a=0xe9, .x=0x7e, .y=0xe9, .sp=0x6f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x1d8c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1d8c, .value=0xfd, .type=IO_READ},
        {.addr=0x1d8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0397) {
    const struct CPU_State initial_cpu = {.pc=0x22dd, .a=0x80, .x=0xbb, .y=0x0e, .sp=0x48, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x22dd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x22de, .a=0x80, .x=0xbb, .y=0x80, .sp=0x48, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x22dd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x22dd, .value=0xfd, .type=IO_READ},
        {.addr=0x22de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0398) {
    const struct CPU_State initial_cpu = {.pc=0x2971, .a=0x72, .x=0x18, .y=0x84, .sp=0x38, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x2971, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2972, .a=0x72, .x=0x18, .y=0x72, .sp=0x38, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2971, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2971, .value=0xfd, .type=IO_READ},
        {.addr=0x2972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_0399) {
    const struct CPU_State initial_cpu = {.pc=0xa038, .a=0xdf, .x=0xd7, .y=0xe0, .sp=0xf6, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xa038, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa039, .a=0xdf, .x=0xd7, .y=0xdf, .sp=0xf6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa038, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa038, .value=0xfd, .type=IO_READ},
        {.addr=0xa039, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_039A) {
    const struct CPU_State initial_cpu = {.pc=0xa8d7, .a=0x40, .x=0xb6, .y=0xc2, .sp=0x6e, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa8d8, .a=0x40, .x=0xb6, .y=0x40, .sp=0x6e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa8d7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa8d7, .value=0xfd, .type=IO_READ},
        {.addr=0xa8d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_039B) {
    const struct CPU_State initial_cpu = {.pc=0xab45, .a=0x9a, .x=0x71, .y=0xd5, .sp=0x5a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xab45, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xab46, .a=0x9a, .x=0x71, .y=0x9a, .sp=0x5a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xab45, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xab45, .value=0xfd, .type=IO_READ},
        {.addr=0xab46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_039C) {
    const struct CPU_State initial_cpu = {.pc=0x4f40, .a=0x5c, .x=0xa1, .y=0xaf, .sp=0xa1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x4f40, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4f41, .a=0x5c, .x=0xa1, .y=0x5c, .sp=0xa1, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4f40, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4f40, .value=0xfd, .type=IO_READ},
        {.addr=0x4f41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_039D) {
    const struct CPU_State initial_cpu = {.pc=0xb33c, .a=0xc1, .x=0x6b, .y=0x0b, .sp=0x23, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xb33c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb33d, .a=0xc1, .x=0x6b, .y=0xc1, .sp=0x23, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb33c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb33c, .value=0xfd, .type=IO_READ},
        {.addr=0xb33d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_039E) {
    const struct CPU_State initial_cpu = {.pc=0x07ea, .a=0xe7, .x=0xa6, .y=0x66, .sp=0xd7, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x07ea, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x07eb, .a=0xe7, .x=0xa6, .y=0xe7, .sp=0xd7, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x07ea, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x07ea, .value=0xfd, .type=IO_READ},
        {.addr=0x07eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_039F) {
    const struct CPU_State initial_cpu = {.pc=0x8c9a, .a=0x8e, .x=0x16, .y=0xf5, .sp=0x54, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x8c9a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8c9b, .a=0x8e, .x=0x16, .y=0x8e, .sp=0x54, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8c9a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8c9a, .value=0xfd, .type=IO_READ},
        {.addr=0x8c9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xac31, .a=0x73, .x=0xb0, .y=0xd8, .sp=0x3e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xac31, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xac32, .a=0x73, .x=0xb0, .y=0x73, .sp=0x3e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xac31, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xac31, .value=0xfd, .type=IO_READ},
        {.addr=0xac32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x1ffe, .a=0x83, .x=0x97, .y=0x70, .sp=0x54, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1ffe, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1fff, .a=0x83, .x=0x97, .y=0x83, .sp=0x54, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1ffe, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1ffe, .value=0xfd, .type=IO_READ},
        {.addr=0x1fff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x9a00, .a=0xad, .x=0xe5, .y=0xc3, .sp=0x78, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x9a00, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9a01, .a=0xad, .x=0xe5, .y=0xad, .sp=0x78, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x9a00, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9a00, .value=0xfd, .type=IO_READ},
        {.addr=0x9a01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xf6f3, .a=0x61, .x=0x05, .y=0x02, .sp=0xca, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xf6f3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf6f4, .a=0x61, .x=0x05, .y=0x61, .sp=0xca, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xf6f3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf6f3, .value=0xfd, .type=IO_READ},
        {.addr=0xf6f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xb355, .a=0xd9, .x=0x18, .y=0xe2, .sp=0xd6, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb355, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb356, .a=0xd9, .x=0x18, .y=0xd9, .sp=0xd6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb355, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb355, .value=0xfd, .type=IO_READ},
        {.addr=0xb356, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x0f6d, .a=0x13, .x=0x49, .y=0xfc, .sp=0xc9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0f6d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0f6e, .a=0x13, .x=0x49, .y=0x13, .sp=0xc9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0f6d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0f6d, .value=0xfd, .type=IO_READ},
        {.addr=0x0f6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x1995, .a=0x08, .x=0x1b, .y=0x6b, .sp=0xdf, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x1995, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1996, .a=0x08, .x=0x1b, .y=0x08, .sp=0xdf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1995, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1995, .value=0xfd, .type=IO_READ},
        {.addr=0x1996, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x8875, .a=0x17, .x=0x27, .y=0x7c, .sp=0x98, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x8875, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8876, .a=0x17, .x=0x27, .y=0x17, .sp=0x98, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8875, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8875, .value=0xfd, .type=IO_READ},
        {.addr=0x8876, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x636c, .a=0xcf, .x=0x3f, .y=0x52, .sp=0xea, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x636c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x636d, .a=0xcf, .x=0x3f, .y=0xcf, .sp=0xea, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x636c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x636c, .value=0xfd, .type=IO_READ},
        {.addr=0x636d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x3977, .a=0xba, .x=0xf3, .y=0xf8, .sp=0x80, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x3977, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3978, .a=0xba, .x=0xf3, .y=0xba, .sp=0x80, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3977, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3977, .value=0xfd, .type=IO_READ},
        {.addr=0x3978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xdac8, .a=0xb4, .x=0x6f, .y=0x4a, .sp=0xde, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xdac8, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdac9, .a=0xb4, .x=0x6f, .y=0xb4, .sp=0xde, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xdac8, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdac8, .value=0xfd, .type=IO_READ},
        {.addr=0xdac9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xe1bb, .a=0xf5, .x=0xb3, .y=0xb2, .sp=0x0a, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe1bb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe1bc, .a=0xf5, .x=0xb3, .y=0xf5, .sp=0x0a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe1bb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe1bb, .value=0xfd, .type=IO_READ},
        {.addr=0xe1bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x0780, .a=0x16, .x=0x1e, .y=0x25, .sp=0xf4, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0780, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0781, .a=0x16, .x=0x1e, .y=0x16, .sp=0xf4, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0780, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0780, .value=0xfd, .type=IO_READ},
        {.addr=0x0781, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xe509, .a=0xc3, .x=0x6f, .y=0xf5, .sp=0xae, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xe509, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe50a, .a=0xc3, .x=0x6f, .y=0xc3, .sp=0xae, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe509, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe509, .value=0xfd, .type=IO_READ},
        {.addr=0xe50a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x09ce, .a=0xb2, .x=0x4a, .y=0x38, .sp=0x8a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x09ce, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x09cf, .a=0xb2, .x=0x4a, .y=0xb2, .sp=0x8a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x09ce, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x09ce, .value=0xfd, .type=IO_READ},
        {.addr=0x09cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x73bb, .a=0x4a, .x=0x1e, .y=0x9b, .sp=0x63, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x73bb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x73bc, .a=0x4a, .x=0x1e, .y=0x4a, .sp=0x63, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x73bb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x73bb, .value=0xfd, .type=IO_READ},
        {.addr=0x73bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xc7fc, .a=0xa7, .x=0x4a, .y=0x1b, .sp=0x4a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc7fc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc7fd, .a=0xa7, .x=0x4a, .y=0xa7, .sp=0x4a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc7fc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc7fc, .value=0xfd, .type=IO_READ},
        {.addr=0xc7fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x02fc, .a=0x73, .x=0x67, .y=0xf4, .sp=0x96, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x02fc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x02fd, .a=0x73, .x=0x67, .y=0x73, .sp=0x96, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x02fc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x02fc, .value=0xfd, .type=IO_READ},
        {.addr=0x02fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x39a3, .a=0x58, .x=0x18, .y=0x17, .sp=0xbe, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x39a3, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x39a4, .a=0x58, .x=0x18, .y=0x58, .sp=0xbe, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x39a3, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x39a3, .value=0xfd, .type=IO_READ},
        {.addr=0x39a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xf499, .a=0x5e, .x=0xd7, .y=0x5a, .sp=0x61, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf499, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf49a, .a=0x5e, .x=0xd7, .y=0x5e, .sp=0x61, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf499, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf499, .value=0xfd, .type=IO_READ},
        {.addr=0xf49a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x0884, .a=0x14, .x=0x7b, .y=0x88, .sp=0x22, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0884, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0885, .a=0x14, .x=0x7b, .y=0x14, .sp=0x22, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0884, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0884, .value=0xfd, .type=IO_READ},
        {.addr=0x0885, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xa33d, .a=0xc4, .x=0x3e, .y=0xc8, .sp=0xf4, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xa33d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa33e, .a=0xc4, .x=0x3e, .y=0xc4, .sp=0xf4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xa33d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa33d, .value=0xfd, .type=IO_READ},
        {.addr=0xa33e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x9a20, .a=0x36, .x=0xd5, .y=0xd5, .sp=0x77, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x9a20, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9a21, .a=0x36, .x=0xd5, .y=0x36, .sp=0x77, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x9a20, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9a20, .value=0xfd, .type=IO_READ},
        {.addr=0x9a21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xa1af, .a=0x34, .x=0x78, .y=0xec, .sp=0xbe, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xa1af, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa1b0, .a=0x34, .x=0x78, .y=0x34, .sp=0xbe, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xa1af, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa1af, .value=0xfd, .type=IO_READ},
        {.addr=0xa1b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x188a, .a=0xf1, .x=0xa8, .y=0xdd, .sp=0x24, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x188a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x188b, .a=0xf1, .x=0xa8, .y=0xf1, .sp=0x24, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x188a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x188a, .value=0xfd, .type=IO_READ},
        {.addr=0x188b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x6fbb, .a=0x1b, .x=0x6a, .y=0xc5, .sp=0x9a, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x6fbb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6fbc, .a=0x1b, .x=0x6a, .y=0x1b, .sp=0x9a, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6fbb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6fbb, .value=0xfd, .type=IO_READ},
        {.addr=0x6fbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x9ab6, .a=0xb4, .x=0x88, .y=0x01, .sp=0x04, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x9ab6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9ab7, .a=0xb4, .x=0x88, .y=0xb4, .sp=0x04, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x9ab6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x9ab6, .value=0xfd, .type=IO_READ},
        {.addr=0x9ab7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x283e, .a=0x82, .x=0xb7, .y=0x32, .sp=0x49, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x283e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x283f, .a=0x82, .x=0xb7, .y=0x82, .sp=0x49, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x283e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x283e, .value=0xfd, .type=IO_READ},
        {.addr=0x283f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xdbf5, .a=0xed, .x=0x83, .y=0xa5, .sp=0x41, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdbf6, .a=0xed, .x=0x83, .y=0xed, .sp=0x41, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xdbf5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdbf5, .value=0xfd, .type=IO_READ},
        {.addr=0xdbf6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x8937, .a=0x90, .x=0x03, .y=0x25, .sp=0x65, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8937, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8938, .a=0x90, .x=0x03, .y=0x90, .sp=0x65, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8937, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8937, .value=0xfd, .type=IO_READ},
        {.addr=0x8938, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x5ee6, .a=0x75, .x=0x40, .y=0xfa, .sp=0x8a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5ee7, .a=0x75, .x=0x40, .y=0x75, .sp=0x8a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5ee6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5ee6, .value=0xfd, .type=IO_READ},
        {.addr=0x5ee7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x6194, .a=0xd5, .x=0x30, .y=0xc2, .sp=0xd5, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x6194, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6195, .a=0xd5, .x=0x30, .y=0xd5, .sp=0xd5, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x6194, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6194, .value=0xfd, .type=IO_READ},
        {.addr=0x6195, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x7cdc, .a=0x99, .x=0xc6, .y=0xae, .sp=0x2d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x7cdc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x7cdd, .a=0x99, .x=0xc6, .y=0x99, .sp=0x2d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7cdc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x7cdc, .value=0xfd, .type=IO_READ},
        {.addr=0x7cdd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xb53c, .a=0xb6, .x=0xb3, .y=0x04, .sp=0x1c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb53c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xb53d, .a=0xb6, .x=0xb3, .y=0xb6, .sp=0x1c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xb53c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xb53c, .value=0xfd, .type=IO_READ},
        {.addr=0xb53d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x82d5, .a=0x08, .x=0xe4, .y=0x6b, .sp=0x8f, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x82d5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x82d6, .a=0x08, .x=0xe4, .y=0x08, .sp=0x8f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x82d5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x82d5, .value=0xfd, .type=IO_READ},
        {.addr=0x82d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x65bd, .a=0x2d, .x=0xca, .y=0x4a, .sp=0x4c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x65bd, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x65be, .a=0x2d, .x=0xca, .y=0x2d, .sp=0x4c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x65bd, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x65bd, .value=0xfd, .type=IO_READ},
        {.addr=0x65be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xa862, .a=0x3b, .x=0x28, .y=0xf4, .sp=0x95, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa862, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa863, .a=0x3b, .x=0x28, .y=0x3b, .sp=0x95, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xa862, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa862, .value=0xfd, .type=IO_READ},
        {.addr=0xa863, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x142c, .a=0xf0, .x=0x18, .y=0xb0, .sp=0x96, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x142c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x142d, .a=0xf0, .x=0x18, .y=0xf0, .sp=0x96, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x142c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x142c, .value=0xfd, .type=IO_READ},
        {.addr=0x142d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xf6f7, .a=0x0e, .x=0x5a, .y=0xc1, .sp=0x64, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xf6f7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf6f8, .a=0x0e, .x=0x5a, .y=0x0e, .sp=0x64, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xf6f7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf6f7, .value=0xfd, .type=IO_READ},
        {.addr=0xf6f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x996f, .a=0x25, .x=0xf6, .y=0xba, .sp=0xe5, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x996f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x9970, .a=0x25, .x=0xf6, .y=0x25, .sp=0xe5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x996f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x996f, .value=0xfd, .type=IO_READ},
        {.addr=0x9970, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xf136, .a=0xe0, .x=0xce, .y=0x0d, .sp=0xe1, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xf136, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf137, .a=0xe0, .x=0xce, .y=0xe0, .sp=0xe1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf136, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf136, .value=0xfd, .type=IO_READ},
        {.addr=0xf137, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xa3e7, .a=0x76, .x=0xff, .y=0x6e, .sp=0x99, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xa3e7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa3e8, .a=0x76, .x=0xff, .y=0x76, .sp=0x99, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa3e7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa3e7, .value=0xfd, .type=IO_READ},
        {.addr=0xa3e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x0bcb, .a=0x36, .x=0xc3, .y=0x55, .sp=0x93, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0bcb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0bcc, .a=0x36, .x=0xc3, .y=0x36, .sp=0x93, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0bcb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0bcb, .value=0xfd, .type=IO_READ},
        {.addr=0x0bcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x3708, .a=0xc4, .x=0xc7, .y=0x41, .sp=0x62, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x3708, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3709, .a=0xc4, .x=0xc7, .y=0xc4, .sp=0x62, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x3708, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3708, .value=0xfd, .type=IO_READ},
        {.addr=0x3709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x91d7, .a=0x24, .x=0x01, .y=0x8e, .sp=0xa4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x91d7, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x91d8, .a=0x24, .x=0x01, .y=0x24, .sp=0xa4, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x91d7, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x91d7, .value=0xfd, .type=IO_READ},
        {.addr=0x91d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x3ea6, .a=0xda, .x=0x1c, .y=0x26, .sp=0x56, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x3ea6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3ea7, .a=0xda, .x=0x1c, .y=0xda, .sp=0x56, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3ea6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3ea6, .value=0xfd, .type=IO_READ},
        {.addr=0x3ea7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x0251, .a=0x75, .x=0xdb, .y=0x61, .sp=0x74, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0251, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0252, .a=0x75, .x=0xdb, .y=0x75, .sp=0x74, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0251, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0251, .value=0xfd, .type=IO_READ},
        {.addr=0x0252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x905a, .a=0xda, .x=0xf5, .y=0x0a, .sp=0x13, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x905a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x905b, .a=0xda, .x=0xf5, .y=0xda, .sp=0x13, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x905a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x905a, .value=0xfd, .type=IO_READ},
        {.addr=0x905b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x015f, .a=0xf4, .x=0x27, .y=0x29, .sp=0xd8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0160, .a=0xf4, .x=0x27, .y=0xf4, .sp=0xd8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x015f, .value=0xfd, .type=IO_READ},
        {.addr=0x0160, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x1e60, .a=0x88, .x=0x5a, .y=0x65, .sp=0x49, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x1e60, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1e61, .a=0x88, .x=0x5a, .y=0x88, .sp=0x49, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1e60, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1e60, .value=0xfd, .type=IO_READ},
        {.addr=0x1e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x67c9, .a=0x28, .x=0x75, .y=0x4e, .sp=0xaf, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x67c9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x67ca, .a=0x28, .x=0x75, .y=0x28, .sp=0xaf, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x67c9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x67c9, .value=0xfd, .type=IO_READ},
        {.addr=0x67ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x4d73, .a=0xb2, .x=0x79, .y=0x3b, .sp=0xb1, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x4d73, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4d74, .a=0xb2, .x=0x79, .y=0xb2, .sp=0xb1, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4d73, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4d73, .value=0xfd, .type=IO_READ},
        {.addr=0x4d74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xae09, .a=0x2d, .x=0xae, .y=0x7a, .sp=0x7d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xae09, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xae0a, .a=0x2d, .x=0xae, .y=0x2d, .sp=0x7d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xae09, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xae09, .value=0xfd, .type=IO_READ},
        {.addr=0xae0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x856e, .a=0x05, .x=0x11, .y=0x3f, .sp=0xa1, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x856e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x856f, .a=0x05, .x=0x11, .y=0x05, .sp=0xa1, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x856e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x856e, .value=0xfd, .type=IO_READ},
        {.addr=0x856f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x6fbc, .a=0x74, .x=0x62, .y=0xf9, .sp=0x6a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6fbc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6fbd, .a=0x74, .x=0x62, .y=0x74, .sp=0x6a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6fbc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6fbc, .value=0xfd, .type=IO_READ},
        {.addr=0x6fbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xe550, .a=0xe1, .x=0x12, .y=0x5d, .sp=0xf6, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xe550, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe551, .a=0xe1, .x=0x12, .y=0xe1, .sp=0xf6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe550, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe550, .value=0xfd, .type=IO_READ},
        {.addr=0xe551, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x2a32, .a=0x97, .x=0x77, .y=0x7c, .sp=0xfb, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x2a32, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2a33, .a=0x97, .x=0x77, .y=0x97, .sp=0xfb, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2a32, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2a32, .value=0xfd, .type=IO_READ},
        {.addr=0x2a33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xd8a5, .a=0xbc, .x=0x3c, .y=0xe5, .sp=0x4c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xd8a5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd8a6, .a=0xbc, .x=0x3c, .y=0xbc, .sp=0x4c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd8a5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd8a5, .value=0xfd, .type=IO_READ},
        {.addr=0xd8a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x249a, .a=0xae, .x=0x1f, .y=0x34, .sp=0x00, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x249a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x249b, .a=0xae, .x=0x1f, .y=0xae, .sp=0x00, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x249a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x249a, .value=0xfd, .type=IO_READ},
        {.addr=0x249b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xabb6, .a=0xda, .x=0x43, .y=0x54, .sp=0x36, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xabb6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xabb7, .a=0xda, .x=0x43, .y=0xda, .sp=0x36, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xabb6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xabb6, .value=0xfd, .type=IO_READ},
        {.addr=0xabb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xc0f5, .a=0x12, .x=0x4f, .y=0xdc, .sp=0x4d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f5, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc0f6, .a=0x12, .x=0x4f, .y=0x12, .sp=0x4d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xc0f5, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc0f5, .value=0xfd, .type=IO_READ},
        {.addr=0xc0f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x1903, .a=0xd2, .x=0xf8, .y=0x17, .sp=0xf0, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x1903, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x1904, .a=0xd2, .x=0xf8, .y=0xd2, .sp=0xf0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1903, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x1903, .value=0xfd, .type=IO_READ},
        {.addr=0x1904, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xe51c, .a=0xa2, .x=0xfa, .y=0x40, .sp=0x65, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xe51c, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe51d, .a=0xa2, .x=0xfa, .y=0xa2, .sp=0x65, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xe51c, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe51c, .value=0xfd, .type=IO_READ},
        {.addr=0xe51d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x63fb, .a=0x28, .x=0x08, .y=0x62, .sp=0xb1, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x63fb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x63fc, .a=0x28, .x=0x08, .y=0x28, .sp=0xb1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x63fb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x63fb, .value=0xfd, .type=IO_READ},
        {.addr=0x63fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x4d87, .a=0x71, .x=0xbc, .y=0xf8, .sp=0x21, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x4d87, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x4d88, .a=0x71, .x=0xbc, .y=0x71, .sp=0x21, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4d87, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x4d87, .value=0xfd, .type=IO_READ},
        {.addr=0x4d88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xe2d4, .a=0xf1, .x=0xa5, .y=0x76, .sp=0x5b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe2d5, .a=0xf1, .x=0xa5, .y=0xf1, .sp=0x5b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe2d4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe2d4, .value=0xfd, .type=IO_READ},
        {.addr=0xe2d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x130a, .a=0x20, .x=0xac, .y=0x4f, .sp=0x35, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x130a, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x130b, .a=0x20, .x=0xac, .y=0x20, .sp=0x35, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x130a, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x130a, .value=0xfd, .type=IO_READ},
        {.addr=0x130b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x0cbe, .a=0xe9, .x=0x53, .y=0x00, .sp=0x1a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0cbe, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0cbf, .a=0xe9, .x=0x53, .y=0xe9, .sp=0x1a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0cbe, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0cbe, .value=0xfd, .type=IO_READ},
        {.addr=0x0cbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x906e, .a=0xc7, .x=0x87, .y=0xf0, .sp=0xf0, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x906e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x906f, .a=0xc7, .x=0x87, .y=0xc7, .sp=0xf0, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x906e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x906e, .value=0xfd, .type=IO_READ},
        {.addr=0x906f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xc5b9, .a=0xe8, .x=0x3c, .y=0xc9, .sp=0x1b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xc5b9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xc5ba, .a=0xe8, .x=0x3c, .y=0xe8, .sp=0x1b, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc5b9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xc5b9, .value=0xfd, .type=IO_READ},
        {.addr=0xc5ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x10cc, .a=0x3a, .x=0xba, .y=0x76, .sp=0x37, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x10cc, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x10cd, .a=0x3a, .x=0xba, .y=0x3a, .sp=0x37, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x10cc, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x10cc, .value=0xfd, .type=IO_READ},
        {.addr=0x10cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_FD, _FD_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xa62f, .a=0x10, .x=0x9f, .y=0x54, .sp=0x42, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xa62f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa630, .a=0x10, .x=0x9f, .y=0x10, .sp=0x42, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xa62f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa62f, .value=0xfd, .type=IO_READ},
        {.addr=0xa630, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("FD 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
